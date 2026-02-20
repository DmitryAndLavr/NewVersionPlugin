// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficPathFollower.h"
#include "ZoneGraphTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficPathFollower() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPathFollower();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPathFollower_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficPathFollower *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficPathFollower;
UClass* UMassTrafficPathFollower::GetPrivateStaticClass()
{
	using TClass = UMassTrafficPathFollower;
	if (!Z_Registration_Info_UClass_UMassTrafficPathFollower.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficPathFollower"),
			Z_Registration_Info_UClass_UMassTrafficPathFollower.InnerSingleton,
			StaticRegisterNativesUMassTrafficPathFollower,
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
	return Z_Registration_Info_UClass_UMassTrafficPathFollower.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficPathFollower_NoRegister()
{
	return UMassTrafficPathFollower::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficPathFollower_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n//\n//  Component for path finding and tracking from a MassTraffic zone graph\n//\n" },
#endif
		{ "IncludePath", "MassTrafficPathFollower.h" },
		{ "ModuleRelativePath", "Public/MassTrafficPathFollower.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component for path finding and tracking from a MassTraffic zone graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphTagFilter_MetaData[] = {
		{ "Category", "MassTrafficPathFollower" },
		{ "ModuleRelativePath", "Public/MassTrafficPathFollower.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Which zone graph tags should be used for path finding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaneSearchRadius_MetaData[] = {
		{ "Category", "MassTrafficPathFollower" },
		{ "ModuleRelativePath", "Public/MassTrafficPathFollower.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Needed to offset the distance along destination lane or car will stop too soon" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DestinationLaneOffset_MetaData[] = {
		{ "Category", "MassTrafficPathFollower" },
		{ "ModuleRelativePath", "Public/MassTrafficPathFollower.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Needed to offset the distance along destination lane or car will stop too soon" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathDebugColor_MetaData[] = {
		{ "Category", "MassTrafficPathFollower" },
		{ "ModuleRelativePath", "Public/MassTrafficPathFollower.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficPathFollower constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneGraphTagFilter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaneSearchRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DestinationLaneOffset;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathDebugColor;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficPathFollower constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPathFollower>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficPathFollower_Statics

// ********** Begin Class UMassTrafficPathFollower Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_ZoneGraphTagFilter = { "ZoneGraphTagFilter", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficPathFollower, ZoneGraphTagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneGraphTagFilter_MetaData), NewProp_ZoneGraphTagFilter_MetaData) }; // 2834384972
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_LaneSearchRadius = { "LaneSearchRadius", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficPathFollower, LaneSearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaneSearchRadius_MetaData), NewProp_LaneSearchRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_DestinationLaneOffset = { "DestinationLaneOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficPathFollower, DestinationLaneOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DestinationLaneOffset_MetaData), NewProp_DestinationLaneOffset_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_PathDebugColor = { "PathDebugColor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficPathFollower, PathDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathDebugColor_MetaData), NewProp_PathDebugColor_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficPathFollower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_ZoneGraphTagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_LaneSearchRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_DestinationLaneOffset,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficPathFollower_Statics::NewProp_PathDebugColor,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPathFollower_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficPathFollower Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UMassTrafficPathFollower_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPathFollower_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPathFollower_Statics::ClassParams = {
	&UMassTrafficPathFollower::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficPathFollower_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPathFollower_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPathFollower_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPathFollower_Statics::Class_MetaDataParams)
};
void UMassTrafficPathFollower::StaticRegisterNativesUMassTrafficPathFollower()
{
}
UClass* Z_Construct_UClass_UMassTrafficPathFollower()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPathFollower.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPathFollower.OuterSingleton, Z_Construct_UClass_UMassTrafficPathFollower_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPathFollower.OuterSingleton;
}
UMassTrafficPathFollower::UMassTrafficPathFollower(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficPathFollower);
UMassTrafficPathFollower::~UMassTrafficPathFollower() {}
// ********** End Class UMassTrafficPathFollower ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficPathFollower, UMassTrafficPathFollower::StaticClass, TEXT("UMassTrafficPathFollower"), &Z_Registration_Info_UClass_UMassTrafficPathFollower, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPathFollower), 2328001079U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h__Script_MassTraffic_1561881494{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
