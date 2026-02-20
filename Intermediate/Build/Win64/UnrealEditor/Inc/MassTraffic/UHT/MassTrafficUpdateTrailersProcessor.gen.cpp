// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficUpdateTrailersProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateTrailersProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficUpdateTrailersProcessor **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor;
UClass* UMassTrafficUpdateTrailersProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficUpdateTrailersProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficUpdateTrailersProcessor"),
			Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficUpdateTrailersProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_NoRegister()
{
	return UMassTrafficUpdateTrailersProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateTrailersProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateTrailersProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficUpdateTrailersProcessor constinit property declarations ******
// ********** End Class UMassTrafficUpdateTrailersProcessor constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateTrailersProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::ClassParams = {
	&UMassTrafficUpdateTrailersProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficUpdateTrailersProcessor::StaticRegisterNativesUMassTrafficUpdateTrailersProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficUpdateTrailersProcessor);
UMassTrafficUpdateTrailersProcessor::~UMassTrafficUpdateTrailersProcessor() {}
// ********** End Class UMassTrafficUpdateTrailersProcessor ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateTrailersProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateTrailersProcessor, UMassTrafficUpdateTrailersProcessor::StaticClass, TEXT("UMassTrafficUpdateTrailersProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateTrailersProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateTrailersProcessor), 3404550394U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateTrailersProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateTrailersProcessor_h__Script_MassTraffic_393798358{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateTrailersProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateTrailersProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
