// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleSyncTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleSyncTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSACTORS_API UClass* Z_Construct_UClass_UMassAgentSyncTrait();
MASSCOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FObjectWrapperFragment();
MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassTranslator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSyncTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSyncTrait_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FChaosVehicleMovementCopyToMassTag ********************************
struct Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FChaosVehicleMovementCopyToMassTag); }
	static inline consteval int16 GetStructAlignment() { return alignof(FChaosVehicleMovementCopyToMassTag); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FChaosVehicleMovementCopyToMassTag constinit property declarations 
// ********** End ScriptStruct FChaosVehicleMovementCopyToMassTag constinit property declarations **
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVehicleMovementCopyToMassTag>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics
static_assert(std::is_polymorphic<FChaosVehicleMovementCopyToMassTag>() == std::is_polymorphic<FMassTag>(), "USTRUCT FChaosVehicleMovementCopyToMassTag cannot be polymorphic unless super FMassTag is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag;
class UScriptStruct* FChaosVehicleMovementCopyToMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ChaosVehicleMovementCopyToMassTag"));
	}
	return Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassTag,
	&NewStructOps,
	"ChaosVehicleMovementCopyToMassTag",
	nullptr,
	0,
	sizeof(FChaosVehicleMovementCopyToMassTag),
	alignof(FChaosVehicleMovementCopyToMassTag),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag()
{
	if (!Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.InnerSingleton, Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag.InnerSingleton);
}
// ********** End ScriptStruct FChaosVehicleMovementCopyToMassTag **********************************

// ********** Begin ScriptStruct FChaosVehicleMovementComponentWrapperFragment *********************
struct Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FChaosVehicleMovementComponentWrapperFragment); }
	static inline consteval int16 GetStructAlignment() { return alignof(FChaosVehicleMovementComponentWrapperFragment); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FChaosVehicleMovementComponentWrapperFragment constinit property declarations 
// ********** End ScriptStruct FChaosVehicleMovementComponentWrapperFragment constinit property declarations 
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVehicleMovementComponentWrapperFragment>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics
static_assert(std::is_polymorphic<FChaosVehicleMovementComponentWrapperFragment>() == std::is_polymorphic<FObjectWrapperFragment>(), "USTRUCT FChaosVehicleMovementComponentWrapperFragment cannot be polymorphic unless super FObjectWrapperFragment is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment;
class UScriptStruct* FChaosVehicleMovementComponentWrapperFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("ChaosVehicleMovementComponentWrapperFragment"));
	}
	return Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FObjectWrapperFragment,
	&NewStructOps,
	"ChaosVehicleMovementComponentWrapperFragment",
	nullptr,
	0,
	sizeof(FChaosVehicleMovementComponentWrapperFragment),
	alignof(FChaosVehicleMovementComponentWrapperFragment),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment()
{
	if (!Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.InnerSingleton, Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment.InnerSingleton);
}
// ********** End ScriptStruct FChaosVehicleMovementComponentWrapperFragment ***********************

// ********** Begin Class UMassTrafficVehicleSyncTrait *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait;
UClass* UMassTrafficVehicleSyncTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleSyncTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleSyncTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleSyncTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleSyncTrait_NoRegister()
{
	return UMassTrafficVehicleSyncTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n// SyncTraits\n//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficVehicleSyncTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SyncTraits" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleSyncTrait constinit property declarations *************
// ********** End Class UMassTrafficVehicleSyncTrait constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleSyncTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassAgentSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::ClassParams = {
	&UMassTrafficVehicleSyncTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A3u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleSyncTrait::StaticRegisterNativesUMassTrafficVehicleSyncTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleSyncTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait.OuterSingleton;
}
UMassTrafficVehicleSyncTrait::UMassTrafficVehicleSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleSyncTrait);
UMassTrafficVehicleSyncTrait::~UMassTrafficVehicleSyncTrait() {}
// ********** End Class UMassTrafficVehicleSyncTrait ***********************************************

