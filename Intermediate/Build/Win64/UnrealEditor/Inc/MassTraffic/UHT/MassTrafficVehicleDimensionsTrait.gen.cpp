// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleDimensionsTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleDimensionsTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficVehicleDimensionsParameters ***************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleDimensionsParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleDimensionsParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\n\x09 * avoidance collision detection.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\n\x09* avoidance collision detection.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleDimensionsParameters constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficVehicleDimensionsParameters constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleDimensionsParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters;
class UScriptStruct* FMassTrafficVehicleDimensionsParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleDimensionsParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficVehicleDimensionsParameters Property Definitions ******
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleDimensionsParameters, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLength_MetaData), NewProp_HalfLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleDimensionsParameters, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfWidth_MetaData), NewProp_HalfWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewProp_HalfWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficVehicleDimensionsParameters Property Definitions ********
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficVehicleDimensionsParameters",
	Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::PropPointers),
	sizeof(FMassTrafficVehicleDimensionsParameters),
	alignof(FMassTrafficVehicleDimensionsParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleDimensionsParameters *****************************

// ********** Begin Class UMassTrafficVehicleDimensionsTrait ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait;
UClass* UMassTrafficVehicleDimensionsTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleDimensionsTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleDimensionsTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleDimensionsTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_NoRegister()
{
	return UMassTrafficVehicleDimensionsTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Dimensions" },
		{ "IncludePath", "MassTrafficVehicleDimensionsTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleDimensionsTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleDimensionsTrait constinit property declarations *******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficVehicleDimensionsTrait constinit property declarations *********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleDimensionsTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics

// ********** Begin Class UMassTrafficVehicleDimensionsTrait Property Definitions ******************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleDimensionsTrait, Params), Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 1912121551
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficVehicleDimensionsTrait Property Definitions ********************
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::ClassParams = {
	&UMassTrafficVehicleDimensionsTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleDimensionsTrait::StaticRegisterNativesUMassTrafficVehicleDimensionsTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait.OuterSingleton;
}
UMassTrafficVehicleDimensionsTrait::UMassTrafficVehicleDimensionsTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleDimensionsTrait);
UMassTrafficVehicleDimensionsTrait::~UMassTrafficVehicleDimensionsTrait() {}
// ********** End Class UMassTrafficVehicleDimensionsTrait *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleDimensionsParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleDimensionsParameters_Statics::NewStructOps, TEXT("MassTrafficVehicleDimensionsParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleDimensionsParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleDimensionsParameters), 1912121551U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleDimensionsTrait, UMassTrafficVehicleDimensionsTrait::StaticClass, TEXT("UMassTrafficVehicleDimensionsTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleDimensionsTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleDimensionsTrait), 179725726U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_3327247551{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleDimensionsTrait_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
