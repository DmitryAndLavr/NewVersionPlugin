// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficInstancePlaybackHelpers.h"

#ifdef MASSTRAFFIC_MassTrafficInstancePlaybackHelpers_generated_h
#error "MassTrafficInstancePlaybackHelpers.generated.h already included, missing '#pragma once' in MassTrafficInstancePlaybackHelpers.h"
#endif
#define MASSTRAFFIC_MassTrafficInstancePlaybackHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimToTextureDataAsset;
struct FMassTrafficAnimState;

// ********** Begin ScriptStruct FMassTrafficAnimState *********************************************
struct Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficAnimState_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct();


struct FMassTrafficAnimState;
// ********** End ScriptStruct FMassTrafficAnimState ***********************************************

// ********** Begin ScriptStruct FMassTrafficInstancePlaybackData **********************************
struct Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficInstancePlaybackData_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct();


struct FMassTrafficInstancePlaybackData;
// ********** End ScriptStruct FMassTrafficInstancePlaybackData ************************************

// ********** Begin ScriptStruct FMassTrafficAnimationSyncData *************************************
struct Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_49_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficAnimationSyncData_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct();


struct FMassTrafficAnimationSyncData;
// ********** End ScriptStruct FMassTrafficAnimationSyncData ***************************************

// ********** Begin ScriptStruct FMassTrafficInstanceData ******************************************
struct Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_59_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficInstanceData_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct();


struct FMassTrafficInstanceData;
// ********** End ScriptStruct FMassTrafficInstanceData ********************************************

// ********** Begin Class UMassTrafficInstancePlaybackLibrary **************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimStateFromDataAsset);


struct Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficInstancePlaybackLibrary(); \
	friend struct ::Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficInstancePlaybackLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficInstancePlaybackLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficInstancePlaybackLibrary)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficInstancePlaybackLibrary(UMassTrafficInstancePlaybackLibrary&&) = delete; \
	UMassTrafficInstancePlaybackLibrary(const UMassTrafficInstancePlaybackLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficInstancePlaybackLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficInstancePlaybackLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficInstancePlaybackLibrary) \
	NO_API virtual ~UMassTrafficInstancePlaybackLibrary();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_70_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficInstancePlaybackLibrary;

// ********** End Class UMassTrafficInstancePlaybackLibrary ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInstancePlaybackHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
