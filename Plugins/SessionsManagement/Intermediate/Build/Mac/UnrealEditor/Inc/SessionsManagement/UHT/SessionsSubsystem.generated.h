// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SessionsSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SESSIONSMANAGEMENT_SessionsSubsystem_generated_h
#error "SessionsSubsystem.generated.h already included, missing '#pragma once' in SessionsSubsystem.h"
#endif
#define SESSIONSMANAGEMENT_SessionsSubsystem_generated_h

#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_13_DELEGATE \
SESSIONSMANAGEMENT_API void FMulticastOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnCreateSessionComplete, bool bWasSuccessful);


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_18_DELEGATE \
SESSIONSMANAGEMENT_API void FMulticastOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnDestroySessionComplete, bool bWasSuccessful);


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_20_DELEGATE \
SESSIONSMANAGEMENT_API void FMulticastOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnStartSessionComplete, bool bWasSuccessful);


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSessionsSubsystem(); \
	friend struct Z_Construct_UClass_USessionsSubsystem_Statics; \
public: \
	DECLARE_CLASS(USessionsSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SessionsManagement"), NO_API) \
	DECLARE_SERIALIZER(USessionsSubsystem)


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USessionsSubsystem(USessionsSubsystem&&); \
	USessionsSubsystem(const USessionsSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USessionsSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USessionsSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USessionsSubsystem) \
	NO_API virtual ~USessionsSubsystem();


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_25_PROLOG
#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SESSIONSMANAGEMENT_API UClass* StaticClass<class USessionsSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
