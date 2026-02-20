// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficDamageRepairProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficDamageRepairProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficDamageRepairProcessor ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor;
UClass* UMassTrafficDamageRepairProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficDamageRepairProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficDamageRepairProcessor"),
			Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficDamageRepairProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor_NoRegister()
{
	return UMassTrafficDamageRepairProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficDamageRepairProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficDamageRepairProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficDamageRepairProcessor constinit property declarations ********
// ********** End Class UMassTrafficDamageRepairProcessor constinit property declarations **********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDamageRepairProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams = {
	&UMassTrafficDamageRepairProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficDamageRepairProcessor::StaticRegisterNativesUMassTrafficDamageRepairProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficDamageRepairProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficDamageRepairProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficDamageRepairProcessor);
UMassTrafficDamageRepairProcessor::~UMassTrafficDamageRepairProcessor() {}
// ********** End Class UMassTrafficDamageRepairProcessor ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDamageRepairProcessor, UMassTrafficDamageRepairProcessor::StaticClass, TEXT("UMassTrafficDamageRepairProcessor"), &Z_Registration_Info_UClass_UMassTrafficDamageRepairProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDamageRepairProcessor), 1616828057U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h__Script_MassTraffic_3410734564{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDamageRepairProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
