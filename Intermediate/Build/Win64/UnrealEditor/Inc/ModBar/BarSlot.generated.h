// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBarSlot;
struct FHotbarKey;
#ifdef MODBAR_BarSlot_generated_h
#error "BarSlot.generated.h already included, missing '#pragma once' in BarSlot.h"
#endif
#define MODBAR_BarSlot_generated_h

#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_18_DELEGATE \
struct BarSlot_eventBarSlotUpdated_Parms \
{ \
	UBarSlot* slot; \
}; \
static inline void FBarSlotUpdated_DelegateWrapper(const FMulticastScriptDelegate& BarSlotUpdated, UBarSlot* slot) \
{ \
	BarSlot_eventBarSlotUpdated_Parms Parms; \
	Parms.slot=slot; \
	BarSlotUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_SPARSE_DATA
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_RPC_WRAPPERS \
	virtual bool isDestroyed_Implementation(); \
	virtual void onSlotUpdate_Implementation(); \
	virtual void ActivateSlot_Implementation(); \
 \
	DECLARE_FUNCTION(execisDestroyed); \
	DECLARE_FUNCTION(execonSlotUpdate); \
	DECLARE_FUNCTION(execActivateSlot); \
	DECLARE_FUNCTION(execGetKeybind); \
	DECLARE_FUNCTION(execUpdateSlot); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool isDestroyed_Implementation(); \
	virtual void onSlotUpdate_Implementation(); \
	virtual void ActivateSlot_Implementation(); \
 \
	DECLARE_FUNCTION(execisDestroyed); \
	DECLARE_FUNCTION(execonSlotUpdate); \
	DECLARE_FUNCTION(execActivateSlot); \
	DECLARE_FUNCTION(execGetKeybind); \
	DECLARE_FUNCTION(execUpdateSlot); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_EVENT_PARMS \
	struct BarSlot_eventisDestroyed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BarSlot_eventisDestroyed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_CALLBACK_WRAPPERS
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBarSlot(); \
	friend struct Z_Construct_UClass_UBarSlot_Statics; \
public: \
	DECLARE_CLASS(UBarSlot, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModBar"), NO_API) \
	DECLARE_SERIALIZER(UBarSlot)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBarSlot(); \
	friend struct Z_Construct_UClass_UBarSlot_Statics; \
public: \
	DECLARE_CLASS(UBarSlot, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModBar"), NO_API) \
	DECLARE_SERIALIZER(UBarSlot)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBarSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBarSlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBarSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBarSlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBarSlot(UBarSlot&&); \
	NO_API UBarSlot(const UBarSlot&); \
public:


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBarSlot(UBarSlot&&); \
	NO_API UBarSlot(const UBarSlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBarSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBarSlot); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBarSlot)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_13_PROLOG \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_EVENT_PARMS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_RPC_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_INCLASS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_INCLASS_NO_PURE_DECLS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODBAR_API UClass* StaticClass<class UBarSlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_Public_Main_BarSlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
