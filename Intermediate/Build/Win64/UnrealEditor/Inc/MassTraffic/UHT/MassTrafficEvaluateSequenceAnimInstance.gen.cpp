// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEvaluateSequenceAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficEvaluateSequenceAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEvaluateSequenceAnimInstance ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance;
UClass* UEvaluateSequenceAnimInstance::GetPrivateStaticClass()
{
	using TClass = UEvaluateSequenceAnimInstance;
	if (!Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("EvaluateSequenceAnimInstance"),
			Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.InnerSingleton,
			StaticRegisterNativesUEvaluateSequenceAnimInstance,
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
	return Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance_NoRegister()
{
	return UEvaluateSequenceAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple anim instance with a few parameters to be used as inputs when driving it\n * from UAnimToTextureBPLibrary::AnimationToTexture()\n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MassTrafficEvaluateSequenceAnimInstance.h" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple anim instance with a few parameters to be used as inputs when driving it\nfrom UAnimToTextureBPLibrary::AnimationToTexture()" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeToEvaluate_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/MassTrafficEvaluateSequenceAnimInstance.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UEvaluateSequenceAnimInstance constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SequenceToEvaluate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToEvaluate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UEvaluateSequenceAnimInstance constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluateSequenceAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics

// ********** Begin Class UEvaluateSequenceAnimInstance Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate = { "SequenceToEvaluate", nullptr, (EPropertyFlags)0x0114000000002015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, SequenceToEvaluate), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceToEvaluate_MetaData), NewProp_SequenceToEvaluate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate = { "TimeToEvaluate", nullptr, (EPropertyFlags)0x0010000000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEvaluateSequenceAnimInstance, TimeToEvaluate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeToEvaluate_MetaData), NewProp_TimeToEvaluate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_SequenceToEvaluate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::NewProp_TimeToEvaluate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers) < 2048);
// ********** End Class UEvaluateSequenceAnimInstance Property Definitions *************************
UObject* (*const Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams = {
	&UEvaluateSequenceAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::Class_MetaDataParams)
};
void UEvaluateSequenceAnimInstance::StaticRegisterNativesUEvaluateSequenceAnimInstance()
{
}
UClass* Z_Construct_UClass_UEvaluateSequenceAnimInstance()
{
	if (!Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton, Z_Construct_UClass_UEvaluateSequenceAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UEvaluateSequenceAnimInstance);
UEvaluateSequenceAnimInstance::~UEvaluateSequenceAnimInstance() {}
// ********** End Class UEvaluateSequenceAnimInstance **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEvaluateSequenceAnimInstance, UEvaluateSequenceAnimInstance::StaticClass, TEXT("UEvaluateSequenceAnimInstance"), &Z_Registration_Info_UClass_UEvaluateSequenceAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEvaluateSequenceAnimInstance), 3541440022U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h__Script_MassTraffic_1223823169{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficEvaluateSequenceAnimInstance_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
