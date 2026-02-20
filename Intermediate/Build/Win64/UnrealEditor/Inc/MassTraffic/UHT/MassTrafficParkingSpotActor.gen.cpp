// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficParkingSpotActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficParkingSpotActor() {}

// ********** Begin Cross Module References ********************************************************
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficParkingSpotActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficParkingSpotActor_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficProxyActor();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficParkingSpotComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficParkingSpotActor Function GetParkingSpaceType ****************
struct Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics
{
	struct MassTrafficParkingSpotActor_eventGetParkingSpaceType_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetParkingSpaceType constinit property declarations *******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetParkingSpaceType constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetParkingSpaceType Property Definitions ******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficParkingSpotActor_eventGetParkingSpaceType_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::PropPointers) < 2048);
// ********** End Function GetParkingSpaceType Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMassTrafficParkingSpotActor, nullptr, "GetParkingSpaceType", 	Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::MassTrafficParkingSpotActor_eventGetParkingSpaceType_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::MassTrafficParkingSpotActor_eventGetParkingSpaceType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMassTrafficParkingSpotActor::execGetParkingSpaceType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetParkingSpaceType();
	P_NATIVE_END;
}
// ********** End Class AMassTrafficParkingSpotActor Function GetParkingSpaceType ******************

// ********** Begin Class AMassTrafficParkingSpotActor *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficParkingSpotActor;
UClass* AMassTrafficParkingSpotActor::GetPrivateStaticClass()
{
	using TClass = AMassTrafficParkingSpotActor;
	if (!Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficParkingSpotActor"),
			Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.InnerSingleton,
			StaticRegisterNativesAMassTrafficParkingSpotActor,
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
	return Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficParkingSpotActor_NoRegister()
{
	return AMassTrafficParkingSpotActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "MassTrafficParkingSpotActor.h" },
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkingSpaceType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MassTrafficParkingSpotActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParkingSpotComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficParkingSpotActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficParkingSpotActor constinit property declarations *************
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParkingSpaceType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParkingSpotComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficParkingSpotActor constinit property declarations ***************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetParkingSpaceType"), .Pointer = &AMassTrafficParkingSpotActor::execGetParkingSpaceType },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficParkingSpotActor_GetParkingSpaceType, "GetParkingSpaceType" }, // 2587520449
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficParkingSpotActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics

// ********** Begin Class AMassTrafficParkingSpotActor Property Definitions ************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::NewProp_ParkingSpaceType = { "ParkingSpaceType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficParkingSpotActor, ParkingSpaceType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkingSpaceType_MetaData), NewProp_ParkingSpaceType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::NewProp_ParkingSpotComponent = { "ParkingSpotComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficParkingSpotActor, ParkingSpotComponent), Z_Construct_UClass_UMassTrafficParkingSpotComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParkingSpotComponent_MetaData), NewProp_ParkingSpotComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::NewProp_ParkingSpaceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::NewProp_ParkingSpotComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficParkingSpotActor Property Definitions **************************
UObject* (*const Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMassTrafficProxyActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::ClassParams = {
	&AMassTrafficParkingSpotActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::Class_MetaDataParams)
};
void AMassTrafficParkingSpotActor::StaticRegisterNativesAMassTrafficParkingSpotActor()
{
	UClass* Class = AMassTrafficParkingSpotActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMassTrafficParkingSpotActor()
{
	if (!Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.OuterSingleton, Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficParkingSpotActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficParkingSpotActor);
AMassTrafficParkingSpotActor::~AMassTrafficParkingSpotActor() {}
// ********** End Class AMassTrafficParkingSpotActor ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficParkingSpotActor, AMassTrafficParkingSpotActor::StaticClass, TEXT("AMassTrafficParkingSpotActor"), &Z_Registration_Info_UClass_AMassTrafficParkingSpotActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficParkingSpotActor), 3007063460U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h__Script_MassTraffic_2630849026{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
