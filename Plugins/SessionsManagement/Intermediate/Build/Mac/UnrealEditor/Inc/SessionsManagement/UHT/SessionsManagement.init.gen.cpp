// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionsManagement_init() {}
	SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature();
	SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature();
	SESSIONSMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SessionsManagement;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SessionsManagement()
	{
		if (!Z_Registration_Info_UPackage__Script_SessionsManagement.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnCreateSessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnDestroySessionComplete__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SessionsManagement_MulticastOnStartSessionComplete__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SessionsManagement",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCFB029B5,
				0x1A139489,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SessionsManagement.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SessionsManagement.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SessionsManagement(Z_Construct_UPackage__Script_SessionsManagement, TEXT("/Script/SessionsManagement"), Z_Registration_Info_UPackage__Script_SessionsManagement, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCFB029B5, 0x1A139489));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
