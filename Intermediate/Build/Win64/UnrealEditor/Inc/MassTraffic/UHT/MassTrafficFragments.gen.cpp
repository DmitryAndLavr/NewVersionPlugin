// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFragments.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFragments() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction();
MASSTRAFFIC_API UEnum* Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficEmergencyTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLight();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightControl();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPeriod();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTag();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficVehicleTag ********************************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficVehicle from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficVehicle from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleTag constinit property declarations ************
// ********** End ScriptStruct FMassTrafficVehicleTag constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag;
class UScriptStruct* FMassTrafficVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleTag),
	alignof(FMassTrafficVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleTag **********************************************

// ********** Begin ScriptStruct FMassTrafficVehicleTrailerTag *************************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleTrailerTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleTrailerTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficVehicleTrailer from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficVehicleTrailer from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleTrailerTag constinit property declarations *****
// ********** End ScriptStruct FMassTrafficVehicleTrailerTag constinit property declarations *******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleTrailerTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleTrailerTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficVehicleTrailerTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag;
class UScriptStruct* FMassTrafficVehicleTrailerTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleTrailerTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficVehicleTrailerTag",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleTrailerTag),
	alignof(FMassTrafficVehicleTrailerTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleTrailerTag ***************************************

// ********** Begin ScriptStruct FMassTrafficParkedVehicleTag **************************************
struct Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficParkedVehicleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficParkedVehicleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the ParkedVehicle from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the ParkedVehicle from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficParkedVehicleTag constinit property declarations ******
// ********** End ScriptStruct FMassTrafficParkedVehicleTag constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficParkedVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficParkedVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficParkedVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag;
class UScriptStruct* FMassTrafficParkedVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficParkedVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficParkedVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficParkedVehicleTag),
	alignof(FMassTrafficParkedVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficParkedVehicleTag ****************************************

// ********** Begin ScriptStruct FMassTrafficDisturbedVehicleTag ***********************************
struct Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDisturbedVehicleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDisturbedVehicleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*** Special tag to differentiate vehicles that have been moved from their spawned location * by either being smashed into or by being driven off.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate vehicles that have been moved from their spawned location * by either being smashed into or by being driven off." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDisturbedVehicleTag constinit property declarations ***
// ********** End ScriptStruct FMassTrafficDisturbedVehicleTag constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDisturbedVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficDisturbedVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficDisturbedVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag;
class UScriptStruct* FMassTrafficDisturbedVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDisturbedVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficDisturbedVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficDisturbedVehicleTag),
	alignof(FMassTrafficDisturbedVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDisturbedVehicleTag *************************************

// ********** Begin ScriptStruct FMassTrafficPlayerVehicleTag **************************************
struct Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPlayerVehicleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPlayerVehicleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate player driven vehicles from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate player driven vehicles from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPlayerVehicleTag constinit property declarations ******
// ********** End ScriptStruct FMassTrafficPlayerVehicleTag constinit property declarations ********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPlayerVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficPlayerVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficPlayerVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag;
class UScriptStruct* FMassTrafficPlayerVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPlayerVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficPlayerVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficPlayerVehicleTag),
	alignof(FMassTrafficPlayerVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPlayerVehicleTag ****************************************

// ********** Begin ScriptStruct FMassTrafficRecyclableVehicleTag **********************************
struct Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficRecyclableVehicleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficRecyclableVehicleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficRecyclableVehicleTag constinit property declarations **
// ********** End ScriptStruct FMassTrafficRecyclableVehicleTag constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRecyclableVehicleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficRecyclableVehicleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficRecyclableVehicleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag;
class UScriptStruct* FMassTrafficRecyclableVehicleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficRecyclableVehicleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficRecyclableVehicleTag",
	nullptr,
	0,
	sizeof(FMassTrafficRecyclableVehicleTag),
	alignof(FMassTrafficRecyclableVehicleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficRecyclableVehicleTag ************************************

// ********** Begin ScriptStruct FMassTrafficIntersectionTag ***************************************
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficIntersectionTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficIntersectionTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Special tag to differentiate the TrafficIntersection from the rest of the other entities */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Special tag to differentiate the TrafficIntersection from the rest of the other entities" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficIntersectionTag constinit property declarations *******
// ********** End ScriptStruct FMassTrafficIntersectionTag constinit property declarations *********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics
static_assert(std::is_polymorphic<FMassTrafficIntersectionTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficIntersectionTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag;
class UScriptStruct* FMassTrafficIntersectionTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficIntersectionTag",
	nullptr,
	0,
	sizeof(FMassTrafficIntersectionTag),
	alignof(FMassTrafficIntersectionTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficIntersectionTag *****************************************

// ********** Begin ScriptStruct FMassTrafficObstacleTag *******************************************
struct Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficObstacleTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficObstacleTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*** Agents with this tag will be considered for traffic vehicle obstacle avoidance and must also have Transform and * AgentRadius fragments.\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agents with this tag will be considered for traffic vehicle obstacle avoidance and must also have Transform and * AgentRadius fragments." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficObstacleTag constinit property declarations ***********
// ********** End ScriptStruct FMassTrafficObstacleTag constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics
static_assert(std::is_polymorphic<FMassTrafficObstacleTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficObstacleTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag;
class UScriptStruct* FMassTrafficObstacleTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficObstacleTag",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleTag),
	alignof(FMassTrafficObstacleTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficObstacleTag *********************************************

// ********** Begin ScriptStruct FMassTrafficEmergencyTag ******************************************
struct Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficEmergencyTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficEmergencyTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficEmergencyTag constinit property declarations **********
// ********** End ScriptStruct FMassTrafficEmergencyTag constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficEmergencyTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics
static_assert(std::is_polymorphic<FMassTrafficEmergencyTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FMassTrafficEmergencyTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag;
class UScriptStruct* FMassTrafficEmergencyTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficEmergencyTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficEmergencyTag"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"MassTrafficEmergencyTag",
	nullptr,
	0,
	sizeof(FMassTrafficEmergencyTag),
	alignof(FMassTrafficEmergencyTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficEmergencyTag()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficEmergencyTag ********************************************

// ********** Begin ScriptStruct FMassTrafficConstrainedVehicleFragment ****************************
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficConstrainedVehicleFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficConstrainedVehicleFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle Constraint Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Constraint Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficConstrainedVehicleFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficConstrainedVehicleFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedVehicleFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficConstrainedVehicleFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficConstrainedVehicleFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment;
class UScriptStruct* FMassTrafficConstrainedVehicleFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedVehicleFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficConstrainedVehicleFragment",
	nullptr,
	0,
	sizeof(FMassTrafficConstrainedVehicleFragment),
	alignof(FMassTrafficConstrainedVehicleFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficConstrainedVehicleFragment ******************************

// ********** Begin ScriptStruct FMassTrafficConstrainedTrailerFragment ****************************
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficConstrainedTrailerFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficConstrainedTrailerFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trailer Constraint Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trailer Constraint Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficConstrainedTrailerFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficConstrainedTrailerFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedTrailerFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficConstrainedTrailerFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficConstrainedTrailerFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment;
class UScriptStruct* FMassTrafficConstrainedTrailerFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedTrailerFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficConstrainedTrailerFragment",
	nullptr,
	0,
	sizeof(FMassTrafficConstrainedTrailerFragment),
	alignof(FMassTrafficConstrainedTrailerFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficConstrainedTrailerFragment ******************************

// ********** Begin ScriptStruct FMassTrafficLaneOffsetFragment ************************************
struct Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLaneOffsetFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLaneOffsetFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stores lateral offset from zone graph lane location */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores lateral offset from zone graph lane location" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLaneOffsetFragment constinit property declarations ****
// ********** End ScriptStruct FMassTrafficLaneOffsetFragment constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneOffsetFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficLaneOffsetFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficLaneOffsetFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment;
class UScriptStruct* FMassTrafficLaneOffsetFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneOffsetFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficLaneOffsetFragment",
	nullptr,
	0,
	sizeof(FMassTrafficLaneOffsetFragment),
	alignof(FMassTrafficLaneOffsetFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLaneOffsetFragment **************************************

// ********** Begin Enum EMassTrafficLightStateFlags ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficLightStateFlags;
static UEnum* EMassTrafficLightStateFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficLightStateFlags"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficLightStateFlags>()
{
	return EMassTrafficLightStateFlags_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Traffic Light Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "None.Name", "EMassTrafficLightStateFlags::None" },
		{ "PedestrianGo.Comment", "// ..green for pedestrians, on right side of traffic light\n" },
		{ "PedestrianGo.Name", "EMassTrafficLightStateFlags::PedestrianGo" },
		{ "PedestrianGo.ToolTip", "..green for pedestrians, on right side of traffic light" },
		{ "PedestrianGo_FrontSide.Comment", "// ..red+yellow for vehicles\n// ...                                 ..otherwise red for vehicles\n" },
		{ "PedestrianGo_FrontSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_FrontSide" },
		{ "PedestrianGo_FrontSide.ToolTip", "..red+yellow for vehicles\n...                                 ..otherwise red for vehicles" },
		{ "PedestrianGo_LeftSide.Comment", "// ..green for pedestrians, on front side of traffic light\n" },
		{ "PedestrianGo_LeftSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_LeftSide" },
		{ "PedestrianGo_LeftSide.ToolTip", "..green for pedestrians, on front side of traffic light" },
		{ "PedestrianGo_RightSide.Comment", "// ..green for pedestrians, on left side of traffic light\n" },
		{ "PedestrianGo_RightSide.Name", "EMassTrafficLightStateFlags::PedestrianGo_RightSide" },
		{ "PedestrianGo_RightSide.ToolTip", "..green for pedestrians, on left side of traffic light" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic Light Fragment" },
#endif
		{ "VehicleGo.Comment", "// ..red for vehicles and all pedestrians\n" },
		{ "VehicleGo.Name", "EMassTrafficLightStateFlags::VehicleGo" },
		{ "VehicleGo.ToolTip", "..red for vehicles and all pedestrians" },
		{ "VehiclePrepareToGo.Comment", "// ..yellow for vehicles\n" },
		{ "VehiclePrepareToGo.Name", "EMassTrafficLightStateFlags::VehiclePrepareToGo" },
		{ "VehiclePrepareToGo.ToolTip", "..yellow for vehicles" },
		{ "VehiclePrepareToStop.Comment", "// ..green for vehicles\n" },
		{ "VehiclePrepareToStop.Name", "EMassTrafficLightStateFlags::VehiclePrepareToStop" },
		{ "VehiclePrepareToStop.ToolTip", "..green for vehicles" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficLightStateFlags::None", (int64)EMassTrafficLightStateFlags::None },
		{ "EMassTrafficLightStateFlags::VehicleGo", (int64)EMassTrafficLightStateFlags::VehicleGo },
		{ "EMassTrafficLightStateFlags::VehiclePrepareToStop", (int64)EMassTrafficLightStateFlags::VehiclePrepareToStop },
		{ "EMassTrafficLightStateFlags::VehiclePrepareToGo", (int64)EMassTrafficLightStateFlags::VehiclePrepareToGo },
		{ "EMassTrafficLightStateFlags::PedestrianGo_FrontSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_FrontSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo_LeftSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_LeftSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo_RightSide", (int64)EMassTrafficLightStateFlags::PedestrianGo_RightSide },
		{ "EMassTrafficLightStateFlags::PedestrianGo", (int64)EMassTrafficLightStateFlags::PedestrianGo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficLightStateFlags",
	"EMassTrafficLightStateFlags",
	Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficLightStateFlags.InnerSingleton;
}
// ********** End Enum EMassTrafficLightStateFlags *************************************************

// ********** Begin ScriptStruct FMassTrafficLight *************************************************
struct Z_Construct_UScriptStruct_FMassTrafficLight_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLight); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLight); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Index into FMassTrafficLightsParameters.TrafficLightTypesData->TrafficLightTypes\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index into FMassTrafficLightsParameters.TrafficLightTypesData->TrafficLightTypes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightStateFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLight constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZRotation;
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrafficLightStateFlags_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrafficLightStateFlags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficLight constinit property declarations *******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLight>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLight_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLight;
class UScriptStruct* FMassTrafficLight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLight, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLight"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLight.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficLight Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_ZRotation = { "ZRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, ZRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRotation_MetaData), NewProp_ZRotation_MetaData) };
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypeIndex_MetaData), NewProp_TrafficLightTypeIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags = { "TrafficLightStateFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLight, TrafficLightStateFlags), Z_Construct_UEnum_MassTraffic_EMassTrafficLightStateFlags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightStateFlags_MetaData), NewProp_TrafficLightStateFlags_MetaData) }; // 2505341434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_ZRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightTypeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewProp_TrafficLightStateFlags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficLight Property Definitions ******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLight_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLight",
	Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::PropPointers),
	sizeof(FMassTrafficLight),
	alignof(FMassTrafficLight),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLight_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLight_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLight()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLight.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLight.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLight_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLight.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLight ***************************************************

// ********** Begin ScriptStruct FMassTrafficLightControl ******************************************
struct Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLightControl); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLightControl); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Intersection Fragment * Search key: IFRAG\n */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intersection Fragment * Search key: IFRAG" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLightControl constinit property declarations **********
// ********** End ScriptStruct FMassTrafficLightControl constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightControl>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLightControl;
class UScriptStruct* FMassTrafficLightControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightControl, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightControl"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightControl",
	nullptr,
	0,
	sizeof(FMassTrafficLightControl),
	alignof(FMassTrafficLightControl),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightControl()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLightControl.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLightControl ********************************************

// ********** Begin Enum EMassTrafficPeriodLanesAction *********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction;
static UEnum* EMassTrafficPeriodLanesAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficPeriodLanesAction"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficPeriodLanesAction>()
{
	return EMassTrafficPeriodLanesAction_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HardClose.Comment", "// ..open all lanes in the period\n" },
		{ "HardClose.Name", "EMassTrafficPeriodLanesAction::HardClose" },
		{ "HardClose.ToolTip", "..open all lanes in the period" },
		{ "HardPrepareToClose.Comment", "// ..close all lanes in the period - unless they're open in the next period\n" },
		{ "HardPrepareToClose.Name", "EMassTrafficPeriodLanesAction::HardPrepareToClose" },
		{ "HardPrepareToClose.ToolTip", "..close all lanes in the period - unless they're open in the next period" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "None.Name", "EMassTrafficPeriodLanesAction::None" },
		{ "Open.Name", "EMassTrafficPeriodLanesAction::Open" },
		{ "SoftClose.Comment", "// ..close all lanes in the period\n" },
		{ "SoftClose.Name", "EMassTrafficPeriodLanesAction::SoftClose" },
		{ "SoftClose.ToolTip", "..close all lanes in the period" },
		{ "SoftPrepareToClose.Comment", "// ..warn lanes in the period they are about to close\n" },
		{ "SoftPrepareToClose.Name", "EMassTrafficPeriodLanesAction::SoftPrepareToClose" },
		{ "SoftPrepareToClose.ToolTip", "..warn lanes in the period they are about to close" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficPeriodLanesAction::None", (int64)EMassTrafficPeriodLanesAction::None },
		{ "EMassTrafficPeriodLanesAction::Open", (int64)EMassTrafficPeriodLanesAction::Open },
		{ "EMassTrafficPeriodLanesAction::HardClose", (int64)EMassTrafficPeriodLanesAction::HardClose },
		{ "EMassTrafficPeriodLanesAction::SoftClose", (int64)EMassTrafficPeriodLanesAction::SoftClose },
		{ "EMassTrafficPeriodLanesAction::HardPrepareToClose", (int64)EMassTrafficPeriodLanesAction::HardPrepareToClose },
		{ "EMassTrafficPeriodLanesAction::SoftPrepareToClose", (int64)EMassTrafficPeriodLanesAction::SoftPrepareToClose },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficPeriodLanesAction",
	"EMassTrafficPeriodLanesAction",
	Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficPeriodLanesAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction.InnerSingleton;
}
// ********** End Enum EMassTrafficPeriodLanesAction ***********************************************

// ********** Begin ScriptStruct FMassTrafficLaneToTrafficLightMap *********************************
struct Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLaneToTrafficLightMap); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLaneToTrafficLightMap); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Temporary class used when building intersection periods. */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporary class used when building intersection periods." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLaneToTrafficLightMap constinit property declarations *
// ********** End ScriptStruct FMassTrafficLaneToTrafficLightMap constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLaneToTrafficLightMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap;
class UScriptStruct* FMassTrafficLaneToTrafficLightMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLaneToTrafficLightMap"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLaneToTrafficLightMap",
	nullptr,
	0,
	sizeof(FMassTrafficLaneToTrafficLightMap),
	alignof(FMassTrafficLaneToTrafficLightMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLaneToTrafficLightMap ***********************************

// ********** Begin ScriptStruct FMassTrafficPeriod ************************************************
struct Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPeriod); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPeriod); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPeriod constinit property declarations ****************
// ********** End ScriptStruct FMassTrafficPeriod constinit property declarations ******************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPeriod>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPeriod;
class UScriptStruct* FMassTrafficPeriod::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPeriod, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPeriod"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficPeriod",
	nullptr,
	0,
	sizeof(FMassTrafficPeriod),
	alignof(FMassTrafficPeriod),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPeriod()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPeriod.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPeriod **************************************************

// ********** Begin ScriptStruct FMassTrafficIntersectionFragment **********************************
struct Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficIntersectionFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficIntersectionFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficIntersectionFragment constinit property declarations **
// ********** End ScriptStruct FMassTrafficIntersectionFragment constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficIntersectionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficIntersectionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficIntersectionFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment;
class UScriptStruct* FMassTrafficIntersectionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficIntersectionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficIntersectionFragment",
	nullptr,
	0,
	sizeof(FMassTrafficIntersectionFragment),
	alignof(FMassTrafficIntersectionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficIntersectionFragment ************************************

// ********** Begin ScriptStruct FMassTrafficSimulationLODFragment *********************************
struct Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficSimulationLODFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficSimulationLODFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Simulation LOD Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simulation LOD Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficSimulationLODFragment constinit property declarations *
// ********** End ScriptStruct FMassTrafficSimulationLODFragment constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficSimulationLODFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficSimulationLODFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficSimulationLODFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment;
class UScriptStruct* FMassTrafficSimulationLODFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficSimulationLODFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficSimulationLODFragment",
	nullptr,
	0,
	sizeof(FMassTrafficSimulationLODFragment),
	alignof(FMassTrafficSimulationLODFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficSimulationLODFragment ***********************************

// ********** Begin Enum ETrafficDriverAnimState ***************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrafficDriverAnimState;
static UEnum* ETrafficDriverAnimState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ETrafficDriverAnimState"));
	}
	return Z_Registration_Info_UEnum_ETrafficDriverAnimState.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficDriverAnimState>()
{
	return ETrafficDriverAnimState_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Count.Name", "ETrafficDriverAnimState::Count" },
		{ "HighSpeedIdle.Name", "ETrafficDriverAnimState::HighSpeedIdle" },
		{ "Invalid.Name", "ETrafficDriverAnimState::Invalid" },
		{ "LookLeftIdle.Name", "ETrafficDriverAnimState::LookLeftIdle" },
		{ "LookRightIdle.Name", "ETrafficDriverAnimState::LookRightIdle" },
		{ "LowSpeedIdle.Name", "ETrafficDriverAnimState::LowSpeedIdle" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "Steering.Name", "ETrafficDriverAnimState::Steering" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrafficDriverAnimState::Invalid", (int64)ETrafficDriverAnimState::Invalid },
		{ "ETrafficDriverAnimState::Steering", (int64)ETrafficDriverAnimState::Steering },
		{ "ETrafficDriverAnimState::LowSpeedIdle", (int64)ETrafficDriverAnimState::LowSpeedIdle },
		{ "ETrafficDriverAnimState::HighSpeedIdle", (int64)ETrafficDriverAnimState::HighSpeedIdle },
		{ "ETrafficDriverAnimState::LookLeftIdle", (int64)ETrafficDriverAnimState::LookLeftIdle },
		{ "ETrafficDriverAnimState::LookRightIdle", (int64)ETrafficDriverAnimState::LookRightIdle },
		{ "ETrafficDriverAnimState::Count", (int64)ETrafficDriverAnimState::Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"ETrafficDriverAnimState",
	"ETrafficDriverAnimState",
	Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState()
{
	if (!Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton, Z_Construct_UEnum_MassTraffic_ETrafficDriverAnimState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrafficDriverAnimState.InnerSingleton;
}
// ********** End Enum ETrafficDriverAnimState *****************************************************

// ********** Begin ScriptStruct FMassTrafficDriverVisualizationFragment ***************************
struct Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDriverVisualizationFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDriverVisualizationFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Driver Visualization Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Driver Visualization Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDriverVisualizationFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficDriverVisualizationFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDriverVisualizationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficDriverVisualizationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficDriverVisualizationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment;
class UScriptStruct* FMassTrafficDriverVisualizationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDriverVisualizationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficDriverVisualizationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficDriverVisualizationFragment),
	alignof(FMassTrafficDriverVisualizationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDriverVisualizationFragment *****************************

// ********** Begin Enum EMassTrafficCombineDistanceToNextType *************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType;
static UEnum* EMassTrafficCombineDistanceToNextType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("EMassTrafficCombineDistanceToNextType"));
	}
	return Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.OuterSingleton;
}
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficCombineDistanceToNextType>()
{
	return EMassTrafficCombineDistanceToNextType_StaticEnum();
}
struct Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Next Vehicle Fragment * Search key: NVFRAG\n */" },
#endif
		{ "LaneChangeNext.Name", "EMassTrafficCombineDistanceToNextType::LaneChangeNext" },
		{ "MergingLaneGhostNext.Name", "EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext" },
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
		{ "Next.Name", "EMassTrafficCombineDistanceToNextType::Next" },
		{ "SpittingLaneGhostNext.Name", "EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Next Vehicle Fragment * Search key: NVFRAG" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMassTrafficCombineDistanceToNextType::Next", (int64)EMassTrafficCombineDistanceToNextType::Next },
		{ "EMassTrafficCombineDistanceToNextType::LaneChangeNext", (int64)EMassTrafficCombineDistanceToNextType::LaneChangeNext },
		{ "EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext", (int64)EMassTrafficCombineDistanceToNextType::SpittingLaneGhostNext },
		{ "EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext", (int64)EMassTrafficCombineDistanceToNextType::MergingLaneGhostNext },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	"EMassTrafficCombineDistanceToNextType",
	"EMassTrafficCombineDistanceToNextType",
	Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType()
{
	if (!Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton, Z_Construct_UEnum_MassTraffic_EMassTrafficCombineDistanceToNextType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType.InnerSingleton;
}
// ********** End Enum EMassTrafficCombineDistanceToNextType ***************************************

// ********** Begin ScriptStruct FMassTrafficNextVehicleFragment ***********************************
struct Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficNextVehicleFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficNextVehicleFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficNextVehicleFragment constinit property declarations ***
// ********** End ScriptStruct FMassTrafficNextVehicleFragment constinit property declarations *****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficNextVehicleFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficNextVehicleFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficNextVehicleFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment;
class UScriptStruct* FMassTrafficNextVehicleFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficNextVehicleFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficNextVehicleFragment",
	nullptr,
	0,
	sizeof(FMassTrafficNextVehicleFragment),
	alignof(FMassTrafficNextVehicleFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficNextVehicleFragment *************************************

// ********** Begin ScriptStruct FMassTrafficObstacleListFragment **********************************
struct Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficObstacleListFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficObstacleListFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obstacle List Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obstacle List Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficObstacleListFragment constinit property declarations **
// ********** End ScriptStruct FMassTrafficObstacleListFragment constinit property declarations ****
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleListFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficObstacleListFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficObstacleListFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment;
class UScriptStruct* FMassTrafficObstacleListFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleListFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficObstacleListFragment",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleListFragment),
	alignof(FMassTrafficObstacleListFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficObstacleListFragment ************************************

// ********** Begin ScriptStruct FMassTrafficObstacleAvoidanceFragment *****************************
struct Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficObstacleAvoidanceFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficObstacleAvoidanceFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Obstacle Avoidance Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Obstacle Avoidance Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficObstacleAvoidanceFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficObstacleAvoidanceFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficObstacleAvoidanceFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficObstacleAvoidanceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficObstacleAvoidanceFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment;
class UScriptStruct* FMassTrafficObstacleAvoidanceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficObstacleAvoidanceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficObstacleAvoidanceFragment",
	nullptr,
	0,
	sizeof(FMassTrafficObstacleAvoidanceFragment),
	alignof(FMassTrafficObstacleAvoidanceFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficObstacleAvoidanceFragment *******************************

// ********** Begin ScriptStruct FMassTrafficRandomFractionFragment ********************************
struct Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficRandomFractionFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficRandomFractionFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Random Fraction Fragment */// A random float number in the range [0, 1) as a basis for variation across agents \n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Random Fraction Fragment // A random float number in the range [0, 1) as a basis for variation across agents" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficRandomFractionFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficRandomFractionFragment constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficRandomFractionFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficRandomFractionFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficRandomFractionFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment;
class UScriptStruct* FMassTrafficRandomFractionFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficRandomFractionFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficRandomFractionFragment",
	nullptr,
	0,
	sizeof(FMassTrafficRandomFractionFragment),
	alignof(FMassTrafficRandomFractionFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficRandomFractionFragment **********************************

// ********** Begin ScriptStruct FMassTrafficVehicleDamageFragment *********************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleDamageFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleDamageFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vehicle Damage State Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Damage State Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleDamageFragment constinit property declarations *
// ********** End ScriptStruct FMassTrafficVehicleDamageFragment constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleDamageFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleDamageFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleDamageFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment;
class UScriptStruct* FMassTrafficVehicleDamageFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleDamageFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleDamageFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleDamageFragment),
	alignof(FMassTrafficVehicleDamageFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleDamageFragment ***********************************

// ********** Begin ScriptStruct FMassTrafficVehicleLightsFragment *********************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleLightsFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleLightsFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Traffic vehicle light states */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Traffic vehicle light states" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleLightsFragment constinit property declarations *
// ********** End ScriptStruct FMassTrafficVehicleLightsFragment constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleLightsFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleLightsFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleLightsFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment;
class UScriptStruct* FMassTrafficVehicleLightsFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleLightsFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleLightsFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleLightsFragment),
	alignof(FMassTrafficVehicleLightsFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleLightsFragment ***********************************

// ********** Begin ScriptStruct FMassTrafficVehicleControlFragment ********************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleControlFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleControlFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Miscellaneous fields commonly used in traffic vehicle movement control */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Miscellaneous fields commonly used in traffic vehicle movement control" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleControlFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficVehicleControlFragment constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleControlFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleControlFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleControlFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment;
class UScriptStruct* FMassTrafficVehicleControlFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleControlFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleControlFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleControlFragment),
	alignof(FMassTrafficVehicleControlFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleControlFragment **********************************

// ********** Begin ScriptStruct FMassTrafficVehicleLaneChangeFragment *****************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleLaneChangeFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleLaneChangeFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleLaneChangeFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficVehicleLaneChangeFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleLaneChangeFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleLaneChangeFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficVehicleLaneChangeFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment;
class UScriptStruct* FMassTrafficVehicleLaneChangeFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleLaneChangeFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficVehicleLaneChangeFragment",
	nullptr,
	0,
	sizeof(FMassTrafficVehicleLaneChangeFragment),
	alignof(FMassTrafficVehicleLaneChangeFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleLaneChangeFragment *******************************

// ********** Begin ScriptStruct FMassTrafficDebugFragment *****************************************
struct Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficDebugFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficDebugFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficDebugFragment constinit property declarations *********
// ********** End ScriptStruct FMassTrafficDebugFragment constinit property declarations ***********
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficDebugFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficDebugFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficDebugFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment;
class UScriptStruct* FMassTrafficDebugFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficDebugFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficDebugFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficDebugFragment",
	nullptr,
	0,
	sizeof(FMassTrafficDebugFragment),
	alignof(FMassTrafficDebugFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficDebugFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficDebugFragment *******************************************

// ********** Begin ScriptStruct FMassTrafficInterpolationFragment *********************************
struct Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficInterpolationFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficInterpolationFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficInterpolationFragment constinit property declarations *
// ********** End ScriptStruct FMassTrafficInterpolationFragment constinit property declarations ***
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficInterpolationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficInterpolationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficInterpolationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment;
class UScriptStruct* FMassTrafficInterpolationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficInterpolationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficInterpolationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficInterpolationFragment),
	alignof(FMassTrafficInterpolationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficInterpolationFragment ***********************************

// ********** Begin ScriptStruct FMassTrafficPIDControlInterpolationFragment ***********************
struct Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPIDControlInterpolationFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPIDControlInterpolationFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPIDControlInterpolationFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficPIDControlInterpolationFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDControlInterpolationFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficPIDControlInterpolationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficPIDControlInterpolationFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment;
class UScriptStruct* FMassTrafficPIDControlInterpolationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDControlInterpolationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficPIDControlInterpolationFragment",
	nullptr,
	0,
	sizeof(FMassTrafficPIDControlInterpolationFragment),
	alignof(FMassTrafficPIDControlInterpolationFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPIDControlInterpolationFragment *************************

// ********** Begin ScriptStruct FMassTrafficPIDVehicleControlFragment *****************************
struct Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficPIDVehicleControlFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficPIDVehicleControlFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** PID Vehicle Control Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PID Vehicle Control Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficPIDVehicleControlFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficPIDVehicleControlFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficPIDVehicleControlFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficPIDVehicleControlFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficPIDVehicleControlFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment;
class UScriptStruct* FMassTrafficPIDVehicleControlFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficPIDVehicleControlFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficPIDVehicleControlFragment",
	nullptr,
	0,
	sizeof(FMassTrafficPIDVehicleControlFragment),
	alignof(FMassTrafficPIDVehicleControlFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficPIDVehicleControlFragment *******************************

// ********** Begin ScriptStruct FMassTrafficAngularVelocityFragment *******************************
struct Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficAngularVelocityFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficAngularVelocityFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Angular Velocity Fragment */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angular Velocity Fragment" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficAngularVelocityFragment constinit property declarations 
// ********** End ScriptStruct FMassTrafficAngularVelocityFragment constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficAngularVelocityFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics
static_assert(std::is_polymorphic<FMassTrafficAngularVelocityFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassTrafficAngularVelocityFragment cannot be polymorphic unless super FMassFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment;
class UScriptStruct* FMassTrafficAngularVelocityFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficAngularVelocityFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassFragment,
	&NewStructOps,
	"MassTrafficAngularVelocityFragment",
	nullptr,
	0,
	sizeof(FMassTrafficAngularVelocityFragment),
	alignof(FMassTrafficAngularVelocityFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficAngularVelocityFragment *********************************

// ********** Begin ScriptStruct FMassTrafficVehiclePhysicsSharedParameters ************************
struct Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehiclePhysicsSharedParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehiclePhysicsSharedParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFragments.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehiclePhysicsSharedParameters constinit property declarations 
// ********** End ScriptStruct FMassTrafficVehiclePhysicsSharedParameters constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehiclePhysicsSharedParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficVehiclePhysicsSharedParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficVehiclePhysicsSharedParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters;
class UScriptStruct* FMassTrafficVehiclePhysicsSharedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehiclePhysicsSharedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficVehiclePhysicsSharedParameters",
	nullptr,
	0,
	sizeof(FMassTrafficVehiclePhysicsSharedParameters),
	alignof(FMassTrafficVehiclePhysicsSharedParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehiclePhysicsSharedParameters **************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMassTrafficLightStateFlags_StaticEnum, TEXT("EMassTrafficLightStateFlags"), &Z_Registration_Info_UEnum_EMassTrafficLightStateFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2505341434U) },
		{ EMassTrafficPeriodLanesAction_StaticEnum, TEXT("EMassTrafficPeriodLanesAction"), &Z_Registration_Info_UEnum_EMassTrafficPeriodLanesAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3756908185U) },
		{ ETrafficDriverAnimState_StaticEnum, TEXT("ETrafficDriverAnimState"), &Z_Registration_Info_UEnum_ETrafficDriverAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3837774115U) },
		{ EMassTrafficCombineDistanceToNextType_StaticEnum, TEXT("EMassTrafficCombineDistanceToNextType"), &Z_Registration_Info_UEnum_EMassTrafficCombineDistanceToNextType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663006112U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleTag_Statics::NewStructOps, TEXT("MassTrafficVehicleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleTag), 2327766436U) },
		{ FMassTrafficVehicleTrailerTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleTrailerTag_Statics::NewStructOps, TEXT("MassTrafficVehicleTrailerTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleTrailerTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleTrailerTag), 3009895084U) },
		{ FMassTrafficParkedVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficParkedVehicleTag_Statics::NewStructOps, TEXT("MassTrafficParkedVehicleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficParkedVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficParkedVehicleTag), 924180685U) },
		{ FMassTrafficDisturbedVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDisturbedVehicleTag_Statics::NewStructOps, TEXT("MassTrafficDisturbedVehicleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficDisturbedVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDisturbedVehicleTag), 3253984126U) },
		{ FMassTrafficPlayerVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPlayerVehicleTag_Statics::NewStructOps, TEXT("MassTrafficPlayerVehicleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficPlayerVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPlayerVehicleTag), 3650631227U) },
		{ FMassTrafficRecyclableVehicleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRecyclableVehicleTag_Statics::NewStructOps, TEXT("MassTrafficRecyclableVehicleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficRecyclableVehicleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRecyclableVehicleTag), 976620462U) },
		{ FMassTrafficIntersectionTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionTag_Statics::NewStructOps, TEXT("MassTrafficIntersectionTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionTag), 2607517009U) },
		{ FMassTrafficObstacleTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleTag_Statics::NewStructOps, TEXT("MassTrafficObstacleTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficObstacleTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleTag), 202416077U) },
		{ FMassTrafficEmergencyTag::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficEmergencyTag_Statics::NewStructOps, TEXT("MassTrafficEmergencyTag"),&Z_Registration_Info_UScriptStruct_FMassTrafficEmergencyTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficEmergencyTag), 3104925075U) },
		{ FMassTrafficConstrainedVehicleFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedVehicleFragment_Statics::NewStructOps, TEXT("MassTrafficConstrainedVehicleFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedVehicleFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedVehicleFragment), 985582322U) },
		{ FMassTrafficConstrainedTrailerFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerFragment_Statics::NewStructOps, TEXT("MassTrafficConstrainedTrailerFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedTrailerFragment), 2715134184U) },
		{ FMassTrafficLaneOffsetFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneOffsetFragment_Statics::NewStructOps, TEXT("MassTrafficLaneOffsetFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficLaneOffsetFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneOffsetFragment), 898758128U) },
		{ FMassTrafficLight::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLight_Statics::NewStructOps, TEXT("MassTrafficLight"),&Z_Registration_Info_UScriptStruct_FMassTrafficLight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLight), 3906979217U) },
		{ FMassTrafficLightControl::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightControl_Statics::NewStructOps, TEXT("MassTrafficLightControl"),&Z_Registration_Info_UScriptStruct_FMassTrafficLightControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightControl), 684456281U) },
		{ FMassTrafficLaneToTrafficLightMap::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLaneToTrafficLightMap_Statics::NewStructOps, TEXT("MassTrafficLaneToTrafficLightMap"),&Z_Registration_Info_UScriptStruct_FMassTrafficLaneToTrafficLightMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLaneToTrafficLightMap), 2732090805U) },
		{ FMassTrafficPeriod::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPeriod_Statics::NewStructOps, TEXT("MassTrafficPeriod"),&Z_Registration_Info_UScriptStruct_FMassTrafficPeriod, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPeriod), 1871791140U) },
		{ FMassTrafficIntersectionFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficIntersectionFragment_Statics::NewStructOps, TEXT("MassTrafficIntersectionFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficIntersectionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficIntersectionFragment), 926487616U) },
		{ FMassTrafficSimulationLODFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficSimulationLODFragment_Statics::NewStructOps, TEXT("MassTrafficSimulationLODFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficSimulationLODFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficSimulationLODFragment), 3861375393U) },
		{ FMassTrafficDriverVisualizationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDriverVisualizationFragment_Statics::NewStructOps, TEXT("MassTrafficDriverVisualizationFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficDriverVisualizationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDriverVisualizationFragment), 3598265646U) },
		{ FMassTrafficNextVehicleFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficNextVehicleFragment_Statics::NewStructOps, TEXT("MassTrafficNextVehicleFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficNextVehicleFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficNextVehicleFragment), 3039844047U) },
		{ FMassTrafficObstacleListFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleListFragment_Statics::NewStructOps, TEXT("MassTrafficObstacleListFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficObstacleListFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleListFragment), 2974790824U) },
		{ FMassTrafficObstacleAvoidanceFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficObstacleAvoidanceFragment_Statics::NewStructOps, TEXT("MassTrafficObstacleAvoidanceFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficObstacleAvoidanceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficObstacleAvoidanceFragment), 5058133U) },
		{ FMassTrafficRandomFractionFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficRandomFractionFragment_Statics::NewStructOps, TEXT("MassTrafficRandomFractionFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficRandomFractionFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficRandomFractionFragment), 2544310516U) },
		{ FMassTrafficVehicleDamageFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleDamageFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleDamageFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDamageFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleDamageFragment), 1228682224U) },
		{ FMassTrafficVehicleLightsFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleLightsFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleLightsFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLightsFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleLightsFragment), 4122340798U) },
		{ FMassTrafficVehicleControlFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleControlFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleControlFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleControlFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleControlFragment), 3099664328U) },
		{ FMassTrafficVehicleLaneChangeFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleLaneChangeFragment_Statics::NewStructOps, TEXT("MassTrafficVehicleLaneChangeFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleLaneChangeFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleLaneChangeFragment), 2978097125U) },
		{ FMassTrafficDebugFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficDebugFragment_Statics::NewStructOps, TEXT("MassTrafficDebugFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficDebugFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficDebugFragment), 3245269555U) },
		{ FMassTrafficInterpolationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficInterpolationFragment_Statics::NewStructOps, TEXT("MassTrafficInterpolationFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficInterpolationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficInterpolationFragment), 4276588838U) },
		{ FMassTrafficPIDControlInterpolationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDControlInterpolationFragment_Statics::NewStructOps, TEXT("MassTrafficPIDControlInterpolationFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficPIDControlInterpolationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDControlInterpolationFragment), 145274775U) },
		{ FMassTrafficPIDVehicleControlFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficPIDVehicleControlFragment_Statics::NewStructOps, TEXT("MassTrafficPIDVehicleControlFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficPIDVehicleControlFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficPIDVehicleControlFragment), 1963162443U) },
		{ FMassTrafficAngularVelocityFragment::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficAngularVelocityFragment_Statics::NewStructOps, TEXT("MassTrafficAngularVelocityFragment"),&Z_Registration_Info_UScriptStruct_FMassTrafficAngularVelocityFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficAngularVelocityFragment), 3502485555U) },
		{ FMassTrafficVehiclePhysicsSharedParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters_Statics::NewStructOps, TEXT("MassTrafficVehiclePhysicsSharedParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehiclePhysicsSharedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehiclePhysicsSharedParameters), 1527729633U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_971386102{
	TEXT("/Script/MassTraffic"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFragments_h__Script_MassTraffic_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
