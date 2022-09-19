// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModBar/Public/Main/BarSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarSlot() {}
// Cross Module References
	MODBAR_API UFunction* Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature();
	MODBAR_API UClass* Z_Construct_UClass_UBarSlot();
	MODBAR_API UClass* Z_Construct_UClass_UBarSlot_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModBar();
	MODBAR_API UScriptStruct* Z_Construct_UScriptStruct_FHotbarKey();
	MODBAR_API UClass* Z_Construct_UClass_UModbar_C_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics
	{
		struct BarSlot_eventBarSlotUpdated_Parms
		{
			UBarSlot* slot;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BarSlot_eventBarSlotUpdated_Parms, slot), Z_Construct_UClass_UBarSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "BarSlotUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::BarSlot_eventBarSlotUpdated_Parms), Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBarSlot::execisDestroyed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isDestroyed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBarSlot::execonSlotUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onSlotUpdate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBarSlot::execActivateSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateSlot_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBarSlot::execGetKeybind)
	{
		P_GET_UBOOL_REF(Z_Param_Out_isValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHotbarKey*)Z_Param__Result=P_THIS->GetKeybind(Z_Param_Out_isValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBarSlot::execUpdateSlot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSlot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBarSlot::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	static FName NAME_UBarSlot_ActivateSlot = FName(TEXT("ActivateSlot"));
	void UBarSlot::ActivateSlot()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBarSlot_ActivateSlot),NULL);
	}
	static FName NAME_UBarSlot_isDestroyed = FName(TEXT("isDestroyed"));
	bool UBarSlot::isDestroyed()
	{
		BarSlot_eventisDestroyed_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UBarSlot_isDestroyed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UBarSlot_onSlotUpdate = FName(TEXT("onSlotUpdate"));
	void UBarSlot::onSlotUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBarSlot_onSlotUpdate),NULL);
	}
	void UBarSlot::StaticRegisterNativesUBarSlot()
	{
		UClass* Class = UBarSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateSlot", &UBarSlot::execActivateSlot },
			{ "BeginPlay", &UBarSlot::execBeginPlay },
			{ "GetKeybind", &UBarSlot::execGetKeybind },
			{ "isDestroyed", &UBarSlot::execisDestroyed },
			{ "onSlotUpdate", &UBarSlot::execonSlotUpdate },
			{ "UpdateSlot", &UBarSlot::execUpdateSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "ActivateSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_ActivateSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_ActivateSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBarSlot_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBarSlot_GetKeybind_Statics
	{
		struct BarSlot_eventGetKeybind_Parms
		{
			bool isValid;
			FHotbarKey ReturnValue;
		};
		static void NewProp_isValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isValid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_isValid_SetBit(void* Obj)
	{
		((BarSlot_eventGetKeybind_Parms*)Obj)->isValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_isValid = { "isValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BarSlot_eventGetKeybind_Parms), &Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_isValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BarSlot_eventGetKeybind_Parms, ReturnValue), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(nullptr, 0) }; // 2857769805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_isValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "GetKeybind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::BarSlot_eventGetKeybind_Parms), Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_GetKeybind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_GetKeybind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBarSlot_isDestroyed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BarSlot_eventisDestroyed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BarSlot_eventisDestroyed_Parms), &Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "isDestroyed", nullptr, nullptr, sizeof(BarSlot_eventisDestroyed_Parms), Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_isDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_isDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "onSlotUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_onSlotUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_onSlotUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarSlot, nullptr, "UpdateSlot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBarSlot_UpdateSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarSlot_UpdateSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBarSlot);
	UClass* Z_Construct_UClass_UBarSlot_NoRegister()
	{
		return UBarSlot::StaticClass();
	}
	struct Z_Construct_UClass_UBarSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SlotUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SlotRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotActivated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SlotActivated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keybind_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keybind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBarSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModBar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBarSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBarSlot_ActivateSlot, "ActivateSlot" }, // 2968939045
		{ &Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature, "BarSlotUpdated__DelegateSignature" }, // 675916924
		{ &Z_Construct_UFunction_UBarSlot_BeginPlay, "BeginPlay" }, // 2262969036
		{ &Z_Construct_UFunction_UBarSlot_GetKeybind, "GetKeybind" }, // 115196569
		{ &Z_Construct_UFunction_UBarSlot_isDestroyed, "isDestroyed" }, // 2913607252
		{ &Z_Construct_UFunction_UBarSlot_onSlotUpdate, "onSlotUpdate" }, // 935124510
		{ &Z_Construct_UFunction_UBarSlot_UpdateSlot, "UpdateSlot" }, // 1582122989
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Default" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "DoNotShow" },
		{ "IncludePath", "Main/BarSlot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotUpdated = { "SlotUpdated", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBarSlot, SlotUpdated), Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotUpdated_MetaData)) }; // 675916924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotRemoved = { "SlotRemoved", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBarSlot, SlotRemoved), Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotRemoved_MetaData)) }; // 675916924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotActivated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotActivated = { "SlotActivated", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBarSlot, SlotActivated), Z_Construct_UDelegateFunction_UBarSlot_BarSlotUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotActivated_MetaData)) }; // 675916924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "BarSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarSlot_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBarSlot, Owner), Z_Construct_UClass_UModbar_C_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::NewProp_Owner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBarSlot_Statics::NewProp_Keybind_MetaData[] = {
		{ "Category", "BarSlot" },
		{ "ModuleRelativePath", "Public/Main/BarSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBarSlot_Statics::NewProp_Keybind = { "Keybind", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBarSlot, Keybind), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::NewProp_Keybind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::NewProp_Keybind_MetaData)) }; // 2857769805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBarSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarSlot_Statics::NewProp_SlotActivated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarSlot_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarSlot_Statics::NewProp_Keybind,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBarSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBarSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBarSlot_Statics::ClassParams = {
		&UBarSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBarSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::PropPointers),
		0,
		0x009030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBarSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBarSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBarSlot()
	{
		if (!Z_Registration_Info_UClass_UBarSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBarSlot.OuterSingleton, Z_Construct_UClass_UBarSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBarSlot.OuterSingleton;
	}
	template<> MODBAR_API UClass* StaticClass<UBarSlot>()
	{
		return UBarSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBarSlot);
	struct Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBarSlot, UBarSlot::StaticClass, TEXT("UBarSlot"), &Z_Registration_Info_UClass_UBarSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBarSlot), 3207739459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_583228655(TEXT("/Script/ModBar"),
		Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
