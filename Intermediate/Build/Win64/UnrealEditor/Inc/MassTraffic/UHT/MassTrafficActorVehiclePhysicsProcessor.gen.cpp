// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficActorVehiclePhysicsProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficActorVehiclePhysicsProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficActorVehiclePhysicsProcessor *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor;
UClass* UMassTrafficActorVehiclePhysicsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficActorVehiclePhysicsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficActorVehiclePhysicsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficActorVehiclePhysicsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_NoRegister()
{
	return UMassTrafficActorVehiclePhysicsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficActorVehiclePhysicsProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficActorVehiclePhysicsProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficActorVehiclePhysicsProcessor constinit property declarations *
// ********** End Class UMassTrafficActorVehiclePhysicsProcessor constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficActorVehiclePhysicsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::ClassParams = {
	&UMassTrafficActorVehiclePhysicsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficActorVehiclePhysicsProcessor::StaticRegisterNativesUMassTrafficActorVehiclePhysicsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficActorVehiclePhysicsProcessor);
UMassTrafficActorVehiclePhysicsProcessor::~UMassTrafficActorVehiclePhysicsProcessor() {}
// ********** End Class UMassTrafficActorVehiclePhysicsProcessor ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficActorVehiclePhysicsProcessor, UMassTrafficActorVehiclePhysicsProcessor::StaticClass, TEXT("UMassTrafficActorVehiclePhysicsProcessor"), &Z_Registration_Info_UClass_UMassTrafficActorVehiclePhysicsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficActorVehiclePhysicsProcessor), 3299385454U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h__Script_MassTraffic_4112224868{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficActorVehiclePhysicsProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
