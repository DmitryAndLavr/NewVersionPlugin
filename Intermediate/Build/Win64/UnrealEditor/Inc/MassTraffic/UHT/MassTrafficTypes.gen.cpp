// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficTypes() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficFloatAndID();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficFloatAndID ********************************************
struct Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficFloatAndID); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficFloatAndID); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Struct to store a float value with an ID.\n * Can work as a TMap key.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Struct to store a float value with an ID.\nCan work as a TMap key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficFloatAndID constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficFloatAndID constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficFloatAndID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID;
class UScriptStruct* FMassTrafficFloatAndID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficFloatAndID, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficFloatAndID"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficFloatAndID Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficFloatAndID, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficFloatAndID, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewProp_ID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficFloatAndID Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficFloatAndID",
	Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::PropPointers),
	sizeof(FMassTrafficFloatAndID),
	alignof(FMassTrafficFloatAndID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficFloatAndID()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficFloatAndID **********************************************

// ********** Begin ScriptStruct FZoneGraphTrafficLaneData *****************************************
struct Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZoneGraphTrafficLaneData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZoneGraphTrafficLaneData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZoneGraphTrafficLaneData constinit property declarations *********
// ********** End ScriptStruct FZoneGraphTrafficLaneData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTrafficLaneData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData;
class UScriptStruct* FZoneGraphTrafficLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ZoneGraphTrafficLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"ZoneGraphTrafficLaneData",
	nullptr,
	0,
	sizeof(FZoneGraphTrafficLaneData),
	alignof(FZoneGraphTrafficLaneData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData.InnerSingleton);
}
// ********** End ScriptStruct FZoneGraphTrafficLaneData *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficFloatAndID::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficFloatAndID_Statics::NewStructOps, TEXT("MassTrafficFloatAndID"),&Z_Registration_Info_UScriptStruct_FMassTrafficFloatAndID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficFloatAndID), 2771215118U) },
		{ FZoneGraphTrafficLaneData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTrafficLaneData_Statics::NewStructOps, TEXT("ZoneGraphTrafficLaneData"),&Z_Registration_Info_UScriptStruct_FZoneGraphTrafficLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTrafficLaneData), 3772768570U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h__Script_MassTraffic_2464765686{
	TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTypes_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
