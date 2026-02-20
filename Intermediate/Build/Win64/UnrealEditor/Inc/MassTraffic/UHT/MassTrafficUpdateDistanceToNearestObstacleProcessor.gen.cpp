// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficUpdateDistanceToNearestObstacleProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateDistanceToNearestObstacleProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficUpdateDistanceToNearestObstacleProcessor *********************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor;
UClass* UMassTrafficUpdateDistanceToNearestObstacleProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficUpdateDistanceToNearestObstacleProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficUpdateDistanceToNearestObstacleProcessor"),
			Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficUpdateDistanceToNearestObstacleProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_NoRegister()
{
	return UMassTrafficUpdateDistanceToNearestObstacleProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateDistanceToNearestObstacleProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateDistanceToNearestObstacleProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficUpdateDistanceToNearestObstacleProcessor constinit property declarations 
// ********** End Class UMassTrafficUpdateDistanceToNearestObstacleProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateDistanceToNearestObstacleProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::ClassParams = {
	&UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticRegisterNativesUMassTrafficUpdateDistanceToNearestObstacleProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficUpdateDistanceToNearestObstacleProcessor);
UMassTrafficUpdateDistanceToNearestObstacleProcessor::~UMassTrafficUpdateDistanceToNearestObstacleProcessor() {}
// ********** End Class UMassTrafficUpdateDistanceToNearestObstacleProcessor ***********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor, UMassTrafficUpdateDistanceToNearestObstacleProcessor::StaticClass, TEXT("UMassTrafficUpdateDistanceToNearestObstacleProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateDistanceToNearestObstacleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateDistanceToNearestObstacleProcessor), 1737470568U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h__Script_MassTraffic_1465191830{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateDistanceToNearestObstacleProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
