// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassTrafficEditorFunctionLibrary.h"
#include "ZoneGraphTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMassTrafficEditorFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary();
MASSTRAFFICEDITOR_API UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_MassTrafficEditor();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMassTrafficEditorFunctionLibrary Function AddTagToTagMask ***************
struct Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics
{
	struct MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms
	{
		FZoneGraphTagMask TagMask;
		FZoneGraphTag AddTag;
		FZoneGraphTagMask ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mass Traffic|Zone Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a Zone Graph Tag to a Zone Graph Tag Mask. */" },
#endif
		{ "DisplayName", "Add" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorFunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a Zone Graph Tag to a Zone Graph Tag Mask." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddTagToTagMask constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AddTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddTagToTagMask constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddTagToTagMask Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_TagMask = { "TagMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, TagMask), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 1499382966
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag = { "AddTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, AddTag), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddTag_MetaData), NewProp_AddTag_MetaData) }; // 1545925264
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(0, nullptr) }; // 1499382966
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_TagMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_AddTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers) < 2048);
// ********** End Function AddTagToTagMask Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMassTrafficEditorFunctionLibrary, nullptr, "AddTagToTagMask", 	Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::MassTrafficEditorFunctionLibrary_eventAddTagToTagMask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMassTrafficEditorFunctionLibrary::execAddTagToTagMask)
{
	P_GET_STRUCT(FZoneGraphTagMask,Z_Param_TagMask);
	P_GET_STRUCT_REF(FZoneGraphTag,Z_Param_Out_AddTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FZoneGraphTagMask*)Z_Param__Result=UMassTrafficEditorFunctionLibrary::AddTagToTagMask(Z_Param_TagMask,Z_Param_Out_AddTag);
	P_NATIVE_END;
}
// ********** End Class UMassTrafficEditorFunctionLibrary Function AddTagToTagMask *****************

// ********** Begin Class UMassTrafficEditorFunctionLibrary ****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary;
UClass* UMassTrafficEditorFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UMassTrafficEditorFunctionLibrary;
	if (!Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MassTrafficEditorFunctionLibrary"),
			Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUMassTrafficEditorFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_NoRegister()
{
	return UMassTrafficEditorFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MassTrafficEditorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/MassTrafficEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UMassTrafficEditorFunctionLibrary constinit property declarations ********
// ********** End Class UMassTrafficEditorFunctionLibrary constinit property declarations **********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddTagToTagMask"), .Pointer = &UMassTrafficEditorFunctionLibrary::execAddTagToTagMask },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassTrafficEditorFunctionLibrary_AddTagToTagMask, "AddTagToTagMask" }, // 3384759462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassTrafficEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics
UObject* (*const Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MassTrafficEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::ClassParams = {
	&UMassTrafficEditorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
void UMassTrafficEditorFunctionLibrary::StaticRegisterNativesUMassTrafficEditorFunctionLibrary()
{
	UClass* Class = UMassTrafficEditorFunctionLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UMassTrafficEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UMassTrafficEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary.OuterSingleton;
}
UMassTrafficEditorFunctionLibrary::UMassTrafficEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UMassTrafficEditorFunctionLibrary);
UMassTrafficEditorFunctionLibrary::~UMassTrafficEditorFunctionLibrary() {}
// ********** End Class UMassTrafficEditorFunctionLibrary ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h__Script_MassTrafficEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMassTrafficEditorFunctionLibrary, UMassTrafficEditorFunctionLibrary::StaticClass, TEXT("UMassTrafficEditorFunctionLibrary"), &Z_Registration_Info_UClass_UMassTrafficEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassTrafficEditorFunctionLibrary), 3571160318U) },
	};
}; // Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h__Script_MassTrafficEditor_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h__Script_MassTrafficEditor_3819753942{
	TEXT("/Script/MassTrafficEditor"),
	Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h__Script_MassTrafficEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MassTraffic_Test_main_Plugins_Traffic_Source_MassTrafficEditor_Public_MassTrafficEditorFunctionLibrary_h__Script_MassTrafficEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
