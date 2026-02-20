// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLaneChange.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLaneChange() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficLaneChangeFitReport ***********************************
struct Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLaneChangeFitReport); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLaneChangeFitReport); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLaneChange.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLaneChangeFitReport constinit property declarations ***
// ********** End ScriptStruct FMassTrafficLaneChangeFitReport constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneChangeFitReport>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport;
class UScriptStruct* FMassTrafficLaneChangeFitReport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneChangeFitReport"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLaneChangeFitReport",
	nullptr,
	0,
	sizeof(FMassTrafficLaneChangeFitReport),
	alignof(FMassTrafficLaneChangeFitReport),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLaneChangeFitReport *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficLaneChangeFitReport::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneChangeFitReport_Statics::NewStructOps, TEXT("MassTrafficLaneChangeFitReport"),&Z_Registration_Info_UScriptStruct_FMassTrafficLaneChangeFitReport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneChangeFitReport), 2703009837U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h__Script_MassTraffic_2839623856{
	TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChange_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
