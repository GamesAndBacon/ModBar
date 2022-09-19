// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModBar/Public/Main/Modbar_C.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModbar_C() {}
// Cross Module References
	MODBAR_API UScriptStruct* Z_Construct_UScriptStruct_FHotbarKey();
	UPackage* Z_Construct_UPackage__Script_ModBar();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	MODBAR_API UFunction* Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature();
	MODBAR_API UClass* Z_Construct_UClass_UModbar_C();
	MODBAR_API UClass* Z_Construct_UClass_UModbar_C_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MODBAR_API UClass* Z_Construct_UClass_UBarSlot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HotbarKey;
class UScriptStruct* FHotbarKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HotbarKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HotbarKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHotbarKey, Z_Construct_UPackage__Script_ModBar(), TEXT("HotbarKey"));
	}
	return Z_Registration_Info_UScriptStruct_HotbarKey.OuterSingleton;
}
template<> MODBAR_API UScriptStruct* StaticStruct<FHotbarKey>()
{
	return FHotbarKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHotbarKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[];
#endif
		static void NewProp_bCtrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbarKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// out struct for our hotkey and its modifiers\n" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
		{ "ToolTip", "out struct for our hotkey and its modifiers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHotbarKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHotbarKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FHotbarKey*)Obj)->bAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHotbarKey), &Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl_SetBit(void* Obj)
	{
		((FHotbarKey*)Obj)->bCtrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHotbarKey), &Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FHotbarKey*)Obj)->bShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHotbarKey), &Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_key_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHotbarKey, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_key_MetaData)) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHotbarKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bCtrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_bShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHotbarKey_Statics::NewProp_key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHotbarKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModBar,
		nullptr,
		&NewStructOps,
		"HotbarKey",
		sizeof(FHotbarKey),
		alignof(FHotbarKey),
		Z_Construct_UScriptStruct_FHotbarKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHotbarKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHotbarKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHotbarKey()
	{
		if (!Z_Registration_Info_UScriptStruct_HotbarKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HotbarKey.InnerSingleton, Z_Construct_UScriptStruct_FHotbarKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HotbarKey.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics
	{
		struct Modbar_C_eventKeybindUpdate_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventKeybindUpdate_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "KeybindUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::Modbar_C_eventKeybindUpdate_Parms), Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UModbar_C::execIsValidKeybind)
	{
		P_GET_STRUCT(FHotbarKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidKeybind_Implementation(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execActivateKeybind)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateKeybind(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execDoesKeybindExist)
	{
		P_GET_STRUCT(FHotbarKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesKeybindExist(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execClearKeybind)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearKeybind(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execSetKeybind)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_STRUCT(FHotbarKey,Z_Param_Key);
		P_GET_UBOOL(Z_Param_Override);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetKeybind(Z_Param_index,Z_Param_Key,Z_Param_Override);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execAddSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBarSlot**)Z_Param__Result=P_THIS->AddSlot(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execRemoveSlot)
	{
		P_GET_OBJECT(UBarSlot,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSlot(Z_Param_slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModbar_C::execGetSlot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_OBJECT_REF(UBarSlot,Z_Param_Out_slot);
		P_GET_UBOOL_REF(Z_Param_Out_bSlotOccupied);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSlot(Z_Param_index,Z_Param_Out_slot,Z_Param_Out_bSlotOccupied);
		P_NATIVE_END;
	}
	static FName NAME_UModbar_C_IsValidKeybind = FName(TEXT("IsValidKeybind"));
	bool UModbar_C::IsValidKeybind(FHotbarKey Key)
	{
		Modbar_C_eventIsValidKeybind_Parms Parms;
		Parms.Key=Key;
		ProcessEvent(FindFunctionChecked(NAME_UModbar_C_IsValidKeybind),&Parms);
		return !!Parms.ReturnValue;
	}
	void UModbar_C::StaticRegisterNativesUModbar_C()
	{
		UClass* Class = UModbar_C::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateKeybind", &UModbar_C::execActivateKeybind },
			{ "AddSlot", &UModbar_C::execAddSlot },
			{ "ClearKeybind", &UModbar_C::execClearKeybind },
			{ "DoesKeybindExist", &UModbar_C::execDoesKeybindExist },
			{ "GetSlot", &UModbar_C::execGetSlot },
			{ "IsValidKeybind", &UModbar_C::execIsValidKeybind },
			{ "RemoveSlot", &UModbar_C::execRemoveSlot },
			{ "SetKeybind", &UModbar_C::execSetKeybind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics
	{
		struct Modbar_C_eventActivateKeybind_Parms
		{
			FKey Key;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventActivateKeybind_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "ActivateKeybind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::Modbar_C_eventActivateKeybind_Parms), Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_ActivateKeybind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_ActivateKeybind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_AddSlot_Statics
	{
		struct Modbar_C_eventAddSlot_Parms
		{
			int32 index;
			UBarSlot* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UModbar_C_AddSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventAddSlot_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModbar_C_AddSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventAddSlot_Parms, ReturnValue), Z_Construct_UClass_UBarSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_AddSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_AddSlot_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_AddSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_AddSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_AddSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "AddSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_AddSlot_Statics::Modbar_C_eventAddSlot_Parms), Z_Construct_UFunction_UModbar_C_AddSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_AddSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_AddSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_AddSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_AddSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_AddSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics
	{
		struct Modbar_C_eventClearKeybind_Parms
		{
			int32 index;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventClearKeybind_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "ClearKeybind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::Modbar_C_eventClearKeybind_Parms), Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_ClearKeybind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_ClearKeybind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics
	{
		struct Modbar_C_eventDoesKeybindExist_Parms
		{
			FHotbarKey Key;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventDoesKeybindExist_Parms, Key), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(nullptr, 0) }; // 2857769805
	void Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Modbar_C_eventDoesKeybindExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Modbar_C_eventDoesKeybindExist_Parms), &Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "DoesKeybindExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::Modbar_C_eventDoesKeybindExist_Parms), Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_DoesKeybindExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_DoesKeybindExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_GetSlot_Statics
	{
		struct Modbar_C_eventGetSlot_Parms
		{
			int32 index;
			UBarSlot* slot;
			bool bSlotOccupied;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_slot;
		static void NewProp_bSlotOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSlotOccupied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventGetSlot_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventGetSlot_Parms, slot), Z_Construct_UClass_UBarSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_bSlotOccupied_SetBit(void* Obj)
	{
		((Modbar_C_eventGetSlot_Parms*)Obj)->bSlotOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_bSlotOccupied = { "bSlotOccupied", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Modbar_C_eventGetSlot_Parms), &Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_bSlotOccupied_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_GetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_GetSlot_Statics::NewProp_bSlotOccupied,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_GetSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_GetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "GetSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_GetSlot_Statics::Modbar_C_eventGetSlot_Parms), Z_Construct_UFunction_UModbar_C_GetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_GetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_GetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_GetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_GetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_GetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventIsValidKeybind_Parms, Key), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(nullptr, 0) }; // 2857769805
	void Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Modbar_C_eventIsValidKeybind_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Modbar_C_eventIsValidKeybind_Parms), &Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "IsValidKeybind", nullptr, nullptr, sizeof(Modbar_C_eventIsValidKeybind_Parms), Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_IsValidKeybind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_IsValidKeybind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics
	{
		struct Modbar_C_eventRemoveSlot_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventRemoveSlot_Parms, slot), Z_Construct_UClass_UBarSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "RemoveSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::Modbar_C_eventRemoveSlot_Parms), Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_RemoveSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_RemoveSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModbar_C_SetKeybind_Statics
	{
		struct Modbar_C_eventSetKeybind_Parms
		{
			int32 index;
			FHotbarKey Key;
			bool Override;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_Override_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Override;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventSetKeybind_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Modbar_C_eventSetKeybind_Parms, Key), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(nullptr, 0) }; // 2857769805
	void Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Override_SetBit(void* Obj)
	{
		((Modbar_C_eventSetKeybind_Parms*)Obj)->Override = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Override = { "Override", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Modbar_C_eventSetKeybind_Parms), &Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Override_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Modbar_C_eventSetKeybind_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Modbar_C_eventSetKeybind_Parms), &Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_Override,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModbar_C, nullptr, "SetKeybind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::Modbar_C_eventSetKeybind_Parms), Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModbar_C_SetKeybind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModbar_C_SetKeybind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModbar_C);
	UClass* Z_Construct_UClass_UModbar_C_NoRegister()
	{
		return UModbar_C::StaticClass();
	}
	struct Z_Construct_UClass_UModbar_C_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeybindUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_KeybindUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeybindAlreadyExists_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_KeybindAlreadyExists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlotClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Keybinds_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keybinds_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keybinds_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Keybinds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeybindsActive_MetaData[];
#endif
		static void NewProp_KeybindsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeybindsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKeyPressed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastKeyPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastKeybindPressed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastKeybindPressed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModbar_C_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModBar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModbar_C_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModbar_C_ActivateKeybind, "ActivateKeybind" }, // 4223796924
		{ &Z_Construct_UFunction_UModbar_C_AddSlot, "AddSlot" }, // 3700368556
		{ &Z_Construct_UFunction_UModbar_C_ClearKeybind, "ClearKeybind" }, // 268235399
		{ &Z_Construct_UFunction_UModbar_C_DoesKeybindExist, "DoesKeybindExist" }, // 3961870998
		{ &Z_Construct_UFunction_UModbar_C_GetSlot, "GetSlot" }, // 1321380063
		{ &Z_Construct_UFunction_UModbar_C_IsValidKeybind, "IsValidKeybind" }, // 1967275777
		{ &Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature, "KeybindUpdate__DelegateSignature" }, // 1248487548
		{ &Z_Construct_UFunction_UModbar_C_RemoveSlot, "RemoveSlot" }, // 1179066871
		{ &Z_Construct_UFunction_UModbar_C_SetKeybind, "SetKeybind" }, // 874740118
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Main/Modbar_C.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindUpdated_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindUpdated = { "KeybindUpdated", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, KeybindUpdated), Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindUpdated_MetaData)) }; // 1248487548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindAlreadyExists_MetaData[] = {
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindAlreadyExists = { "KeybindAlreadyExists", nullptr, (EPropertyFlags)0x0040100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, KeybindAlreadyExists), Z_Construct_UDelegateFunction_UModbar_C_KeybindUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindAlreadyExists_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindAlreadyExists_MetaData)) }; // 1248487548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_controller_MetaData[] = {
		{ "Category", "Modbar_C" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_controller = { "controller", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_SlotClass_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//slots\n" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
		{ "ToolTip", "slots" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_SlotClass = { "SlotClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, SlotClass), Z_Construct_UClass_UBarSlot_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_SlotClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_SlotClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBarSlot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots_MetaData[] = {
		{ "Category", "Modbar_C" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_ValueProp = { "Keybinds", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_Key_KeyProp = { "Keybinds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(nullptr, 0) }; // 2857769805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//keybinds\n" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
		{ "ToolTip", "keybinds" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds = { "Keybinds", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, Keybinds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_MetaData)) }; // 2857769805
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	void Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive_SetBit(void* Obj)
	{
		((UModbar_C*)Obj)->KeybindsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive = { "KeybindsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UModbar_C), &Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeyPressed_MetaData[] = {
		{ "Category", "Modbar_C" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeyPressed = { "LastKeyPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, LastKeyPressed), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeyPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeyPressed_MetaData)) }; // 2615338182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeybindPressed_MetaData[] = {
		{ "Category", "Modbar_C" },
		{ "ModuleRelativePath", "Public/Main/Modbar_C.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeybindPressed = { "LastKeybindPressed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UModbar_C, LastKeybindPressed), Z_Construct_UScriptStruct_FHotbarKey, METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeybindPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeybindPressed_MetaData)) }; // 2857769805
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModbar_C_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindAlreadyExists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_SlotClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_Keybinds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_KeybindsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeyPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModbar_C_Statics::NewProp_LastKeybindPressed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModbar_C_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModbar_C>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModbar_C_Statics::ClassParams = {
		&UModbar_C::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UModbar_C_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModbar_C_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModbar_C_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModbar_C()
	{
		if (!Z_Registration_Info_UClass_UModbar_C.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModbar_C.OuterSingleton, Z_Construct_UClass_UModbar_C_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModbar_C.OuterSingleton;
	}
	template<> MODBAR_API UClass* StaticClass<UModbar_C>()
	{
		return UModbar_C::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModbar_C);
	struct Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ScriptStructInfo[] = {
		{ FHotbarKey::StaticStruct, Z_Construct_UScriptStruct_FHotbarKey_Statics::NewStructOps, TEXT("HotbarKey"), &Z_Registration_Info_UScriptStruct_HotbarKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHotbarKey), 2857769805U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModbar_C, UModbar_C::StaticClass, TEXT("UModbar_C"), &Z_Registration_Info_UClass_UModbar_C, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModbar_C), 818633915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_1863699924(TEXT("/Script/ModBar"),
		Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
