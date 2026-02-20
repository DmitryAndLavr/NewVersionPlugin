// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleControlInterface.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleControlInterface_generated_h
#error "MassTrafficVehicleControlInterface.generated.h already included, missing '#pragma once' in MassTrafficVehicleControlInterface.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleControlInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UMassTrafficVehicleControlInterface **********************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_RPC_WRAPPERS \
	virtual void OnTrafficVehicleSpawned_Implementation() {}; \
	virtual void OnParkedVehicleSpawned_Implementation() {}; \
	virtual void SetVehicleInputs_Implementation(const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering) {}; \
	DECLARE_FUNCTION(execOnTrafficVehicleSpawned); \
	DECLARE_FUNCTION(execOnParkedVehicleSpawned); \
	DECLARE_FUNCTION(execSetVehicleInputs);


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleControlInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleControlInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleControlInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleControlInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleControlInterface(UMassTrafficVehicleControlInterface&&) = delete; \
	UMassTrafficVehicleControlInterface(const UMassTrafficVehicleControlInterface&) = delete; \
	virtual ~UMassTrafficVehicleControlInterface() = default;


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleControlInterface(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleControlInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleControlInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleControlInterface_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleControlInterface)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_GENERATED_UINTERFACE_BODY() \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IMassTrafficVehicleControlInterface() {} \
public: \
	typedef UMassTrafficVehicleControlInterface UClassType; \
	typedef IMassTrafficVehicleControlInterface ThisClass; \
	static void Execute_OnParkedVehicleSpawned(UObject* O); \
	static void Execute_OnTrafficVehicleSpawned(UObject* O); \
	static void Execute_SetVehicleInputs(UObject* O, const float Throttle, const float Brake, bool bHandBrake, const float Steering, bool bSetSteering); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_8_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_RPC_WRAPPERS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_CALLBACK_WRAPPERS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleControlInterface;

// ********** End Interface UMassTrafficVehicleControlInterface ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleControlInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
