// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFieldOperations.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldOperations() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MASSLOD_API UEnum* Z_Construct_UEnum_MassLOD_EMassLOD();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficSubsystem_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficFieldOperationBase *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFieldOperationBase;
UClass* UMassTrafficFieldOperationBase::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFieldOperationBase;
	if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFieldOperationBase"),
			Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.InnerSingleton,
			StaticRegisterNativesUMassTrafficFieldOperationBase,
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
	return Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister()
{
	return UMassTrafficFieldOperationBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFieldOperationBase constinit property declarations ***********
// ********** End Class UMassTrafficFieldOperationBase constinit property declarations *************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldOperationBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::ClassParams = {
	&UMassTrafficFieldOperationBase::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::Class_MetaDataParams)
};
void UMassTrafficFieldOperationBase::StaticRegisterNativesUMassTrafficFieldOperationBase()
{
}
UClass* Z_Construct_UClass_UMassTrafficFieldOperationBase()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldOperationBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFieldOperationBase.OuterSingleton;
}
UMassTrafficFieldOperationBase::UMassTrafficFieldOperationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFieldOperationBase);
UMassTrafficFieldOperationBase::~UMassTrafficFieldOperationBase() {}
// ********** End Class UMassTrafficFieldOperationBase *********************************************

// ********** Begin Class UMassTrafficBeginPlayFieldOperationBase **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase;
UClass* UMassTrafficBeginPlayFieldOperationBase::GetPrivateStaticClass()
{
	using TClass = UMassTrafficBeginPlayFieldOperationBase;
	if (!Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficBeginPlayFieldOperationBase"),
			Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.InnerSingleton,
			StaticRegisterNativesUMassTrafficBeginPlayFieldOperationBase,
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
	return Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_NoRegister()
{
	return UMassTrafficBeginPlayFieldOperationBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Any field operations subclassing from this will be run automatically on begin play */" },
#endif
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Any field operations subclassing from this will be run automatically on begin play" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficBeginPlayFieldOperationBase constinit property declarations **
// ********** End Class UMassTrafficBeginPlayFieldOperationBase constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficBeginPlayFieldOperationBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::ClassParams = {
	&UMassTrafficBeginPlayFieldOperationBase::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::Class_MetaDataParams)
};
void UMassTrafficBeginPlayFieldOperationBase::StaticRegisterNativesUMassTrafficBeginPlayFieldOperationBase()
{
}
UClass* Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase()
{
	if (!Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton, Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase.OuterSingleton;
}
UMassTrafficBeginPlayFieldOperationBase::UMassTrafficBeginPlayFieldOperationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficBeginPlayFieldOperationBase);
UMassTrafficBeginPlayFieldOperationBase::~UMassTrafficBeginPlayFieldOperationBase() {}
// ********** End Class UMassTrafficBeginPlayFieldOperationBase ************************************

// ********** Begin Class UMassTrafficFieldOperationsProcessorBase *********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase;
UClass* UMassTrafficFieldOperationsProcessorBase::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFieldOperationsProcessorBase;
	if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFieldOperationsProcessorBase"),
			Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.InnerSingleton,
			StaticRegisterNativesUMassTrafficFieldOperationsProcessorBase,
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
	return Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_NoRegister()
{
	return UMassTrafficFieldOperationsProcessorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Operations" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMassTrafficSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFieldOperationsProcessorBase constinit property declarations *
	static const UECodeGen_Private::FClassPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMassTrafficSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficFieldOperationsProcessorBase constinit property declarations ***
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFieldOperationsProcessorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics

// ********** Begin Class UMassTrafficFieldOperationsProcessorBase Property Definitions ************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldOperationsProcessorBase, Operation), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UMassTrafficFieldOperationBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem = { "CachedMassTrafficSubsystem", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficFieldOperationsProcessorBase, CachedMassTrafficSubsystem), Z_Construct_UClass_UMassTrafficSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMassTrafficSubsystem_MetaData), NewProp_CachedMassTrafficSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::NewProp_CachedMassTrafficSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficFieldOperationsProcessorBase Property Definitions **************
UObject* (*const Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::ClassParams = {
	&UMassTrafficFieldOperationsProcessorBase::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::Class_MetaDataParams)
};
void UMassTrafficFieldOperationsProcessorBase::StaticRegisterNativesUMassTrafficFieldOperationsProcessorBase()
{
}
UClass* Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton, Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFieldOperationsProcessorBase);
UMassTrafficFieldOperationsProcessorBase::~UMassTrafficFieldOperationsProcessorBase() {}
// ********** End Class UMassTrafficFieldOperationsProcessorBase ***********************************

// ********** Begin Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation *******************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation;
UClass* UMassTrafficForceTrafficVehicleViewerLODFieldOperation::GetPrivateStaticClass()
{
	using TClass = UMassTrafficForceTrafficVehicleViewerLODFieldOperation;
	if (!Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficForceTrafficVehicleViewerLODFieldOperation"),
			Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.InnerSingleton,
			StaticRegisterNativesUMassTrafficForceTrafficVehicleViewerLODFieldOperation,
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
	return Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_NoRegister()
{
	return UMassTrafficForceTrafficVehicleViewerLODFieldOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Force Traffic Vehicle Viewer LOD" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation constinit property declarations 
	static const UECodeGen_Private::FBytePropertyParams NewProp_LOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficForceTrafficVehicleViewerLODFieldOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics

// ********** Begin Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation Property Definitions 
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficForceTrafficVehicleViewerLODFieldOperation, LOD), Z_Construct_UEnum_MassLOD_EMassLOD, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOD_MetaData), NewProp_LOD_MetaData) }; // 2697797976
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::NewProp_LOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation Property Definitions 
UObject* (*const Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::ClassParams = {
	&UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::Class_MetaDataParams)
};
void UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticRegisterNativesUMassTrafficForceTrafficVehicleViewerLODFieldOperation()
{
}
UClass* Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation()
{
	if (!Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation.OuterSingleton;
}
UMassTrafficForceTrafficVehicleViewerLODFieldOperation::UMassTrafficForceTrafficVehicleViewerLODFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficForceTrafficVehicleViewerLODFieldOperation);
UMassTrafficForceTrafficVehicleViewerLODFieldOperation::~UMassTrafficForceTrafficVehicleViewerLODFieldOperation() {}
// ********** End Class UMassTrafficForceTrafficVehicleViewerLODFieldOperation *********************

