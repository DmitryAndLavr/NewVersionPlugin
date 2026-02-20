// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficBubble.h"

#ifdef MASSTRAFFIC_MassTrafficBubble_generated_h
#error "MassTrafficBubble.generated.h already included, missing '#pragma once' in MassTrafficBubble.h"
#endif
#define MASSTRAFFIC_MassTrafficBubble_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTrafficClientBubbleSerializer ************************************
struct Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics;
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTrafficClientBubbleSerializer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassClientBubbleSerializerBase Super; \
	UE_NET_DECLARE_FASTARRAY(FTrafficClientBubbleSerializer, Traffic, );


struct FTrafficClientBubbleSerializer;
// ********** End ScriptStruct FTrafficClientBubbleSerializer **************************************

// ********** Begin Class ATrafficClientBubbleInfo *************************************************
struct Z_Construct_UClass_ATrafficClientBubbleInfo_Statics;
MASSTRAFFIC_API UClass* Z_Construct_UClass_ATrafficClientBubbleInfo_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrafficClientBubbleInfo(); \
	friend struct ::Z_Construct_UClass_ATrafficClientBubbleInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFIC_API UClass* ::Z_Construct_UClass_ATrafficClientBubbleInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(ATrafficClientBubbleInfo, AMassClientBubbleInfoBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTraffic"), Z_Construct_UClass_ATrafficClientBubbleInfo_NoRegister) \
	DECLARE_SERIALIZER(ATrafficClientBubbleInfo) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TrafficSerializer=NETFIELD_REP_START, \
		NETFIELD_REP_END=TrafficSerializer	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATrafficClientBubbleInfo(ATrafficClientBubbleInfo&&) = delete; \
	ATrafficClientBubbleInfo(const ATrafficClientBubbleInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrafficClientBubbleInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrafficClientBubbleInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrafficClientBubbleInfo) \
	NO_API virtual ~ATrafficClientBubbleInfo();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_76_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_79_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATrafficClientBubbleInfo;

// ********** End Class ATrafficClientBubbleInfo ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTraffic_Public_MassTrafficBubble_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
