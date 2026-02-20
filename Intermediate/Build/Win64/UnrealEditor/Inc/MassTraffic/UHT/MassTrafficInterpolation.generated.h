// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficInterpolation.h"

#ifdef MASSTRAFFIC_MassTrafficInterpolation_generated_h
#error "MassTrafficInterpolation.generated.h already included, missing '#pragma once' in MassTrafficInterpolation.h"
#endif
#define MASSTRAFFIC_MassTrafficInterpolation_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/NoDestroy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficInterpolation_h

// ********** Begin Enum ETrafficVehicleMovementInterpolationMethod ********************************
#define FOREACH_ENUM_ETRAFFICVEHICLEMOVEMENTINTERPOLATIONMETHOD(op) \
	op(ETrafficVehicleMovementInterpolationMethod::Linear) \
	op(ETrafficVehicleMovementInterpolationMethod::CubicBezier) 

enum class ETrafficVehicleMovementInterpolationMethod : uint8;
template<> struct TIsUEnumClass<ETrafficVehicleMovementInterpolationMethod> { enum { Value = true }; };
template<> MASSTRAFFIC_NON_ATTRIBUTED_API UEnum* StaticEnum<ETrafficVehicleMovementInterpolationMethod>();
// ********** End Enum ETrafficVehicleMovementInterpolationMethod **********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
