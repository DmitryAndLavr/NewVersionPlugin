// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficDrivers.h"
#include "MassRepresentationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficDrivers() {}

// ********** Begin Cross Module References ********************************************************
ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverMesh();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriversParameters();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverTypeData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficDriverMesh ********************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDriverMesh); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDriverMesh); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "MassTrafficDriverMesh" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
		{ "Category", "MassTrafficDriverMesh" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLODSignificance_MetaData[] = {
		{ "Category", "MassTrafficDriverMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The minimum inclusive LOD significance to start using this static mesh */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum inclusive LOD significance to start using this static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSignificance_MetaData[] = {
		{ "Category", "MassTrafficDriverMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The maximum exclusive LOD significance to stop using this static mesh */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum exclusive LOD significance to stop using this static mesh" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDriverMesh constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLODSignificance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLODSignificance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficDriverMesh constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDriverMesh>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh;
class UScriptStruct* FMassTrafficDriverMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDriverMesh, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDriverMesh"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficDriverMesh Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverMesh, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrides_MetaData), NewProp_MaterialOverrides_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MinLODSignificance = { "MinLODSignificance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverMesh, MinLODSignificance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLODSignificance_MetaData), NewProp_MinLODSignificance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaxLODSignificance = { "MaxLODSignificance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverMesh, MaxLODSignificance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLODSignificance_MetaData), NewProp_MaxLODSignificance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaterialOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaterialOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MinLODSignificance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewProp_MaxLODSignificance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficDriverMesh Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficDriverMesh",
	Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::PropPointers),
	sizeof(FMassTrafficDriverMesh),
	alignof(FMassTrafficDriverMesh),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverMesh()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDriverMesh **********************************************

// ********** Begin Enum EDriverAnimStateVariation *************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDriverAnimStateVariation;
static UEnum* EDriverAnimStateVariation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDriverAnimStateVariation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDriverAnimStateVariation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EDriverAnimStateVariation"));
	}
	return Z_Registration_Info_UEnum_EDriverAnimStateVariation.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EDriverAnimStateVariation>()
{
	return EDriverAnimStateVariation_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bus.Name", "EDriverAnimStateVariation::Bus" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
		{ "None.Name", "EDriverAnimStateVariation::None" },
		{ "OneHand.Name", "EDriverAnimStateVariation::OneHand" },
		{ "TwoHands.Name", "EDriverAnimStateVariation::TwoHands" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDriverAnimStateVariation::TwoHands", (int64)EDriverAnimStateVariation::TwoHands },
		{ "EDriverAnimStateVariation::OneHand", (int64)EDriverAnimStateVariation::OneHand },
		{ "EDriverAnimStateVariation::Bus", (int64)EDriverAnimStateVariation::Bus },
		{ "EDriverAnimStateVariation::None", (int64)EDriverAnimStateVariation::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EDriverAnimStateVariation",
	"EDriverAnimStateVariation",
	Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation()
{
	if (!Z_Registration_Info_UEnum_EDriverAnimStateVariation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDriverAnimStateVariation.InnerSingleton, Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDriverAnimStateVariation.InnerSingleton;
}
// ********** End Enum EDriverAnimStateVariation ***************************************************

// ********** Begin ScriptStruct FMassTrafficDriverTypeData ****************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDriverTypeData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDriverTypeData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MassTrafficDriverTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "MassTrafficDriverTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[] = {
		{ "Category", "MassTrafficDriverTypeData" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDriverTypeData constinit property declarations ********
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficDriverTypeData constinit property declarations **********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDriverTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData;
class UScriptStruct* FMassTrafficDriverTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDriverTypeData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDriverTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficDriverTypeData Property Definitions *******************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverTypeData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficDriverMesh, METADATA_PARAMS(0, nullptr) }; // 558830380
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverTypeData, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 558830380
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriverTypeData, AnimationData), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationData_MetaData), NewProp_AnimationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewProp_AnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficDriverTypeData Property Definitions *********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficDriverTypeData",
	Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::PropPointers),
	sizeof(FMassTrafficDriverTypeData),
	alignof(FMassTrafficDriverTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDriverTypeData ******************************************

// ********** Begin Class UMassTrafficDriverTypesDataAsset *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset;
UClass* UMassTrafficDriverTypesDataAsset::GetPrivateStaticClass()
{
	using TClass = UMassTrafficDriverTypesDataAsset;
	if (!Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficDriverTypesDataAsset"),
			Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.InnerSingleton,
			StaticRegisterNativesUMassTrafficDriverTypesDataAsset,
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
	return Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister()
{
	return UMassTrafficDriverTypesDataAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficDrivers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverTypes_MetaData[] = {
		{ "Category", "MassTrafficDriverTypesDataAsset" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
		{ "TitleProperty", "Name" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficDriverTypesDataAsset constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DriverTypes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficDriverTypesDataAsset constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficDriverTypesDataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics

// ********** Begin Class UMassTrafficDriverTypesDataAsset Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::NewProp_DriverTypes_Inner = { "DriverTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMassTrafficDriverTypeData, METADATA_PARAMS(0, nullptr) }; // 181522229
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::NewProp_DriverTypes = { "DriverTypes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficDriverTypesDataAsset, DriverTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverTypes_MetaData), NewProp_DriverTypes_MetaData) }; // 181522229
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::NewProp_DriverTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::NewProp_DriverTypes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficDriverTypesDataAsset Property Definitions **********************
UObject* (*const Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::ClassParams = {
	&UMassTrafficDriverTypesDataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::Class_MetaDataParams)
};
void UMassTrafficDriverTypesDataAsset::StaticRegisterNativesUMassTrafficDriverTypesDataAsset()
{
}
UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset()
{
	if (!Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.OuterSingleton, Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset.OuterSingleton;
}
UMassTrafficDriverTypesDataAsset::UMassTrafficDriverTypesDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficDriverTypesDataAsset);
UMassTrafficDriverTypesDataAsset::~UMassTrafficDriverTypesDataAsset() {}
// ********** End Class UMassTrafficDriverTypesDataAsset *******************************************

// ********** Begin ScriptStruct FMassTrafficDriversParameters *************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDriversParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDriversParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverTypesData_MetaData[] = {
		{ "Category", "Mass Traffic|Drivers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** External driver types to use in addition to Config.DataTypes */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "External driver types to use in addition to Config.DataTypes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriversSeatOffset_MetaData[] = {
		{ "Category", "MassTrafficDriversParameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Offset transform applied relative to the vehicle world transform to position drivers into the car\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset transform applied relative to the vehicle world transform to position drivers into the car" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimStateVariationOverride_MetaData[] = {
		{ "Category", "MassTrafficDriversParameters" },
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverTypesStaticMeshDescHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficDrivers.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDriversParameters constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DriverTypesData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriversSeatOffset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimStateVariationOverride_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimStateVariationOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverTypesStaticMeshDescHandle_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DriverTypesStaticMeshDescHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficDriversParameters constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDriversParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficDriversParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficDriversParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters;
class UScriptStruct* FMassTrafficDriversParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDriversParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDriversParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficDriversParameters Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesData = { "DriverTypesData", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriversParameters, DriverTypesData), Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverTypesData_MetaData), NewProp_DriverTypesData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriversSeatOffset = { "DriversSeatOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriversParameters, DriversSeatOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriversSeatOffset_MetaData), NewProp_DriversSeatOffset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_AnimStateVariationOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_AnimStateVariationOverride = { "AnimStateVariationOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriversParameters, AnimStateVariationOverride), Z_Construct_UEnum_MassTraffic_EDriverAnimStateVariation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimStateVariationOverride_MetaData), NewProp_AnimStateVariationOverride_MetaData) }; // 2401094978
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesStaticMeshDescHandle_Inner = { "DriverTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticMeshInstanceVisualizationDescHandle, METADATA_PARAMS(0, nullptr) }; // 1316514536
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesStaticMeshDescHandle = { "DriverTypesStaticMeshDescHandle", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficDriversParameters, DriverTypesStaticMeshDescHandle), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverTypesStaticMeshDescHandle_MetaData), NewProp_DriverTypesStaticMeshDescHandle_MetaData) }; // 1316514536
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriversSeatOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_AnimStateVariationOverride_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_AnimStateVariationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesStaticMeshDescHandle_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewProp_DriverTypesStaticMeshDescHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficDriversParameters Property Definitions ******************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficDriversParameters",
	Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::PropPointers),
	sizeof(FMassTrafficDriversParameters),
	alignof(FMassTrafficDriversParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriversParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDriversParameters ***************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDriverAnimStateVariation_StaticEnum, TEXT("EDriverAnimStateVariation"), &Z_Registration_Info_UEnum_EDriverAnimStateVariation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2401094978U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficDriverMesh::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics::NewStructOps, TEXT("MassTrafficDriverMesh"),&Z_Registration_Info_UScriptStruct_FMassTrafficDriverMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDriverMesh), 558830380U) },
		{ FMassTrafficDriverTypeData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics::NewStructOps, TEXT("MassTrafficDriverTypeData"),&Z_Registration_Info_UScriptStruct_FMassTrafficDriverTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDriverTypeData), 181522229U) },
		{ FMassTrafficDriversParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics::NewStructOps, TEXT("MassTrafficDriversParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficDriversParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDriversParameters), 1394242331U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficDriverTypesDataAsset, UMassTrafficDriverTypesDataAsset::StaticClass, TEXT("UMassTrafficDriverTypesDataAsset"), &Z_Registration_Info_UClass_UMassTrafficDriverTypesDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficDriverTypesDataAsset), 1035470247U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_4115547940{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h__Script_MassTraffic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
