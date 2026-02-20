// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleControlProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleControlProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficVehicleControlProcessor **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor;
UClass* UMassTrafficVehicleControlProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleControlProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleControlProcessor"),
			Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleControlProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor_NoRegister()
{
	return UMassTrafficVehicleControlProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleControlProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleControlProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleControlProcessor constinit property declarations ******
// ********** End Class UMassTrafficVehicleControlProcessor constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleControlProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::ClassParams = {
	&UMassTrafficVehicleControlProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleControlProcessor::StaticRegisterNativesUMassTrafficVehicleControlProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleControlProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleControlProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleControlProcessor);
UMassTrafficVehicleControlProcessor::~UMassTrafficVehicleControlProcessor() {}
// ********** End Class UMassTrafficVehicleControlProcessor ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleControlProcessor, UMassTrafficVehicleControlProcessor::StaticClass, TEXT("UMassTrafficVehicleControlProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleControlProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleControlProcessor), 3420293909U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h__Script_MassTraffic_2234170847{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
