// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficOverseerProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficOverseerProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficOverseerProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficOverseerProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficOverseerProcessor ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficOverseerProcessor;
UClass* UMassTrafficOverseerProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficOverseerProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficOverseerProcessor"),
			Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficOverseerProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficOverseerProcessor_NoRegister()
{
	return UMassTrafficOverseerProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficOverseerProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficOverseerProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficOverseerProcessor constinit property declarations ************
// ********** End Class UMassTrafficOverseerProcessor constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficOverseerProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::ClassParams = {
	&UMassTrafficOverseerProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficOverseerProcessor::StaticRegisterNativesUMassTrafficOverseerProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficOverseerProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficOverseerProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficOverseerProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficOverseerProcessor);
UMassTrafficOverseerProcessor::~UMassTrafficOverseerProcessor() {}
// ********** End Class UMassTrafficOverseerProcessor **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficOverseerProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficOverseerProcessor, UMassTrafficOverseerProcessor::StaticClass, TEXT("UMassTrafficOverseerProcessor"), &Z_Registration_Info_UClass_UMassTrafficOverseerProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficOverseerProcessor), 3136959069U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficOverseerProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficOverseerProcessor_h__Script_MassTraffic_1497483909{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficOverseerProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficOverseerProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
