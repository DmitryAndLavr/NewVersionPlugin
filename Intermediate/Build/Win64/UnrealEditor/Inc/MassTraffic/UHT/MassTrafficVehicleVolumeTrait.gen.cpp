// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleVolumeTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleVolumeTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVolumeTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficVehicleVolumeParameters *******************************
struct Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficVehicleVolumeParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficVehicleVolumeParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVolumeTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfLength_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\n\x09 * avoidance collision detection.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVolumeTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to front most point or rear most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfWidth_MetaData[] = {
		{ "Category", "Dimensions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\n\x09* avoidance collision detection.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVolumeTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance from vehicle origin to left most point or right most point (whichever is greater). Used for vehicle\navoidance collision detection." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficVehicleVolumeParameters constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficVehicleVolumeParameters constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficVehicleVolumeParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficVehicleVolumeParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficVehicleVolumeParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters;
class UScriptStruct* FMassTrafficVehicleVolumeParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficVehicleVolumeParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficVehicleVolumeParameters Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::NewProp_HalfLength = { "HalfLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleVolumeParameters, HalfLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfLength_MetaData), NewProp_HalfLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::NewProp_HalfWidth = { "HalfWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficVehicleVolumeParameters, HalfWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfWidth_MetaData), NewProp_HalfWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::NewProp_HalfLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::NewProp_HalfWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficVehicleVolumeParameters Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficVehicleVolumeParameters",
	Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::PropPointers),
	sizeof(FMassTrafficVehicleVolumeParameters),
	alignof(FMassTrafficVehicleVolumeParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficVehicleVolumeParameters *********************************

// ********** Begin Class UMassTrafficVehicleVolumeTrait *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait;
UClass* UMassTrafficVehicleVolumeTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleVolumeTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleVolumeTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleVolumeTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_NoRegister()
{
	return UMassTrafficVehicleVolumeTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Vehicle Volume Dimension" },
		{ "IncludePath", "MassTrafficVehicleVolumeTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVolumeTrait.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleVolumeTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleVolumeTrait constinit property declarations ***********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficVehicleVolumeTrait constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleVolumeTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics

// ********** Begin Class UMassTrafficVehicleVolumeTrait Property Definitions **********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficVehicleVolumeTrait, Params), Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 2741149733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficVehicleVolumeTrait Property Definitions ************************
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::ClassParams = {
	&UMassTrafficVehicleVolumeTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleVolumeTrait::StaticRegisterNativesUMassTrafficVehicleVolumeTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleVolumeTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleVolumeTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleVolumeTrait);
UMassTrafficVehicleVolumeTrait::~UMassTrafficVehicleVolumeTrait() {}
// ********** End Class UMassTrafficVehicleVolumeTrait *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficVehicleVolumeParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficVehicleVolumeParameters_Statics::NewStructOps, TEXT("MassTrafficVehicleVolumeParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficVehicleVolumeParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficVehicleVolumeParameters), 2741149733U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleVolumeTrait, UMassTrafficVehicleVolumeTrait::StaticClass, TEXT("UMassTrafficVehicleVolumeTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleVolumeTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleVolumeTrait), 1079709133U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_2304107989{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleVolumeTrait_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
