// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SessionsMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SESSIONSMANAGEMENT_SessionsMenu_generated_h
#error "SessionsMenu.generated.h already included, missing '#pragma once' in SessionsMenu.h"
#endif
#define SESSIONSMANAGEMENT_SessionsMenu_generated_h

#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execMenuSetup);


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSessionsMenu(); \
	friend struct Z_Construct_UClass_USessionsMenu_Statics; \
public: \
	DECLARE_CLASS(USessionsMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SessionsManagement"), NO_API) \
	DECLARE_SERIALIZER(USessionsMenu)


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USessionsMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USessionsMenu(USessionsMenu&&); \
	USessionsMenu(const USessionsMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USessionsMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USessionsMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USessionsMenu) \
	NO_API virtual ~USessionsMenu();


#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_13_PROLOG
#define FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_INCLASS_NO_PURE_DECLS \
	FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SESSIONSMANAGEMENT_API UClass* StaticClass<class USessionsMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
