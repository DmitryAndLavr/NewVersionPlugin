// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficIntersectionLightComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficIntersectionLightComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionLightComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficIntersectionLightComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficIntersectionLightComponent ***********************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent;
UClass* UMassTrafficIntersectionLightComponent::GetPrivateStaticClass()
{
	using TClass = UMassTrafficIntersectionLightComponent;
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficIntersectionLightComponent"),
			Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.InnerSingleton,
			StaticRegisterNativesUMassTrafficIntersectionLightComponent,
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
	return Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionLightComponent_NoRegister()
{
	return UMassTrafficIntersectionLightComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "MassTrafficIntersectionLightComponent.h" },
		{ "ModuleRelativePath", "Public/MassTrafficIntersectionLightComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficIntersectionLightComponent constinit property declarations ***
// ********** End Class UMassTrafficIntersectionLightComponent constinit property declarations *****
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficIntersectionLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::ClassParams = {
	&UMassTrafficIntersectionLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::Class_MetaDataParams)
};
void UMassTrafficIntersectionLightComponent::StaticRegisterNativesUMassTrafficIntersectionLightComponent()
{
}
UClass* Z_Construct_UClass_UMassTrafficIntersectionLightComponent()
{
	if (!Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficIntersectionLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficIntersectionLightComponent);
UMassTrafficIntersectionLightComponent::~UMassTrafficIntersectionLightComponent() {}
// ********** End Class UMassTrafficIntersectionLightComponent *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionLightComponent_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficIntersectionLightComponent, UMassTrafficIntersectionLightComponent::StaticClass, TEXT("UMassTrafficIntersectionLightComponent"), &Z_Registration_Info_UClass_UMassTrafficIntersectionLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficIntersectionLightComponent), 96741658U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionLightComponent_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionLightComponent_h__Script_MassTraffic_55754172{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionLightComponent_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficIntersectionLightComponent_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
