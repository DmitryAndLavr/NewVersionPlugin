// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficIntersectionSimulationTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionSimulationTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficIntersectionSimulationTrait **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait;
UClass* UMassTrafficIntersectionSimulationTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficIntersectionSimulationTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficIntersectionSimulationTrait"),
			Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficIntersectionSimulationTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_NoRegister()
{
	return UMassTrafficIntersectionSimulationTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Intersection Simulation" },
		{ "IncludePath", "MassTrafficIntersectionSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionSimulationTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficIntersectionSimulationTrait constinit property declarations **
// ********** End Class UMassTrafficIntersectionSimulationTrait constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionSimulationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams = {
	&UMassTrafficIntersectionSimulationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficIntersectionSimulationTrait::StaticRegisterNativesUMassTrafficIntersectionSimulationTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait.OuterSingleton;
}
UMassTrafficIntersectionSimulationTrait::UMassTrafficIntersectionSimulationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficIntersectionSimulationTrait);
UMassTrafficIntersectionSimulationTrait::~UMassTrafficIntersectionSimulationTrait() {}
// ********** End Class UMassTrafficIntersectionSimulationTrait ************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionSimulationTrait, UMassTrafficIntersectionSimulationTrait::StaticClass, TEXT("UMassTrafficIntersectionSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficIntersectionSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionSimulationTrait), 413293948U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h__Script_MassTraffic_3223513767{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionSimulationTrait_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
