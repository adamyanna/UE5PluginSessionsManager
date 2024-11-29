// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SessionsManagement/Public/SessionsMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionsMenu() {}

// Begin Cross Module References
SESSIONSMANAGEMENT_API UClass* Z_Construct_UClass_USessionsMenu();
SESSIONSMANAGEMENT_API UClass* Z_Construct_UClass_USessionsMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SessionsManagement();
// End Cross Module References

// Begin Class USessionsMenu Function HostButtonClicked
struct Z_Construct_UFunction_USessionsMenu_HostButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_HostButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "HostButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_HostButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_HostButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USessionsMenu_HostButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_HostButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execHostButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostButtonClicked();
	P_NATIVE_END;
}
// End Class USessionsMenu Function HostButtonClicked

// Begin Class USessionsMenu Function JoinButtonClicked
struct Z_Construct_UFunction_USessionsMenu_JoinButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_JoinButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "JoinButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_JoinButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_JoinButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USessionsMenu_JoinButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_JoinButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execJoinButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinButtonClicked();
	P_NATIVE_END;
}
// End Class USessionsMenu Function JoinButtonClicked

// Begin Class USessionsMenu Function MenuSetup
struct Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics
{
	struct SessionsMenu_eventMenuSetup_Parms
	{
		int32 NumberOfPublicConnections;
		FString TypeOfMatch;
		FString LobbyPath;
		FString SessionSearchKeywords;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Menu Sessions" },
		{ "CPP_Default_LobbyPath", "/Game/ThirdPersonCPP/Maps/Lobby" },
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_SessionSearchKeywords", "12f7f034-32d0-4276-83a7-4bae6100711b" },
		{ "CPP_Default_TypeOfMatch", "FreeForAll" },
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TypeOfMatch;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSearchKeywords;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionsMenu_eventMenuSetup_Parms, NumberOfPublicConnections), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_TypeOfMatch = { "TypeOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionsMenu_eventMenuSetup_Parms, TypeOfMatch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_LobbyPath = { "LobbyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionsMenu_eventMenuSetup_Parms, LobbyPath), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_SessionSearchKeywords = { "SessionSearchKeywords", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SessionsMenu_eventMenuSetup_Parms, SessionSearchKeywords), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_NumberOfPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_TypeOfMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_LobbyPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::NewProp_SessionSearchKeywords,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "MenuSetup", nullptr, nullptr, Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::SessionsMenu_eventMenuSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::SessionsMenu_eventMenuSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionsMenu_MenuSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_MenuSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execMenuSetup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
	P_GET_PROPERTY(FStrProperty,Z_Param_TypeOfMatch);
	P_GET_PROPERTY(FStrProperty,Z_Param_LobbyPath);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionSearchKeywords);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MenuSetup(Z_Param_NumberOfPublicConnections,Z_Param_TypeOfMatch,Z_Param_LobbyPath,Z_Param_SessionSearchKeywords);
	P_NATIVE_END;
}
// End Class USessionsMenu Function MenuSetup

// Begin Class USessionsMenu Function OnCreateSession
struct Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics
{
	struct SessionsMenu_eventOnCreateSession_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//\n// Callbacks for the custom delegates on the MultiplayerSessionsSubsystem\n//\n" },
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
		{ "ToolTip", "Callbacks for the custom delegates on the MultiplayerSessionsSubsystem" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SessionsMenu_eventOnCreateSession_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SessionsMenu_eventOnCreateSession_Parms), &Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "OnCreateSession", nullptr, nullptr, Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::SessionsMenu_eventOnCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::SessionsMenu_eventOnCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionsMenu_OnCreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_OnCreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execOnCreateSession)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCreateSession(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USessionsMenu Function OnCreateSession

// Begin Class USessionsMenu Function OnDestroySession
struct Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics
{
	struct SessionsMenu_eventOnDestroySession_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SessionsMenu_eventOnDestroySession_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SessionsMenu_eventOnDestroySession_Parms), &Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "OnDestroySession", nullptr, nullptr, Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::SessionsMenu_eventOnDestroySession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::SessionsMenu_eventOnDestroySession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionsMenu_OnDestroySession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_OnDestroySession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execOnDestroySession)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDestroySession(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USessionsMenu Function OnDestroySession

// Begin Class USessionsMenu Function OnStartSession
struct Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics
{
	struct SessionsMenu_eventOnStartSession_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SessionsMenu_eventOnStartSession_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SessionsMenu_eventOnStartSession_Parms), &Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USessionsMenu, nullptr, "OnStartSession", nullptr, nullptr, Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::SessionsMenu_eventOnStartSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::SessionsMenu_eventOnStartSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USessionsMenu_OnStartSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USessionsMenu_OnStartSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USessionsMenu::execOnStartSession)
{
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStartSession(Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USessionsMenu Function OnStartSession

// Begin Class USessionsMenu
void USessionsMenu::StaticRegisterNativesUSessionsMenu()
{
	UClass* Class = USessionsMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HostButtonClicked", &USessionsMenu::execHostButtonClicked },
		{ "JoinButtonClicked", &USessionsMenu::execJoinButtonClicked },
		{ "MenuSetup", &USessionsMenu::execMenuSetup },
		{ "OnCreateSession", &USessionsMenu::execOnCreateSession },
		{ "OnDestroySession", &USessionsMenu::execOnDestroySession },
		{ "OnStartSession", &USessionsMenu::execOnStartSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USessionsMenu);
UClass* Z_Construct_UClass_USessionsMenu_NoRegister()
{
	return USessionsMenu::StaticClass();
}
struct Z_Construct_UClass_USessionsMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SessionsMenu.h" },
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SessionsMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USessionsMenu_HostButtonClicked, "HostButtonClicked" }, // 4011543973
		{ &Z_Construct_UFunction_USessionsMenu_JoinButtonClicked, "JoinButtonClicked" }, // 3348457740
		{ &Z_Construct_UFunction_USessionsMenu_MenuSetup, "MenuSetup" }, // 4124921803
		{ &Z_Construct_UFunction_USessionsMenu_OnCreateSession, "OnCreateSession" }, // 416703291
		{ &Z_Construct_UFunction_USessionsMenu_OnDestroySession, "OnDestroySession" }, // 3371517452
		{ &Z_Construct_UFunction_USessionsMenu_OnStartSession, "OnStartSession" }, // 1247850203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionsMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USessionsMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USessionsMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostButton_MetaData), NewProp_HostButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USessionsMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USessionsMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JoinButton_MetaData), NewProp_JoinButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USessionsMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USessionsMenu_Statics::NewProp_HostButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USessionsMenu_Statics::NewProp_JoinButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USessionsMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USessionsMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SessionsManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USessionsMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USessionsMenu_Statics::ClassParams = {
	&USessionsMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USessionsMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USessionsMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USessionsMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_USessionsMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USessionsMenu()
{
	if (!Z_Registration_Info_UClass_USessionsMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USessionsMenu.OuterSingleton, Z_Construct_UClass_USessionsMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USessionsMenu.OuterSingleton;
}
template<> SESSIONSMANAGEMENT_API UClass* StaticClass<USessionsMenu>()
{
	return USessionsMenu::StaticClass();
}
USessionsMenu::USessionsMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USessionsMenu);
USessionsMenu::~USessionsMenu() {}
// End Class USessionsMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USessionsMenu, USessionsMenu::StaticClass, TEXT("USessionsMenu"), &Z_Registration_Info_UClass_USessionsMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USessionsMenu), 1477981261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_2188877427(TEXT("/Script/SessionsManagement"),
	Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
