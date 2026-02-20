// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficSettings.h"

#ifdef MASSTRAFFIC_MassTrafficSettings_generated_h
#error "MassTrafficSettings.generated.h already included, missing '#pragma once' in MassTrafficSettings.h"
#endif
#define MASSTRAFFIC_MassTrafficSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficLaneSpeedLimit ****************************************
struct Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficLaneSpeedLimit_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficLaneSpeedLimit;
// ********** End ScriptStruct FMassTrafficLaneSpeedLimit ******************************************

// ********** Begin ScriptStruct FMassTrafficLaneDensity *******************************************
struct Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficLaneDensity_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficLaneDensity;
// ********** End ScriptStruct FMassTrafficLaneDensity *********************************************

// ********** Begin Class UMassTrafficSettings *****************************************************
struct Z_Construct_UClass_UMassTrafficSettings_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSettings_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficSettings(); \
	friend struct ::Z_Construct_UClass_UMassTrafficSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficSettings, UMassModuleSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficSettings_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Plugins");} \



#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficSettings(UMassTrafficSettings&&) = delete; \
	UMassTrafficSettings(const UMassTrafficSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficSettings) \
	NO_API virtual ~UMassTrafficSettings();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_50_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_53_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficSettings;

// ********** End Class UMassTrafficSettings *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSettings_h

// ********** Begin Enum EMassTrafficLaneChangeMode ************************************************
#define FOREACH_ENUM_EMASSTRAFFICLANECHANGEMODE(op) \
	op(EMassTrafficLaneChangeMode::Off) \
	op(EMassTrafficLaneChangeMode::On) \
	op(EMassTrafficLaneChangeMode::On_OnlyForOffLOD) 

enum class EMassTrafficLaneChangeMode : uint8;
template<> struct TIsUEnumClass<EMassTrafficLaneChangeMode> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficLaneChangeMode>();
// ********** End Enum EMassTrafficLaneChangeMode **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
