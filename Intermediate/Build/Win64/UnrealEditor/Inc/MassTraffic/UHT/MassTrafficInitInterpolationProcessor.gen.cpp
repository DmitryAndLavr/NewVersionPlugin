// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInitInterpolationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitInterpolationProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitInterpolationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficInitInterpolationProcessor ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor;
UClass* UMassTrafficInitInterpolationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInitInterpolationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInitInterpolationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInitInterpolationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_NoRegister()
{
	return UMassTrafficInitInterpolationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitInterpolationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitInterpolationProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInitInterpolationProcessor constinit property declarations ***
// ********** End Class UMassTrafficInitInterpolationProcessor constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::ClassParams = {
	&UMassTrafficInitInterpolationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInitInterpolationProcessor::StaticRegisterNativesUMassTrafficInitInterpolationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInitInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInitInterpolationProcessor);
UMassTrafficInitInterpolationProcessor::~UMassTrafficInitInterpolationProcessor() {}
// ********** End Class UMassTrafficInitInterpolationProcessor *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitInterpolationProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitInterpolationProcessor, UMassTrafficInitInterpolationProcessor::StaticClass, TEXT("UMassTrafficInitInterpolationProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitInterpolationProcessor), 1386166282U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitInterpolationProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitInterpolationProcessor_h__Script_MassTraffic_1504324120{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitInterpolationProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitInterpolationProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
