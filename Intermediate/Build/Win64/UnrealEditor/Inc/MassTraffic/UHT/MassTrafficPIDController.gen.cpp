// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficPIDController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficPIDController() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDController();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficPIDControllerParams ***********************************
struct Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPIDControllerParams); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPIDControllerParams); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProportionalFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegralFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntegralWindow_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DerivativeFactor_MetaData[] = {
		{ "Category", "MassTrafficPIDControllerParams" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPIDControllerParams constinit property declarations ***
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProportionalFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntegralFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntegralWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DerivativeFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficPIDControllerParams constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDControllerParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams;
class UScriptStruct* FMassTrafficPIDControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficPIDControllerParams Property Definitions **************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_ProportionalFactor = { "ProportionalFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, ProportionalFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProportionalFactor_MetaData), NewProp_ProportionalFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralFactor = { "IntegralFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, IntegralFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegralFactor_MetaData), NewProp_IntegralFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralWindow = { "IntegralWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, IntegralWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntegralWindow_MetaData), NewProp_IntegralWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_DerivativeFactor = { "DerivativeFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDControllerParams, DerivativeFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DerivativeFactor_MetaData), NewProp_DerivativeFactor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_ProportionalFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_IntegralWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewProp_DerivativeFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficPIDControllerParams Property Definitions ****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPIDControllerParams",
	Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::PropPointers),
	sizeof(FMassTrafficPIDControllerParams),
	alignof(FMassTrafficPIDControllerParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPIDControllerParams *************************************

// ********** Begin ScriptStruct FMassTrafficPIDController *****************************************
struct Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPIDController); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPIDController); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorIntegral_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastError_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficPIDController.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPIDController constinit property declarations *********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorIntegral;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficPIDController constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDController>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPIDController;
class UScriptStruct* FMassTrafficPIDController::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDController, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDController"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficPIDController Property Definitions ********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_ErrorIntegral = { "ErrorIntegral", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDController, ErrorIntegral), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorIntegral_MetaData), NewProp_ErrorIntegral_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_LastError = { "LastError", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficPIDController, LastError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastError_MetaData), NewProp_LastError_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_ErrorIntegral,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewProp_LastError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficPIDController Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPIDController",
	Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::PropPointers),
	sizeof(FMassTrafficPIDController),
	alignof(FMassTrafficPIDController),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDController()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPIDController.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPIDController *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficPIDControllerParams::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDControllerParams_Statics::NewStructOps, TEXT("MassTrafficPIDControllerParams"),&Z_Registration_Info_UScriptStruct_FMassTrafficPIDControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDControllerParams), 3732537474U) },
		{ FMassTrafficPIDController::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDController_Statics::NewStructOps, TEXT("MassTrafficPIDController"),&Z_Registration_Info_UScriptStruct_FMassTrafficPIDController, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDController), 3675684033U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h__Script_MassTraffic_1687356643{
	TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPIDController_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
