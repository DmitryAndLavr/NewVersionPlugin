// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficDrivers.h"

#ifdef MASSTRAFFIC_MassTrafficDrivers_generated_h
#error "MassTrafficDrivers.generated.h already included, missing '#pragma once' in MassTrafficDrivers.h"
#endif
#define MASSTRAFFIC_MassTrafficDrivers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMassTrafficDriverMesh ********************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficDriverMesh_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficDriverMesh;
// ********** End ScriptStruct FMassTrafficDriverMesh **********************************************

// ********** Begin ScriptStruct FMassTrafficDriverTypeData ****************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficDriverTypeData_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMassTrafficDriverTypeData;
// ********** End ScriptStruct FMassTrafficDriverTypeData ******************************************

// ********** Begin Class UMassTrafficDriverTypesDataAsset *****************************************
struct Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficDriverTypesDataAsset(); \
	friend struct ::Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficDriverTypesDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficDriverTypesDataAsset_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficDriverTypesDataAsset)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassTrafficDriverTypesDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficDriverTypesDataAsset(UMassTrafficDriverTypesDataAsset&&) = delete; \
	UMassTrafficDriverTypesDataAsset(const UMassTrafficDriverTypesDataAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficDriverTypesDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficDriverTypesDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassTrafficDriverTypesDataAsset) \
	NO_API virtual ~UMassTrafficDriverTypesDataAsset();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_64_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_67_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficDriverTypesDataAsset;

// ********** End Class UMassTrafficDriverTypesDataAsset *******************************************

// ********** Begin ScriptStruct FMassTrafficDriversParameters *************************************
struct Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h_78_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMassTrafficDriversParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassConstSharedFragment Super;


struct FMassTrafficDriversParameters;
// ********** End ScriptStruct FMassTrafficDriversParameters ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficDrivers_h

// ********** Begin Enum EDriverAnimStateVariation *************************************************
#define FOREACH_ENUM_EDRIVERANIMSTATEVARIATION(op) \
	op(EDriverAnimStateVariation::TwoHands) \
	op(EDriverAnimStateVariation::OneHand) \
	op(EDriverAnimStateVariation::Bus) \
	op(EDriverAnimStateVariation::None) 

enum class EDriverAnimStateVariation : uint8;
template<> struct TIsUEnumClass<EDriverAnimStateVariation> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EDriverAnimStateVariation>();
// ********** End Enum EDriverAnimStateVariation ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
