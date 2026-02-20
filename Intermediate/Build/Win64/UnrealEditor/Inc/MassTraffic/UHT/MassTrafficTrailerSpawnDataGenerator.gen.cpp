// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficTrailerSpawnDataGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerSpawnDataGenerator() {}

// ********** Begin Cross Module References ********************************************************
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficTrailerSpawnDataGenerator ************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator;
UClass* UMassTrafficTrailerSpawnDataGenerator::GetPrivateStaticClass()
{
	using TClass = UMassTrafficTrailerSpawnDataGenerator;
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficTrailerSpawnDataGenerator"),
			Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.InnerSingleton,
			StaticRegisterNativesUMassTrafficTrailerSpawnDataGenerator,
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
	return Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_NoRegister()
{
	return UMassTrafficTrailerSpawnDataGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\n * TrailerAgentConfigAsset, constrained to each vehicle respectively.\n * \n * Note: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned. \n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches all currently spawned vehicles with UMassTrafficConstrainedTrailerTrait and spawns their\nTrailerAgentConfigAsset, constrained to each vehicle respectively.\n\nNote: Only TrailerAgentConfigAsset's that appear in this spawners entity types list will be spawned." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficTrailerSpawnDataGenerator constinit property declarations ****
// ********** End Class UMassTrafficTrailerSpawnDataGenerator constinit property declarations ******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficTrailerSpawnDataGenerator::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::Class_MetaDataParams)
};
void UMassTrafficTrailerSpawnDataGenerator::StaticRegisterNativesUMassTrafficTrailerSpawnDataGenerator()
{
}
UClass* Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator.OuterSingleton;
}
UMassTrafficTrailerSpawnDataGenerator::UMassTrafficTrailerSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficTrailerSpawnDataGenerator);
UMassTrafficTrailerSpawnDataGenerator::~UMassTrafficTrailerSpawnDataGenerator() {}
// ********** End Class UMassTrafficTrailerSpawnDataGenerator **************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerSpawnDataGenerator, UMassTrafficTrailerSpawnDataGenerator::StaticClass, TEXT("UMassTrafficTrailerSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficTrailerSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerSpawnDataGenerator), 169989744U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h__Script_MassTraffic_1293452644{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerSpawnDataGenerator_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
