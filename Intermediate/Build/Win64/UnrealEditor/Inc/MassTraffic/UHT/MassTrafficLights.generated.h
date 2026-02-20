// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficLights.h"

#ifdef MASSTRAFFIC_MassTrafficLights_generated_h
#error "MassTrafficLights.generated.h already included, missing '#pragma once' in MassTrafficLights.h"
#endif
#define MASSTRAFFIC_MassTrafficLights_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficLightTypeData *****************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficLightTypeData;
// ********** End ScriptStruct FMassTrafficLightTypeData *******************************************

// ********** Begin Class UMassTrafficLightTypesDataAsset ******************************************
struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficLightTypesDataAsset(); \
	friend struct ::Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficLightTypesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficLightTypesDataAsset)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficLightTypesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficLightTypesDataAsset(UMassTrafficLightTypesDataAsset&&) = delete; \
	UMassTrafficLightTypesDataAsset(const UMassTrafficLightTypesDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficLightTypesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficLightTypesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficLightTypesDataAsset) \
	NO_API virtual ~UMassTrafficLightTypesDataAsset();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_33_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_36_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficLightTypesDataAsset;

// ********** End Class UMassTrafficLightTypesDataAsset ********************************************

// ********** Begin ScriptStruct FMassTrafficLightInstanceDesc *************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficLightInstanceDesc;
// ********** End ScriptStruct FMassTrafficLightInstanceDesc ***************************************

// ********** Begin Class UMassTrafficLightInstancesDataAsset **************************************
#if WITH_EDITOR
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execClearTrafficLights); \
	DECLARE_FUNCTION(execPopulateTrafficLightsFromMap);
#else // WITH_EDITOR
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficLightInstancesDataAsset(); \
	friend struct ::Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficLightInstancesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficLightInstancesDataAsset)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficLightInstancesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficLightInstancesDataAsset(UMassTrafficLightInstancesDataAsset&&) = delete; \
	UMassTrafficLightInstancesDataAsset(const UMassTrafficLightInstancesDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficLightInstancesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficLightInstancesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficLightInstancesDataAsset) \
	NO_API virtual ~UMassTrafficLightInstancesDataAsset();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_72_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficLightInstancesDataAsset;

// ********** End Class UMassTrafficLightInstancesDataAsset ****************************************

// ********** Begin ScriptStruct FMassTrafficLightsParameters **************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassConstSharedFragment Super;


struct FMassTrafficLightsParameters;
// ********** End ScriptStruct FMassTrafficLightsParameters ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
