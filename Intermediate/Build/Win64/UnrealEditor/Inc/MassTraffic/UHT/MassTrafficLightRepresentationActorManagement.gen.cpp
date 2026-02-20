// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLightRepresentationActorManagement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLightRepresentationActorManagement() {}

// ********** Begin Cross Module References ********************************************************
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficLightRepresentationActorManagement ***************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement;
UClass* UMassTrafficLightRepresentationActorManagement::GetPrivateStaticClass()
{
	using TClass = UMassTrafficLightRepresentationActorManagement;
	if (!Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightRepresentationActorManagement"),
			Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.InnerSingleton,
			StaticRegisterNativesUMassTrafficLightRepresentationActorManagement,
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
	return Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_NoRegister()
{
	return UMassTrafficLightRepresentationActorManagement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management for traffic light\n */" },
#endif
		{ "IncludePath", "MassTrafficLightRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management for traffic light" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficLightRepresentationActorManagement constinit property declarations 
// ********** End Class UMassTrafficLightRepresentationActorManagement constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficLightRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficLightRepresentationActorManagement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::Class_MetaDataParams)
};
void UMassTrafficLightRepresentationActorManagement::StaticRegisterNativesUMassTrafficLightRepresentationActorManagement()
{
}
UClass* Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement.OuterSingleton;
}
UMassTrafficLightRepresentationActorManagement::UMassTrafficLightRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficLightRepresentationActorManagement);
UMassTrafficLightRepresentationActorManagement::~UMassTrafficLightRepresentationActorManagement() {}
// ********** End Class UMassTrafficLightRepresentationActorManagement *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficLightRepresentationActorManagement, UMassTrafficLightRepresentationActorManagement::StaticClass, TEXT("UMassTrafficLightRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficLightRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficLightRepresentationActorManagement), 2779609411U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h__Script_MassTraffic_556650692{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
