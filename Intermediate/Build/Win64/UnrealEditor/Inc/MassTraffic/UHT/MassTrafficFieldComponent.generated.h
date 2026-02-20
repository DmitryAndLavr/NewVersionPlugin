// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficFieldComponent.h"

#ifdef MASSTRAFFIC_MassTrafficFieldComponent_generated_h
#error "MassTrafficFieldComponent.generated.h already included, missing '#pragma once' in MassTrafficFieldComponent.h"
#endif
#define MASSTRAFFIC_MassTrafficFieldComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMassTrafficFieldComponent ***********************************************
struct Z_Construct_UClass_UMassTrafficFieldComponent_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassTrafficFieldComponent(); \
	friend struct ::Z_Construct_UClass_UMassTrafficFieldComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UMassTrafficFieldComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_UMassTrafficFieldComponent_NoRegister) \
	DECLARE_SERIALIZER(UMassTrafficFieldComponent)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMassTrafficFieldComponent(UMassTrafficFieldComponent&&) = delete; \
	UMassTrafficFieldComponent(const UMassTrafficFieldComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassTrafficFieldComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassTrafficFieldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassTrafficFieldComponent) \
	NO_API virtual ~UMassTrafficFieldComponent();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_28_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMassTrafficFieldComponent;

// ********** End Class UMassTrafficFieldComponent *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficFieldComponent_h

// ********** Begin Enum EMassTrafficFieldInclusionMode ********************************************
#define FOREACH_ENUM_EMASSTRAFFICFIELDINCLUSIONMODE(op) \
	op(EMassTrafficFieldInclusionMode::Lanes) \
	op(EMassTrafficFieldInclusionMode::VehiclesOnLanes) 

enum class EMassTrafficFieldInclusionMode : uint8;
template<> struct TIsUEnumClass<EMassTrafficFieldInclusionMode> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<EMassTrafficFieldInclusionMode>();
// ********** End Enum EMassTrafficFieldInclusionMode **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