// ********** Begin Class UMassTrafficSetLaneSpeedLimitFieldOperation ******************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation;
UClass* UMassTrafficSetLaneSpeedLimitFieldOperation::GetPrivateStaticClass()
{
	using TClass = UMassTrafficSetLaneSpeedLimitFieldOperation;
	if (!Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficSetLaneSpeedLimitFieldOperation"),
			Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.InnerSingleton,
			StaticRegisterNativesUMassTrafficSetLaneSpeedLimitFieldOperation,
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
	return Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_NoRegister()
{
	return UMassTrafficSetLaneSpeedLimitFieldOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Set Lane Speed Limit" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedLimitMPH_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficSetLaneSpeedLimitFieldOperation constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedLimitMPH;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficSetLaneSpeedLimitFieldOperation constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficSetLaneSpeedLimitFieldOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics

// ********** Begin Class UMassTrafficSetLaneSpeedLimitFieldOperation Property Definitions *********
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH = { "SpeedLimitMPH", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficSetLaneSpeedLimitFieldOperation, SpeedLimitMPH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedLimitMPH_MetaData), NewProp_SpeedLimitMPH_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::NewProp_SpeedLimitMPH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficSetLaneSpeedLimitFieldOperation Property Definitions ***********
UObject* (*const Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::ClassParams = {
	&UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::Class_MetaDataParams)
};
void UMassTrafficSetLaneSpeedLimitFieldOperation::StaticRegisterNativesUMassTrafficSetLaneSpeedLimitFieldOperation()
{
}
UClass* Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation()
{
	if (!Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation.OuterSingleton;
}
UMassTrafficSetLaneSpeedLimitFieldOperation::UMassTrafficSetLaneSpeedLimitFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficSetLaneSpeedLimitFieldOperation);
UMassTrafficSetLaneSpeedLimitFieldOperation::~UMassTrafficSetLaneSpeedLimitFieldOperation() {}
// ********** End Class UMassTrafficSetLaneSpeedLimitFieldOperation ********************************

// ********** Begin Class UMassTrafficVisualLoggingFieldOperation **********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation;
UClass* UMassTrafficVisualLoggingFieldOperation::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVisualLoggingFieldOperation;
	if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVisualLoggingFieldOperation"),
			Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.InnerSingleton,
			StaticRegisterNativesUMassTrafficVisualLoggingFieldOperation,
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
	return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_NoRegister()
{
	return UMassTrafficVisualLoggingFieldOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Visual Logging" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisLog_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVisualLoggingFieldOperation constinit property declarations **
	static void NewProp_bVisLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficVisualLoggingFieldOperation constinit property declarations ****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVisualLoggingFieldOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics

// ********** Begin Class UMassTrafficVisualLoggingFieldOperation Property Definitions *************
void Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_SetBit(void* Obj)
{
	((UMassTrafficVisualLoggingFieldOperation*)Obj)->bVisLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog = { "bVisLog", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMassTrafficVisualLoggingFieldOperation), &Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisLog_MetaData), NewProp_bVisLog_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::NewProp_bVisLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficVisualLoggingFieldOperation Property Definitions ***************
UObject* (*const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::ClassParams = {
	&UMassTrafficVisualLoggingFieldOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::Class_MetaDataParams)
};
void UMassTrafficVisualLoggingFieldOperation::StaticRegisterNativesUMassTrafficVisualLoggingFieldOperation()
{
}
UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation.OuterSingleton;
}
UMassTrafficVisualLoggingFieldOperation::UMassTrafficVisualLoggingFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVisualLoggingFieldOperation);
UMassTrafficVisualLoggingFieldOperation::~UMassTrafficVisualLoggingFieldOperation() {}
// ********** End Class UMassTrafficVisualLoggingFieldOperation ************************************

// ********** Begin Class UMassTrafficRetimeIntersectionPeriodsFieldOperation **********************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation;
UClass* UMassTrafficRetimeIntersectionPeriodsFieldOperation::GetPrivateStaticClass()
{
	using TClass = UMassTrafficRetimeIntersectionPeriodsFieldOperation;
	if (!Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficRetimeIntersectionPeriodsFieldOperation"),
			Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.InnerSingleton,
			StaticRegisterNativesUMassTrafficRetimeIntersectionPeriodsFieldOperation,
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
	return Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_NoRegister()
{
	return UMassTrafficRetimeIntersectionPeriodsFieldOperation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Re-Time Intersection Periods" },
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclesOnlyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PedestriansOnlyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmptyPeriodDurationMult_MetaData[] = {
		{ "Category", "Operation" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficRetimeIntersectionPeriodsFieldOperation constinit property declarations 
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehiclesOnlyPeriodDurationMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PedestriansOnlyPeriodDurationMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VehicleAndPedestrianPeriodDurationMult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EmptyPeriodDurationMult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficRetimeIntersectionPeriodsFieldOperation constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficRetimeIntersectionPeriodsFieldOperation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics

// ********** Begin Class UMassTrafficRetimeIntersectionPeriodsFieldOperation Property Definitions *
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult = { "VehiclesOnlyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, VehiclesOnlyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclesOnlyPeriodDurationMult_MetaData), NewProp_VehiclesOnlyPeriodDurationMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult = { "PedestriansOnlyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, PedestriansOnlyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PedestriansOnlyPeriodDurationMult_MetaData), NewProp_PedestriansOnlyPeriodDurationMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult = { "VehicleAndPedestrianPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, VehicleAndPedestrianPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData), NewProp_VehicleAndPedestrianPeriodDurationMult_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult = { "EmptyPeriodDurationMult", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficRetimeIntersectionPeriodsFieldOperation, EmptyPeriodDurationMult), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmptyPeriodDurationMult_MetaData), NewProp_EmptyPeriodDurationMult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehiclesOnlyPeriodDurationMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_PedestriansOnlyPeriodDurationMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_VehicleAndPedestrianPeriodDurationMult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::NewProp_EmptyPeriodDurationMult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficRetimeIntersectionPeriodsFieldOperation Property Definitions ***
UObject* (*const Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::ClassParams = {
	&UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::Class_MetaDataParams)
};
void UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticRegisterNativesUMassTrafficRetimeIntersectionPeriodsFieldOperation()
{
}
UClass* Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation()
{
	if (!Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton, Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation.OuterSingleton;
}
UMassTrafficRetimeIntersectionPeriodsFieldOperation::UMassTrafficRetimeIntersectionPeriodsFieldOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficRetimeIntersectionPeriodsFieldOperation);
UMassTrafficRetimeIntersectionPeriodsFieldOperation::~UMassTrafficRetimeIntersectionPeriodsFieldOperation() {}
// ********** End Class UMassTrafficRetimeIntersectionPeriodsFieldOperation ************************

// ********** Begin Class UMassTrafficVisualLoggingFieldOperationProcessor *************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor;
UClass* UMassTrafficVisualLoggingFieldOperationProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVisualLoggingFieldOperationProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVisualLoggingFieldOperationProcessor"),
			Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficVisualLoggingFieldOperationProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_NoRegister()
{
	return UMassTrafficVisualLoggingFieldOperationProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVisualLoggingFieldOperationProcessor constinit property declarations 
// ********** End Class UMassTrafficVisualLoggingFieldOperationProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVisualLoggingFieldOperationProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::ClassParams = {
	&UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficVisualLoggingFieldOperationProcessor::StaticRegisterNativesUMassTrafficVisualLoggingFieldOperationProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVisualLoggingFieldOperationProcessor);
UMassTrafficVisualLoggingFieldOperationProcessor::~UMassTrafficVisualLoggingFieldOperationProcessor() {}
// ********** End Class UMassTrafficVisualLoggingFieldOperationProcessor ***************************

// ********** Begin Class UMassTrafficFrameStartFieldOperationsProcessor ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor;
UClass* UMassTrafficFrameStartFieldOperationsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficFrameStartFieldOperationsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFrameStartFieldOperationsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficFrameStartFieldOperationsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_NoRegister()
{
	return UMassTrafficFrameStartFieldOperationsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficFrameStartFieldOperationsProcessor constinit property declarations 
// ********** End Class UMassTrafficFrameStartFieldOperationsProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficFrameStartFieldOperationsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::ClassParams = {
	&UMassTrafficFrameStartFieldOperationsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficFrameStartFieldOperationsProcessor::StaticRegisterNativesUMassTrafficFrameStartFieldOperationsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficFrameStartFieldOperationsProcessor);
UMassTrafficFrameStartFieldOperationsProcessor::~UMassTrafficFrameStartFieldOperationsProcessor() {}
// ********** End Class UMassTrafficFrameStartFieldOperationsProcessor *****************************

// ********** Begin Class UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor *************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor;
UClass* UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::GetPrivateStaticClass()
{
	using TClass = UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor;
	if (!Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficPostCalcVisualizationLODFieldOperationsProcessor"),
			Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.InnerSingleton,
			StaticRegisterNativesUMassTrafficPostCalcVisualizationLODFieldOperationsProcessor,
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
	return Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_NoRegister()
{
	return UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldOperations.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldOperations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor constinit property declarations 
// ********** End Class UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::ClassParams = {
	&UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::Class_MetaDataParams)
};
void UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticRegisterNativesUMassTrafficPostCalcVisualizationLODFieldOperationsProcessor()
{
}
UClass* Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor()
{
	if (!Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton, Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor);
UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::~UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor() {}
// ********** End Class UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor ***************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficFieldOperationBase, UMassTrafficFieldOperationBase::StaticClass, TEXT("UMassTrafficFieldOperationBase"), &Z_Registration_Info_UClass_UMassTrafficFieldOperationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldOperationBase), 555862112U) },
		{ Z_Construct_UClass_UMassTrafficBeginPlayFieldOperationBase, UMassTrafficBeginPlayFieldOperationBase::StaticClass, TEXT("UMassTrafficBeginPlayFieldOperationBase"), &Z_Registration_Info_UClass_UMassTrafficBeginPlayFieldOperationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficBeginPlayFieldOperationBase), 4015788568U) },
		{ Z_Construct_UClass_UMassTrafficFieldOperationsProcessorBase, UMassTrafficFieldOperationsProcessorBase::StaticClass, TEXT("UMassTrafficFieldOperationsProcessorBase"), &Z_Registration_Info_UClass_UMassTrafficFieldOperationsProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFieldOperationsProcessorBase), 1875006702U) },
		{ Z_Construct_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation, UMassTrafficForceTrafficVehicleViewerLODFieldOperation::StaticClass, TEXT("UMassTrafficForceTrafficVehicleViewerLODFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficForceTrafficVehicleViewerLODFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficForceTrafficVehicleViewerLODFieldOperation), 2111558779U) },
		{ Z_Construct_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation, UMassTrafficSetLaneSpeedLimitFieldOperation::StaticClass, TEXT("UMassTrafficSetLaneSpeedLimitFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficSetLaneSpeedLimitFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficSetLaneSpeedLimitFieldOperation), 1909587348U) },
		{ Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperation, UMassTrafficVisualLoggingFieldOperation::StaticClass, TEXT("UMassTrafficVisualLoggingFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVisualLoggingFieldOperation), 2828943808U) },
		{ Z_Construct_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation, UMassTrafficRetimeIntersectionPeriodsFieldOperation::StaticClass, TEXT("UMassTrafficRetimeIntersectionPeriodsFieldOperation"), &Z_Registration_Info_UClass_UMassTrafficRetimeIntersectionPeriodsFieldOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficRetimeIntersectionPeriodsFieldOperation), 2373286283U) },
		{ Z_Construct_UClass_UMassTrafficVisualLoggingFieldOperationProcessor, UMassTrafficVisualLoggingFieldOperationProcessor::StaticClass, TEXT("UMassTrafficVisualLoggingFieldOperationProcessor"), &Z_Registration_Info_UClass_UMassTrafficVisualLoggingFieldOperationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVisualLoggingFieldOperationProcessor), 2370190109U) },
		{ Z_Construct_UClass_UMassTrafficFrameStartFieldOperationsProcessor, UMassTrafficFrameStartFieldOperationsProcessor::StaticClass, TEXT("UMassTrafficFrameStartFieldOperationsProcessor"), &Z_Registration_Info_UClass_UMassTrafficFrameStartFieldOperationsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficFrameStartFieldOperationsProcessor), 830774681U) },
		{ Z_Construct_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor, UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor::StaticClass, TEXT("UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor"), &Z_Registration_Info_UClass_UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficPostCalcVisualizationLODFieldOperationsProcessor), 1717734022U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h__Script_MassTraffic_3806250940{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldOperations_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
