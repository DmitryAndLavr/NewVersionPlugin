// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInitTrafficVehiclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitTrafficVehiclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficVehiclesSpawnData *************************************
struct Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehiclesSpawnData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehiclesSpawnData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrafficVehiclesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehiclesSpawnData constinit property declarations *****
// ********** End ScriptStruct FMassTrafficVehiclesSpawnData constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehiclesSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData;
class UScriptStruct* FMassTrafficVehiclesSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehiclesSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehiclesSpawnData",
	nullptr,
	0,
	sizeof(FMassTrafficVehiclesSpawnData),
	alignof(FMassTrafficVehiclesSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehiclesSpawnData ***************************************

// ********** Begin Class UMassTrafficInitTrafficVehiclesProcessor *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor;
UClass* UMassTrafficInitTrafficVehiclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInitTrafficVehiclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInitTrafficVehiclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInitTrafficVehiclesProcessor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_NoRegister()
{
	return UMassTrafficInitTrafficVehiclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Assigns FDataFragment_TrafficVehicleType.AgentType, FDataFragment_TrafficVehicleType.AgentIndex and \n * FDataFragment_LaneLocation.LaneLocation according to the distribution probabilities in \n * TrafficVehicleConfiguration.\n * \n * Initial lane locations are ensured to be non-overlapping on a given lane. \n */" },
#endif
		{ "DisplayName", "Init Traffic Vehicles" },
		{ "IncludePath", "MassTrafficInitTrafficVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrafficVehiclesProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assigns FDataFragment_TrafficVehicleType.AgentType, FDataFragment_TrafficVehicleType.AgentIndex and\nFDataFragment_LaneLocation.LaneLocation according to the distribution probabilities in\nTrafficVehicleConfiguration.\n\nInitial lane locations are ensured to be non-overlapping on a given lane." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInitTrafficVehiclesProcessor constinit property declarations *
// ********** End Class UMassTrafficInitTrafficVehiclesProcessor constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitTrafficVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficInitTrafficVehiclesProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInitTrafficVehiclesProcessor::StaticRegisterNativesUMassTrafficInitTrafficVehiclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInitTrafficVehiclesProcessor);
UMassTrafficInitTrafficVehiclesProcessor::~UMassTrafficInitTrafficVehiclesProcessor() {}
// ********** End Class UMassTrafficInitTrafficVehiclesProcessor ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehiclesSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehiclesSpawnData_Statics::NewStructOps, TEXT("MassTrafficVehiclesSpawnData"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehiclesSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehiclesSpawnData), 203941268U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitTrafficVehiclesProcessor, UMassTrafficInitTrafficVehiclesProcessor::StaticClass, TEXT("UMassTrafficInitTrafficVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitTrafficVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitTrafficVehiclesProcessor), 4086150336U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_1542868370{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
