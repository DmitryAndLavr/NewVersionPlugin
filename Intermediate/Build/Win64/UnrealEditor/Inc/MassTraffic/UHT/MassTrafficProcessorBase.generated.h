// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficProcessorBase.h"

#ifdef MASSTRAFFIC_MassTrafficProcessorBase_generated_h
#error "MassTrafficProcessorBase.generated.h already included, missing '#pragma once' in MassTrafficProcessorBase.h"
#endif
#define MASSTRAFFIC_MassTrafficProcessorBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTrafficProcessorBase ************************************************
struct Z_Construct_UClass_UMassTrafficProcessorBase_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficProcessorBase(); \
	friend struct ::Z_Construct_UClass_UMassTrafficProcessorBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficProcessorBase, UMassProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficProcessorBase)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficProcessorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficProcessorBase(UMassTrafficProcessorBase&&) = delete; \
	UMassTrafficProcessorBase(const UMassTrafficProcessorBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficProcessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficProcessorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficProcessorBase) \
	NO_API virtual ~UMassTrafficProcessorBase();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_12_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficProcessorBase;

// ********** End Class UMassTrafficProcessorBase **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
