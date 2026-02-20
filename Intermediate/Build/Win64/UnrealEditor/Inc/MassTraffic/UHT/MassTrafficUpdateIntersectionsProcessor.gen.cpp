// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficUpdateIntersectionsProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateIntersectionsProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficUpdateIntersectionsProcessor *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor;
UClass* UMassTrafficUpdateIntersectionsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficUpdateIntersectionsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficUpdateIntersectionsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficUpdateIntersectionsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_NoRegister()
{
	return UMassTrafficUpdateIntersectionsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateIntersectionsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateIntersectionsProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficUpdateIntersectionsProcessor constinit property declarations *
// ********** End Class UMassTrafficUpdateIntersectionsProcessor constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateIntersectionsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::ClassParams = {
	&UMassTrafficUpdateIntersectionsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficUpdateIntersectionsProcessor::StaticRegisterNativesUMassTrafficUpdateIntersectionsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficUpdateIntersectionsProcessor);
UMassTrafficUpdateIntersectionsProcessor::~UMassTrafficUpdateIntersectionsProcessor() {}
// ********** End Class UMassTrafficUpdateIntersectionsProcessor ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateIntersectionsProcessor, UMassTrafficUpdateIntersectionsProcessor::StaticClass, TEXT("UMassTrafficUpdateIntersectionsProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateIntersectionsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateIntersectionsProcessor), 1919171134U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h__Script_MassTraffic_217050212{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateIntersectionsProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
