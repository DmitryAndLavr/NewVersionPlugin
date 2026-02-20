// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficControlledVehicle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficControlledVehicle() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficControlledVehicle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPathFollower_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrackNearVehicles_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficControlledVehicle ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficControlledVehicle;
UClass* AMassTrafficControlledVehicle::GetPrivateStaticClass()
{
	using TClass = AMassTrafficControlledVehicle;
	if (!Z_Registration_Info_UClass_AMassTrafficControlledVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficControlledVehicle"),
			Z_Registration_Info_UClass_AMassTrafficControlledVehicle.InnerSingleton,
			StaticRegisterNativesAMassTrafficControlledVehicle,
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
	return Z_Registration_Info_UClass_AMassTrafficControlledVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister()
{
	return AMassTrafficControlledVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficControlledVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n// Basic vehicle class used for AI or player controlled vehicles\n// that can also interact with the MassTraffic system\n// Not placed like normal actors but spawned via MassSpawner and AgentConfig\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MassTrafficControlledVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficControlledVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic vehicle class used for AI or player controlled vehicles\nthat can also interact with the MassTraffic system\nNot placed like normal actors but spawned via MassSpawner and AgentConfig" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFollower_MetaData[] = {
		{ "Category", "MassTrafficControlledVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficControlledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NearVehicleTracker_MetaData[] = {
		{ "Category", "MassTrafficControlledVehicle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficControlledVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficControlledVehicle constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFollower;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NearVehicleTracker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficControlledVehicle constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficControlledVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficControlledVehicle_Statics

// ********** Begin Class AMassTrafficControlledVehicle Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::NewProp_PathFollower = { "PathFollower", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficControlledVehicle, PathFollower), Z_Construct_UClass_UMassTrafficPathFollower_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFollower_MetaData), NewProp_PathFollower_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::NewProp_NearVehicleTracker = { "NearVehicleTracker", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficControlledVehicle, NearVehicleTracker), Z_Construct_UClass_UMassTrafficTrackNearVehicles_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NearVehicleTracker_MetaData), NewProp_NearVehicleTracker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::NewProp_PathFollower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::NewProp_NearVehicleTracker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficControlledVehicle Property Definitions *************************
UObject* (*const Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMassTrafficWheeledVehicle,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::ClassParams = {
	&AMassTrafficControlledVehicle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::Class_MetaDataParams)
};
void AMassTrafficControlledVehicle::StaticRegisterNativesAMassTrafficControlledVehicle()
{
}
UClass* Z_Construct_UClass_AMassTrafficControlledVehicle()
{
	if (!Z_Registration_Info_UClass_AMassTrafficControlledVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficControlledVehicle.OuterSingleton, Z_Construct_UClass_AMassTrafficControlledVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficControlledVehicle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficControlledVehicle);
AMassTrafficControlledVehicle::~AMassTrafficControlledVehicle() {}
// ********** End Class AMassTrafficControlledVehicle **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficControlledVehicle, AMassTrafficControlledVehicle::StaticClass, TEXT("AMassTrafficControlledVehicle"), &Z_Registration_Info_UClass_AMassTrafficControlledVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficControlledVehicle), 3793912620U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h__Script_MassTraffic_3029559283{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
