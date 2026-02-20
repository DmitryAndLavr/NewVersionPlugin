// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleControlProcessor.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleControlProcessor_generated_h
#error "MassTrafficVehicleControlProcessor.generated.h already included, missing '#pragma once' in MassTrafficVehicleControlProcessor.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleControlProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTrafficVehicleControlProcessor **************************************
struct Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleControlProcessor(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleControlProcessor, UMassTrafficProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleControlProcessor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleControlProcessor(UMassTrafficVehicleControlProcessor&&) = delete; \
	UMassTrafficVehicleControlProcessor(const UMassTrafficVehicleControlProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleControlProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleControlProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficVehicleControlProcessor) \
	NO_API virtual ~UMassTrafficVehicleControlProcessor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_11_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_14_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleControlProcessor;

// ********** End Class UMassTrafficVehicleControlProcessor ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
