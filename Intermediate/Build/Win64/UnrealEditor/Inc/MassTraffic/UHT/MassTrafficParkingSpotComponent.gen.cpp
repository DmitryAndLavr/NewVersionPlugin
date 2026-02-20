// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficParkingSpotComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkingSpotComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpotComponent();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpotComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficParkingSpotComponent *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent;
UClass* UMassTrafficParkingSpotComponent::GetPrivateStaticClass()
{
	using TClass = UMassTrafficParkingSpotComponent;
	if (!Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkingSpotComponent"),
			Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.InnerSingleton,
			StaticRegisterNativesUMassTrafficParkingSpotComponent,
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
	return Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficParkingSpotComponent_NoRegister()
{
	return UMassTrafficParkingSpotComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficParkingSpotComponent.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MassTrafficParkingSpotComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficParkingSpotComponent constinit property declarations *********
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UMassTrafficParkingSpotComponent constinit property declarations ***********
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficParkingSpotComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics

// ********** Begin Class UMassTrafficParkingSpotComponent Property Definitions ********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMassTrafficParkingSpotComponent, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::NewProp_Size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::PropPointers) < 2048);
// ********** End Class UMassTrafficParkingSpotComponent Property Definitions **********************
UObject* (*const Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::ClassParams = {
	&UMassTrafficParkingSpotComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::Class_MetaDataParams)
};
void UMassTrafficParkingSpotComponent::StaticRegisterNativesUMassTrafficParkingSpotComponent()
{
}
UClass* Z_Construct_UClass_UMassTrafficParkingSpotComponent()
{
	if (!Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.OuterSingleton, Z_Construct_UClass_UMassTrafficParkingSpotComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficParkingSpotComponent);
UMassTrafficParkingSpotComponent::~UMassTrafficParkingSpotComponent() {}
// ********** End Class UMassTrafficParkingSpotComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotComponent_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficParkingSpotComponent, UMassTrafficParkingSpotComponent::StaticClass, TEXT("UMassTrafficParkingSpotComponent"), &Z_Registration_Info_UClass_UMassTrafficParkingSpotComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficParkingSpotComponent), 3158773676U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotComponent_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotComponent_h__Script_MassTraffic_4185095886{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotComponent_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotComponent_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
