// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficParkedVehicleSpawnDataGenerator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleSpawnDataGenerator() {}

// ********** Begin Cross Module References ********************************************************
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficParkedVehicleSpawnDataGenerator ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator;
UClass* UMassTrafficParkedVehicleSpawnDataGenerator::GetPrivateStaticClass()
{
	using TClass = UMassTrafficParkedVehicleSpawnDataGenerator;
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkedVehicleSpawnDataGenerator"),
			Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.InnerSingleton,
			StaticRegisterNativesUMassTrafficParkedVehicleSpawnDataGenerator,
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
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_NoRegister()
{
	return UMassTrafficParkedVehicleSpawnDataGenerator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficParkedVehicleSpawnDataGenerator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityTypeToParkingSpaceType_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The parking space type each entity can spawn in */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parking space type each entity can spawn in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParkingSpaceType_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAllParkingSpaces_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the input Count is ignored and vehicles will be spawned in every parking space in ParkingSpaces.\n\x09 * \n\x09 * Note: MassTraffic.NumParkedVehiclesScale is still applied. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the input Count is ignored and vehicles will be spawned in every parking space in ParkingSpaces.\n\nNote: MassTraffic.NumParkedVehiclesScale is still applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleExclusionRadius_MetaData[] = {
		{ "Category", "MassTrafficParkedVehicleSpawnDataGenerator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All parking spaces within this distance to an 'obstacle' e.g the player or deviated vehicles, will be skipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleSpawnDataGenerator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All parking spaces within this distance to an 'obstacle' e.g the player or deviated vehicles, will be skipped." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficParkedVehicleSpawnDataGenerator constinit property declarations 
	static const UECodeGen_Private::FNamePropertyParams NewProp_EntityTypeToParkingSpaceType_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EntityTypeToParkingSpaceType_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntityTypeToParkingSpaceType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultParkingSpaceType;
	static void NewProp_bUseAllParkingSpaces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAllParkingSpaces;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleExclusionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficParkedVehicleSpawnDataGenerator constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleSpawnDataGenerator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics

// ********** Begin Class UMassTrafficParkedVehicleSpawnDataGenerator Property Definitions *********
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_ValueProp = { "EntityTypeToParkingSpaceType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_Key_KeyProp = { "EntityTypeToParkingSpaceType_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType = { "EntityTypeToParkingSpaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, EntityTypeToParkingSpaceType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityTypeToParkingSpaceType_MetaData), NewProp_EntityTypeToParkingSpaceType_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_DefaultParkingSpaceType = { "DefaultParkingSpaceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, DefaultParkingSpaceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultParkingSpaceType_MetaData), NewProp_DefaultParkingSpaceType_MetaData) };
void Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces_SetBit(void* Obj)
{
	((UMassTrafficParkedVehicleSpawnDataGenerator*)Obj)->bUseAllParkingSpaces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces = { "bUseAllParkingSpaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficParkedVehicleSpawnDataGenerator), &Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAllParkingSpaces_MetaData), NewProp_bUseAllParkingSpaces_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius = { "ObstacleExclusionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkedVehicleSpawnDataGenerator, ObstacleExclusionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObstacleExclusionRadius_MetaData), NewProp_ObstacleExclusionRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_EntityTypeToParkingSpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_DefaultParkingSpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_bUseAllParkingSpaces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::NewProp_ObstacleExclusionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficParkedVehicleSpawnDataGenerator Property Definitions ***********
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntitySpawnDataGeneratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::ClassParams = {
	&UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::Class_MetaDataParams)
};
void UMassTrafficParkedVehicleSpawnDataGenerator::StaticRegisterNativesUMassTrafficParkedVehicleSpawnDataGenerator()
{
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator.OuterSingleton;
}
UMassTrafficParkedVehicleSpawnDataGenerator::UMassTrafficParkedVehicleSpawnDataGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficParkedVehicleSpawnDataGenerator);
UMassTrafficParkedVehicleSpawnDataGenerator::~UMassTrafficParkedVehicleSpawnDataGenerator() {}
// ********** End Class UMassTrafficParkedVehicleSpawnDataGenerator ********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleSpawnDataGenerator, UMassTrafficParkedVehicleSpawnDataGenerator::StaticClass, TEXT("UMassTrafficParkedVehicleSpawnDataGenerator"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleSpawnDataGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleSpawnDataGenerator), 2449449774U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h__Script_MassTraffic_2210497497{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleSpawnDataGenerator_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
