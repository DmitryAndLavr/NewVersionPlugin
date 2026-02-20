// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficConstrainedTrailerTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficConstrainedTrailerTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassConstSharedFragment();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityConfigAsset_NoRegister();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficConstrainedTrailerParameters **************************
struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficConstrainedTrailerParameters); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficConstrainedTrailerParameters); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailerAgentConfigAsset_MetaData[] = {
		{ "Category", "MassTrafficConstrainedTrailerParameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The trailer agent to spawn attached to this vehicle.\n\x09 * @see UMassTrafficTrailerSpawnDataGenerator\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The trailer agent to spawn attached to this vehicle.\n@see UMassTrafficTrailerSpawnDataGenerator" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficConstrainedTrailerParameters constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailerAgentConfigAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficConstrainedTrailerParameters constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficConstrainedTrailerParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics
static_assert(std::is_polymorphic<FMassTrafficConstrainedTrailerParameters>() == std::is_polymorphic<FMassConstSharedFragment>(), "USTRUCT FMassTrafficConstrainedTrailerParameters cannot be polymorphic unless super FMassConstSharedFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters;
class UScriptStruct* FMassTrafficConstrainedTrailerParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficConstrainedTrailerParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficConstrainedTrailerParameters Property Definitions *****
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewProp_TrailerAgentConfigAsset = { "TrailerAgentConfigAsset", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficConstrainedTrailerParameters, TrailerAgentConfigAsset), Z_Construct_UClass_UMassEntityConfigAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailerAgentConfigAsset_MetaData), NewProp_TrailerAgentConfigAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewProp_TrailerAgentConfigAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficConstrainedTrailerParameters Property Definitions *******
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassConstSharedFragment,
	&NewStructOps,
	"MassTrafficConstrainedTrailerParameters",
	Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::PropPointers),
	sizeof(FMassTrafficConstrainedTrailerParameters),
	alignof(FMassTrafficConstrainedTrailerParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficConstrainedTrailerParameters ****************************

// ********** Begin Class UMassTrafficConstrainedTrailerTrait **************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait;
UClass* UMassTrafficConstrainedTrailerTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficConstrainedTrailerTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficConstrainedTrailerTrait"),
			Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficConstrainedTrailerTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_NoRegister()
{
	return UMassTrafficConstrainedTrailerTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * In concert with UMassTrafficTrailerSpawnDataGenerator, spawns a TrailerAgentConfigAsset entity and point constrains\n * its vehicle simulation to this vehicle.\n */" },
#endif
		{ "DisplayName", "Constrained Trailer" },
		{ "IncludePath", "MassTrafficConstrainedTrailerTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In concert with UMassTrafficTrailerSpawnDataGenerator, spawns a TrailerAgentConfigAsset entity and point constrains\nits vehicle simulation to this vehicle." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "Category", "Mass Traffic" },
		{ "ModuleRelativePath", "Public/MassTrafficConstrainedTrailerTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficConstrainedTrailerTrait constinit property declarations ******
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficConstrainedTrailerTrait constinit property declarations ********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficConstrainedTrailerTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics

// ********** Begin Class UMassTrafficConstrainedTrailerTrait Property Definitions *****************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficConstrainedTrailerTrait, Params), Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3144691149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficConstrainedTrailerTrait Property Definitions *******************
UObject* (*const Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::ClassParams = {
	&UMassTrafficConstrainedTrailerTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::PropPointers),
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficConstrainedTrailerTrait::StaticRegisterNativesUMassTrafficConstrainedTrailerTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait.OuterSingleton;
}
UMassTrafficConstrainedTrailerTrait::UMassTrafficConstrainedTrailerTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficConstrainedTrailerTrait);
UMassTrafficConstrainedTrailerTrait::~UMassTrafficConstrainedTrailerTrait() {}
// ********** End Class UMassTrafficConstrainedTrailerTrait ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficConstrainedTrailerParameters::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficConstrainedTrailerParameters_Statics::NewStructOps, TEXT("MassTrafficConstrainedTrailerParameters"),&Z_Registration_Info_UScriptStruct_FMassTrafficConstrainedTrailerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficConstrainedTrailerParameters), 3144691149U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficConstrainedTrailerTrait, UMassTrafficConstrainedTrailerTrait::StaticClass, TEXT("UMassTrafficConstrainedTrailerTrait"), &Z_Registration_Info_UClass_UMassTrafficConstrainedTrailerTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficConstrainedTrailerTrait), 3893641192U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_1989530672{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficConstrainedTrailerTrait_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
