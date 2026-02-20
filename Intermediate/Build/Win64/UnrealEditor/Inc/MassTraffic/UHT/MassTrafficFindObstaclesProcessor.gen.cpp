// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFindObstaclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindObstaclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindObstaclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficFindObstaclesProcessor ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor;
UClass* UMassTrafficFindObstaclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFindObstaclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFindObstaclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficFindObstaclesProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_NoRegister()
{
	return UMassTrafficFindObstaclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindObstaclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindObstaclesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFindObstaclesProcessor constinit property declarations *******
// ********** End Class UMassTrafficFindObstaclesProcessor constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindObstaclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::ClassParams = {
	&UMassTrafficFindObstaclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficFindObstaclesProcessor::StaticRegisterNativesUMassTrafficFindObstaclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficFindObstaclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindObstaclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFindObstaclesProcessor);
UMassTrafficFindObstaclesProcessor::~UMassTrafficFindObstaclesProcessor() {}
// ********** End Class UMassTrafficFindObstaclesProcessor *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindObstaclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindObstaclesProcessor, UMassTrafficFindObstaclesProcessor::StaticClass, TEXT("UMassTrafficFindObstaclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindObstaclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindObstaclesProcessor), 1404077967U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindObstaclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindObstaclesProcessor_h__Script_MassTraffic_139249921{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindObstaclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindObstaclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
