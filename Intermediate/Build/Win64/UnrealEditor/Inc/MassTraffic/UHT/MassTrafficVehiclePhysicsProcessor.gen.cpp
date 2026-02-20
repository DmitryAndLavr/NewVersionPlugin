// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehiclePhysicsProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehiclePhysicsProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficVehiclePhysicsProcessor **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor;
UClass* UMassTrafficVehiclePhysicsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehiclePhysicsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehiclePhysicsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehiclePhysicsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_NoRegister()
{
	return UMassTrafficVehiclePhysicsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehiclePhysicsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehiclePhysicsProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehiclePhysicsProcessor constinit property declarations ******
// ********** End Class UMassTrafficVehiclePhysicsProcessor constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehiclePhysicsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::ClassParams = {
	&UMassTrafficVehiclePhysicsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficVehiclePhysicsProcessor::StaticRegisterNativesUMassTrafficVehiclePhysicsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehiclePhysicsProcessor);
UMassTrafficVehiclePhysicsProcessor::~UMassTrafficVehiclePhysicsProcessor() {}
// ********** End Class UMassTrafficVehiclePhysicsProcessor ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehiclePhysicsProcessor, UMassTrafficVehiclePhysicsProcessor::StaticClass, TEXT("UMassTrafficVehiclePhysicsProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehiclePhysicsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehiclePhysicsProcessor), 1595808556U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h__Script_MassTraffic_1139310010{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehiclePhysicsProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
