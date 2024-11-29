// Fill out your copyright notice in the Description page of Project Settings.


#include "SessionsSubsystem.h"
#include "Online.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "OnlineSubsystemUtils.h"
#include "Online/OnlineSessionNames.h"


USessionsSubsystem::USessionsSubsystem():
	CreateSessionCompleteDelegate(
		FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCreateSessionComplete)),
	FindSessionsCompleteDelegate(
		FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnFindSessionsComplete)),
	JoinSessionCompleteDelegate(FOnJoinSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnJoinSessionComplete)),
	DestroySessionCompleteDelegate(
		FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnDestroySessionComplete)),
	StartSessionCompleteDelegate(
		FOnStartSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnStartSessionComplete)),
	LastNumPublicConnections(0)
{
}

void USessionsSubsystem::CreateSession(int32 NumPublicConnections, FString MatchType,
                                       const FString& SearchKeywords)
{
	if (!IsValidSessionInterface())
	{
		return;
	}

	auto ExistingSession = SessionInterface->GetNamedSession(NAME_GameSession);
	if (ExistingSession != nullptr)
	{
		bCreateSessionOnDestroy = true;
		LastNumPublicConnections = NumPublicConnections;
		LastMatchType = MatchType;
		LastSearchKeywords = SearchKeywords;

		DestroySession();
	}

	// Store the delegate in a FDelegateHandle so we can later remove it from the delegate list
	CreateSessionCompleteDelegateHandle = SessionInterface->AddOnCreateSessionCompleteDelegate_Handle(
		CreateSessionCompleteDelegate);

	LastSessionSettings = MakeShareable(new FOnlineSessionSettings());
	LastSessionSettings->bIsLANMatch = Online::GetSubsystem(GetWorld())->GetSubsystemName() == "NULL" ? true : false;
	LastSessionSettings->NumPublicConnections = NumPublicConnections;
	LastSessionSettings->bAllowJoinInProgress = true;
	LastSessionSettings->bAllowJoinViaPresence = true;
	LastSessionSettings->bShouldAdvertise = true;
	LastSessionSettings->bUsesPresence = true;
	LastSessionSettings->bUseLobbiesIfAvailable = true;
	LastSessionSettings->Set(FName("MatchType"), MatchType, EOnlineDataAdvertisementType::ViaOnlineServiceAndPing);
	LastSessionSettings->Set(SEARCH_LOBBIES, true, EOnlineDataAdvertisementType::ViaOnlineService);
	// Identify Game Session by Public Steam PID 480
	// default to use uuid
	LastSessionSettings->Set(SEARCH_KEYWORDS, SearchKeywords,
	                         EOnlineDataAdvertisementType::ViaOnlineService);
	LastSessionSettings->BuildUniqueId = 1;

	// Make sure Settings below are matched
	LastSessionSettings->bUsesPresence = true;
	LastSessionSettings->bUseLobbiesIfAvailable = true;

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!SessionInterface->CreateSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession,
	                                     *LastSessionSettings))
	{
		SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegateHandle);

		// Broadcast our own custom delegate
		MulticastOnCreateSessionComplete.Broadcast(false);
	}
}

void USessionsSubsystem::FindSessions(int32 MaxSearchResults, const FString& SearchKeywords)
{
	if (!IsValidSessionInterface())
	{
		return;
	}

	FindSessionsCompleteDelegateHandle = SessionInterface->AddOnFindSessionsCompleteDelegate_Handle(
		FindSessionsCompleteDelegate);

	LastSessionSearch = MakeShareable(new FOnlineSessionSearch());
	LastSessionSearch->MaxSearchResults = MaxSearchResults;
	LastSessionSearch->bIsLanQuery = Online::GetSubsystem(GetWorld())->GetSubsystemName() == "NULL" ? true : false;
	LastSessionSearch->QuerySettings.Set(SEARCH_LOBBIES, true, EOnlineComparisonOp::Equals);
	// Identify Game Session by Public Steam PID 480
	LastSessionSearch->QuerySettings.Set(SEARCH_KEYWORDS, SearchKeywords, EOnlineComparisonOp::Equals);


	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!SessionInterface->FindSessions(*LocalPlayer->GetPreferredUniqueNetId(), LastSessionSearch.ToSharedRef()))
	{
		SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);

		MulticastOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
	}
}

