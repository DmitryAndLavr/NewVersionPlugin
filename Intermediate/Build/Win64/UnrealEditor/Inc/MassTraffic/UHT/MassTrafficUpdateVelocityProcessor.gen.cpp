// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficUpdateVelocityProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficUpdateVelocityProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficUpdateVelocityProcessor **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor;
UClass* UMassTrafficUpdateVelocityProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficUpdateVelocityProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficUpdateVelocityProcessor"),
			Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficUpdateVelocityProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_NoRegister()
{
	return UMassTrafficUpdateVelocityProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficUpdateVelocityProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficUpdateVelocityProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficUpdateVelocityProcessor constinit property declarations ******
// ********** End Class UMassTrafficUpdateVelocityProcessor constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficUpdateVelocityProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::ClassParams = {
	&UMassTrafficUpdateVelocityProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficUpdateVelocityProcessor::StaticRegisterNativesUMassTrafficUpdateVelocityProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficUpdateVelocityProcessor);
UMassTrafficUpdateVelocityProcessor::~UMassTrafficUpdateVelocityProcessor() {}
// ********** End Class UMassTrafficUpdateVelocityProcessor ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateVelocityProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficUpdateVelocityProcessor, UMassTrafficUpdateVelocityProcessor::StaticClass, TEXT("UMassTrafficUpdateVelocityProcessor"), &Z_Registration_Info_UClass_UMassTrafficUpdateVelocityProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficUpdateVelocityProcessor), 834257758U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateVelocityProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateVelocityProcessor_h__Script_MassTraffic_934234142{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateVelocityProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficUpdateVelocityProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
