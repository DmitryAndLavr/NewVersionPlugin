// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficSubsystem.h"

#ifdef MASSTRAFFIC_MassTrafficSubsystem_generated_h
#error "MassTrafficSubsystem.generated.h already included, missing '#pragma once' in MassTrafficSubsystem.h"
#endif
#define MASSTRAFFIC_MassTrafficSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FZoneGraphLaneLocationEx;
struct FZoneGraphTagFilterEx;

// ********** Begin ScriptStruct FZoneGraphTagFilterEx *********************************************
struct Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct(); \
	typedef FZoneGraphTagFilter Super;


struct FZoneGraphTagFilterEx;
// ********** End ScriptStruct FZoneGraphTagFilterEx ***********************************************

// ********** Begin ScriptStruct FZoneGraphLaneLocationEx ******************************************
struct Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct(); \
	typedef FZoneGraphLaneLocation Super;


struct FZoneGraphLaneLocationEx;
// ********** End ScriptStruct FZoneGraphLaneLocationEx ********************************************

// ********** Begin Class UMassTrafficSubsystem ****************************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindNearestLane); \
	DECLARE_FUNCTION(execClearAllTrafficLanes); \
	DECLARE_FUNCTION(execHasParkedVehicleAgents); \
	DECLARE_FUNCTION(execGetNumParkedVehicleAgents); \
	DECLARE_FUNCTION(execHasTrafficVehicleAgents); \
	DECLARE_FUNCTION(execGetNumTrafficVehicleAgents);


struct Z_Construct_UClass_UMassTrafficSubsystem_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficSubsystem(); \
	friend struct ::Z_Construct_UClass_UMassTrafficSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficSubsystem, UMassSubsystemBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficSubsystem)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficSubsystem(UMassTrafficSubsystem&&) = delete; \
	UMassTrafficSubsystem(const UMassTrafficSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficSubsystem) \
	NO_API virtual ~UMassTrafficSubsystem();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_37_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficSubsystem;

// ********** End Class UMassTrafficSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
