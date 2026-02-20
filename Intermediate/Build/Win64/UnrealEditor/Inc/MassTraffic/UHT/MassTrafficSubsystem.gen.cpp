// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
MASSENTITY_API UClass* Z_Construct_UClass_UMassSubsystemBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSettings_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterEx();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocation();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FZoneGraphTagFilterEx *********************************************
struct Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZoneGraphTagFilterEx); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZoneGraphTagFilterEx); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZoneGraphTagFilterEx constinit property declarations *************
// ********** End ScriptStruct FZoneGraphTagFilterEx constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagFilterEx>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics
static_assert(std::is_polymorphic<FZoneGraphTagFilterEx>() == std::is_polymorphic<FZoneGraphTagFilter>(), "USTRUCT FZoneGraphTagFilterEx cannot be polymorphic unless super FZoneGraphTagFilter is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx;
class UScriptStruct* FZoneGraphTagFilterEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagFilterEx, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ZoneGraphTagFilterEx"));
	}
	return Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FZoneGraphTagFilter,
	&NewStructOps,
	"ZoneGraphTagFilterEx",
	nullptr,
	0,
	sizeof(FZoneGraphTagFilterEx),
	alignof(FZoneGraphTagFilterEx),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterEx()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx.InnerSingleton);
}
// ********** End ScriptStruct FZoneGraphTagFilterEx ***********************************************

// ********** Begin ScriptStruct FZoneGraphLaneLocationEx ******************************************
struct Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FZoneGraphLaneLocationEx); }
	static inline consteval int16 GetStructAlignment() { return alignof(FZoneGraphLaneLocationEx); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FZoneGraphLaneLocationEx constinit property declarations **********
// ********** End ScriptStruct FZoneGraphLaneLocationEx constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphLaneLocationEx>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics
static_assert(std::is_polymorphic<FZoneGraphLaneLocationEx>() == std::is_polymorphic<FZoneGraphLaneLocation>(), "USTRUCT FZoneGraphLaneLocationEx cannot be polymorphic unless super FZoneGraphLaneLocation is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx;
class UScriptStruct* FZoneGraphLaneLocationEx::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ZoneGraphLaneLocationEx"));
	}
	return Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FZoneGraphLaneLocation,
	&NewStructOps,
	"ZoneGraphLaneLocationEx",
	nullptr,
	0,
	sizeof(FZoneGraphLaneLocationEx),
	alignof(FZoneGraphLaneLocationEx),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx()
{
	if (!Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx.InnerSingleton);
}
// ********** End ScriptStruct FZoneGraphLaneLocationEx ********************************************

// ********** Begin Class UMassTrafficSubsystem Function ClearAllTrafficLanes **********************
struct Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear all traffic lanes of their vehicle data. Must be called after deleting all vehicle agents */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all traffic lanes of their vehicle data. Must be called after deleting all vehicle agents" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearAllTrafficLanes constinit property declarations ******************
// ********** End Function ClearAllTrafficLanes constinit property declarations ********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "ClearAllTrafficLanes", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execClearAllTrafficLanes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllTrafficLanes();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function ClearAllTrafficLanes ************************

// ********** Begin Class UMassTrafficSubsystem Function FindNearestLane ***************************
struct Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics
{
	struct MassTrafficSubsystem_eventFindNearestLane_Parms
	{
		FVector Location;
		float MaxRange;
		FZoneGraphTagFilterEx TagFilter;
		FZoneGraphLaneLocationEx LocationOnRoad;
		float SqDistance;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Find lane **/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find lane *" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function FindNearestLane constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOnRoad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SqDistance;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function FindNearestLane constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function FindNearestLane Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventFindNearestLane_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventFindNearestLane_Parms, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_TagFilter = { "TagFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventFindNearestLane_Parms, TagFilter), Z_Construct_UScriptStruct_FZoneGraphTagFilterEx, METADATA_PARAMS(0, nullptr) }; // 1990007368
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_LocationOnRoad = { "LocationOnRoad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventFindNearestLane_Parms, LocationOnRoad), Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx, METADATA_PARAMS(0, nullptr) }; // 516667682
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_SqDistance = { "SqDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventFindNearestLane_Parms, SqDistance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficSubsystem_eventFindNearestLane_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficSubsystem_eventFindNearestLane_Parms), &Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_TagFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_LocationOnRoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_SqDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::PropPointers) < 2048);
// ********** End Function FindNearestLane Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "FindNearestLane", 	Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::MassTrafficSubsystem_eventFindNearestLane_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::MassTrafficSubsystem_eventFindNearestLane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execFindNearestLane)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_STRUCT(FZoneGraphTagFilterEx,Z_Param_TagFilter);
	P_GET_STRUCT_REF(FZoneGraphLaneLocationEx,Z_Param_Out_LocationOnRoad);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SqDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FindNearestLane(Z_Param_Location,Z_Param_MaxRange,Z_Param_TagFilter,Z_Param_Out_LocationOnRoad,Z_Param_Out_SqDistance);
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function FindNearestLane *****************************

// ********** Begin Class UMassTrafficSubsystem Function GetNumParkedVehicleAgents *****************
struct Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of parked vehicle agents currently present in the world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of parked vehicle agents currently present in the world" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumParkedVehicleAgents constinit property declarations *************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumParkedVehicleAgents constinit property declarations ***************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumParkedVehicleAgents Property Definitions ************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers) < 2048);
// ********** End Function GetNumParkedVehicleAgents Property Definitions **************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "GetNumParkedVehicleAgents", 	Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumParkedVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execGetNumParkedVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumParkedVehicleAgents();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function GetNumParkedVehicleAgents *******************

// ********** Begin Class UMassTrafficSubsystem Function GetNumTrafficVehicleAgents ****************
struct Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the number of traffic vehicle agents currently present in the world */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of traffic vehicle agents currently present in the world" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetNumTrafficVehicleAgents constinit property declarations ************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNumTrafficVehicleAgents constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNumTrafficVehicleAgents Property Definitions ***********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers) < 2048);
// ********** End Function GetNumTrafficVehicleAgents Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "GetNumTrafficVehicleAgents", 	Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventGetNumTrafficVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execGetNumTrafficVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumTrafficVehicleAgents();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function GetNumTrafficVehicleAgents ******************

// ********** Begin Class UMassTrafficSubsystem Function HasParkedVehicleAgents ********************
struct Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are any parked vehicle agents currently present in the world, false otherwise */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are any parked vehicle agents currently present in the world, false otherwise" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasParkedVehicleAgents constinit property declarations ****************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasParkedVehicleAgents constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasParkedVehicleAgents Property Definitions ***************************
void Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms), &Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers) < 2048);
// ********** End Function HasParkedVehicleAgents Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "HasParkedVehicleAgents", 	Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::MassTrafficSubsystem_eventHasParkedVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execHasParkedVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasParkedVehicleAgents();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function HasParkedVehicleAgents **********************

