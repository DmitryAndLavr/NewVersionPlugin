// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleSimulationTrait.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleSimulationTrait_generated_h
#error "MassTrafficVehicleSimulationTrait.generated.h already included, missing '#pragma once' in MassTrafficVehicleSimulationTrait.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleSimulationTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficVehicleSimulationParameters ***************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassConstSharedFragment Super;


struct FMassTrafficVehicleSimulationParameters;
// ********** End ScriptStruct FMassTrafficVehicleSimulationParameters *****************************

// ********** Begin Class UMassTrafficVehicleSimulationTrait ***************************************
struct Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleSimulationTrait(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleSimulationTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleSimulationTrait)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleSimulationTrait(UMassTrafficVehicleSimulationTrait&&) = delete; \
	UMassTrafficVehicleSimulationTrait(const UMassTrafficVehicleSimulationTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleSimulationTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleSimulationTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleSimulationTrait) \
	NO_API virtual ~UMassTrafficVehicleSimulationTrait();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_38_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_41_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleSimulationTrait;

// ********** End Class UMassTrafficVehicleSimulationTrait *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
