// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLightVisualizationProcessor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLightVisualizationProcessor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor();
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightVisualizationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMassTrafficLightInstanceCustomData *******************************
struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FMassTrafficLightInstanceCustomData); }
	static inline consteval int16 GetStructAlignment() { return alignof(FMassTrafficLightInstanceCustomData); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackedParam1_MetaData[] = {
		{ "Category", "MassTrafficLightInstanceCustomData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Bit packed param with EMassTrafficLightStateFlags packed into the least significant 8 bits */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bit packed param with EMassTrafficLightStateFlags packed into the least significant 8 bits" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FMassTrafficLightInstanceCustomData constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PackedParam1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FMassTrafficLightInstanceCustomData constinit property declarations *
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTrafficLightInstanceCustomData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData;
class UScriptStruct* FMassTrafficLightInstanceCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("MassTrafficLightInstanceCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.OuterSingleton;
	}

// ********** Begin ScriptStruct FMassTrafficLightInstanceCustomData Property Definitions **********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::NewProp_PackedParam1 = { "PackedParam1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMassTrafficLightInstanceCustomData, PackedParam1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackedParam1_MetaData), NewProp_PackedParam1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::NewProp_PackedParam1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FMassTrafficLightInstanceCustomData Property Definitions ************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	nullptr,
	&NewStructOps,
	"MassTrafficLightInstanceCustomData",
	Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::PropPointers),
	sizeof(FMassTrafficLightInstanceCustomData),
	alignof(FMassTrafficLightInstanceCustomData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData()
{
	if (!Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.InnerSingleton, Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData.InnerSingleton);
}
// ********** End ScriptStruct FMassTrafficLightInstanceCustomData *********************************

// ********** Begin Class UMassTrafficIntersectionVisualizationLODProcessor ************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor;
UClass* UMassTrafficIntersectionVisualizationLODProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficIntersectionVisualizationLODProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficIntersectionVisualizationLODProcessor"),
			Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficIntersectionVisualizationLODProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_NoRegister()
{
	return UMassTrafficIntersectionVisualizationLODProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficLight via the requirements\n */" },
#endif
		{ "DisplayName", "Traffic Intersection Visualization LOD" },
		{ "IncludePath", "MassTrafficLightVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficLight via the requirements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficIntersectionVisualizationLODProcessor constinit property declarations 
// ********** End Class UMassTrafficIntersectionVisualizationLODProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionVisualizationLODProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationLODProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::ClassParams = {
	&UMassTrafficIntersectionVisualizationLODProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficIntersectionVisualizationLODProcessor::StaticRegisterNativesUMassTrafficIntersectionVisualizationLODProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficIntersectionVisualizationLODProcessor);
UMassTrafficIntersectionVisualizationLODProcessor::~UMassTrafficIntersectionVisualizationLODProcessor() {}
// ********** End Class UMassTrafficIntersectionVisualizationLODProcessor **************************

// ********** Begin Class UMassTrafficIntersectionLODCollectorProcessor ****************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor;
UClass* UMassTrafficIntersectionLODCollectorProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficIntersectionLODCollectorProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficIntersectionLODCollectorProcessor"),
			Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficIntersectionLODCollectorProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_NoRegister()
{
	return UMassTrafficIntersectionLODCollectorProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficLight via the requirements\n */" },
#endif
		{ "DisplayName", "Traffic Intersection LOD Collector" },
		{ "IncludePath", "MassTrafficLightVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficLight via the requirements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficIntersectionLODCollectorProcessor constinit property declarations 
// ********** End Class UMassTrafficIntersectionLODCollectorProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionLODCollectorProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassLODCollectorProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::ClassParams = {
	&UMassTrafficIntersectionLODCollectorProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficIntersectionLODCollectorProcessor::StaticRegisterNativesUMassTrafficIntersectionLODCollectorProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficIntersectionLODCollectorProcessor);
UMassTrafficIntersectionLODCollectorProcessor::~UMassTrafficIntersectionLODCollectorProcessor() {}
// ********** End Class UMassTrafficIntersectionLODCollectorProcessor ******************************

// ********** Begin Class UMassTrafficLightVisualizationProcessor **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor;
UClass* UMassTrafficLightVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_NoRegister()
{
	return UMassTrafficLightVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden visualization processor to make it tied to the TrafficLight via the requirements\n */" },
#endif
		{ "IncludePath", "MassTrafficLightVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden visualization processor to make it tied to the TrafficLight via the requirements" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightVisualizationProcessor constinit property declarations **
// ********** End Class UMassTrafficLightVisualizationProcessor constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassVisualizationProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficLightVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficLightVisualizationProcessor::StaticRegisterNativesUMassTrafficLightVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficLightVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficLightVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightVisualizationProcessor);
UMassTrafficLightVisualizationProcessor::~UMassTrafficLightVisualizationProcessor() {}
// ********** End Class UMassTrafficLightVisualizationProcessor ************************************

// ********** Begin Class UMassTrafficLightUpdateCustomVisualizationProcessor **********************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor;
UClass* UMassTrafficLightUpdateCustomVisualizationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightUpdateCustomVisualizationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightUpdateCustomVisualizationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightUpdateCustomVisualizationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_NoRegister()
{
	return UMassTrafficLightUpdateCustomVisualizationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Custom visualization updates for TrafficLight\n */" },
#endif
		{ "IncludePath", "MassTrafficLightVisualizationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom visualization updates for TrafficLight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficLightVisualizationProcessor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightUpdateCustomVisualizationProcessor constinit property declarations 
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficLightUpdateCustomVisualizationProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightUpdateCustomVisualizationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics

// ********** Begin Class UMassTrafficLightUpdateCustomVisualizationProcessor Property Definitions *
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficLightUpdateCustomVisualizationProcessor, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficLightUpdateCustomVisualizationProcessor Property Definitions ***
UObject* (*const Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::ClassParams = {
	&UMassTrafficLightUpdateCustomVisualizationProcessor::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficLightUpdateCustomVisualizationProcessor::StaticRegisterNativesUMassTrafficLightUpdateCustomVisualizationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightUpdateCustomVisualizationProcessor);
UMassTrafficLightUpdateCustomVisualizationProcessor::~UMassTrafficLightUpdateCustomVisualizationProcessor() {}
// ********** End Class UMassTrafficLightUpdateCustomVisualizationProcessor ************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMassTrafficLightInstanceCustomData::StaticStruct, Z_Construct_UScriptStruct_FMassTrafficLightInstanceCustomData_Statics::NewStructOps, TEXT("MassTrafficLightInstanceCustomData"),&Z_Registration_Info_UScriptStruct_FMassTrafficLightInstanceCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTrafficLightInstanceCustomData), 3659496249U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionVisualizationLODProcessor, UMassTrafficIntersectionVisualizationLODProcessor::StaticClass, TEXT("UMassTrafficIntersectionVisualizationLODProcessor"), &Z_Registration_Info_UClass_UMassTrafficIntersectionVisualizationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionVisualizationLODProcessor), 2028739251U) },
		{ Z_Construct_UClass_UMassTrafficIntersectionLODCollectorProcessor, UMassTrafficIntersectionLODCollectorProcessor::StaticClass, TEXT("UMassTrafficIntersectionLODCollectorProcessor"), &Z_Registration_Info_UClass_UMassTrafficIntersectionLODCollectorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionLODCollectorProcessor), 347355827U) },
		{ Z_Construct_UClass_UMassTrafficLightVisualizationProcessor, UMassTrafficLightVisualizationProcessor::StaticClass, TEXT("UMassTrafficLightVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficLightVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightVisualizationProcessor), 3713867321U) },
		{ Z_Construct_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor, UMassTrafficLightUpdateCustomVisualizationProcessor::StaticClass, TEXT("UMassTrafficLightUpdateCustomVisualizationProcessor"), &Z_Registration_Info_UClass_UMassTrafficLightUpdateCustomVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightUpdateCustomVisualizationProcessor), 2636810309U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_2819636806{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightVisualizationProcessor_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
