// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficInitTrafficVehicleSpeedProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficInitTrafficVehicleSpeedProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficInitTrafficVehicleSpeedProcessor *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor;
UClass* UMassTrafficInitTrafficVehicleSpeedProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficInitTrafficVehicleSpeedProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficInitTrafficVehicleSpeedProcessor"),
			Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficInitTrafficVehicleSpeedProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_NoRegister()
{
	return UMassTrafficInitTrafficVehicleSpeedProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficInitTrafficVehicleSpeedProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficInitTrafficVehicleSpeedProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficInitTrafficVehicleSpeedProcessor constinit property declarations 
// ********** End Class UMassTrafficInitTrafficVehicleSpeedProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficInitTrafficVehicleSpeedProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::ClassParams = {
	&UMassTrafficInitTrafficVehicleSpeedProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficInitTrafficVehicleSpeedProcessor::StaticRegisterNativesUMassTrafficInitTrafficVehicleSpeedProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficInitTrafficVehicleSpeedProcessor);
UMassTrafficInitTrafficVehicleSpeedProcessor::~UMassTrafficInitTrafficVehicleSpeedProcessor() {}
// ********** End Class UMassTrafficInitTrafficVehicleSpeedProcessor *******************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehicleSpeedProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor, UMassTrafficInitTrafficVehicleSpeedProcessor::StaticClass, TEXT("UMassTrafficInitTrafficVehicleSpeedProcessor"), &Z_Registration_Info_UClass_UMassTrafficInitTrafficVehicleSpeedProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficInitTrafficVehicleSpeedProcessor), 2697998557U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehicleSpeedProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehicleSpeedProcessor_h__Script_MassTraffic_252975589{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehicleSpeedProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInitTrafficVehicleSpeedProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
