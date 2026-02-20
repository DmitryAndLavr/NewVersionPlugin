// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficParkingSpotActor.h"

#ifdef MASSTRAFFIC_MassTrafficParkingSpotActor_generated_h
#error "MassTrafficParkingSpotActor.generated.h already included, missing '#pragma once' in MassTrafficParkingSpotActor.h"
#endif
#define MASSTRAFFIC_MassTrafficParkingSpotActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassTrafficParkingSpotActor *********************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParkingSpaceType);


struct Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficParkingSpotActor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficParkingSpotActor(); \
	friend struct ::Z_Construct_UClass_AMassTrafficParkingSpotActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_AMassTrafficParkingSpotActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficParkingSpotActor, AMassTrafficProxyActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_AMassTrafficParkingSpotActor_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficParkingSpotActor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficParkingSpotActor(AMassTrafficParkingSpotActor&&) = delete; \
	AMassTrafficParkingSpotActor(const AMassTrafficParkingSpotActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficParkingSpotActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficParkingSpotActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMassTrafficParkingSpotActor) \
	NO_API virtual ~AMassTrafficParkingSpotActor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_13_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficParkingSpotActor;

// ********** End Class AMassTrafficParkingSpotActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficParkingSpotActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
