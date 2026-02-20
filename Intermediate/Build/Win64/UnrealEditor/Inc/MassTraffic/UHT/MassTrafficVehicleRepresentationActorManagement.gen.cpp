// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficVehicleRepresentationActorManagement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficVehicleRepresentationActorManagement() {}

// ********** Begin Cross Module References ********************************************************
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficVehicleRepresentationActorManagement *************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement;
UClass* UMassTrafficVehicleRepresentationActorManagement::GetPrivateStaticClass()
{
	using TClass = UMassTrafficVehicleRepresentationActorManagement;
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficVehicleRepresentationActorManagement"),
			Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.InnerSingleton,
			StaticRegisterNativesUMassTrafficVehicleRepresentationActorManagement,
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
	return Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_NoRegister()
{
	return UMassTrafficVehicleRepresentationActorManagement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden actor management for traffic vehicles\n */" },
#endif
		{ "HideCategories", "Mass|LOD" },
		{ "IncludePath", "MassTrafficVehicleRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficVehicleRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden actor management for traffic vehicles" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficVehicleRepresentationActorManagement constinit property declarations 
// ********** End Class UMassTrafficVehicleRepresentationActorManagement constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficVehicleRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficVehicleRepresentationActorManagement::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::Class_MetaDataParams)
};
void UMassTrafficVehicleRepresentationActorManagement::StaticRegisterNativesUMassTrafficVehicleRepresentationActorManagement()
{
}
UClass* Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement.OuterSingleton;
}
UMassTrafficVehicleRepresentationActorManagement::UMassTrafficVehicleRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficVehicleRepresentationActorManagement);
UMassTrafficVehicleRepresentationActorManagement::~UMassTrafficVehicleRepresentationActorManagement() {}
// ********** End Class UMassTrafficVehicleRepresentationActorManagement ***************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficVehicleRepresentationActorManagement, UMassTrafficVehicleRepresentationActorManagement::StaticClass, TEXT("UMassTrafficVehicleRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficVehicleRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficVehicleRepresentationActorManagement), 2091897097U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h__Script_MassTraffic_3861124111{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
