// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor ******************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor;
UClass* UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor"),
			Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_NoRegister()
{
	return UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor constinit property declarations 
// ********** End Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::ClassParams = {
	&UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticRegisterNativesUMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor);
UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::~UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor() {}
// ********** End Class UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor ********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor, UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor::StaticClass, TEXT("UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor), 2302262844U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h__Script_MassTraffic_2121532409{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPostPhysicsUpdateDisturbedVehiclesProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