void USessionsSubsystem::JoinSession(FOnlineSessionSearchResult& SessionResult)
{
	if (!SessionInterface.IsValid())
	{
		MulticastOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
		return;
	}

	JoinSessionCompleteDelegateHandle = SessionInterface->AddOnJoinSessionCompleteDelegate_Handle(
		JoinSessionCompleteDelegate);

	// Fix JoinSession->UnknownError
	SessionResult.Session.SessionSettings.bUsesPresence = true;
	SessionResult.Session.SessionSettings.bUseLobbiesIfAvailable = true;

	const ULocalPlayer* LocalPlayer = GetWorld()->GetFirstLocalPlayerFromController();
	if (!SessionInterface->JoinSession(*LocalPlayer->GetPreferredUniqueNetId(), NAME_GameSession, SessionResult))
	{
		SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);

		MulticastOnJoinSessionComplete.Broadcast(EOnJoinSessionCompleteResult::UnknownError);
	}
}

void USessionsSubsystem::DestroySession()
{
	if (!SessionInterface.IsValid())
	{
		MulticastOnDestroySessionComplete.Broadcast(false);
		return;
	}

	DestroySessionCompleteDelegateHandle = SessionInterface->AddOnDestroySessionCompleteDelegate_Handle(
		DestroySessionCompleteDelegate);

	if (!SessionInterface->DestroySession(NAME_GameSession))
	{
		SessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegateHandle);
		MulticastOnDestroySessionComplete.Broadcast(false);
	}
}

void USessionsSubsystem::StartSession()
{
}

bool USessionsSubsystem::IsValidSessionInterface()
{
	if (!SessionInterface)
	{
		IOnlineSubsystem* Subsystem = Online::GetSubsystem(GetWorld());
		if (Subsystem)
		{
			SessionInterface = Subsystem->GetSessionInterface();
		}
	}
	return SessionInterface.IsValid();
}

void USessionsSubsystem::OnCreateSessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (SessionInterface)
	{
		SessionInterface->ClearOnCreateSessionCompleteDelegate_Handle(CreateSessionCompleteDelegateHandle);
	}

	MulticastOnCreateSessionComplete.Broadcast(bWasSuccessful);
}

void USessionsSubsystem::OnFindSessionsComplete(bool bWasSuccessful)
{
	if (SessionInterface)
	{
		SessionInterface->ClearOnFindSessionsCompleteDelegate_Handle(FindSessionsCompleteDelegateHandle);
	}

	if (LastSessionSearch->SearchResults.Num() <= 0)
	{
		MulticastOnFindSessionsComplete.Broadcast(TArray<FOnlineSessionSearchResult>(), false);
		return;
	}

	MulticastOnFindSessionsComplete.Broadcast(LastSessionSearch->SearchResults, bWasSuccessful);
}

void USessionsSubsystem::OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result)
{
	if (SessionInterface)
	{
		SessionInterface->ClearOnJoinSessionCompleteDelegate_Handle(JoinSessionCompleteDelegateHandle);
	}

	MulticastOnJoinSessionComplete.Broadcast(Result);
}

void USessionsSubsystem::OnDestroySessionComplete(FName SessionName, bool bWasSuccessful)
{
	if (SessionInterface)
	{
		SessionInterface->ClearOnDestroySessionCompleteDelegate_Handle(DestroySessionCompleteDelegateHandle);
	}
	if (bWasSuccessful && bCreateSessionOnDestroy)
	{
		bCreateSessionOnDestroy = false;
		CreateSession(LastNumPublicConnections, LastMatchType, LastSearchKeywords);
	}
	MulticastOnDestroySessionComplete.Broadcast(bWasSuccessful);
}

void USessionsSubsystem::OnStartSessionComplete(FName SessionName, bool bWasSuccessful)
{
}
