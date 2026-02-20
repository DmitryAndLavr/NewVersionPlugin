// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInitParkedVehiclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitParkedVehiclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficParkedVehiclesSpawnData *******************************
struct Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficParkedVehiclesSpawnData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficParkedVehiclesSpawnData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficParkedVehiclesSpawnData constinit property declarations 
// ********** End ScriptStruct FMassTrafficParkedVehiclesSpawnData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficParkedVehiclesSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData;
class UScriptStruct* FMassTrafficParkedVehiclesSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficParkedVehiclesSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficParkedVehiclesSpawnData",
	nullptr,
	0,
	sizeof(FMassTrafficParkedVehiclesSpawnData),
	alignof(FMassTrafficParkedVehiclesSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficParkedVehiclesSpawnData *********************************

// ********** Begin Class UMassTrafficInitParkedVehiclesProcessor **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor;
UClass* UMassTrafficInitParkedVehiclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInitParkedVehiclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInitParkedVehiclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInitParkedVehiclesProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_NoRegister()
{
	return UMassTrafficInitParkedVehiclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitParkedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Public/MassTrafficInitParkedVehiclesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInitParkedVehiclesProcessor constinit property declarations **
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficInitParkedVehiclesProcessor constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitParkedVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics

// ********** Begin Class UMassTrafficInitParkedVehiclesProcessor Property Definitions *************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficInitParkedVehiclesProcessor, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::NewProp_RandomStream,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficInitParkedVehiclesProcessor Property Definitions ***************
UObject* (*const Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficInitParkedVehiclesProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInitParkedVehiclesProcessor::StaticRegisterNativesUMassTrafficInitParkedVehiclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInitParkedVehiclesProcessor);
UMassTrafficInitParkedVehiclesProcessor::~UMassTrafficInitParkedVehiclesProcessor() {}
// ********** End Class UMassTrafficInitParkedVehiclesProcessor ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficParkedVehiclesSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficParkedVehiclesSpawnData_Statics::NewStructOps, TEXT("MassTrafficParkedVehiclesSpawnData"),&Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehiclesSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficParkedVehiclesSpawnData), 927461590U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitParkedVehiclesProcessor, UMassTrafficInitParkedVehiclesProcessor::StaticClass, TEXT("UMassTrafficInitParkedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitParkedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitParkedVehiclesProcessor), 1950248011U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_1558455566{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
