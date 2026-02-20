// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBaseVehicle.h"

#ifdef MASSTRAFFIC_MassTrafficBaseVehicle_generated_h
#error "MassTrafficBaseVehicle.generated.h already included, missing '#pragma once' in MassTrafficBaseVehicle.h"
#endif
#define MASSTRAFFIC_MassTrafficBaseVehicle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;

// ********** Begin Class AMassTrafficBaseVehicle **************************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyWheelMotionBlurNative);


struct Z_Construct_UClass_AMassTrafficBaseVehicle_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficBaseVehicle_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficBaseVehicle(); \
	friend struct ::Z_Construct_UClass_AMassTrafficBaseVehicle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_AMassTrafficBaseVehicle_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficBaseVehicle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_AMassTrafficBaseVehicle_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficBaseVehicle) \
	virtual UObject* _getUObject() const override { return const_cast<AMassTrafficBaseVehicle*>(this); }


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficBaseVehicle(AMassTrafficBaseVehicle&&) = delete; \
	AMassTrafficBaseVehicle(const AMassTrafficBaseVehicle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficBaseVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficBaseVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassTrafficBaseVehicle) \
	NO_API virtual ~AMassTrafficBaseVehicle();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_15_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficBaseVehicle;

// ********** End Class AMassTrafficBaseVehicle ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBaseVehicle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
