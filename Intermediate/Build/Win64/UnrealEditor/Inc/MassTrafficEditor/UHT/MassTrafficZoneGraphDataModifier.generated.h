// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficZoneGraphDataModifier.h"

#ifdef MASSTRAFFICEDITOR_MassTrafficZoneGraphDataModifier_generated_h
#error "MassTrafficZoneGraphDataModifier.generated.h already included, missing '#pragma once' in MassTrafficZoneGraphDataModifier.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficZoneGraphDataModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassTrafficZoneGraphDataModifier ****************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUntagCrosswalkLanesNearFreewayLaneEndPoints); \
	DECLARE_FUNCTION(execSnapZoneGraphDataToGround); \
	DECLARE_FUNCTION(execBuildZoneGraphData);


struct Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics;
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficZoneGraphDataModifier(); \
	friend struct ::Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFICEDITOR_API UClass* ::Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficZoneGraphDataModifier, AEditorUtilityActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), Z_Construct_UClass_AMassTrafficZoneGraphDataModifier_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficZoneGraphDataModifier)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficZoneGraphDataModifier(AMassTrafficZoneGraphDataModifier&&) = delete; \
	AMassTrafficZoneGraphDataModifier(const AMassTrafficZoneGraphDataModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficZoneGraphDataModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficZoneGraphDataModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficZoneGraphDataModifier) \
	NO_API virtual ~AMassTrafficZoneGraphDataModifier();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_19_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficZoneGraphDataModifier;

// ********** End Class AMassTrafficZoneGraphDataModifier ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficZoneGraphDataModifier_h

// ********** Begin Enum EMassTrafficZoneGraphModifierTraceType ************************************
#define FOREACH_ENUM_EMASSTRAFFICZONEGRAPHMODIFIERTRACETYPE(op) \
	op(EMassTrafficZoneGraphModifierTraceType::Line) \
	op(EMassTrafficZoneGraphModifierTraceType::Sphere) 

enum class EMassTrafficZoneGraphModifierTraceType : uint8;
template<> struct TIsUEnumClass<EMassTrafficZoneGraphModifierTraceType> { enum { Value = true }; };
template<> MASSTRAFFICEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficZoneGraphModifierTraceType>();
// ********** End Enum EMassTrafficZoneGraphModifierTraceType **************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
