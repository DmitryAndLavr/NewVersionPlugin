// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficWheeledVehicle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficWheeledVehicle() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle();
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle_NoRegister();
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister();
MASSTRAFFIC_API UFunction* Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MassTraffic();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FToggleMotorDelegate **************************************************
struct Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics
{
	struct _Script_MassTraffic_eventToggleMotorDelegate_Parms
	{
		bool NewMotorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FToggleMotorDelegate constinit property declarations ******************
	static void NewProp_NewMotorState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewMotorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FToggleMotorDelegate constinit property declarations ********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FToggleMotorDelegate Property Definitions *****************************
void Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::NewProp_NewMotorState_SetBit(void* Obj)
{
	((_Script_MassTraffic_eventToggleMotorDelegate_Parms*)Obj)->NewMotorState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::NewProp_NewMotorState = { "NewMotorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MassTraffic_eventToggleMotorDelegate_Parms), &Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::NewProp_NewMotorState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::NewProp_NewMotorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FToggleMotorDelegate Property Definitions *******************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MassTraffic, nullptr, "ToggleMotorDelegate__DelegateSignature", 	Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::_Script_MassTraffic_eventToggleMotorDelegate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::_Script_MassTraffic_eventToggleMotorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FToggleMotorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ToggleMotorDelegate, bool NewMotorState)
{
	struct _Script_MassTraffic_eventToggleMotorDelegate_Parms
	{
		bool NewMotorState;
	};
	_Script_MassTraffic_eventToggleMotorDelegate_Parms Parms;
	Parms.NewMotorState=NewMotorState ? true : false;
	ToggleMotorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FToggleMotorDelegate ****************************************************

// ********** Begin Class AMassTrafficWheeledVehicle Function ApplyWheelMotionBlurParameters *******
struct Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics
{
	struct MassTrafficWheeledVehicle_eventApplyWheelMotionBlurParameters_Parms
	{
		TArray<UMaterialInstanceDynamic*> MotionBlurMIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ End IMassTrafficVehicleControlInterface \n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MotionBlurMIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyWheelMotionBlurParameters constinit property declarations ********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionBlurMIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MotionBlurMIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyWheelMotionBlurParameters constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyWheelMotionBlurParameters Property Definitions *******************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::NewProp_MotionBlurMIDs_Inner = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::NewProp_MotionBlurMIDs = { "MotionBlurMIDs", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficWheeledVehicle_eventApplyWheelMotionBlurParameters_Parms, MotionBlurMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MotionBlurMIDs_MetaData), NewProp_MotionBlurMIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::NewProp_MotionBlurMIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::NewProp_MotionBlurMIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::PropPointers) < 2048);
// ********** End Function ApplyWheelMotionBlurParameters Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMassTrafficWheeledVehicle, nullptr, "ApplyWheelMotionBlurParameters", 	Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::MassTrafficWheeledVehicle_eventApplyWheelMotionBlurParameters_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::MassTrafficWheeledVehicle_eventApplyWheelMotionBlurParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMassTrafficWheeledVehicle::execApplyWheelMotionBlurParameters)
{
	P_GET_TARRAY(UMaterialInstanceDynamic*,Z_Param_MotionBlurMIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyWheelMotionBlurParameters(Z_Param_MotionBlurMIDs);
	P_NATIVE_END;
}
// ********** End Class AMassTrafficWheeledVehicle Function ApplyWheelMotionBlurParameters *********

// ********** Begin Class AMassTrafficWheeledVehicle Function IsMotorRunning ***********************
struct Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics
{
	struct MassTrafficWheeledVehicle_eventIsMotorRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsMotorRunning constinit property declarations ************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsMotorRunning constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsMotorRunning Property Definitions ***********************************
void Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MassTrafficWheeledVehicle_eventIsMotorRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficWheeledVehicle_eventIsMotorRunning_Parms), &Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::PropPointers) < 2048);
// ********** End Function IsMotorRunning Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMassTrafficWheeledVehicle, nullptr, "IsMotorRunning", 	Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::MassTrafficWheeledVehicle_eventIsMotorRunning_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::MassTrafficWheeledVehicle_eventIsMotorRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMassTrafficWheeledVehicle::execIsMotorRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMotorRunning();
	P_NATIVE_END;
}
// ********** End Class AMassTrafficWheeledVehicle Function IsMotorRunning *************************

// ********** Begin Class AMassTrafficWheeledVehicle Function ToggleEngineSound ********************
struct Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics
{
	struct MassTrafficWheeledVehicle_eventToggleEngineSound_Parms
	{
		bool MotorState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleEngineSound constinit property declarations *********************
	static void NewProp_MotorState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MotorState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToggleEngineSound constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToggleEngineSound Property Definitions ********************************
void Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::NewProp_MotorState_SetBit(void* Obj)
{
	((MassTrafficWheeledVehicle_eventToggleEngineSound_Parms*)Obj)->MotorState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::NewProp_MotorState = { "MotorState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MassTrafficWheeledVehicle_eventToggleEngineSound_Parms), &Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::NewProp_MotorState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::NewProp_MotorState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::PropPointers) < 2048);
// ********** End Function ToggleEngineSound Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMassTrafficWheeledVehicle, nullptr, "ToggleEngineSound", 	Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::MassTrafficWheeledVehicle_eventToggleEngineSound_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::MassTrafficWheeledVehicle_eventToggleEngineSound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMassTrafficWheeledVehicle::execToggleEngineSound)
{
	P_GET_UBOOL(Z_Param_MotorState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleEngineSound(Z_Param_MotorState);
	P_NATIVE_END;
}
// ********** End Class AMassTrafficWheeledVehicle Function ToggleEngineSound **********************

// ********** Begin Class AMassTrafficWheeledVehicle ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMassTrafficWheeledVehicle;
UClass* AMassTrafficWheeledVehicle::GetPrivateStaticClass()
{
	using TClass = AMassTrafficWheeledVehicle;
	if (!Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficWheeledVehicle"),
			Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.InnerSingleton,
			StaticRegisterNativesAMassTrafficWheeledVehicle,
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
	return Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.InnerSingleton;
}
UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle_NoRegister()
{
	return AMassTrafficWheeledVehicle::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//------------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MassTrafficWheeledVehicle.h" },
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleVelocityMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlurAngleMax_MetaData[] = {
		{ "Category", "Wheel Motion Blur" },
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineSound_MetaData[] = {
		{ "Category", "VehicleSound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineStartSound_MetaData[] = {
		{ "Category", "VehicleSound" },
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EngineStopSound_MetaData[] = {
		{ "Category", "VehicleSound" },
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedMotionBlurWheelMIDs_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//--------------------------------------------------------------------------------------------------------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MassTrafficWheeledVehicle.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMassTrafficWheeledVehicle constinit property declarations ***************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleVelocityMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlurAngleMax;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineStartSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EngineStopSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedMotionBlurWheelMIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMotionBlurWheelMIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AMassTrafficWheeledVehicle constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyWheelMotionBlurParameters"), .Pointer = &AMassTrafficWheeledVehicle::execApplyWheelMotionBlurParameters },
		{ .NameUTF8 = UTF8TEXT("IsMotorRunning"), .Pointer = &AMassTrafficWheeledVehicle::execIsMotorRunning },
		{ .NameUTF8 = UTF8TEXT("ToggleEngineSound"), .Pointer = &AMassTrafficWheeledVehicle::execToggleEngineSound },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMassTrafficWheeledVehicle_ApplyWheelMotionBlurParameters, "ApplyWheelMotionBlurParameters" }, // 3526578592
		{ &Z_Construct_UFunction_AMassTrafficWheeledVehicle_IsMotorRunning, "IsMotorRunning" }, // 4294721788
		{ &Z_Construct_UFunction_AMassTrafficWheeledVehicle_ToggleEngineSound, "ToggleEngineSound" }, // 2761403928
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassTrafficWheeledVehicle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics

// ********** Begin Class AMassTrafficWheeledVehicle Property Definitions **************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_BlurAngleVelocityMax = { "BlurAngleVelocityMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, BlurAngleVelocityMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurAngleVelocityMax_MetaData), NewProp_BlurAngleVelocityMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_BlurAngleMax = { "BlurAngleMax", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, BlurAngleMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlurAngleMax_MetaData), NewProp_BlurAngleMax_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineSound = { "EngineSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, EngineSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineSound_MetaData), NewProp_EngineSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineStartSound = { "EngineStartSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, EngineStartSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineStartSound_MetaData), NewProp_EngineStartSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineStopSound = { "EngineStopSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, EngineStopSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EngineStopSound_MetaData), NewProp_EngineStopSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs = { "CachedMotionBlurWheelMIDs", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMassTrafficWheeledVehicle, CachedMotionBlurWheelMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedMotionBlurWheelMIDs_MetaData), NewProp_CachedMotionBlurWheelMIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_BlurAngleVelocityMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_BlurAngleMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineStartSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_EngineStopSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::NewProp_CachedMotionBlurWheelMIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::PropPointers) < 2048);
// ********** End Class AMassTrafficWheeledVehicle Property Definitions ****************************
UObject* (*const Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTraffic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMassActorPoolableInterface_NoRegister, (int32)VTABLE_OFFSET(AMassTrafficWheeledVehicle, IMassActorPoolableInterface), false },  // 2612728571
	{ Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister, (int32)VTABLE_OFFSET(AMassTrafficWheeledVehicle, IMassTrafficVehicleControlInterface), false },  // 679100810
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::ClassParams = {
	&AMassTrafficWheeledVehicle::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::Class_MetaDataParams), Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::Class_MetaDataParams)
};
void AMassTrafficWheeledVehicle::StaticRegisterNativesAMassTrafficWheeledVehicle()
{
	UClass* Class = AMassTrafficWheeledVehicle::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::Funcs));
}
UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle()
{
	if (!Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.OuterSingleton, Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMassTrafficWheeledVehicle.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMassTrafficWheeledVehicle);
AMassTrafficWheeledVehicle::~AMassTrafficWheeledVehicle() {}
// ********** End Class AMassTrafficWheeledVehicle *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h__Script_MassTraffic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMassTrafficWheeledVehicle, AMassTrafficWheeledVehicle::StaticClass, TEXT("AMassTrafficWheeledVehicle"), &Z_Registration_Info_UClass_AMassTrafficWheeledVehicle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassTrafficWheeledVehicle), 3162244041U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h__Script_MassTraffic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h__Script_MassTraffic_2498997538{
	TEXT("/Script/MassTraffic"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h__Script_MassTraffic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h__Script_MassTraffic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
