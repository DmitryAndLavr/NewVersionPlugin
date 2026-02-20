// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInterpolationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInterpolationProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficInterpolationProcessor ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor;
UClass* UMassTrafficInterpolationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInterpolationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInterpolationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInterpolationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor_NoRegister()
{
	return UMassTrafficInterpolationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInterpolationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInterpolationProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInterpolationProcessor constinit property declarations *******
// ********** End Class UMassTrafficInterpolationProcessor constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInterpolationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::ClassParams = {
	&UMassTrafficInterpolationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInterpolationProcessor::StaticRegisterNativesUMassTrafficInterpolationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInterpolationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInterpolationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInterpolationProcessor);
UMassTrafficInterpolationProcessor::~UMassTrafficInterpolationProcessor() {}
// ********** End Class UMassTrafficInterpolationProcessor *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInterpolationProcessor, UMassTrafficInterpolationProcessor::StaticClass, TEXT("UMassTrafficInterpolationProcessor"), &Z_Registration_Info_UClass_UMassTrafficInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInterpolationProcessor), 3341767179U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h__Script_MassTraffic_1978298503{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolationProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
