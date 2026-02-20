// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficFieldActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficFieldActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficFieldActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficFieldActor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficFieldActor ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficFieldActor;
UClass* AMassTrafficFieldActor::GetPrivateStaticClass()
{
	using TClass = AMassTrafficFieldActor;
	if (!Z_Registration_Info_UClass_AMassTrafficFieldActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficFieldActor"),
			Z_Registration_Info_UClass_AMassTrafficFieldActor.InnerSingleton,
			StaticRegisterNativesAMassTrafficFieldActor,
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
	return Z_Registration_Info_UClass_AMassTrafficFieldActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficFieldActor_NoRegister()
{
	return AMassTrafficFieldActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficFieldActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MassTrafficFieldActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldComponent_MetaData[] = {
		{ "Category", "MassTrafficFieldActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficFieldActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficFieldActor constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficFieldActor constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficFieldActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficFieldActor_Statics

// ********** Begin Class AMassTrafficFieldActor Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficFieldActor_Statics::NewProp_FieldComponent = { "FieldComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficFieldActor, FieldComponent), Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldComponent_MetaData), NewProp_FieldComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficFieldActor_Statics::NewProp_FieldComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficFieldActor Property Definitions ********************************
UObject* (*const Z_Construct_UClass_AMassTrafficFieldActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficFieldActor_Statics::ClassParams = {
	&AMassTrafficFieldActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficFieldActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficFieldActor_Statics::Class_MetaDataParams)
};
void AMassTrafficFieldActor::StaticRegisterNativesAMassTrafficFieldActor()
{
}
UClass* Z_Construct_UClass_AMassTrafficFieldActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton, Z_Construct_UClass_AMassTrafficFieldActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficFieldActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficFieldActor);
AMassTrafficFieldActor::~AMassTrafficFieldActor() {}
// ********** End Class AMassTrafficFieldActor *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficFieldActor, AMassTrafficFieldActor::StaticClass, TEXT("AMassTrafficFieldActor"), &Z_Registration_Info_UClass_AMassTrafficFieldActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficFieldActor), 2509789841U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h__Script_MassTraffic_699997408{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldActor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
