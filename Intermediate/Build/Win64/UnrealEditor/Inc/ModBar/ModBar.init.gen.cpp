// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModBar_init() {}
	MODBAR_API UFunction* Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature();
	MODBAR_API UFunction* Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModBar;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModBar()
	{
		if (!Z_Registration_Info_UPackage__Script_ModBar.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModBar",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0352F5E4,
				0x6456E910,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModBar.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModBar.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModBar(Z_Construct_UPackage__Script_ModBar, TEXT("/Script/ModBar"), Z_Registration_Info_UPackage__Script_ModBar, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x0352F5E4, 0x6456E910));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
