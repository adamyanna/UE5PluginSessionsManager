// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "SessionsSubsystem.generated.h"

//
// Declaring our own custom delegates for the Menu class to bind callbacks to
//
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastOnCreateSessionComplete, bool, bWasSuccessful);

DECLARE_MULTICAST_DELEGATE_TwoParams(FMulticastOnFindSessionsComplete,
                                     const TArray<FOnlineSessionSearchResult>& SessionResults, bool bWasSuccessful);
DECLARE_MULTICAST_DELEGATE_OneParam(FMulticastOnJoinSessionComplete, EOnJoinSessionCompleteResult::Type Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastOnDestroySessionComplete, bool, bWasSuccessful);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastOnStartSessionComplete, bool, bWasSuccessful);

/**
 * 
 */
UCLASS()
class SESSIONSMANAGEMENT_API USessionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	USessionsSubsystem();

	//
	// To handle session functionality. The Menu class will call these
	//
	void CreateSession(int32 NumPublicConnections, FString MatchType, const FString& SearchKeywords);
	void FindSessions(int32 MaxSearchResults, const FString& SearchKeywords);
	void JoinSession(FOnlineSessionSearchResult& SessionResult);
	void DestroySession();
	void StartSession();

	bool IsValidSessionInterface();

	//
	// Our own custom delegates for the Menu class to bind callbacks to
	//
	FMulticastOnCreateSessionComplete MulticastOnCreateSessionComplete;
	FMulticastOnFindSessionsComplete MulticastOnFindSessionsComplete;
	FMulticastOnJoinSessionComplete MulticastOnJoinSessionComplete;
	FMulticastOnDestroySessionComplete MulticastOnDestroySessionComplete;
	FMulticastOnStartSessionComplete MulticastOnStartSessionComplete;

protected:
	//
	// Internal callbacks for the delegates we'll add to the Online Session Interface delegate list.
	// Thise don't need to be called outside this class.
	//
	void OnCreateSessionComplete(FName SessionName, bool bWasSuccessful);
	void OnFindSessionsComplete(bool bWasSuccessful);
	void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);
	void OnDestroySessionComplete(FName SessionName, bool bWasSuccessful);
	void OnStartSessionComplete(FName SessionName, bool bWasSuccessful);

private:
	IOnlineSessionPtr SessionInterface;
	TSharedPtr<FOnlineSessionSettings> LastSessionSettings;
	TSharedPtr<FOnlineSessionSearch> LastSessionSearch;

	//
	// To add to the Online Session Interface delegate list.
	// We'll bind our MulticastSessionsSubsystem internal callbacks to these.
	//
	FOnCreateSessionCompleteDelegate CreateSessionCompleteDelegate;
	FDelegateHandle CreateSessionCompleteDelegateHandle;
	FOnFindSessionsCompleteDelegate FindSessionsCompleteDelegate;
	FDelegateHandle FindSessionsCompleteDelegateHandle;
	FOnJoinSessionCompleteDelegate JoinSessionCompleteDelegate;
	FDelegateHandle JoinSessionCompleteDelegateHandle;
	FOnDestroySessionCompleteDelegate DestroySessionCompleteDelegate;
	FDelegateHandle DestroySessionCompleteDelegateHandle;
	FOnStartSessionCompleteDelegate StartSessionCompleteDelegate;
	FDelegateHandle StartSessionCompleteDelegateHandle;

	bool bCreateSessionOnDestroy{false};
	int32 LastNumPublicConnections;
	FString LastMatchType;
	FString LastSearchKeywords;
};
