// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficPathFollower.h"

#ifdef MASSTRAFFIC_MassTrafficPathFollower_generated_h
#error "MassTrafficPathFollower.generated.h already included, missing '#pragma once' in MassTrafficPathFollower.h"
#endif
#define MASSTRAFFIC_MassTrafficPathFollower_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTrafficPathFollower *************************************************
struct Z_Construct_UClass_UMassTrafficPathFollower_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficPathFollower_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficPathFollower(); \
	friend struct ::Z_Construct_UClass_UMassTrafficPathFollower_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficPathFollower_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficPathFollower, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficPathFollower_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficPathFollower)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficPathFollower(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficPathFollower(UMassTrafficPathFollower&&) = delete; \
	UMassTrafficPathFollower(const UMassTrafficPathFollower&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficPathFollower); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficPathFollower); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficPathFollower) \
	NO_API virtual ~UMassTrafficPathFollower();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_19_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_22_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficPathFollower;

// ********** End Class UMassTrafficPathFollower ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficPathFollower_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
