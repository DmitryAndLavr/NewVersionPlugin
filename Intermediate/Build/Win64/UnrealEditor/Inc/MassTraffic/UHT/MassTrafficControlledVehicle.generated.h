// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficControlledVehicle.h"

#ifdef MASSTRAFFIC_MassTrafficControlledVehicle_generated_h
#error "MassTrafficControlledVehicle.generated.h already included, missing '#pragma once' in MassTrafficControlledVehicle.h"
#endif
#define MASSTRAFFIC_MassTrafficControlledVehicle_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassTrafficControlledVehicle ********************************************
struct Z_Construct_UClass_AMassTrafficControlledVehicle_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficControlledVehicle(); \
	friend struct ::Z_Construct_UClass_AMassTrafficControlledVehicle_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficControlledVehicle, AMassTrafficWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_AMassTrafficControlledVehicle_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficControlledVehicle)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficControlledVehicle(AMassTrafficControlledVehicle&&) = delete; \
	AMassTrafficControlledVehicle(const AMassTrafficControlledVehicle&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficControlledVehicle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficControlledVehicle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassTrafficControlledVehicle) \
	NO_API virtual ~AMassTrafficControlledVehicle();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_22_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_25_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficControlledVehicle;

// ********** End Class AMassTrafficControlledVehicle **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficControlledVehicle_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
