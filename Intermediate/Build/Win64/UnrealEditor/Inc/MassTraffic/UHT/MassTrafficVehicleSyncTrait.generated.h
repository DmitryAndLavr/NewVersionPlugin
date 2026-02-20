// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficVehicleSyncTrait.h"

#ifdef MASSTRAFFIC_MassTrafficVehicleSyncTrait_generated_h
#error "MassTrafficVehicleSyncTrait.generated.h already included, missing '#pragma once' in MassTrafficVehicleSyncTrait.h"
#endif
#define MASSTRAFFIC_MassTrafficVehicleSyncTrait_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FChaosVehicleMovementCopyToMassTag ********************************
struct Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVehicleMovementCopyToMassTag_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct(); \
	typedef FMassTag Super;


struct FChaosVehicleMovementCopyToMassTag;
// ********** End ScriptStruct FChaosVehicleMovementCopyToMassTag **********************************

// ********** Begin ScriptStruct FChaosVehicleMovementComponentWrapperFragment *********************
struct Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FChaosVehicleMovementComponentWrapperFragment_Statics; \
	MASSTRAFFIC_API static class UScriptStruct* StaticStruct(); \
	typedef FObjectWrapperFragment Super;


struct FChaosVehicleMovementComponentWrapperFragment;
// ********** End ScriptStruct FChaosVehicleMovementComponentWrapperFragment ***********************

// ********** Begin Class UMassTrafficVehicleSyncTrait *********************************************
struct Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleSyncTrait_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleSyncTrait(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleSyncTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleSyncTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleSyncTrait, UMassAgentSyncTrait, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleSyncTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleSyncTrait)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleSyncTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleSyncTrait(UMassTrafficVehicleSyncTrait&&) = delete; \
	UMassTrafficVehicleSyncTrait(const UMassTrafficVehicleSyncTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleSyncTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleSyncTrait); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleSyncTrait) \
	NO_API virtual ~UMassTrafficVehicleSyncTrait();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_30_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_33_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleSyncTrait;

// ********** End Class UMassTrafficVehicleSyncTrait ***********************************************

// ********** Begin Class UMassTrafficVehicleMovementSyncTrait *************************************
struct Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleMovementSyncTrait(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleMovementSyncTrait, UMassTrafficVehicleSyncTrait, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleMovementSyncTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleMovementSyncTrait)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleMovementSyncTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleMovementSyncTrait(UMassTrafficVehicleMovementSyncTrait&&) = delete; \
	UMassTrafficVehicleMovementSyncTrait(const UMassTrafficVehicleMovementSyncTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleMovementSyncTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleMovementSyncTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleMovementSyncTrait) \
	NO_API virtual ~UMassTrafficVehicleMovementSyncTrait();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_36_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_39_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleMovementSyncTrait;

// ********** End Class UMassTrafficVehicleMovementSyncTrait ***************************************

// ********** Begin Class UMassTrafficVehicleOrientationSyncTrait **********************************
struct Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleOrientationSyncTrait(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleOrientationSyncTrait, UMassTrafficVehicleSyncTrait, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleOrientationSyncTrait_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleOrientationSyncTrait)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficVehicleOrientationSyncTrait(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleOrientationSyncTrait(UMassTrafficVehicleOrientationSyncTrait&&) = delete; \
	UMassTrafficVehicleOrientationSyncTrait(const UMassTrafficVehicleOrientationSyncTrait&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleOrientationSyncTrait); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleOrientationSyncTrait); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficVehicleOrientationSyncTrait) \
	NO_API virtual ~UMassTrafficVehicleOrientationSyncTrait();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_45_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_48_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleOrientationSyncTrait;

// ********** End Class UMassTrafficVehicleOrientationSyncTrait ************************************

// ********** Begin Class UMassTrafficVehicleMovementToMassTranslator ******************************
struct Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleMovementToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleMovementToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleMovementToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleMovementToMassTranslator)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_60_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleMovementToMassTranslator(UMassTrafficVehicleMovementToMassTranslator&&) = delete; \
	UMassTrafficVehicleMovementToMassTranslator(const UMassTrafficVehicleMovementToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleMovementToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleMovementToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficVehicleMovementToMassTranslator) \
	NO_API virtual ~UMassTrafficVehicleMovementToMassTranslator();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_57_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_60_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleMovementToMassTranslator;

// ********** End Class UMassTrafficVehicleMovementToMassTranslator ********************************

// ********** Begin Class UMassTrafficVehicleOrientationToMassTranslator ***************************
struct Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficVehicleOrientationToMassTranslator(); \
	friend struct ::Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficVehicleOrientationToMassTranslator, UMassTranslator, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficVehicleOrientationToMassTranslator_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficVehicleOrientationToMassTranslator)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficVehicleOrientationToMassTranslator(UMassTrafficVehicleOrientationToMassTranslator&&) = delete; \
	UMassTrafficVehicleOrientationToMassTranslator(const UMassTrafficVehicleOrientationToMassTranslator&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficVehicleOrientationToMassTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficVehicleOrientationToMassTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficVehicleOrientationToMassTranslator) \
	NO_API virtual ~UMassTrafficVehicleOrientationToMassTranslator();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_73_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_76_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficVehicleOrientationToMassTranslator;

// ********** End Class UMassTrafficVehicleOrientationToMassTranslator *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficVehicleSyncTrait_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
