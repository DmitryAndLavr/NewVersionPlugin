// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficTrailerRepresentationActorManagement.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficTrailerRepresentationActorManagement() {}

// ********** Begin Cross Module References ********************************************************
MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficTrailerRepresentationActorManagement *************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement;
UClass* UMassTrafficTrailerRepresentationActorManagement::GetPrivateStaticClass()
{
	using TClass = UMassTrafficTrailerRepresentationActorManagement;
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficTrailerRepresentationActorManagement"),
			Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.InnerSingleton,
			StaticRegisterNativesUMassTrafficTrailerRepresentationActorManagement,
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
	return Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_NoRegister()
{
	return UMassTrafficTrailerRepresentationActorManagement::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Overridden representation actor management traffic vehicle trailers\n */" },
#endif
		{ "IncludePath", "MassTrafficTrailerRepresentationActorManagement.h" },
		{ "ModuleRelativePath", "Public/MassTrafficTrailerRepresentationActorManagement.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Overridden representation actor management traffic vehicle trailers" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficTrailerRepresentationActorManagement constinit property declarations 
// ********** End Class UMassTrafficTrailerRepresentationActorManagement constinit property declarations 
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficTrailerRepresentationActorManagement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassRepresentationActorManagement,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams = {
	&UMassTrafficTrailerRepresentationActorManagement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::Class_MetaDataParams)
};
void UMassTrafficTrailerRepresentationActorManagement::StaticRegisterNativesUMassTrafficTrailerRepresentationActorManagement()
{
}
UClass* Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement()
{
	if (!Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton, Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement.OuterSingleton;
}
UMassTrafficTrailerRepresentationActorManagement::UMassTrafficTrailerRepresentationActorManagement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficTrailerRepresentationActorManagement);
UMassTrafficTrailerRepresentationActorManagement::~UMassTrafficTrailerRepresentationActorManagement() {}
// ********** End Class UMassTrafficTrailerRepresentationActorManagement ***************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficTrailerRepresentationActorManagement, UMassTrafficTrailerRepresentationActorManagement::StaticClass, TEXT("UMassTrafficTrailerRepresentationActorManagement"), &Z_Registration_Info_UClass_UMassTrafficTrailerRepresentationActorManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficTrailerRepresentationActorManagement), 538841407U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h__Script_MassTraffic_4282982162{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficTrailerRepresentationActorManagement_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
