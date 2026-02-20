// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor ********************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor;
UClass* UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_NoRegister()
{
	return UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor constinit property declarations 
// ********** End Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticRegisterNativesUMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor);
UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::~UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor() {}
// ********** End Class UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor **********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor, UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor::StaticClass, TEXT("UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostPhysicsUpdateTrafficVehiclesProcessor), 1626540230U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h__Script_MassTraffic_3056310997{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateTrafficVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
