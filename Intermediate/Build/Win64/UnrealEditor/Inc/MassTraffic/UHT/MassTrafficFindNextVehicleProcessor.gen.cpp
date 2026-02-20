// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFindNextVehicleProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindNextVehicleProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficFindNextVehicleProcessor *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor;
UClass* UMassTrafficFindNextVehicleProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFindNextVehicleProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFindNextVehicleProcessor"),
			Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficFindNextVehicleProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_NoRegister()
{
	return UMassTrafficFindNextVehicleProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindNextVehicleProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindNextVehicleProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFindNextVehicleProcessor constinit property declarations *****
// ********** End Class UMassTrafficFindNextVehicleProcessor constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindNextVehicleProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams = {
	&UMassTrafficFindNextVehicleProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficFindNextVehicleProcessor::StaticRegisterNativesUMassTrafficFindNextVehicleProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFindNextVehicleProcessor);
UMassTrafficFindNextVehicleProcessor::~UMassTrafficFindNextVehicleProcessor() {}
// ********** End Class UMassTrafficFindNextVehicleProcessor ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindNextVehicleProcessor, UMassTrafficFindNextVehicleProcessor::StaticClass, TEXT("UMassTrafficFindNextVehicleProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindNextVehicleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindNextVehicleProcessor), 3126328466U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h__Script_MassTraffic_424535828{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindNextVehicleProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
