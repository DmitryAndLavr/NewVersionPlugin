// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficObstacleTrait.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficObstacleTrait() {}

// ********** Begin Cross Module References ********************************************************
MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficObstacleTrait();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficObstacleTrait_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficObstacleTrait ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficObstacleTrait;
UClass* UMassTrafficObstacleTrait::GetPrivateStaticClass()
{
	using TClass = UMassTrafficObstacleTrait;
	if (!Z_Registration_Info_UClass_UMassTrafficObstacleTrait.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficObstacleTrait"),
			Z_Registration_Info_UClass_UMassTrafficObstacleTrait.InnerSingleton,
			StaticRegisterNativesUMassTrafficObstacleTrait,
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
	return Z_Registration_Info_UClass_UMassTrafficObstacleTrait.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficObstacleTrait_NoRegister()
{
	return UMassTrafficObstacleTrait::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficObstacleTrait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Traffic Obstacle" },
		{ "IncludePath", "MassTrafficObstacleTrait.h" },
		{ "ModuleRelativePath", "Public/MassTrafficObstacleTrait.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficObstacleTrait constinit property declarations ****************
// ********** End Class UMassTrafficObstacleTrait constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficObstacleTrait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficObstacleTrait_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::ClassParams = {
	&UMassTrafficObstacleTrait::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::Class_MetaDataParams)
};
void UMassTrafficObstacleTrait::StaticRegisterNativesUMassTrafficObstacleTrait()
{
}
UClass* Z_Construct_UClass_UMassTrafficObstacleTrait()
{
	if (!Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton, Z_Construct_UClass_UMassTrafficObstacleTrait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficObstacleTrait.OuterSingleton;
}
UMassTrafficObstacleTrait::UMassTrafficObstacleTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficObstacleTrait);
UMassTrafficObstacleTrait::~UMassTrafficObstacleTrait() {}
// ********** End Class UMassTrafficObstacleTrait **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficObstacleTrait, UMassTrafficObstacleTrait::StaticClass, TEXT("UMassTrafficObstacleTrait"), &Z_Registration_Info_UClass_UMassTrafficObstacleTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficObstacleTrait), 283416212U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h__Script_MassTraffic_1442414040{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficObstacleTrait_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
