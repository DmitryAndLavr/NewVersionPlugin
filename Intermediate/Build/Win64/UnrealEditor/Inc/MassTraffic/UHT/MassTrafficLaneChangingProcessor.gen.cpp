// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLaneChangingProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLaneChangingProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLaneChangingProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLaneChangingProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficLaneChangingProcessor ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor;
UClass* UMassTrafficLaneChangingProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLaneChangingProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLaneChangingProcessor"),
			Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficLaneChangingProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLaneChangingProcessor_NoRegister()
{
	return UMassTrafficLaneChangingProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficLaneChangingProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLaneChangingProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLaneChangingProcessor constinit property declarations ********
// ********** End Class UMassTrafficLaneChangingProcessor constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLaneChangingProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::ClassParams = {
	&UMassTrafficLaneChangingProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficLaneChangingProcessor::StaticRegisterNativesUMassTrafficLaneChangingProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficLaneChangingProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficLaneChangingProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLaneChangingProcessor);
UMassTrafficLaneChangingProcessor::~UMassTrafficLaneChangingProcessor() {}
// ********** End Class UMassTrafficLaneChangingProcessor ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLaneChangingProcessor, UMassTrafficLaneChangingProcessor::StaticClass, TEXT("UMassTrafficLaneChangingProcessor"), &Z_Registration_Info_UClass_UMassTrafficLaneChangingProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLaneChangingProcessor), 1978049905U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h__Script_MassTraffic_281892078{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLaneChangingProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
