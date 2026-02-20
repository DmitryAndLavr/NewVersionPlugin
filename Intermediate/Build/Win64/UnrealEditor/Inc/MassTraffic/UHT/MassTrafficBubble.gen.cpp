// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficBubble.h"
#include "MassTrafficReplicatedAgent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficBubble() {}

// ********** Begin Cross Module References ********************************************************
MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase();
MASSREPLICATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase();
MASSTRAFFIC_API UClass* Z_Construct_UClass_ATrafficClientBubbleInfo();
MASSTRAFFIC_API UClass* Z_Construct_UClass_ATrafficClientBubbleInfo_NoRegister();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer();
MASSTRAFFIC_API UScriptStruct* Z_Construct_UScriptStruct_FTrafficFastArrayItem();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FTrafficClientBubbleSerializer ************************************
struct Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FTrafficClientBubbleSerializer); }
	static inline consteval int16 GetStructAlignment() { return alignof(FTrafficClientBubbleSerializer); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mass client bubble, there will be one of these per client and it will handle replicating the fast array of Agents between the server and clients */" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBubble.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mass client bubble, there will be one of these per client and it will handle replicating the fast array of Agents between the server and clients" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Traffic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficBubble.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FTrafficClientBubbleSerializer constinit property declarations ****
	static const UECodeGen_Private::FStructPropertyParams NewProp_Traffic_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Traffic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FTrafficClientBubbleSerializer constinit property declarations ******
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrafficClientBubbleSerializer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics
static_assert(std::is_polymorphic<FTrafficClientBubbleSerializer>() == std::is_polymorphic<FMassClientBubbleSerializerBase>(), "USTRUCT FTrafficClientBubbleSerializer cannot be polymorphic unless super FMassClientBubbleSerializerBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer;
class UScriptStruct* FTrafficClientBubbleSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer, (UObject*)Z_Construct_UPackage__Script_MassTraffic(), TEXT("TrafficClientBubbleSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.OuterSingleton;
	}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FTrafficClientBubbleSerializer);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FTrafficClientBubbleSerializer);
#endif

// ********** Begin ScriptStruct FTrafficClientBubbleSerializer Property Definitions ***************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::NewProp_Traffic_Inner = { "Traffic", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTrafficFastArrayItem, METADATA_PARAMS(0, nullptr) }; // 571163011
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::NewProp_Traffic = { "Traffic", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTrafficClientBubbleSerializer, Traffic), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Traffic_MetaData), NewProp_Traffic_MetaData) }; // 571163011
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::NewProp_Traffic_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::NewProp_Traffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FTrafficClientBubbleSerializer Property Definitions *****************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
	Z_Construct_UScriptStruct_FMassClientBubbleSerializerBase,
	&NewStructOps,
	"TrafficClientBubbleSerializer",
	Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::PropPointers),
	sizeof(FTrafficClientBubbleSerializer),
	alignof(FTrafficClientBubbleSerializer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer()
{
	if (!Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.InnerSingleton, Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer.InnerSingleton);
}
// ********** End ScriptStruct FTrafficClientBubbleSerializer **************************************

// ********** Begin Class ATrafficClientBubbleInfo *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATrafficClientBubbleInfo;
UClass* ATrafficClientBubbleInfo::GetPrivateStaticClass()
{
	using TClass = ATrafficClientBubbleInfo;
	if (!Z_Registration_Info_UClass_ATrafficClientBubbleInfo.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TrafficClientBubbleInfo"),
			Z_Registration_Info_UClass_ATrafficClientBubbleInfo.InnerSingleton,
			StaticRegisterNativesATrafficClientBubbleInfo,
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
	return Z_Registration_Info_UClass_ATrafficClientBubbleInfo.InnerSingleton;
}
UClass* Z_Construct_UClass_ATrafficClientBubbleInfo_NoRegister()
{
	return ATrafficClientBubbleInfo::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATrafficClientBubbleInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mass" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MassTrafficBubble.h" },
		{ "ModuleRelativePath", "Public/MassTrafficBubble.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrafficSerializer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficBubble.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATrafficClientBubbleInfo constinit property declarations *****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrafficSerializer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATrafficClientBubbleInfo constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrafficClientBubbleInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATrafficClientBubbleInfo_Statics

// ********** Begin Class ATrafficClientBubbleInfo Property Definitions ****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::NewProp_TrafficSerializer = { "TrafficSerializer", nullptr, (EPropertyFlags)0x0020080000002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATrafficClientBubbleInfo, TrafficSerializer), Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrafficSerializer_MetaData), NewProp_TrafficSerializer_MetaData) }; // 337104096
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::NewProp_TrafficSerializer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::PropPointers) < 2048);
// ********** End Class ATrafficClientBubbleInfo Property Definitions ******************************
UObject* (*const Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMassClientBubbleInfoBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::ClassParams = {
	&ATrafficClientBubbleInfo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::Class_MetaDataParams)
};
void ATrafficClientBubbleInfo::StaticRegisterNativesATrafficClientBubbleInfo()
{
}
UClass* Z_Construct_UClass_ATrafficClientBubbleInfo()
{
	if (!Z_Registration_Info_UClass_ATrafficClientBubbleInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrafficClientBubbleInfo.OuterSingleton, Z_Construct_UClass_ATrafficClientBubbleInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATrafficClientBubbleInfo.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void ATrafficClientBubbleInfo::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_TrafficSerializer(TEXT("TrafficSerializer"));
	const bool bIsValid = true
		&& Name_TrafficSerializer == ClassReps[(int32)ENetFields_Private::TrafficSerializer].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATrafficClientBubbleInfo"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATrafficClientBubbleInfo);
ATrafficClientBubbleInfo::~ATrafficClientBubbleInfo() {}
// ********** End Class ATrafficClientBubbleInfo ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTrafficClientBubbleSerializer::StaticStruct, Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics::NewStructOps, TEXT("TrafficClientBubbleSerializer"),&Z_Registration_Info_UScriptStruct_FTrafficClientBubbleSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrafficClientBubbleSerializer), 337104096U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATrafficClientBubbleInfo, ATrafficClientBubbleInfo::StaticClass, TEXT("ATrafficClientBubbleInfo"), &Z_Registration_Info_UClass_ATrafficClientBubbleInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrafficClientBubbleInfo), 4243815910U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_77613941{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h__Script_MassTraffic_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
