// Fill out your copyright notice in the Description page of Project Settings.


#include "SessionsMenu.h"
#include "Engine/Engine.h"
#include "Components/Button.h"
#include "SessionsSubsystem.h"
#include "OnlineSessionSettings.h"
#include "OnlineSubsystem.h"
#include "OnlineSubsystemUtils.h"

void USessionsMenu::MenuSetup(int32 NumberOfPublicConnections, FString TypeOfMatch, FString LobbyPath,
                              FString SessionSearchKeywords)
{
	PathToLobby = FString::Printf(TEXT("%s?listen"), *LobbyPath);
	NumPublicConnections = NumberOfPublicConnections;
	MatchType = TypeOfMatch;
	SearchKeywords = SessionSearchKeywords;
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	SetIsFocusable(true);

	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeUIOnly InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}

	UGameInstance* GameInstance = GetGameInstance();
	if (GameInstance)
	{
		SessionsSubsystem = GameInstance->GetSubsystem<USessionsSubsystem>();
	}

	if (SessionsSubsystem)
	{
		SessionsSubsystem->MulticastOnCreateSessionComplete.AddDynamic(this, &ThisClass::OnCreateSession);
		SessionsSubsystem->MulticastOnFindSessionsComplete.AddUObject(this, &ThisClass::OnFindSessions);
		SessionsSubsystem->MulticastOnJoinSessionComplete.AddUObject(this, &ThisClass::OnJoinSession);
		SessionsSubsystem->MulticastOnDestroySessionComplete.
		                   AddDynamic(this, &ThisClass::OnDestroySession);
		SessionsSubsystem->MulticastOnStartSessionComplete.AddDynamic(this, &ThisClass::OnStartSession);
	}
}

bool USessionsMenu::Initialize()
{
	if (!Super::Initialize())
	{
		return false;
	}

	if (HostButton)
	{
		HostButton->OnClicked.AddDynamic(this, &ThisClass::HostButtonClicked);
	}
	if (JoinButton)
	{
		JoinButton->OnClicked.AddDynamic(this, &ThisClass::JoinButtonClicked);
	}

	return true;
}

void USessionsMenu::NativeDestruct()
{
	MenuTearDown();
	Super::NativeDestruct();
}

void USessionsMenu::OnCreateSession(bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		UWorld* World = GetWorld();
		if (World)
		{
			World->ServerTravel(PathToLobby);
		}
	}
	else
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				15.f,
				FColor::Red,
				FString(TEXT("Failed to create session!"))
			);
		}
		HostButton->SetIsEnabled(true);
	}
}

void USessionsMenu::OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful)
{
	if (SessionsSubsystem == nullptr)
	{
		return;
	}

	for (auto Result : SessionResults)
	{
		FString SettingsValue;
		Result.Session.SessionSettings.Get(FName("MatchType"), SettingsValue);
		if (SettingsValue == MatchType)
		{
			SessionsSubsystem->JoinSession(Result);
			return;
		}
	}
	if (!bWasSuccessful || SessionResults.Num() == 0)
	{
		JoinButton->SetIsEnabled(true);
	}
}

void USessionsMenu::OnJoinSession(EOnJoinSessionCompleteResult::Type Result)
{
	IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
	if (Subsystem)
	{
		IOnlineSessionPtr SessionInterface = Subsystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			FString Address;
			SessionInterface->GetResolvedConnectString(NAME_GameSession, Address);

			APlayerController* PlayerController = GetGameInstance()->GetFirstLocalPlayerController();
			if (PlayerController)
			{
				PlayerController->ClientTravel(Address, ETravelType::TRAVEL_Absolute);
			}
		}
	}
}

void USessionsMenu::OnDestroySession(bool bWasSuccessful)
{
}

void USessionsMenu::OnStartSession(bool bWasSuccessful)
{
}

void USessionsMenu::HostButtonClicked()
{
	HostButton->SetIsEnabled(false);
	if (SessionsSubsystem)
	{
		SessionsSubsystem->CreateSession(NumPublicConnections, MatchType, SearchKeywords);
	}
}

void USessionsMenu::JoinButtonClicked()
{
	JoinButton->SetIsEnabled(false);
	if (SessionsSubsystem)
	{
		SessionsSubsystem->FindSessions(10000, SearchKeywords);
	}
}

void USessionsMenu::MenuTearDown()
{
	RemoveFromParent();
	UWorld* World = GetWorld();
	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();
		if (PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}
