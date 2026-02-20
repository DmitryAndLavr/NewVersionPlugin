// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficProxyActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficProxyActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficProxyActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficProxyActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficProxyActor ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficProxyActor;
UClass* AMassTrafficProxyActor::GetPrivateStaticClass()
{
	using TClass = AMassTrafficProxyActor;
	if (!Z_Registration_Info_UClass_AMassTrafficProxyActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficProxyActor"),
			Z_Registration_Info_UClass_AMassTrafficProxyActor.InnerSingleton,
			StaticRegisterNativesAMassTrafficProxyActor,
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
	return Z_Registration_Info_UClass_AMassTrafficProxyActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficProxyActor_NoRegister()
{
	return AMassTrafficProxyActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficProxyActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficProxyActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficProxyActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficProxyActor constinit property declarations *******************
// ********** End Class AMassTrafficProxyActor constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficProxyActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficProxyActor_Statics
UObject* (*const Z_Construct_UClass_AMassTrafficProxyActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficProxyActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficProxyActor_Statics::ClassParams = {
	&AMassTrafficProxyActor::StaticClass,
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
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficProxyActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficProxyActor_Statics::Class_MetaDataParams)
};
void AMassTrafficProxyActor::StaticRegisterNativesAMassTrafficProxyActor()
{
}
UClass* Z_Construct_UClass_AMassTrafficProxyActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficProxyActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficProxyActor.OuterSingleton, Z_Construct_UClass_AMassTrafficProxyActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficProxyActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficProxyActor);
AMassTrafficProxyActor::~AMassTrafficProxyActor() {}
// ********** End Class AMassTrafficProxyActor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProxyActor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficProxyActor, AMassTrafficProxyActor::StaticClass, TEXT("AMassTrafficProxyActor"), &Z_Registration_Info_UClass_AMassTrafficProxyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficProxyActor), 2395754488U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProxyActor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProxyActor_h__Script_MassTraffic_1086231169{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProxyActor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficProxyActor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
