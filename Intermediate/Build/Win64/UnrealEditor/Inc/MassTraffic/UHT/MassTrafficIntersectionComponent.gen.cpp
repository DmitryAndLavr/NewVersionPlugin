// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficIntersectionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionComponent_NoRegister();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_ETrafficLightPhase();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficLightSetup();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ETrafficIntersectionType **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficIntersectionType;
static UEnum* ETrafficIntersectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrafficIntersectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrafficIntersectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ETrafficIntersectionType"));
	}
	return Z_Registration_Info_UEnum_ETrafficIntersectionType.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficIntersectionType>()
{
	return ETrafficIntersectionType_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
		{ "PriorityRight.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "PriorityRight.Name", "ETrafficIntersectionType::PriorityRight" },
		{ "PriorityRoad.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "PriorityRoad.Name", "ETrafficIntersectionType::PriorityRoad" },
		{ "TrafficLights.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "TrafficLights.Name", "ETrafficIntersectionType::TrafficLights" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrafficIntersectionType::PriorityRight", (int64)ETrafficIntersectionType::PriorityRight },
		{ "ETrafficIntersectionType::PriorityRoad", (int64)ETrafficIntersectionType::PriorityRoad },
		{ "ETrafficIntersectionType::TrafficLights", (int64)ETrafficIntersectionType::TrafficLights },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"ETrafficIntersectionType",
	"ETrafficIntersectionType",
	Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType()
{
	if (!Z_Registration_Info_UEnum_ETrafficIntersectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficIntersectionType.InnerSingleton, Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrafficIntersectionType.InnerSingleton;
}
// ********** End Enum ETrafficIntersectionType ****************************************************

// ********** Begin ScriptStruct FTrafficLightSetup ************************************************
struct Z_Construct_UScriptStruct_FTrafficLightSetup_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTrafficLightSetup); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTrafficLightSetup); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShow_MetaData[] = {
		{ "Category", "TrafficLightSetup" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenLanes_MetaData[] = {
		{ "Category", "TrafficLightSetup" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "TrafficLightSetup" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTrafficLightSetup constinit property declarations ****************
	static void NewProp_bShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OpenLanes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OpenLanes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTrafficLightSetup constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrafficLightSetup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTrafficLightSetup_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTrafficLightSetup;
class UScriptStruct* FTrafficLightSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTrafficLightSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTrafficLightSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrafficLightSetup, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("TrafficLightSetup"));
	}
	return Z_Registration_Info_UScriptStruct_FTrafficLightSetup.OuterSingleton;
	}

// ********** Begin ScriptStruct FTrafficLightSetup Property Definitions ***************************
void Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_bShow_SetBit(void* Obj)
{
	((FTrafficLightSetup*)Obj)->bShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTrafficLightSetup), &Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShow_MetaData), NewProp_bShow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_OpenLanes_Inner = { "OpenLanes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_OpenLanes = { "OpenLanes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrafficLightSetup, OpenLanes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenLanes_MetaData), NewProp_OpenLanes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrafficLightSetup, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_bShow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_OpenLanes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_OpenLanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTrafficLightSetup Property Definitions *****************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"TrafficLightSetup",
	Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::PropPointers),
	sizeof(FTrafficLightSetup),
	alignof(FTrafficLightSetup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrafficLightSetup()
{
	if (!Z_Registration_Info_UScriptStruct_FTrafficLightSetup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTrafficLightSetup.InnerSingleton, Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTrafficLightSetup.InnerSingleton);
}
// ********** End ScriptStruct FTrafficLightSetup **************************************************

// ********** Begin Enum ETrafficLightPhase ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficLightPhase;
static UEnum* ETrafficLightPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrafficLightPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrafficLightPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_ETrafficLightPhase, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ETrafficLightPhase"));
	}
	return Z_Registration_Info_UEnum_ETrafficLightPhase.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficLightPhase>()
{
	return ETrafficLightPhase_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "Green.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Green.Name", "ETrafficLightPhase::Green" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
		{ "Red.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Red.Name", "ETrafficLightPhase::Red" },
		{ "RedYellow.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "RedYellow.Name", "ETrafficLightPhase::RedYellow" },
		{ "Yellow.Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "Yellow.Name", "ETrafficLightPhase::Yellow" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrafficLightPhase::Red", (int64)ETrafficLightPhase::Red },
		{ "ETrafficLightPhase::RedYellow", (int64)ETrafficLightPhase::RedYellow },
		{ "ETrafficLightPhase::Green", (int64)ETrafficLightPhase::Green },
		{ "ETrafficLightPhase::Yellow", (int64)ETrafficLightPhase::Yellow },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"ETrafficLightPhase",
	"ETrafficLightPhase",
	Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_ETrafficLightPhase()
{
	if (!Z_Registration_Info_UEnum_ETrafficLightPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficLightPhase.InnerSingleton, Z_Construct_UEnum_MassTraffic_ETrafficLightPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrafficLightPhase.InnerSingleton;
}
// ********** End Enum ETrafficLightPhase **********************************************************

// ********** Begin Class UMassTrafficIntersectionComponent Function RefreshLanes ******************
struct Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RefreshLanes constinit property declarations **************************
// ********** End Function RefreshLanes constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficIntersectionComponent, nullptr, "RefreshLanes", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficIntersectionComponent::execRefreshLanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshLanes();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficIntersectionComponent Function RefreshLanes ********************

// ********** Begin Class UMassTrafficIntersectionComponent ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficIntersectionComponent;
UClass* UMassTrafficIntersectionComponent::GetPrivateStaticClass()
{
	using TClass = UMassTrafficIntersectionComponent;
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficIntersectionComponent"),
			Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.InnerSingleton,
			StaticRegisterNativesUMassTrafficIntersectionComponent,
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
	return Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionComponent_NoRegister()
{
	return UMassTrafficIntersectionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficIntersectionComponent.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Intersection" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntersectionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Intersection" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PriorityRoadSides_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Intersection" },
		{ "EditCondition", "IntersectionType == EIntersectionType::PriorityRoad" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightSetups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Intersection" },
		{ "EditCondition", "IntersectionType == EIntersectionType::TrafficLights" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficIntersectionComponent constinit property declarations ********
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IntersectionSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_IntersectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_IntersectionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PriorityRoadSides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PriorityRoadSides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficLightSetups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrafficLightSetups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficIntersectionComponent constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RefreshLanes"), .Pointer = &UMassTrafficIntersectionComponent::execRefreshLanes },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficIntersectionComponent_RefreshLanes, "RefreshLanes" }, // 3964947677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics

// ********** Begin Class UMassTrafficIntersectionComponent Property Definitions *******************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionSize = { "IntersectionSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionComponent, IntersectionSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionSize_MetaData), NewProp_IntersectionSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionType = { "IntersectionType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionComponent, IntersectionType), Z_Construct_UEnum_MassTraffic_ETrafficIntersectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntersectionType_MetaData), NewProp_IntersectionType_MetaData) }; // 3324578168
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_PriorityRoadSides_Inner = { "PriorityRoadSides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_PriorityRoadSides = { "PriorityRoadSides", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionComponent, PriorityRoadSides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PriorityRoadSides_MetaData), NewProp_PriorityRoadSides_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_TrafficLightSetups_Inner = { "TrafficLightSetups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrafficLightSetup, METADATA_PARAMS(0, nullptr) }; // 53937123
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_TrafficLightSetups = { "TrafficLightSetups", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficIntersectionComponent, TrafficLightSetups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightSetups_MetaData), NewProp_TrafficLightSetups_MetaData) }; // 53937123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_IntersectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_PriorityRoadSides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_PriorityRoadSides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_TrafficLightSetups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::NewProp_TrafficLightSetups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficIntersectionComponent Property Definitions *********************
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::ClassParams = {
	&UMassTrafficIntersectionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::Class_MetaDataParams)
};
void UMassTrafficIntersectionComponent::StaticRegisterNativesUMassTrafficIntersectionComponent()
{
	UClass* Class = UMassTrafficIntersectionComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionComponent()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficIntersectionComponent);
UMassTrafficIntersectionComponent::~UMassTrafficIntersectionComponent() {}
// ********** End Class UMassTrafficIntersectionComponent ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETrafficIntersectionType_StaticEnum, TEXT("ETrafficIntersectionType"), &Z_Registration_Info_UEnum_ETrafficIntersectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3324578168U) },
		{ ETrafficLightPhase_StaticEnum, TEXT("ETrafficLightPhase"), &Z_Registration_Info_UEnum_ETrafficLightPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1301283257U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTrafficLightSetup::StaticStruct, Z_Construct_UScriptStruct_FTrafficLightSetup_Statics::NewStructOps, TEXT("TrafficLightSetup"),&Z_Registration_Info_UScriptStruct_FTrafficLightSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrafficLightSetup), 53937123U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionComponent, UMassTrafficIntersectionComponent::StaticClass, TEXT("UMassTrafficIntersectionComponent"), &Z_Registration_Info_UClass_UMassTrafficIntersectionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionComponent), 991611873U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_1833946280{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionComponent_h__Script_MassTraffic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
