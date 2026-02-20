// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInitIntersectionsProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitIntersectionsProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficIntersectionsSpawnData ********************************
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficIntersectionsSpawnData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficIntersectionsSpawnData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficInitIntersectionsProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficIntersectionsSpawnData constinit property declarations 
// ********** End ScriptStruct FMassTrafficIntersectionsSpawnData constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionsSpawnData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData;
class UScriptStruct* FMassTrafficIntersectionsSpawnData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionsSpawnData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficIntersectionsSpawnData",
	nullptr,
	0,
	sizeof(FMassTrafficIntersectionsSpawnData),
	alignof(FMassTrafficIntersectionsSpawnData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficIntersectionsSpawnData **********************************

// ********** Begin Class UMassTrafficInitIntersectionsProcessor ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor;
UClass* UMassTrafficInitIntersectionsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInitIntersectionsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInitIntersectionsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInitIntersectionsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_NoRegister()
{
	return UMassTrafficInitIntersectionsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitIntersectionsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitIntersectionsProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInitIntersectionsProcessor constinit property declarations ***
// ********** End Class UMassTrafficInitIntersectionsProcessor constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitIntersectionsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::ClassParams = {
	&UMassTrafficInitIntersectionsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInitIntersectionsProcessor::StaticRegisterNativesUMassTrafficInitIntersectionsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInitIntersectionsProcessor);
UMassTrafficInitIntersectionsProcessor::~UMassTrafficInitIntersectionsProcessor() {}
// ********** End Class UMassTrafficInitIntersectionsProcessor *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficIntersectionsSpawnData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionsSpawnData_Statics::NewStructOps, TEXT("MassTrafficIntersectionsSpawnData"),&Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionsSpawnData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionsSpawnData), 4032956424U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitIntersectionsProcessor, UMassTrafficInitIntersectionsProcessor::StaticClass, TEXT("UMassTrafficInitIntersectionsProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitIntersectionsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitIntersectionsProcessor), 17113693U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_10322283{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitIntersectionsProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
