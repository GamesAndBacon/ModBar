// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModBar/ModbarInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModbarInterface() {}
// Cross Module References
	MODBAR_API UClass* Z_Construct_UClass_UModbarInterface_NoRegister();
	MODBAR_API UClass* Z_Construct_UClass_UModbarInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ModBar();
	MODBAR_API UClass* Z_Construct_UClass_UModbar_C_NoRegister();
// End Cross Module References
	UModbar_C* IModbarInterface::GetHotbar()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHotbar instead.");
		ModbarInterface_eventGetHotbar_Parms Parms;
		return Parms.ReturnValue;
	}
	void UModbarInterface::StaticRegisterNativesUModbarInterface()
	{
	}
	struct Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ModbarInterface_eventGetHotbar_Parms, ReturnValue), Z_Construct_UClass_UModbar_C_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modbar" },
		{ "ModuleRelativePath", "ModbarInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbarInterface, nullptr, "GetHotbar", nullptr, nullptr, sizeof(ModbarInterface_eventGetHotbar_Parms), Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbarInterface_GetHotbar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbarInterface_GetHotbar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModbarInterface);
	UClass* Z_Construct_UClass_UModbarInterface_NoRegister()
	{
		return UModbarInterface::StaticClass();
	}
	struct Z_Construct_UClass_UModbarInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModbarInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModBar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModbarInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModbarInterface_GetHotbar, "GetHotbar" }, // 4164654592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbarInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ModbarInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModbarInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IModbarInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModbarInterface_Statics::ClassParams = {
		&UModbarInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UModbarInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModbarInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModbarInterface()
	{
		if (!Z_Registration_Info_UClass_UModbarInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModbarInterface.OuterSingleton, Z_Construct_UClass_UModbarInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModbarInterface.OuterSingleton;
	}
	template<> MODBAR_API UClass* StaticClass<UModbarInterface>()
	{
		return UModbarInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModbarInterface);
	static FName NAME_UModbarInterface_GetHotbar = FName(TEXT("GetHotbar"));
	UModbar_C* IModbarInterface::Execute_GetHotbar(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UModbarInterface::StaticClass()));
		ModbarInterface_eventGetHotbar_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UModbarInterface_GetHotbar);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModbarInterface, UModbarInterface::StaticClass, TEXT("UModbarInterface"), &Z_Registration_Info_UClass_UModbarInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModbarInterface), 597477862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_3205776349(TEXT("/Script/ModBar"),
		Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
