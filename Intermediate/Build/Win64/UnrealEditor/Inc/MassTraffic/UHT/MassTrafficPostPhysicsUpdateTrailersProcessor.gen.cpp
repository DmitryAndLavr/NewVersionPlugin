// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficPostPhysicsUpdateTrailersProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficPostPhysicsUpdateTrailersProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficPostPhysicsUpdateTrailersProcessor ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor;
UClass* UMassTrafficPostPhysicsUpdateTrailersProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficPostPhysicsUpdateTrailersProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficPostPhysicsUpdateTrailersProcessor"),
			Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficPostPhysicsUpdateTrailersProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_NoRegister()
{
	return UMassTrafficPostPhysicsUpdateTrailersProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficPostPhysicsUpdateTrailersProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPostPhysicsUpdateTrailersProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficPostPhysicsUpdateTrailersProcessor constinit property declarations 
// ********** End Class UMassTrafficPostPhysicsUpdateTrailersProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostPhysicsUpdateTrailersProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::ClassParams = {
	&UMassTrafficPostPhysicsUpdateTrailersProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficPostPhysicsUpdateTrailersProcessor::StaticRegisterNativesUMassTrafficPostPhysicsUpdateTrailersProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficPostPhysicsUpdateTrailersProcessor);
UMassTrafficPostPhysicsUpdateTrailersProcessor::~UMassTrafficPostPhysicsUpdateTrailersProcessor() {}
// ********** End Class UMassTrafficPostPhysicsUpdateTrailersProcessor *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrailersProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor, UMassTrafficPostPhysicsUpdateTrailersProcessor::StaticClass, TEXT("UMassTrafficPostPhysicsUpdateTrailersProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrailersProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostPhysicsUpdateTrailersProcessor), 2224542661U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrailersProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrailersProcessor_h__Script_MassTraffic_2802744425{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrailersProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrailersProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
