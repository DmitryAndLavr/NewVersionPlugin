// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficLaneChangingProcessor.h"

#ifdef MASSTRAFFIC_MassTrafficLaneChangingProcessor_generated_h
#error "MassTrafficLaneChangingProcessor.generated.h already included, missing '#pragma once' in MassTrafficLaneChangingProcessor.h"
#endif
#define MASSTRAFFIC_MassTrafficLaneChangingProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTrafficLaneChangingProcessor ****************************************
struct Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLaneChangingProcessor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficLaneChangingProcessor(); \
	friend struct ::Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficLaneChangingProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficLaneChangingProcessor, UMassTrafficProcessorBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficLaneChangingProcessor_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficLaneChangingProcessor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficLaneChangingProcessor(UMassTrafficLaneChangingProcessor&&) = delete; \
	UMassTrafficLaneChangingProcessor(const UMassTrafficLaneChangingProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficLaneChangingProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficLaneChangingProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficLaneChangingProcessor) \
	NO_API virtual ~UMassTrafficLaneChangingProcessor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_15_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_18_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficLaneChangingProcessor;

// ********** End Class UMassTrafficLaneChangingProcessor ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
