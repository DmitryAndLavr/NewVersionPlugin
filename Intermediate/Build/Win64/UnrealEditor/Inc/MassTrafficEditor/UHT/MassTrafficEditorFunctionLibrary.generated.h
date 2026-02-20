// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficEditorFunctionLibrary.h"

#ifdef MASSTRAFFICEDITOR_MassTrafficEditorFunctionLibrary_generated_h
#error "MassTrafficEditorFunctionLibrary.generated.h already included, missing '#pragma once' in MassTrafficEditorFunctionLibrary.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficEditorFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FZoneGraphTag;
struct FZoneGraphTagMask;

// ********** Begin Class UMassTrafficEditorFunctionLibrary ****************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddTagToTagMask);


struct Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics;
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficEditorFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFICEDITOR_API UClass* ::Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficEditorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficEditorFunctionLibrary)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficEditorFunctionLibrary(UMassTrafficEditorFunctionLibrary&&) = delete; \
	UMassTrafficEditorFunctionLibrary(const UMassTrafficEditorFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficEditorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficEditorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficEditorFunctionLibrary) \
	NO_API virtual ~UMassTrafficEditorFunctionLibrary();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_13_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficEditorFunctionLibrary;

// ********** End Class UMassTrafficEditorFunctionLibrary ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
