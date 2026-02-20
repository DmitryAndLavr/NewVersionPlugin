// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficBaseVehicle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficBaseVehicle() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficBaseVehicle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficBaseVehicle_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMassTrafficBaseVehicle Function ApplyWheelMotionBlurNative **************
struct Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics
{
	struct MassTrafficBaseVehicle_eventApplyWheelMotionBlurNative_Parms
	{
		TArray<UMaterialInstanceDynamic*> MotionBlurMIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyWheelMotionBlurNative constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionBlurMIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionBlurMIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyWheelMotionBlurNative constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyWheelMotionBlurNative Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficBaseVehicle_eventApplyWheelMotionBlurNative_Parms, MotionBlurMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionBlurMIDs_MetaData), NewProp_MotionBlurMIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::NewProp_MotionBlurMIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::PropPointers) < 2048);
// ********** End Function ApplyWheelMotionBlurNative Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMassTrafficBaseVehicle, nullptr, "ApplyWheelMotionBlurNative", 	Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::MassTrafficBaseVehicle_eventApplyWheelMotionBlurNative_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::MassTrafficBaseVehicle_eventApplyWheelMotionBlurNative_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMassTrafficBaseVehicle::execApplyWheelMotionBlurNative)
{
	P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_MotionBlurMIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyWheelMotionBlurNative(Z_Param_Out_MotionBlurMIDs);
	P_NATIVE_END;
}
// ********** End Class AMassTrafficBaseVehicle Function ApplyWheelMotionBlurNative ****************

// ********** Begin Class AMassTrafficBaseVehicle **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficBaseVehicle;
UClass* AMassTrafficBaseVehicle::GetPrivateStaticClass()
{
	using TClass = AMassTrafficBaseVehicle;
	if (!Z_Registration_Info_UClass_AMassTrafficBaseVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficBaseVehicle"),
			Z_Registration_Info_UClass_AMassTrafficBaseVehicle.InnerSingleton,
			StaticRegisterNativesAMassTrafficBaseVehicle,
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
	return Z_Registration_Info_UClass_AMassTrafficBaseVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficBaseVehicle_NoRegister()
{
	return AMassTrafficBaseVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficBaseVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n// Basic vehicle used for AI low-res representation in MassTraffic\n" },
#endif
		{ "IncludePath", "MassTrafficBaseVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic vehicle used for AI low-res representation in MassTraffic" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleVelocityMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MassTrafficVehicleComponent_MetaData[] = {
		{ "Category", "MassTrafficBaseVehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMotionBlurWheelMIDs_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassTrafficBaseVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficBaseVehicle constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleVelocityMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleMax;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MassTrafficVehicleComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMotionBlurWheelMIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMotionBlurWheelMIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficBaseVehicle constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyWheelMotionBlurNative"), .Pointer = &AMassTrafficBaseVehicle::execApplyWheelMotionBlurNative },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficBaseVehicle_ApplyWheelMotionBlurNative, "ApplyWheelMotionBlurNative" }, // 1086333871
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficBaseVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficBaseVehicle_Statics

// ********** Begin Class AMassTrafficBaseVehicle Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_BlurAngleVelocityMax = { "BlurAngleVelocityMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBaseVehicle, BlurAngleVelocityMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurAngleVelocityMax_MetaData), NewProp_BlurAngleVelocityMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_BlurAngleMax = { "BlurAngleMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBaseVehicle, BlurAngleMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurAngleMax_MetaData), NewProp_BlurAngleMax_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_MassTrafficVehicleComponent = { "MassTrafficVehicleComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBaseVehicle, MassTrafficVehicleComponent), Z_Construct_UClass_UMassTrafficVehicleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MassTrafficVehicleComponent_MetaData), NewProp_MassTrafficVehicleComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficBaseVehicle, CachedMotionBlurWheelMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMotionBlurWheelMIDs_MetaData), NewProp_CachedMotionBlurWheelMIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_BlurAngleVelocityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_BlurAngleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_MassTrafficVehicleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficBaseVehicle Property Definitions *******************************
UObject* (*const Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMassActorPoolableInterface_NoRegister, (int32)VTABLE_OFFSET(AMassTrafficBaseVehicle, IMassActorPoolableInterface), false },  // 2612728571
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::ClassParams = {
	&AMassTrafficBaseVehicle::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::Class_MetaDataParams)
};
void AMassTrafficBaseVehicle::StaticRegisterNativesAMassTrafficBaseVehicle()
{
	UClass* Class = AMassTrafficBaseVehicle::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMassTrafficBaseVehicle()
{
	if (!Z_Registration_Info_UClass_AMassTrafficBaseVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficBaseVehicle.OuterSingleton, Z_Construct_UClass_AMassTrafficBaseVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficBaseVehicle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficBaseVehicle);
AMassTrafficBaseVehicle::~AMassTrafficBaseVehicle() {}
// ********** End Class AMassTrafficBaseVehicle ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficBaseVehicle, AMassTrafficBaseVehicle::StaticClass, TEXT("AMassTrafficBaseVehicle"), &Z_Registration_Info_UClass_AMassTrafficBaseVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficBaseVehicle), 2319590115U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h__Script_MassTraffic_3426412264{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
