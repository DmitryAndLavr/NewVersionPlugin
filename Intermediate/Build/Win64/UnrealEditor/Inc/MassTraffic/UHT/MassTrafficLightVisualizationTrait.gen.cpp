// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLightVisualizationTrait.h"
#include "MassTrafficLights.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLightVisualizationTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightVisualizationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightVisualizationTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficLightVisualizationTrait **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait;
UClass* UMassTrafficLightVisualizationTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightVisualizationTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightVisualizationTrait"),
			Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightVisualizationTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightVisualizationTrait_NoRegister()
{
	return UMassTrafficLightVisualizationTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Light Visualization" },
		{ "IncludePath", "MassTrafficLightVisualizationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightsParams_MetaData[] = {
		{ "Category", "Mass Traffic|Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightVisualizationTrait constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightsParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficLightVisualizationTrait constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightVisualizationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics

// ********** Begin Class UMassTrafficLightVisualizationTrait Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::NewProp_TrafficLightsParams = { "TrafficLightsParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightVisualizationTrait, TrafficLightsParams), Z_Construct_UScriptStruct_FMassTrafficLightsParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightsParams_MetaData), NewProp_TrafficLightsParams_MetaData) }; // 1099988683
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::NewProp_TrafficLightsParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficLightVisualizationTrait Property Definitions *******************
UObject* (*const Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::ClassParams = {
	&UMassTrafficLightVisualizationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficLightVisualizationTrait::StaticRegisterNativesUMassTrafficLightVisualizationTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficLightVisualizationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficLightVisualizationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightVisualizationTrait);
UMassTrafficLightVisualizationTrait::~UMassTrafficLightVisualizationTrait() {}
// ********** End Class UMassTrafficLightVisualizationTrait ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationTrait_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightVisualizationTrait, UMassTrafficLightVisualizationTrait::StaticClass, TEXT("UMassTrafficLightVisualizationTrait"), &Z_Registration_Info_UClass_UMassTrafficLightVisualizationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightVisualizationTrait), 3156859321U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationTrait_h__Script_MassTraffic_883960464{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationTrait_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
