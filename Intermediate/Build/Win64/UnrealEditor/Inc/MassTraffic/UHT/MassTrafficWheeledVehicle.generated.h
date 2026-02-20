// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficWheeledVehicle.h"

#ifdef MASSTRAFFIC_MassTrafficWheeledVehicle_generated_h
#error "MassTrafficWheeledVehicle.generated.h already included, missing '#pragma once' in MassTrafficWheeledVehicle.h"
#endif
#define MASSTRAFFIC_MassTrafficWheeledVehicle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;

// ********** Begin Delegate FToggleMotorDelegate **************************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_15_DELEGATE \
MASSTRAFFIC_API void FToggleMotorDelegate_DelegateWrapper(const FMulticastScriptDelegate& ToggleMotorDelegate, bool NewMotorState);


// ********** End Delegate FToggleMotorDelegate ****************************************************

// ********** Begin Class AMassTrafficWheeledVehicle ***********************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToggleEngineSound); \
	DECLARE_FUNCTION(execIsMotorRunning); \
	DECLARE_FUNCTION(execApplyWheelMotionBlurParameters);


struct Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficWheeledVehicle_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficWheeledVehicle(); \
	friend struct ::Z_Construct_UClass_AMassTrafficWheeledVehicle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_AMassTrafficWheeledVehicle_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficWheeledVehicle, AWheeledVehiclePawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_AMassTrafficWheeledVehicle_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficWheeledVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<AMassTrafficWheeledVehicle*>(this); }


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficWheeledVehicle(AMassTrafficWheeledVehicle&&) = delete; \
	AMassTrafficWheeledVehicle(const AMassTrafficWheeledVehicle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficWheeledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficWheeledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassTrafficWheeledVehicle) \
	NO_API virtual ~AMassTrafficWheeledVehicle();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_18_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficWheeledVehicle;

// ********** End Class AMassTrafficWheeledVehicle *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficWheeledVehicle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
