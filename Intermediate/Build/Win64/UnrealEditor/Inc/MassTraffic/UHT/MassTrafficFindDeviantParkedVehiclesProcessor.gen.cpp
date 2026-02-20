// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFindDeviantParkedVehiclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFindDeviantParkedVehiclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficFindDeviantParkedVehiclesProcessor ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor;
UClass* UMassTrafficFindDeviantParkedVehiclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFindDeviantParkedVehiclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFindDeviantParkedVehiclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficFindDeviantParkedVehiclesProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_NoRegister()
{
	return UMassTrafficFindDeviantParkedVehiclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFindDeviantParkedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFindDeviantParkedVehiclesProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFindDeviantParkedVehiclesProcessor constinit property declarations 
// ********** End Class UMassTrafficFindDeviantParkedVehiclesProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFindDeviantParkedVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficFindDeviantParkedVehiclesProcessor::StaticRegisterNativesUMassTrafficFindDeviantParkedVehiclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFindDeviantParkedVehiclesProcessor);
UMassTrafficFindDeviantParkedVehiclesProcessor::~UMassTrafficFindDeviantParkedVehiclesProcessor() {}
// ********** End Class UMassTrafficFindDeviantParkedVehiclesProcessor *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor, UMassTrafficFindDeviantParkedVehiclesProcessor::StaticClass, TEXT("UMassTrafficFindDeviantParkedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficFindDeviantParkedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFindDeviantParkedVehiclesProcessor), 120209642U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h__Script_MassTraffic_596302392{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFindDeviantParkedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
