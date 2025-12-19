// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VerticalSliceProjectGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVerticalSliceProjectGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_VerticalSliceProject();
VERTICALSLICEPROJECT_API UClass* Z_Construct_UClass_AVerticalSliceProjectGameMode();
VERTICALSLICEPROJECT_API UClass* Z_Construct_UClass_AVerticalSliceProjectGameMode_NoRegister();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AVerticalSliceProjectGameMode ********************************************
void AVerticalSliceProjectGameMode::StaticRegisterNativesAVerticalSliceProjectGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AVerticalSliceProjectGameMode;
UClass* AVerticalSliceProjectGameMode::GetPrivateStaticClass()
{
	using TClass = AVerticalSliceProjectGameMode;
	if (!Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VerticalSliceProjectGameMode"),
			Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.InnerSingleton,
			StaticRegisterNativesAVerticalSliceProjectGameMode,
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
	return Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AVerticalSliceProjectGameMode_NoRegister()
{
	return AVerticalSliceProjectGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VerticalSliceProjectGameMode.h" },
		{ "ModuleRelativePath", "VerticalSliceProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVerticalSliceProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_VerticalSliceProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::ClassParams = {
	&AVerticalSliceProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVerticalSliceProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.OuterSingleton, Z_Construct_UClass_AVerticalSliceProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVerticalSliceProjectGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVerticalSliceProjectGameMode);
AVerticalSliceProjectGameMode::~AVerticalSliceProjectGameMode() {}
// ********** End Class AVerticalSliceProjectGameMode **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_VerticalSliceProject_Source_VerticalSliceProject_VerticalSliceProjectGameMode_h__Script_VerticalSliceProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVerticalSliceProjectGameMode, AVerticalSliceProjectGameMode::StaticClass, TEXT("AVerticalSliceProjectGameMode"), &Z_Registration_Info_UClass_AVerticalSliceProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVerticalSliceProjectGameMode), 2686938342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VerticalSliceProject_Source_VerticalSliceProject_VerticalSliceProjectGameMode_h__Script_VerticalSliceProject_2186990087(TEXT("/Script/VerticalSliceProject"),
	Z_CompiledInDeferFile_FID_VerticalSliceProject_Source_VerticalSliceProject_VerticalSliceProjectGameMode_h__Script_VerticalSliceProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VerticalSliceProject_Source_VerticalSliceProject_VerticalSliceProjectGameMode_h__Script_VerticalSliceProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
