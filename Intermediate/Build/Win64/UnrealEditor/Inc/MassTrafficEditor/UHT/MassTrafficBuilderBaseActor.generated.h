// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBuilderBaseActor.h"

#ifdef MASSTRAFFICEDITOR_MassTrafficBuilderBaseActor_generated_h
#error "MassTrafficBuilderBaseActor.generated.h already included, missing '#pragma once' in MassTrafficBuilderBaseActor.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficBuilderBaseActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UZoneShapeComponent;
enum class EMassTrafficSpecialConnectionType : uint8;
enum class EMassTrafficUser : uint8;
struct FLinearColor;
struct FMassTrafficDebugLineSegment;
struct FMassTrafficDebugPoint;
struct FMassTrafficIntersection;
struct FMassTrafficPoint;
struct FMassTrafficPointHints;
struct FMassTrafficRoadSegment;
struct FMassTrafficRoadSpline;
struct FZoneGraphTagMask;
struct FZoneLaneProfileRef;

// ********** Begin Class AMassTrafficBuilderBaseActor *********************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAll); \
	DECLARE_FUNCTION(execBuildZoneShapeAsIntersection); \
	DECLARE_FUNCTION(execBuildZoneShapeAsRoadSpline); \
	DECLARE_FUNCTION(execBuildZoneShapeAsRoadSegment); \
	DECLARE_FUNCTION(execMarkAllCrosswalkRoadSegments); \
	DECLARE_FUNCTION(execGetPointHints); \
	DECLARE_FUNCTION(execAddPointHints); \
	DECLARE_FUNCTION(execCompareLaneWidthsOnIntersectionLinks); \
	DECLARE_FUNCTION(execCompareNumberOfLanesOnIntersectionLinks); \
	DECLARE_FUNCTION(execSegmentCrossesRoadEnteringOrLeavingIntersectionSide); \
	DECLARE_FUNCTION(execClearLanesFromIntersectionLink); \
	DECLARE_FUNCTION(execAddIntersectionLinkForwardAndUpVectors); \
	DECLARE_FUNCTION(execAddIntersectionCenter); \
	DECLARE_FUNCTION(execAddIntersectionLink); \
	DECLARE_FUNCTION(execAddIntersection); \
	DECLARE_FUNCTION(execStringToSpecialConnectionType); \
	DECLARE_FUNCTION(execChopUpAllRoadSplines); \
	DECLARE_FUNCTION(execAdjustTangentsForCoincidentRoadSplineEndPoints); \
	DECLARE_FUNCTION(execLoopAllClosedRoadSplines); \
	DECLARE_FUNCTION(execAddRoadSplinePoint); \
	DECLARE_FUNCTION(execAddRoadSpline); \
	DECLARE_FUNCTION(execAddRoadSegment); \
	DECLARE_FUNCTION(execVectorToMapKey); \
	DECLARE_FUNCTION(execFindAsQuaternion); \
	DECLARE_FUNCTION(execFindAsVector); \
	DECLARE_FUNCTION(execFindAsFloat); \
	DECLARE_FUNCTION(execFindAsInt); \
	DECLARE_FUNCTION(execFindAsBool); \
	DECLARE_FUNCTION(execFindAsName); \
	DECLARE_FUNCTION(execFindAsString); \
	DECLARE_FUNCTION(execClearDebug); \
	DECLARE_FUNCTION(execDrawDebugLineSegments); \
	DECLARE_FUNCTION(execDrawDebugPoints); \
	DECLARE_FUNCTION(execDrawDebugLineSegment); \
	DECLARE_FUNCTION(execDrawDebugPoint); \
	DECLARE_FUNCTION(execAddDebugErrorMarker); \
	DECLARE_FUNCTION(execAddDebugMarker); \
	DECLARE_FUNCTION(execJitterPoint); \
	DECLARE_FUNCTION(execJitterColor); \
	DECLARE_FUNCTION(execMakeDebugColorFromID); \
	DECLARE_FUNCTION(execConvertVectorFromHoudini); \
	DECLARE_FUNCTION(execConvertPositionFromHoudini); \
	DECLARE_FUNCTION(execFlatVectorToFlatRightVector);


struct Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics;
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficBuilderBaseActor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficBuilderBaseActor(); \
	friend struct ::Z_Construct_UClass_AMassTrafficBuilderBaseActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFICEDITOR_API UClass* ::Z_Construct_UClass_AMassTrafficBuilderBaseActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficBuilderBaseActor, AMassTrafficEditorBaseActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), Z_Construct_UClass_AMassTrafficBuilderBaseActor_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficBuilderBaseActor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficBuilderBaseActor(AMassTrafficBuilderBaseActor&&) = delete; \
	AMassTrafficBuilderBaseActor(const AMassTrafficBuilderBaseActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficBuilderBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficBuilderBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficBuilderBaseActor) \
	NO_API virtual ~AMassTrafficBuilderBaseActor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_21_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficBuilderBaseActor;

// ********** End Class AMassTrafficBuilderBaseActor ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficBuilderBaseActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