// ********** Begin Class UMassTrafficSubsystem Function HasTrafficVehicleAgents *******************
struct Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics
{
	struct MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true if there are any traffic vehicle agents currently present in the world, false otherwise */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if there are any traffic vehicle agents currently present in the world, false otherwise" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function HasTrafficVehicleAgents constinit property declarations ***************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HasTrafficVehicleAgents constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HasTrafficVehicleAgents Property Definitions **************************
void Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms), &Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers) < 2048);
// ********** End Function HasTrafficVehicleAgents Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficSubsystem, nullptr, "HasTrafficVehicleAgents", 	Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::MassTrafficSubsystem_eventHasTrafficVehicleAgents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficSubsystem::execHasTrafficVehicleAgents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTrafficVehicleAgents();
	P_NATIVE_END;
}
// ********** End Class UMassTrafficSubsystem Function HasTrafficVehicleAgents *********************

// ********** Begin Class UMassTrafficSubsystem ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficSubsystem;
UClass* UMassTrafficSubsystem::GetPrivateStaticClass()
{
	using TClass = UMassTrafficSubsystem;
	if (!Z_Registration_Info_UClass_UMassTrafficSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficSubsystem"),
			Z_Registration_Info_UClass_UMassTrafficSubsystem.InnerSingleton,
			StaticRegisterNativesUMassTrafficSubsystem,
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
	return Z_Registration_Info_UClass_UMassTrafficSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister()
{
	return UMassTrafficSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Subsystem that tracks mass traffic entities driving on the zone graph.\n * \n * Manages traffic specific runtime data for traffic navigable zone graph lanes. \n */" },
#endif
		{ "IncludePath", "MassTrafficSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subsystem that tracks mass traffic entities driving on the zone graph.\n\nManages traffic specific runtime data for traffic navigable zone graph lanes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassTrafficSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficSubsystem constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassTrafficSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fields_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Fields;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneGraphSubsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RemoveVehiclesOverlappingPlayersProcessor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficSubsystem constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearAllTrafficLanes"), .Pointer = &UMassTrafficSubsystem::execClearAllTrafficLanes },
		{ .NameUTF8 = UTF8TEXT("FindNearestLane"), .Pointer = &UMassTrafficSubsystem::execFindNearestLane },
		{ .NameUTF8 = UTF8TEXT("GetNumParkedVehicleAgents"), .Pointer = &UMassTrafficSubsystem::execGetNumParkedVehicleAgents },
		{ .NameUTF8 = UTF8TEXT("GetNumTrafficVehicleAgents"), .Pointer = &UMassTrafficSubsystem::execGetNumTrafficVehicleAgents },
		{ .NameUTF8 = UTF8TEXT("HasParkedVehicleAgents"), .Pointer = &UMassTrafficSubsystem::execHasParkedVehicleAgents },
		{ .NameUTF8 = UTF8TEXT("HasTrafficVehicleAgents"), .Pointer = &UMassTrafficSubsystem::execHasTrafficVehicleAgents },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_ClearAllTrafficLanes, "ClearAllTrafficLanes" }, // 1816452533
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_FindNearestLane, "FindNearestLane" }, // 151105918
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_GetNumParkedVehicleAgents, "GetNumParkedVehicleAgents" }, // 213734788
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_GetNumTrafficVehicleAgents, "GetNumTrafficVehicleAgents" }, // 615169559
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_HasParkedVehicleAgents, "HasParkedVehicleAgents" }, // 2187787525
		{ &Z_Construct_UFunction_UMassTrafficSubsystem_HasTrafficVehicleAgents, "HasTrafficVehicleAgents" }, // 1148657356
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficSubsystem_Statics

