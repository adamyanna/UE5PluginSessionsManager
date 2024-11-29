// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SessionsManagement/Public/SessionsSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionsSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SESSIONSMANAGEMENT_API UClass* Z_Construct_UClass_USessionsSubsystem();
SESSIONSMANAGEMENT_API UClass* Z_Construct_UClass_USessionsSubsystem_NoRegister();
SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature();
SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature();
SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SessionsManagement();
// End Cross Module References

// Begin Delegate FMulticastOnCreateSessionComplete
struct Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics
{
	struct _Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//\n// Declaring our own custom delegates for the Menu class to bind callbacks to\n//\n" },
		{ "ModuleRelativePath", "Public/SessionsSubsystem.h" },
		{ "ToolTip", "Declaring our own custom delegates for the Menu class to bind callbacks to" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SessionsManagement, nullptr, "MulticastOnCreateSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMulticastOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnCreateSessionComplete, bool bWasSuccessful)
{
	struct _Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_SessionsManagement_eventMulticastOnCreateSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MulticastOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMulticastOnCreateSessionComplete

// Begin Delegate FMulticastOnDestroySessionComplete
struct Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics
{
	struct _Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SessionsManagement, nullptr, "MulticastOnDestroySessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMulticastOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnDestroySessionComplete, bool bWasSuccessful)
{
	struct _Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_SessionsManagement_eventMulticastOnDestroySessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MulticastOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMulticastOnDestroySessionComplete

// Begin Delegate FMulticastOnStartSessionComplete
struct Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics
{
	struct _Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SessionsManagement, nullptr, "MulticastOnStartSessionComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::_Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMulticastOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MulticastOnStartSessionComplete, bool bWasSuccessful)
{
	struct _Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_SessionsManagement_eventMulticastOnStartSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MulticastOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMulticastOnStartSessionComplete

// Begin Class USessionsSubsystem
void USessionsSubsystem::StaticRegisterNativesUSessionsSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USessionsSubsystem);
UClass* Z_Construct_UClass_USessionsSubsystem_NoRegister()
{
	return USessionsSubsystem::StaticClass();
}
struct Z_Construct_UClass_USessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SessionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/SessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SessionsManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USessionsSubsystem_Statics::ClassParams = {
	&USessionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_USessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USessionsSubsystem.OuterSingleton, Z_Construct_UClass_USessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USessionsSubsystem.OuterSingleton;
}
template<> SESSIONSMANAGEMENT_API UClass* StaticClass<USessionsSubsystem>()
{
	return USessionsSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USessionsSubsystem);
USessionsSubsystem::~USessionsSubsystem() {}
// End Class USessionsSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USessionsSubsystem, USessionsSubsystem::StaticClass, TEXT("USessionsSubsystem"), &Z_Registration_Info_UClass_USessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USessionsSubsystem), 4181507623U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_358424216(TEXT("/Script/SessionsManagement"),
	Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_dev_MultiplayerSessions_BuildCD_SessionsManagement_HostProject_Plugins_SessionsManagement_Source_SessionsManagement_Public_SessionsSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
