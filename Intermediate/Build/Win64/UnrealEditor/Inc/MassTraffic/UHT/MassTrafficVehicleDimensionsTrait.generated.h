// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleDimensionsTrait.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleDimensionsTrait_generated_h
#error "MassTrafficVehicleDimensionsTrait.generated.h already included, missing '#pragma once' in MassTrafficVehicleDimensionsTrait.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleDimensionsTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficVehicleDimensionsParameters ***************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficVehicleDimensionsParameters;
// ********** End ScriptStruct FMassTrafficVehicleDimensionsParameters *****************************

// ********** Begin Class UMassTrafficVehicleDimensionsTrait ***************************************
struct Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleDimensionsTrait(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleDimensionsTrait, UMassEntityTraitBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleDimensionsTrait)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleDimensionsTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleDimensionsTrait(UMassTrafficVehicleDimensionsTrait&&) = delete; \
	UMassTrafficVehicleDimensionsTrait(const UMassTrafficVehicleDimensionsTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleDimensionsTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleDimensionsTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleDimensionsTrait) \
	NO_API virtual ~UMassTrafficVehicleDimensionsTrait();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_29_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_32_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleDimensionsTrait;

// ********** End Class UMassTrafficVehicleDimensionsTrait *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
