// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficTrailerVisualizationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerVisualizationProcessor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficTrailerVisualizationProcessor ********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor;
UClass* UMassTrafficTrailerVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficTrailerVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficTrailerVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficTrailerVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_NoRegister()
{
	return UMassTrafficTrailerVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficVehicleTrailer via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficVehicleTrailer via the requirements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficTrailerVisualizationProcessor constinit property declarations 
// ********** End Class UMassTrafficTrailerVisualizationProcessor constinit property declarations **
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficTrailerVisualizationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficTrailerVisualizationProcessor::StaticRegisterNativesUMassTrafficTrailerVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficTrailerVisualizationProcessor);
UMassTrafficTrailerVisualizationProcessor::~UMassTrafficTrailerVisualizationProcessor() {}
// ********** End Class UMassTrafficTrailerVisualizationProcessor **********************************

// ********** Begin Class UMassTrafficTrailerUpdateCustomVisualizationProcessor ********************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor;
UClass* UMassTrafficTrailerUpdateCustomVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficTrailerUpdateCustomVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficTrailerUpdateCustomVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficTrailerUpdateCustomVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_NoRegister()
{
	return UMassTrafficTrailerUpdateCustomVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for TrafficVehicleTrailer\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for TrafficVehicleTrailer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrailerVisualizationProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficTrailerUpdateCustomVisualizationProcessor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficTrailerUpdateCustomVisualizationProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics

// ********** Begin Class UMassTrafficTrailerUpdateCustomVisualizationProcessor Property Definitions 
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrailerUpdateCustomVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficTrailerUpdateCustomVisualizationProcessor Property Definitions *
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficTrailerUpdateCustomVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficTrailerUpdateCustomVisualizationProcessor);
UMassTrafficTrailerUpdateCustomVisualizationProcessor::~UMassTrafficTrailerUpdateCustomVisualizationProcessor() {}
// ********** End Class UMassTrafficTrailerUpdateCustomVisualizationProcessor **********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerVisualizationProcessor, UMassTrafficTrailerVisualizationProcessor::StaticClass, TEXT("UMassTrafficTrailerVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficTrailerVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerVisualizationProcessor), 4039122339U) },
		{ Z_Construct_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor, UMassTrafficTrailerUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficTrailerUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficTrailerUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerUpdateCustomVisualizationProcessor), 3530925605U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h__Script_MassTraffic_2023595599{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
