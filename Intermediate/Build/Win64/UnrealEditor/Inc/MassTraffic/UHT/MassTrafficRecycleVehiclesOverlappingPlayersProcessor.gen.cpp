// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficRecycleVehiclesOverlappingPlayersProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor *******************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor;
UClass* UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficRecycleVehiclesOverlappingPlayersProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficRecycleVehiclesOverlappingPlayersProcessor"),
			Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficRecycleVehiclesOverlappingPlayersProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister()
{
	return UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficRecycleVehiclesOverlappingPlayersProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor constinit property declarations 
// ********** End Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficRecycleVehiclesOverlappingPlayersProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::ClassParams = {
	&UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticRegisterNativesUMassTrafficRecycleVehiclesOverlappingPlayersProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficRecycleVehiclesOverlappingPlayersProcessor);
UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::~UMassTrafficRecycleVehiclesOverlappingPlayersProcessor() {}
// ********** End Class UMassTrafficRecycleVehiclesOverlappingPlayersProcessor *********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor, UMassTrafficRecycleVehiclesOverlappingPlayersProcessor::StaticClass, TEXT("UMassTrafficRecycleVehiclesOverlappingPlayersProcessor"), &Z_Registration_Info_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficRecycleVehiclesOverlappingPlayersProcessor), 1251651140U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h__Script_MassTraffic_1157902294{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficRecycleVehiclesOverlappingPlayersProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
