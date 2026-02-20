// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficLightActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficLightActor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficLightActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficLightActor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficProxyActor();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficLightActor ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficLightActor;
UClass* AMassTrafficLightActor::GetPrivateStaticClass()
{
	using TClass = AMassTrafficLightActor;
	if (!Z_Registration_Info_UClass_AMassTrafficLightActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficLightActor"),
			Z_Registration_Info_UClass_AMassTrafficLightActor.InnerSingleton,
			StaticRegisterNativesAMassTrafficLightActor,
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
	return Z_Registration_Info_UClass_AMassTrafficLightActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficLightActor_NoRegister()
{
	return AMassTrafficLightActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficLightActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficLightActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficLightActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficLightTypeIndex_MetaData[] = {
		{ "Category", "MassTrafficLightActor" },
		{ "ModuleRelativePath", "Public/MassTrafficLightActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficLightActor constinit property declarations *******************
	static const UECodeGen_Private::FInt16PropertyParams NewProp_TrafficLightTypeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficLightActor constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficLightActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficLightActor_Statics

// ********** Begin Class AMassTrafficLightActor Property Definitions ******************************
const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_AMassTrafficLightActor_Statics::NewProp_TrafficLightTypeIndex = { "TrafficLightTypeIndex", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficLightActor, TrafficLightTypeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficLightTypeIndex_MetaData), NewProp_TrafficLightTypeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficLightActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficLightActor_Statics::NewProp_TrafficLightTypeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficLightActor_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficLightActor Property Definitions ********************************
UObject* (*const Z_Construct_UClass_AMassTrafficLightActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMassTrafficProxyActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficLightActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficLightActor_Statics::ClassParams = {
	&AMassTrafficLightActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassTrafficLightActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficLightActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficLightActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficLightActor_Statics::Class_MetaDataParams)
};
void AMassTrafficLightActor::StaticRegisterNativesAMassTrafficLightActor()
{
}
UClass* Z_Construct_UClass_AMassTrafficLightActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficLightActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficLightActor.OuterSingleton, Z_Construct_UClass_AMassTrafficLightActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficLightActor.OuterSingleton;
}
AMassTrafficLightActor::AMassTrafficLightActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficLightActor);
AMassTrafficLightActor::~AMassTrafficLightActor() {}
// ********** End Class AMassTrafficLightActor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficLightActor, AMassTrafficLightActor::StaticClass, TEXT("AMassTrafficLightActor"), &Z_Registration_Info_UClass_AMassTrafficLightActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficLightActor), 2343578264U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h__Script_MassTraffic_2459502373{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
