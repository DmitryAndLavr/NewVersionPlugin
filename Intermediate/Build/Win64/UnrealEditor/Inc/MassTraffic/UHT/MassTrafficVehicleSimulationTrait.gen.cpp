// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleSimulationTrait.h"
#include "MassSimulationLOD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleSimulationTrait() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficVehicleSimulationParameters ***************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleSimulationParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleSimulationParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontAxleX_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Distance along X from vehicle origin to front axel (i.e front half of wheelbase) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance along X from vehicle origin to front axel (i.e front half of wheelbase)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RearAxleX_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase) */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Negative distance along X from vehicle origin to rear axel (i.e back half of wheelbase)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestrictedToTrunkLanesOnly_MetaData[] = {
		{ "Category", "Restrictions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, this vehicle will only be allowed to drive on lanes matching AMassTrafficCoordinator::TrunkLaneFilter\n\x09 * e.g: to restrict large vehicles to freeways\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this vehicle will only be allowed to drive on lanes matching AMassTrafficCoordinator::TrunkLaneFilter\ne.g: to restrict large vehicles to freeways" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsVehicleTemplateActor_MetaData[] = {
		{ "Category", "Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor class of this agent when spawned in high resolution */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor class of this agent when spawned in high resolution" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleSimulationParameters constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrontAxleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RearAxleX;
	static void NewProp_bRestrictedToTrunkLanesOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestrictedToTrunkLanesOnly;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicsVehicleTemplateActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficVehicleSimulationParameters constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleSimulationParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleSimulationParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficVehicleSimulationParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters;
class UScriptStruct* FMassTrafficVehicleSimulationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleSimulationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficVehicleSimulationParameters Property Definitions ******
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX = { "FrontAxleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, FrontAxleX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontAxleX_MetaData), NewProp_FrontAxleX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX = { "RearAxleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, RearAxleX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RearAxleX_MetaData), NewProp_RearAxleX_MetaData) };
void Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_SetBit(void* Obj)
{
	((FMassTrafficVehicleSimulationParameters*)Obj)->bRestrictedToTrunkLanesOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly = { "bRestrictedToTrunkLanesOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMassTrafficVehicleSimulationParameters), &Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestrictedToTrunkLanesOnly_MetaData), NewProp_bRestrictedToTrunkLanesOnly_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor = { "PhysicsVehicleTemplateActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleSimulationParameters, PhysicsVehicleTemplateActor), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AWheeledVehiclePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsVehicleTemplateActor_MetaData), NewProp_PhysicsVehicleTemplateActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_FrontAxleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_RearAxleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_bRestrictedToTrunkLanesOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewProp_PhysicsVehicleTemplateActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficVehicleSimulationParameters Property Definitions ********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficVehicleSimulationParameters",
	Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::PropPointers),
	sizeof(FMassTrafficVehicleSimulationParameters),
	alignof(FMassTrafficVehicleSimulationParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleSimulationParameters *****************************

// ********** Begin Class UMassTrafficVehicleSimulationTrait ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait;
UClass* UMassTrafficVehicleSimulationTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleSimulationTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleSimulationTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleSimulationTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_NoRegister()
{
	return UMassTrafficVehicleSimulationTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Simulation" },
		{ "IncludePath", "MassTrafficVehicleSimulationTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableTickParams_MetaData[] = {
		{ "Category", "Variable Tick" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSimulationTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleSimulationTrait constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VariableTickParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficVehicleSimulationTrait constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleSimulationTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics

// ********** Begin Class UMassTrafficVehicleSimulationTrait Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationTrait, Params), Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3332581569
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams = { "VariableTickParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleSimulationTrait, VariableTickParams), Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableTickParams_MetaData), NewProp_VariableTickParams_MetaData) }; // 2248681280
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::NewProp_VariableTickParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficVehicleSimulationTrait Property Definitions ********************
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::ClassParams = {
	&UMassTrafficVehicleSimulationTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleSimulationTrait::StaticRegisterNativesUMassTrafficVehicleSimulationTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleSimulationTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleSimulationTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleSimulationTrait);
UMassTrafficVehicleSimulationTrait::~UMassTrafficVehicleSimulationTrait() {}
// ********** End Class UMassTrafficVehicleSimulationTrait *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleSimulationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleSimulationParameters_Statics::NewStructOps, TEXT("MassTrafficVehicleSimulationParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleSimulationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleSimulationParameters), 3332581569U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleSimulationTrait, UMassTrafficVehicleSimulationTrait::StaticClass, TEXT("UMassTrafficVehicleSimulationTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleSimulationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleSimulationTrait), 3061088275U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_782994316{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSimulationTrait_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
