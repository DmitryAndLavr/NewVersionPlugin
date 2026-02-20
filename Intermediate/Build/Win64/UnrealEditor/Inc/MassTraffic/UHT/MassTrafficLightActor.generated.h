// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficLightActor.h"

#ifdef MASSTRAFFIC_MassTrafficLightActor_generated_h
#error "MassTrafficLightActor.generated.h already included, missing '#pragma once' in MassTrafficLightActor.h"
#endif
#define MASSTRAFFIC_MassTrafficLightActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassTrafficLightActor ***************************************************
struct Z_Construct_UClass_AMassTrafficLightActor_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_AMassTrafficLightActor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficLightActor(); \
	friend struct ::Z_Construct_UClass_AMassTrafficLightActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_AMassTrafficLightActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficLightActor, AMassTrafficProxyActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_AMassTrafficLightActor_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficLightActor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMassTrafficLightActor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficLightActor(AMassTrafficLightActor&&) = delete; \
	AMassTrafficLightActor(const AMassTrafficLightActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficLightActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficLightActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficLightActor) \
	NO_API virtual ~AMassTrafficLightActor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_9_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficLightActor;

// ********** End Class AMassTrafficLightActor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficLightActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
