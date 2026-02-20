// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficIntersectionComponent.h"

#ifdef MASSTRAFFIC_MassTrafficIntersectionComponent_generated_h
#error "MassTrafficIntersectionComponent.generated.h already included, missing '#pragma once' in MassTrafficIntersectionComponent.h"
#endif
#define MASSTRAFFIC_MassTrafficIntersectionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTrafficLightSetup ************************************************
struct Z_Construct_UScriptStruct_FTrafficLightSetup_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrafficLightSetup_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct();


struct FTrafficLightSetup;
// ********** End ScriptStruct FTrafficLightSetup **************************************************

// ********** Begin Class UMassTrafficIntersectionComponent ****************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshLanes);


struct Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionComponent_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficIntersectionComponent(); \
	friend struct ::Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficIntersectionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficIntersectionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficIntersectionComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficIntersectionComponent)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficIntersectionComponent(UMassTrafficIntersectionComponent&&) = delete; \
	UMassTrafficIntersectionComponent(const UMassTrafficIntersectionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficIntersectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficIntersectionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficIntersectionComponent) \
	NO_API virtual ~UMassTrafficIntersectionComponent();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_51_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficIntersectionComponent;

// ********** End Class UMassTrafficIntersectionComponent ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h

// ********** Begin Enum ETrafficIntersectionType **************************************************
#define FOREACH_ENUM_ETRAFFICINTERSECTIONTYPE(op) \
	op(ETrafficIntersectionType::PriorityRight) \
	op(ETrafficIntersectionType::PriorityRoad) \
	op(ETrafficIntersectionType::TrafficLights) 

enum class ETrafficIntersectionType : uint8;
template<> struct TIsUEnumClass<ETrafficIntersectionType> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficIntersectionType>();
// ********** End Enum ETrafficIntersectionType ****************************************************

// ********** Begin Enum ETrafficLightPhase ********************************************************
#define FOREACH_ENUM_ETRAFFICLIGHTPHASE(op) \
	op(ETrafficLightPhase::Red) \
	op(ETrafficLightPhase::RedYellow) \
	op(ETrafficLightPhase::Green) \
	op(ETrafficLightPhase::Yellow) 

enum class ETrafficLightPhase : uint8;
template<> struct TIsUEnumClass<ETrafficLightPhase> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficLightPhase>();
// ********** End Enum ETrafficLightPhase **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
