// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficRescueLaneProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficRescueLaneProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRescueLaneProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRescueLaneProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficRescueLaneProcessor ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor;
UClass* UMassTrafficRescueLaneProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficRescueLaneProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficRescueLaneProcessor"),
			Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficRescueLaneProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficRescueLaneProcessor_NoRegister()
{
	return UMassTrafficRescueLaneProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficRescueLaneProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficRescueLaneProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficRescueLaneProcessor constinit property declarations **********
// ********** End Class UMassTrafficRescueLaneProcessor constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficRescueLaneProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::ClassParams = {
	&UMassTrafficRescueLaneProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficRescueLaneProcessor::StaticRegisterNativesUMassTrafficRescueLaneProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficRescueLaneProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficRescueLaneProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficRescueLaneProcessor);
UMassTrafficRescueLaneProcessor::~UMassTrafficRescueLaneProcessor() {}
// ********** End Class UMassTrafficRescueLaneProcessor ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRescueLaneProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficRescueLaneProcessor, UMassTrafficRescueLaneProcessor::StaticClass, TEXT("UMassTrafficRescueLaneProcessor"), &Z_Registration_Info_UClass_UMassTrafficRescueLaneProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficRescueLaneProcessor), 4184000695U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRescueLaneProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRescueLaneProcessor_h__Script_MassTraffic_1989191624{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRescueLaneProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRescueLaneProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
