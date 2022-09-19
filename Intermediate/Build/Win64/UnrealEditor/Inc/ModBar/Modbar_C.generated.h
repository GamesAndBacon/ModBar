// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHotbarKey;
struct FKey;
class UBarSlot;
#ifdef MODBAR_Modbar_C_generated_h
#error "Modbar_C.generated.h already included, missing '#pragma once' in Modbar_C.h"
#endif
#define MODBAR_Modbar_C_generated_h

#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHotbarKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MODBAR_API UScriptStruct* StaticStruct<struct FHotbarKey>();

#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_50_DELEGATE \
struct Modbar_C_eventKeybindUpdate_Parms \
{ \
	int32 index; \
}; \
static inline void FKeybindUpdate_DelegateWrapper(const FMulticastScriptDelegate& KeybindUpdate, int32 index) \
{ \
	Modbar_C_eventKeybindUpdate_Parms Parms; \
	Parms.index=index; \
	KeybindUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_SPARSE_DATA
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_RPC_WRAPPERS \
	virtual bool IsValidKeybind_Implementation(FHotbarKey Key); \
 \
	DECLARE_FUNCTION(execIsValidKeybind); \
	DECLARE_FUNCTION(execActivateKeybind); \
	DECLARE_FUNCTION(execDoesKeybindExist); \
	DECLARE_FUNCTION(execClearKeybind); \
	DECLARE_FUNCTION(execSetKeybind); \
	DECLARE_FUNCTION(execAddSlot); \
	DECLARE_FUNCTION(execRemoveSlot); \
	DECLARE_FUNCTION(execGetSlot);


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsValidKeybind_Implementation(FHotbarKey Key); \
 \
	DECLARE_FUNCTION(execIsValidKeybind); \
	DECLARE_FUNCTION(execActivateKeybind); \
	DECLARE_FUNCTION(execDoesKeybindExist); \
	DECLARE_FUNCTION(execClearKeybind); \
	DECLARE_FUNCTION(execSetKeybind); \
	DECLARE_FUNCTION(execAddSlot); \
	DECLARE_FUNCTION(execRemoveSlot); \
	DECLARE_FUNCTION(execGetSlot);


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_EVENT_PARMS \
	struct Modbar_C_eventIsValidKeybind_Parms \
	{ \
		FHotbarKey Key; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		Modbar_C_eventIsValidKeybind_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_CALLBACK_WRAPPERS
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModbar_C(); \
	friend struct Z_Construct_UClass_UModbar_C_Statics; \
public: \
	DECLARE_CLASS(UModbar_C, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModBar"), NO_API) \
	DECLARE_SERIALIZER(UModbar_C)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUModbar_C(); \
	friend struct Z_Construct_UClass_UModbar_C_Statics; \
public: \
	DECLARE_CLASS(UModbar_C, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModBar"), NO_API) \
	DECLARE_SERIALIZER(UModbar_C)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModbar_C(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModbar_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModbar_C); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModbar_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModbar_C(UModbar_C&&); \
	NO_API UModbar_C(const UModbar_C&); \
public:


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModbar_C(UModbar_C&&); \
	NO_API UModbar_C(const UModbar_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModbar_C); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModbar_C); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UModbar_C)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_43_PROLOG \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_EVENT_PARMS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_RPC_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_INCLASS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_INCLASS_NO_PURE_DECLS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODBAR_API UClass* StaticClass<class UModbar_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_Modbar_C_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
