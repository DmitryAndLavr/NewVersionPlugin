// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficInitParkedVehiclesProcessor.h"

#ifdef MASSTRAFFIC_MassTrafficInitParkedVehiclesProcessor_generated_h
#error "MassTrafficInitParkedVehiclesProcessor.generated.h already included, missing '#pragma once' in MassTrafficInitParkedVehiclesProcessor.h"
#endif
#define MASSTRAFFIC_MassTrafficInitParkedVehiclesProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficParkedVehiclesSpawnData *******************************
struct Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficParkedVehiclesSpawnData;
// ********** End ScriptStruct FMassTrafficParkedVehiclesSpawnData *********************************

// ********** Begin Class UMassTrafficInitParkedVehiclesProcessor **********************************
struct Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficInitParkedVehiclesProcessor(); \
	friend struct ::Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficInitParkedVehiclesProcessor, UMassTrafficProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficInitParkedVehiclesProcessor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficInitParkedVehiclesProcessor(UMassTrafficInitParkedVehiclesProcessor&&) = delete; \
	UMassTrafficInitParkedVehiclesProcessor(const UMassTrafficInitParkedVehiclesProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficInitParkedVehiclesProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficInitParkedVehiclesProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficInitParkedVehiclesProcessor) \
	NO_API virtual ~UMassTrafficInitParkedVehiclesProcessor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_25_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_28_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficInitParkedVehiclesProcessor;

// ********** End Class UMassTrafficInitParkedVehiclesProcessor ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
