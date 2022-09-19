// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UModbar_C;
#ifdef MODBAR_ModbarInterface_generated_h
#error "ModbarInterface.generated.h already included, missing '#pragma once' in ModbarInterface.h"
#endif
#define MODBAR_ModbarInterface_generated_h

#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_SPARSE_DATA
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_RPC_WRAPPERS
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_EVENT_PARMS \
	struct ModbarInterface_eventGetHotbar_Parms \
	{ \
		UModbar_C* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ModbarInterface_eventGetHotbar_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_CALLBACK_WRAPPERS
#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModbarInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModbarInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModbarInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModbarInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModbarInterface(UModbarInterface&&); \
	NO_API UModbarInterface(const UModbarInterface&); \
public:


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UModbarInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UModbarInterface(UModbarInterface&&); \
	NO_API UModbarInterface(const UModbarInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModbarInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModbarInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModbarInterface)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUModbarInterface(); \
	friend struct Z_Construct_UClass_UModbarInterface_Statics; \
public: \
	DECLARE_CLASS(UModbarInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModBar"), NO_API) \
	DECLARE_SERIALIZER(UModbarInterface)


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IModbarInterface() {} \
public: \
	typedef UModbarInterface UClassType; \
	typedef IModbarInterface ThisClass; \
	static UModbar_C* Execute_GetHotbar(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IModbarInterface() {} \
public: \
	typedef UModbarInterface UClassType; \
	typedef IModbarInterface ThisClass; \
	static UModbar_C* Execute_GetHotbar(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_11_PROLOG \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_EVENT_PARMS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_RPC_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_SPARSE_DATA \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_CALLBACK_WRAPPERS \
	FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODBAR_API UClass* StaticClass<class UModbarInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MultiArenaBrawler_Plugins_ModBar_Source_ModBar_ModbarInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
