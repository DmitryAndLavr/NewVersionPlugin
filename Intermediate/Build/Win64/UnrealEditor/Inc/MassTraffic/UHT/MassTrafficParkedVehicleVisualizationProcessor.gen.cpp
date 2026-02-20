// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficParkedVehicleVisualizationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleVisualizationProcessor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficParkedVehicleVisualizationProcessor **************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor;
UClass* UMassTrafficParkedVehicleVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficParkedVehicleVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkedVehicleVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficParkedVehicleVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_NoRegister()
{
	return UMassTrafficParkedVehicleVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the ParkedVehicle via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the ParkedVehicle via the requirements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficParkedVehicleVisualizationProcessor constinit property declarations 
// ********** End Class UMassTrafficParkedVehicleVisualizationProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficParkedVehicleVisualizationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficParkedVehicleVisualizationProcessor::StaticRegisterNativesUMassTrafficParkedVehicleVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficParkedVehicleVisualizationProcessor);
UMassTrafficParkedVehicleVisualizationProcessor::~UMassTrafficParkedVehicleVisualizationProcessor() {}
// ********** End Class UMassTrafficParkedVehicleVisualizationProcessor ****************************

// ********** Begin Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor **************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor;
UClass* UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkedVehicleUpdateCustomVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficParkedVehicleUpdateCustomVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_NoRegister()
{
	return UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for ParkedVehicle \n */" },
#endif
		{ "IncludePath", "MassTrafficParkedVehicleVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for ParkedVehicle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleVisualizationProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics

// ********** Begin Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor Property Definitions 
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor Property Definitions 
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficParkedVehicleUpdateCustomVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor);
UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::~UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor() {}
// ********** End Class UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor ****************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleVisualizationProcessor, UMassTrafficParkedVehicleVisualizationProcessor::StaticClass, TEXT("UMassTrafficParkedVehicleVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleVisualizationProcessor), 1200763367U) },
		{ Z_Construct_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleUpdateCustomVisualizationProcessor), 1350901602U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h__Script_MassTraffic_3201556286{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
