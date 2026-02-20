// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLights.h"
#include "MassRepresentationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLights() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficLightTypeData *****************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLightTypeData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLightTypeData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceDesc_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLanes_MetaData[] = {
		{ "Category", "MassTrafficLightTypeData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This light is suitable for roads with this many lanes. 0 = Any */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This light is suitable for roads with this many lanes. 0 = Any" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLightTypeData constinit property declarations *********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceDesc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficLightTypeData constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData;
class UScriptStruct* FMassTrafficLightTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightTypeData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficLightTypeData Property Definitions ********************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc = { "StaticMeshInstanceDesc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, StaticMeshInstanceDesc), Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDesc, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshInstanceDesc_MetaData), NewProp_StaticMeshInstanceDesc_MetaData) }; // 433443609
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes = { "NumLanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightTypeData, NumLanes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLanes_MetaData), NewProp_NumLanes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_StaticMeshInstanceDesc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewProp_NumLanes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficLightTypeData Property Definitions **********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightTypeData",
	Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::PropPointers),
	sizeof(FMassTrafficLightTypeData),
	alignof(FMassTrafficLightTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLightTypeData *******************************************

// ********** Begin Class UMassTrafficLightTypesDataAsset ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset;
UClass* UMassTrafficLightTypesDataAsset::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightTypesDataAsset;
	if (!Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightTypesDataAsset"),
			Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightTypesDataAsset,
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
	return Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister()
{
	return UMassTrafficLightTypesDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypes_MetaData[] = {
		{ "Category", "MassTrafficLightTypesDataAsset" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightTypesDataAsset constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficLightTypesDataAsset constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightTypesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics

// ********** Begin Class UMassTrafficLightTypesDataAsset Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightTypeData, METADATA_PARAMS(0, nullptr) }; // 1611466304
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes = { "TrafficLightTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightTypesDataAsset, TrafficLightTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypes_MetaData), NewProp_TrafficLightTypes_MetaData) }; // 1611466304
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::NewProp_TrafficLightTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficLightTypesDataAsset Property Definitions ***********************
UObject* (*const Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams = {
	&UMassTrafficLightTypesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::Class_MetaDataParams)
};
void UMassTrafficLightTypesDataAsset::StaticRegisterNativesUMassTrafficLightTypesDataAsset()
{
}
UClass* Z_Construct_UClass_UMassTrafficLightTypesDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightTypesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset.OuterSingleton;
}
UMassTrafficLightTypesDataAsset::UMassTrafficLightTypesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightTypesDataAsset);
UMassTrafficLightTypesDataAsset::~UMassTrafficLightTypesDataAsset() {}
// ********** End Class UMassTrafficLightTypesDataAsset ********************************************

// ********** Begin ScriptStruct FMassTrafficLightInstanceDesc *************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLightInstanceDesc); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLightInstanceDesc); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledIntersectionSideMidpoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLightInstanceDesc constinit property declarations *****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlledIntersectionSideMidpoint;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficLightInstanceDesc constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightInstanceDesc>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc;
class UScriptStruct* FMassTrafficLightInstanceDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightInstanceDesc"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficLightInstanceDesc Property Definitions ****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation = { "ZRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ZRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRotation_MetaData), NewProp_ZRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint = { "ControlledIntersectionSideMidpoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, ControlledIntersectionSideMidpoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledIntersectionSideMidpoint_MetaData), NewProp_ControlledIntersectionSideMidpoint_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceDesc, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypeIndex_MetaData), NewProp_TrafficLightTypeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_ControlledIntersectionSideMidpoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewProp_TrafficLightTypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficLightInstanceDesc Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightInstanceDesc",
	Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::PropPointers),
	sizeof(FMassTrafficLightInstanceDesc),
	alignof(FMassTrafficLightInstanceDesc),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLightInstanceDesc ***************************************

// ********** Begin Class UMassTrafficLightInstancesDataAsset Function ClearTrafficLights **********
#if WITH_EDITOR
struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear / reset the TrafficLightDetails list */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear / reset the TrafficLightDetails list" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTrafficLights constinit property declarations ********************
// ********** End Function ClearTrafficLights constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "ClearTrafficLights", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execClearTrafficLights)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTrafficLights();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UMassTrafficLightInstancesDataAsset Function ClearTrafficLights ************

// ********** Begin Class UMassTrafficLightInstancesDataAsset Function PopulateTrafficLightsFromMap 
#if WITH_EDITOR
struct Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Point Cloud" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate traffic light data from current map */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate traffic light data from current map" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PopulateTrafficLightsFromMap constinit property declarations **********
// ********** End Function PopulateTrafficLightsFromMap constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, nullptr, "PopulateTrafficLightsFromMap", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromMap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PopulateTrafficLightsFromMap();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// ********** End Class UMassTrafficLightInstancesDataAsset Function PopulateTrafficLightsFromMap **

// ********** Begin Class UMassTrafficLightInstancesDataAsset **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset;
UClass* UMassTrafficLightInstancesDataAsset::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightInstancesDataAsset;
	if (!Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightInstancesDataAsset"),
			Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightInstancesDataAsset,
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
	return Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_NoRegister()
{
	return UMassTrafficLightInstancesDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficLights.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "Traffic Lights" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLights_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Traffic lights to spawn\n\x09 * @see PopulateTrafficLightsFromPointCloud\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic lights to spawn\n@see PopulateTrafficLightsFromPointCloud" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTrafficLights_MetaData[] = {
		{ "ArrayClamp", "" },
		{ "Category", "Traffic Lights" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of stored traffic light instances */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of stored traffic light instances" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightInstancesDataAsset constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightTypesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLights_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLights;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTrafficLights;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficLightInstancesDataAsset constinit property declarations ********
#if WITH_EDITOR
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearTrafficLights"), .Pointer = &UMassTrafficLightInstancesDataAsset::execClearTrafficLights },
		{ .NameUTF8 = UTF8TEXT("PopulateTrafficLightsFromMap"), .Pointer = &UMassTrafficLightInstancesDataAsset::execPopulateTrafficLightsFromMap },
	};
#endif // WITH_EDITOR
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_ClearTrafficLights, "ClearTrafficLights" }, // 4074160577
		{ &Z_Construct_UFunction_UMassTrafficLightInstancesDataAsset_PopulateTrafficLightsFromMap, "PopulateTrafficLightsFromMap" }, // 14870061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightInstancesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics

// ********** Begin Class UMassTrafficLightInstancesDataAsset Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesData_MetaData), NewProp_TrafficLightTypesData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner = { "TrafficLights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc, METADATA_PARAMS(0, nullptr) }; // 1598290735
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights = { "TrafficLights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, TrafficLights), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLights_MetaData), NewProp_TrafficLights_MetaData) }; // 1598290735
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights = { "NumTrafficLights", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightInstancesDataAsset, NumTrafficLights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTrafficLights_MetaData), NewProp_NumTrafficLights_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLightTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_TrafficLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::NewProp_NumTrafficLights,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficLightInstancesDataAsset Property Definitions *******************
UObject* (*const Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams = {
	&UMassTrafficLightInstancesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Class_MetaDataParams)
};
void UMassTrafficLightInstancesDataAsset::StaticRegisterNativesUMassTrafficLightInstancesDataAsset()
{
	UClass* Class = UMassTrafficLightInstancesDataAsset::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, IF_WITH_EDITOR(MakeConstArrayView(Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::Funcs), {}));
}
UClass* Z_Construct_UClass_UMassTrafficLightInstancesDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficLightInstancesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset.OuterSingleton;
}
UMassTrafficLightInstancesDataAsset::UMassTrafficLightInstancesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightInstancesDataAsset);
UMassTrafficLightInstancesDataAsset::~UMassTrafficLightInstancesDataAsset() {}
// ********** End Class UMassTrafficLightInstancesDataAsset ****************************************

// ********** Begin ScriptStruct FMassTrafficLightsParameters **************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLightsParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLightsParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesData_MetaData[] = {
		{ "Category", "MassTrafficLightsParameters" },
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLights.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLightsParameters constinit property declarations ******
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrafficLightTypesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightTypesStaticMeshDescHandle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightTypesStaticMeshDescHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficLightsParameters constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightsParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficLightsParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficLightsParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters;
class UScriptStruct* FMassTrafficLightsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightsParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficLightsParameters Property Definitions *****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData = { "TrafficLightTypesData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesData), Z_Construct_UClass_UMassTrafficLightTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesData_MetaData), NewProp_TrafficLightTypesData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle_Inner = { "TrafficLightTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle, METADATA_PARAMS(0, nullptr) }; // 1316514536
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle = { "TrafficLightTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightsParameters, TrafficLightTypesStaticMeshDescHandle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData), NewProp_TrafficLightTypesStaticMeshDescHandle_MetaData) }; // 1316514536
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewProp_TrafficLightTypesStaticMeshDescHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficLightsParameters Property Definitions *******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficLightsParameters",
	Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::PropPointers),
	sizeof(FMassTrafficLightsParameters),
	alignof(FMassTrafficLightsParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightsParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLightsParameters ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficLightTypeData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightTypeData_Statics::NewStructOps, TEXT("MassTrafficLightTypeData"),&Z_Registration_Info_UScriptStruct_FMassTrafficLightTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightTypeData), 1611466304U) },
		{ FMassTrafficLightInstanceDesc::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightInstanceDesc_Statics::NewStructOps, TEXT("MassTrafficLightInstanceDesc"),&Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightInstanceDesc), 1598290735U) },
		{ FMassTrafficLightsParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightsParameters_Statics::NewStructOps, TEXT("MassTrafficLightsParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficLightsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightsParameters), 1099988683U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightTypesDataAsset, UMassTrafficLightTypesDataAsset::StaticClass, TEXT("UMassTrafficLightTypesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightTypesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightTypesDataAsset), 280878537U) },
		{ Z_Construct_UClass_UMassTrafficLightInstancesDataAsset, UMassTrafficLightInstancesDataAsset::StaticClass, TEXT("UMassTrafficLightInstancesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficLightInstancesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightInstancesDataAsset), 3141570928U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_1182080027{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLights_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
