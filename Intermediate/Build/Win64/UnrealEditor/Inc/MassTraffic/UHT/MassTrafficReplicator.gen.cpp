// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficReplicator.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficReplicator() {}

// ********** Begin Cross Module References ********************************************************
MASSREPLICATION_API UClass* Z_Construct_UClass_UMassReplicatorBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficReplicator();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficReplicator_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficReplicator ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficReplicator;
UClass* UMassTrafficReplicator::GetPrivateStaticClass()
{
	using TClass = UMassTrafficReplicator;
	if (!Z_Registration_Info_UClass_UMassTrafficReplicator.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficReplicator"),
			Z_Registration_Info_UClass_UMassTrafficReplicator.InnerSingleton,
			StaticRegisterNativesUMassTrafficReplicator,
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
	return Z_Registration_Info_UClass_UMassTrafficReplicator.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficReplicator_NoRegister()
{
	return UMassTrafficReplicator::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficReplicator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler. */" },
#endif
		{ "IncludePath", "MassTrafficReplicator.h" },
		{ "ModuleRelativePath", "Public/MassTrafficReplicator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class that handles replication and only runs on the server. It queries Mass entity fragments and sets those values when appropriate using the MassClientBubbleHandler." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficReplicator constinit property declarations *******************
// ********** End Class UMassTrafficReplicator constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficReplicator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficReplicator_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficReplicator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMassReplicatorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficReplicator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficReplicator_Statics::ClassParams = {
	&UMassTrafficReplicator::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficReplicator_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficReplicator_Statics::Class_MetaDataParams)
};
void UMassTrafficReplicator::StaticRegisterNativesUMassTrafficReplicator()
{
}
UClass* Z_Construct_UClass_UMassTrafficReplicator()
{
	if (!Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton, Z_Construct_UClass_UMassTrafficReplicator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficReplicator.OuterSingleton;
}
UMassTrafficReplicator::UMassTrafficReplicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficReplicator);
UMassTrafficReplicator::~UMassTrafficReplicator() {}
// ********** End Class UMassTrafficReplicator *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficReplicator, UMassTrafficReplicator::StaticClass, TEXT("UMassTrafficReplicator"), &Z_Registration_Info_UClass_UMassTrafficReplicator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficReplicator), 1828034134U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h__Script_MassTraffic_1027197899{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficReplicator_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
