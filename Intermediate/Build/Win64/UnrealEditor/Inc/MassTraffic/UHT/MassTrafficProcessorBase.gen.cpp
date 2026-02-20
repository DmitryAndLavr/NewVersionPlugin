// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficProcessorBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficProcessorBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficProcessorBase ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficProcessorBase;
UClass* UMassTrafficProcessorBase::GetPrivateStaticClass()
{
	using TClass = UMassTrafficProcessorBase;
	if (!Z_Registration_Info_UClass_UMassTrafficProcessorBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficProcessorBase"),
			Z_Registration_Info_UClass_UMassTrafficProcessorBase.InnerSingleton,
			StaticRegisterNativesUMassTrafficProcessorBase,
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
	return Z_Registration_Info_UClass_UMassTrafficProcessorBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficProcessorBase_NoRegister()
{
	return UMassTrafficProcessorBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficProcessorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for traffic processors that caches a pointer to the traffic subsytem\n */" },
#endif
		{ "IncludePath", "MassTrafficProcessorBase.h" },
		{ "ModuleRelativePath", "Public/MassTrafficProcessorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for traffic processors that caches a pointer to the traffic subsytem" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficProcessorBase.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficProcessorBase constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LogOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficProcessorBase constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficProcessorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficProcessorBase_Statics

// ********** Begin Class UMassTrafficProcessorBase Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMassTrafficProcessorBase_Statics::NewProp_LogOwner = { "LogOwner", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficProcessorBase, LogOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogOwner_MetaData), NewProp_LogOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficProcessorBase_Statics::NewProp_LogOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficProcessorBase Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UMassTrafficProcessorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassProcessor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficProcessorBase_Statics::ClassParams = {
	&UMassTrafficProcessorBase::StaticClass,
	"Mass",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::PropPointers),
	0,
	0x401030A7u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficProcessorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficProcessorBase_Statics::Class_MetaDataParams)
};
void UMassTrafficProcessorBase::StaticRegisterNativesUMassTrafficProcessorBase()
{
}
UClass* Z_Construct_UClass_UMassTrafficProcessorBase()
{
	if (!Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton, Z_Construct_UClass_UMassTrafficProcessorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficProcessorBase.OuterSingleton;
}
UMassTrafficProcessorBase::UMassTrafficProcessorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficProcessorBase);
UMassTrafficProcessorBase::~UMassTrafficProcessorBase() {}
// ********** End Class UMassTrafficProcessorBase **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficProcessorBase, UMassTrafficProcessorBase::StaticClass, TEXT("UMassTrafficProcessorBase"), &Z_Registration_Info_UClass_UMassTrafficProcessorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficProcessorBase), 2460569597U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h__Script_MassTraffic_197207250{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProcessorBase_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
