// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleVisualizationLODProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleVisualizationLODProcessor() {}

// ********** Begin Cross Module References ********************************************************
MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficVehicleVisualizationLODProcessor *****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor;
UClass* UMassTrafficVehicleVisualizationLODProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleVisualizationLODProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleVisualizationLODProcessor"),
			Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleVisualizationLODProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_NoRegister()
{
	return UMassTrafficVehicleVisualizationLODProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleVisualizationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationLODProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleVisualizationLODProcessor constinit property declarations 
// ********** End Class UMassTrafficVehicleVisualizationLODProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleVisualizationLODProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationLODProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::ClassParams = {
	&UMassTrafficVehicleVisualizationLODProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleVisualizationLODProcessor::StaticRegisterNativesUMassTrafficVehicleVisualizationLODProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleVisualizationLODProcessor);
UMassTrafficVehicleVisualizationLODProcessor::~UMassTrafficVehicleVisualizationLODProcessor() {}
// ********** End Class UMassTrafficVehicleVisualizationLODProcessor *******************************

// ********** Begin Class UMassTrafficVehicleLODCollectorProcessor *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor;
UClass* UMassTrafficVehicleLODCollectorProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleLODCollectorProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleLODCollectorProcessor"),
			Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleLODCollectorProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_NoRegister()
{
	return UMassTrafficVehicleLODCollectorProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficVehicleVisualizationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVisualizationLODProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleLODCollectorProcessor constinit property declarations *
// ********** End Class UMassTrafficVehicleLODCollectorProcessor constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleLODCollectorProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassLODCollectorProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::ClassParams = {
	&UMassTrafficVehicleLODCollectorProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleLODCollectorProcessor::StaticRegisterNativesUMassTrafficVehicleLODCollectorProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleLODCollectorProcessor);
UMassTrafficVehicleLODCollectorProcessor::~UMassTrafficVehicleLODCollectorProcessor() {}
// ********** End Class UMassTrafficVehicleLODCollectorProcessor ***********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationLODProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleVisualizationLODProcessor, UMassTrafficVehicleVisualizationLODProcessor::StaticClass, TEXT("UMassTrafficVehicleVisualizationLODProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleVisualizationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleVisualizationLODProcessor), 958925562U) },
		{ Z_Construct_UClass_UMassTrafficVehicleLODCollectorProcessor, UMassTrafficVehicleLODCollectorProcessor::StaticClass, TEXT("UMassTrafficVehicleLODCollectorProcessor"), &Z_Registration_Info_UClass_UMassTrafficVehicleLODCollectorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleLODCollectorProcessor), 302658843U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationLODProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationLODProcessor_h__Script_MassTraffic_1237424941{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationLODProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVisualizationLODProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
