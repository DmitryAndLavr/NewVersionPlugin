// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleSpawnDataGenerator.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleSpawnDataGenerator_generated_h
#error "MassTrafficVehicleSpawnDataGenerator.generated.h already included, missing '#pragma once' in MassTrafficVehicleSpawnDataGenerator.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleSpawnDataGenerator_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficVehicleSpacing ****************************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficVehicleSpacing_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficVehicleSpacing;
// ********** End ScriptStruct FMassTrafficVehicleSpacing ******************************************

// ********** Begin Class UMassTrafficVehicleSpawnDataGenerator ************************************
struct Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleSpawnDataGenerator(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleSpawnDataGenerator, UMassEntitySpawnDataGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleSpawnDataGenerator_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleSpawnDataGenerator)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleSpawnDataGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleSpawnDataGenerator(UMassTrafficVehicleSpawnDataGenerator&&) = delete; \
	UMassTrafficVehicleSpawnDataGenerator(const UMassTrafficVehicleSpawnDataGenerator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleSpawnDataGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleSpawnDataGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleSpawnDataGenerator) \
	NO_API virtual ~UMassTrafficVehicleSpawnDataGenerator();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_42_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_45_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleSpawnDataGenerator;

// ********** End Class UMassTrafficVehicleSpawnDataGenerator **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSpawnDataGenerator_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
