// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SessionsMenu.generated.h"

/**
 * 
 */
UCLASS()
class SESSIONSMANAGEMENT_API USessionsMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Menu Sessions")
	void MenuSetup(int32 NumberOfPublicConnections = 4, FString TypeOfMatch = FString(TEXT("FreeForAll")),
	               FString LobbyPath = FString(TEXT("/Game/ThirdPersonCPP/Maps/Lobby")),
	               FString SessionSearchKeywords = FString(TEXT("12f7f034-32d0-4276-83a7-4bae6100711b")));

protected:
	virtual bool Initialize() override;
	virtual void NativeDestruct() override;

	//
	// Callbacks for the custom delegates on the MultiplayerSessionsSubsystem
	//
	UFUNCTION()
	void OnCreateSession(bool bWasSuccessful);
	void OnFindSessions(const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
	void OnJoinSession(EOnJoinSessionCompleteResult::Type Result);
	UFUNCTION()
	void OnDestroySession(bool bWasSuccessful);
	UFUNCTION()
	void OnStartSession(bool bWasSuccessful);

private:
	UPROPERTY(meta = (BindWidget))
	class UButton* HostButton;

	UPROPERTY(meta = (BindWidget))
	UButton* JoinButton;

	UFUNCTION()
	void HostButtonClicked();

	UFUNCTION()
	void JoinButtonClicked();

	void MenuTearDown();

	// The subsystem designed to handle all online session functionality
	class USessionsSubsystem* SessionsSubsystem;

	int32 NumPublicConnections{4};
	FString MatchType{TEXT("FreeForAll")};
	FString PathToLobby{TEXT("")};
	FString SearchKeywords{TEXT("")};
};
