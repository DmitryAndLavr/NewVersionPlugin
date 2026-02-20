// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassTraffic_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	MASSTRAFFIC_API UFunction* Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MassTraffic;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MassTraffic()
	{
		if (!Z_Registration_Info_UPackage__Script_MassTraffic.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_MassTraffic_ToggleMotorDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/MassTraffic",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x26721594,
			0x6AC13B0C,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MassTraffic.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_MassTraffic.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MassTraffic(Z_Construct_UPackage__Script_MassTraffic, TEXT("/Script/MassTraffic"), Z_Registration_Info_UPackage__Script_MassTraffic, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x26721594, 0x6AC13B0C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
