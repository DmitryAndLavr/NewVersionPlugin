// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficParkedVehicleRepresentationActorManagement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkedVehicleRepresentationActorManagement() {}

// ********** Begin Cross Module References ********************************************************
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficParkedVehicleRepresentationActorManagement *******************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement;
UClass* UMassTrafficParkedVehicleRepresentationActorManagement::GetPrivateStaticClass()
{
	using TClass = UMassTrafficParkedVehicleRepresentationActorManagement;
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkedVehicleRepresentationActorManagement"),
			Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.InnerSingleton,
			StaticRegisterNativesUMassTrafficParkedVehicleRepresentationActorManagement,
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
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_NoRegister()
{
	return UMassTrafficParkedVehicleRepresentationActorManagement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management for parked vehicles\n */" },
#endif
		{ "IncludePath", "MassTrafficParkedVehicleRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkedVehicleRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management for parked vehicles" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficParkedVehicleRepresentationActorManagement constinit property declarations 
// ********** End Class UMassTrafficParkedVehicleRepresentationActorManagement constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkedVehicleRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficParkedVehicleRepresentationActorManagement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::Class_MetaDataParams)
};
void UMassTrafficParkedVehicleRepresentationActorManagement::StaticRegisterNativesUMassTrafficParkedVehicleRepresentationActorManagement()
{
}
UClass* Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement.OuterSingleton;
}
UMassTrafficParkedVehicleRepresentationActorManagement::UMassTrafficParkedVehicleRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficParkedVehicleRepresentationActorManagement);
UMassTrafficParkedVehicleRepresentationActorManagement::~UMassTrafficParkedVehicleRepresentationActorManagement() {}
// ********** End Class UMassTrafficParkedVehicleRepresentationActorManagement *********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkedVehicleRepresentationActorManagement, UMassTrafficParkedVehicleRepresentationActorManagement::StaticClass, TEXT("UMassTrafficParkedVehicleRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficParkedVehicleRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkedVehicleRepresentationActorManagement), 1189947674U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleRepresentationActorManagement_h__Script_MassTraffic_3328933412{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkedVehicleRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
