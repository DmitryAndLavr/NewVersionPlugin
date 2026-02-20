// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassTrafficEditorBaseActor.h"

#ifdef MASSTRAFFICEDITOR_MassTrafficEditorBaseActor_generated_h
#error "MassTrafficEditorBaseActor.generated.h already included, missing '#pragma once' in MassTrafficEditorBaseActor.h"
#endif
#define MASSTRAFFICEDITOR_MassTrafficEditorBaseActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMassTrafficEditorBaseActor **********************************************
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRefreshEditor);


struct Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics;
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_AMassTrafficEditorBaseActor_NoRegister();

#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMassTrafficEditorBaseActor(); \
	friend struct ::Z_Construct_UClass_AMassTrafficEditorBaseActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MASSTRAFFICEDITOR_API UClass* ::Z_Construct_UClass_AMassTrafficEditorBaseActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMassTrafficEditorBaseActor, AEditorUtilityActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassTrafficEditor"), Z_Construct_UClass_AMassTrafficEditorBaseActor_NoRegister) \
	DECLARE_SERIALIZER(AMassTrafficEditorBaseActor)


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMassTrafficEditorBaseActor(AMassTrafficEditorBaseActor&&) = delete; \
	AMassTrafficEditorBaseActor(const AMassTrafficEditorBaseActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMassTrafficEditorBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMassTrafficEditorBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMassTrafficEditorBaseActor) \
	NO_API virtual ~AMassTrafficEditorBaseActor();


#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_18_PROLOG
#define FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMassTrafficEditorBaseActor;

// ********** End Class AMassTrafficEditorBaseActor ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorBaseActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