// ********** Begin Class UMassTrafficSubsystem Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_MassTrafficSettings = { "MassTrafficSettings", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, MassTrafficSettings), Z_Construct_UClass_UMassTrafficSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassTrafficSettings_MetaData), NewProp_MassTrafficSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields_Inner = { "Fields", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0124088000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, Fields), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_ZoneGraphSubsystem = { "ZoneGraphSubsystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, ZoneGraphSubsystem), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneGraphSubsystem_MetaData), NewProp_ZoneGraphSubsystem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_RemoveVehiclesOverlappingPlayersProcessor = { "RemoveVehiclesOverlappingPlayersProcessor", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSubsystem, RemoveVehiclesOverlappingPlayersProcessor), Z_Construct_UClass_UMassTrafficRecycleVehiclesOverlappingPlayersProcessor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData), NewProp_RemoveVehiclesOverlappingPlayersProcessor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_MassTrafficSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_ZoneGraphSubsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSubsystem_Statics::NewProp_RemoveVehiclesOverlappingPlayersProcessor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficSubsystem Property Definitions *********************************
UObject* (*const Z_Construct_UClass_UMassTrafficSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassSubsystemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficSubsystem_Statics::ClassParams = {
	&UMassTrafficSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::PropPointers),
	0,
	0x009000A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficSubsystem_Statics::Class_MetaDataParams)
};
void UMassTrafficSubsystem::StaticRegisterNativesUMassTrafficSubsystem()
{
	UClass* Class = UMassTrafficSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMassTrafficSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMassTrafficSubsystem()
{
	if (!Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton, Z_Construct_UClass_UMassTrafficSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficSubsystem);
UMassTrafficSubsystem::~UMassTrafficSubsystem() {}
// ********** End Class UMassTrafficSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FZoneGraphTagFilterEx::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagFilterEx_Statics::NewStructOps, TEXT("ZoneGraphTagFilterEx"),&Z_Registration_Info_UScriptStruct_FZoneGraphTagFilterEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagFilterEx), 1990007368U) },
		{ FZoneGraphLaneLocationEx::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphLaneLocationEx_Statics::NewStructOps, TEXT("ZoneGraphLaneLocationEx"),&Z_Registration_Info_UScriptStruct_FZoneGraphLaneLocationEx, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphLaneLocationEx), 516667682U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficSubsystem, UMassTrafficSubsystem::StaticClass, TEXT("UMassTrafficSubsystem"), &Z_Registration_Info_UClass_UMassTrafficSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficSubsystem), 219233986U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_4177728551{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficSubsystem_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
