// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficTrackNearVehicles.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrackNearVehicles() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSubsystem_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrackNearVehicles();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrackNearVehicles_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficTrackNearVehicles ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles;
UClass* UMassTrafficTrackNearVehicles::GetPrivateStaticClass()
{
	using TClass = UMassTrafficTrackNearVehicles;
	if (!Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficTrackNearVehicles"),
			Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.InnerSingleton,
			StaticRegisterNativesUMassTrafficTrackNearVehicles,
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
	return Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficTrackNearVehicles_NoRegister()
{
	return UMassTrafficTrackNearVehicles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MassTrafficTrackNearVehicles.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledVehicle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntitySubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassActorSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MassTrafficTrackNearVehicles" },
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MassTrafficTrackNearVehicles" },
		{ "ModuleRelativePath", "Public/MassTrafficTrackNearVehicles.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficTrackNearVehicles constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledVehicle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntitySubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassActorSubsystem;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficTrackNearVehicles constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrackNearVehicles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics

// ********** Begin Class UMassTrafficTrackNearVehicles Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_ControlledVehicle = { "ControlledVehicle", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrackNearVehicles, ControlledVehicle), Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledVehicle_MetaData), NewProp_ControlledVehicle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_EntitySubsystem = { "EntitySubsystem", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrackNearVehicles, EntitySubsystem), Z_Construct_UClass_UMassEntitySubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntitySubsystem_MetaData), NewProp_EntitySubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_MassActorSubsystem = { "MassActorSubsystem", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrackNearVehicles, MassActorSubsystem), Z_Construct_UClass_UMassActorSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassActorSubsystem_MetaData), NewProp_MassActorSubsystem_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrackNearVehicles, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLength_MetaData), NewProp_HalfLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficTrackNearVehicles, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfWidth_MetaData), NewProp_HalfWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_ControlledVehicle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_EntitySubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_MassActorSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_HalfLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::NewProp_HalfWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficTrackNearVehicles Property Definitions *************************
UObject* (*const Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::ClassParams = {
	&UMassTrafficTrackNearVehicles::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::Class_MetaDataParams)
};
void UMassTrafficTrackNearVehicles::StaticRegisterNativesUMassTrafficTrackNearVehicles()
{
}
UClass* Z_Construct_UClass_UMassTrafficTrackNearVehicles()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.OuterSingleton, Z_Construct_UClass_UMassTrafficTrackNearVehicles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficTrackNearVehicles);
UMassTrafficTrackNearVehicles::~UMassTrafficTrackNearVehicles() {}
// ********** End Class UMassTrafficTrackNearVehicles **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrackNearVehicles_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrackNearVehicles, UMassTrafficTrackNearVehicles::StaticClass, TEXT("UMassTrafficTrackNearVehicles"), &Z_Registration_Info_UClass_UMassTrafficTrackNearVehicles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrackNearVehicles), 1721334634U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrackNearVehicles_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrackNearVehicles_h__Script_MassTraffic_2144781930{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrackNearVehicles_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrackNearVehicles_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
