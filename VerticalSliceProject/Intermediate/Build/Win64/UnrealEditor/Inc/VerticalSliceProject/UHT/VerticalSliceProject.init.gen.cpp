// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalSliceProject_init() {}
	VERTICALSLICEPROJECT_API UFunction* Z_Construct_UDelegateFunction_VerticalSliceProject_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VerticalSliceProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VerticalSliceProject()
	{
		if (!Z_Registration_Info_UPackage__Script_VerticalSliceProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VerticalSliceProject_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VerticalSliceProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFDFA6DEA,
				0x77377C90,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VerticalSliceProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VerticalSliceProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VerticalSliceProject(Z_Construct_UPackage__Script_VerticalSliceProject, TEXT("/Script/VerticalSliceProject"), Z_Registration_Info_UPackage__Script_VerticalSliceProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFDFA6DEA, 0x77377C90));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