// ********** Begin Class UMassTrafficVehicleMovementSyncTrait *************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait;
UClass* UMassTrafficVehicleMovementSyncTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleMovementSyncTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleMovementSyncTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleMovementSyncTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_NoRegister()
{
	return UMassTrafficVehicleMovementSyncTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vehicle Movement Sync" },
		{ "IncludePath", "MassTrafficVehicleSyncTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleMovementSyncTrait constinit property declarations *****
// ********** End Class UMassTrafficVehicleMovementSyncTrait constinit property declarations *******
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleMovementSyncTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficVehicleSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::ClassParams = {
	&UMassTrafficVehicleMovementSyncTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleMovementSyncTrait::StaticRegisterNativesUMassTrafficVehicleMovementSyncTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait.OuterSingleton;
}
UMassTrafficVehicleMovementSyncTrait::UMassTrafficVehicleMovementSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleMovementSyncTrait);
UMassTrafficVehicleMovementSyncTrait::~UMassTrafficVehicleMovementSyncTrait() {}
// ********** End Class UMassTrafficVehicleMovementSyncTrait ***************************************

// ********** Begin Class UMassTrafficVehicleOrientationSyncTrait **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait;
UClass* UMassTrafficVehicleOrientationSyncTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleOrientationSyncTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleOrientationSyncTrait"),
			Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleOrientationSyncTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_NoRegister()
{
	return UMassTrafficVehicleOrientationSyncTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Vehicle Orientation Sync" },
		{ "IncludePath", "MassTrafficVehicleSyncTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleOrientationSyncTrait constinit property declarations **
// ********** End Class UMassTrafficVehicleOrientationSyncTrait constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleOrientationSyncTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficVehicleSyncTrait,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::ClassParams = {
	&UMassTrafficVehicleOrientationSyncTrait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001030A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleOrientationSyncTrait::StaticRegisterNativesUMassTrafficVehicleOrientationSyncTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait.OuterSingleton;
}
UMassTrafficVehicleOrientationSyncTrait::UMassTrafficVehicleOrientationSyncTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleOrientationSyncTrait);
UMassTrafficVehicleOrientationSyncTrait::~UMassTrafficVehicleOrientationSyncTrait() {}
// ********** End Class UMassTrafficVehicleOrientationSyncTrait ************************************

// ********** Begin Class UMassTrafficVehicleMovementToMassTranslator ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator;
UClass* UMassTrafficVehicleMovementToMassTranslator::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleMovementToMassTranslator;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleMovementToMassTranslator"),
			Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleMovementToMassTranslator,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_NoRegister()
{
	return UMassTrafficVehicleMovementToMassTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n// Translators\n//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficVehicleSyncTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Translators" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleMovementToMassTranslator constinit property declarations 
// ********** End Class UMassTrafficVehicleMovementToMassTranslator constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleMovementToMassTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::ClassParams = {
	&UMassTrafficVehicleMovementToMassTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleMovementToMassTranslator::StaticRegisterNativesUMassTrafficVehicleMovementToMassTranslator()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleMovementToMassTranslator);
UMassTrafficVehicleMovementToMassTranslator::~UMassTrafficVehicleMovementToMassTranslator() {}
// ********** End Class UMassTrafficVehicleMovementToMassTranslator ********************************

// ********** Begin Class UMassTrafficVehicleOrientationToMassTranslator ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator;
UClass* UMassTrafficVehicleOrientationToMassTranslator::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleOrientationToMassTranslator;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleOrientationToMassTranslator"),
			Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleOrientationToMassTranslator,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_NoRegister()
{
	return UMassTrafficVehicleOrientationToMassTranslator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficVehicleSyncTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleSyncTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleOrientationToMassTranslator constinit property declarations 
// ********** End Class UMassTrafficVehicleOrientationToMassTranslator constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleOrientationToMassTranslator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTranslator,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::ClassParams = {
	&UMassTrafficVehicleOrientationToMassTranslator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleOrientationToMassTranslator::StaticRegisterNativesUMassTrafficVehicleOrientationToMassTranslator()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleOrientationToMassTranslator);
UMassTrafficVehicleOrientationToMassTranslator::~UMassTrafficVehicleOrientationToMassTranslator() {}
// ********** End Class UMassTrafficVehicleOrientationToMassTranslator *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVehicleMovementCopyToMassTag::StaticStruct, Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics::NewStructOps, TEXT("ChaosVehicleMovementCopyToMassTag"),&Z_Registration_Info_UScriptStruct_FChaosVehicleMovementCopyToMassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVehicleMovementCopyToMassTag), 2279168899U) },
		{ FChaosVehicleMovementComponentWrapperFragment::StaticStruct, Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics::NewStructOps, TEXT("ChaosVehicleMovementComponentWrapperFragment"),&Z_Registration_Info_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVehicleMovementComponentWrapperFragment), 2343985344U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleSyncTrait, UMassTrafficVehicleSyncTrait::StaticClass, TEXT("UMassTrafficVehicleSyncTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleSyncTrait), 2520319103U) },
		{ Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait, UMassTrafficVehicleMovementSyncTrait::StaticClass, TEXT("UMassTrafficVehicleMovementSyncTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleMovementSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleMovementSyncTrait), 1897527476U) },
		{ Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait, UMassTrafficVehicleOrientationSyncTrait::StaticClass, TEXT("UMassTrafficVehicleOrientationSyncTrait"), &Z_Registration_Info_UClass_UMassTrafficVehicleOrientationSyncTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleOrientationSyncTrait), 2137629241U) },
		{ Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator, UMassTrafficVehicleMovementToMassTranslator::StaticClass, TEXT("UMassTrafficVehicleMovementToMassTranslator"), &Z_Registration_Info_UClass_UMassTrafficVehicleMovementToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleMovementToMassTranslator), 1246255819U) },
		{ Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator, UMassTrafficVehicleOrientationToMassTranslator::StaticClass, TEXT("UMassTrafficVehicleOrientationToMassTranslator"), &Z_Registration_Info_UClass_UMassTrafficVehicleOrientationToMassTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleOrientationToMassTranslator), 3789716338U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_3278785898{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
