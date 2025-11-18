// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestObstacleGameGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTestObstacleGameGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TESTOBSTACLEGAME_API UClass* Z_Construct_UClass_ATestObstacleGameGameMode();
TESTOBSTACLEGAME_API UClass* Z_Construct_UClass_ATestObstacleGameGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestObstacleGame();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATestObstacleGameGameMode ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATestObstacleGameGameMode;
UClass* ATestObstacleGameGameMode::GetPrivateStaticClass()
{
	using TClass = ATestObstacleGameGameMode;
	if (!Z_Registration_Info_UClass_ATestObstacleGameGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TestObstacleGameGameMode"),
			Z_Registration_Info_UClass_ATestObstacleGameGameMode.InnerSingleton,
			StaticRegisterNativesATestObstacleGameGameMode,
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
	return Z_Registration_Info_UClass_ATestObstacleGameGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATestObstacleGameGameMode_NoRegister()
{
	return ATestObstacleGameGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATestObstacleGameGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TestObstacleGameGameMode.h" },
		{ "ModuleRelativePath", "TestObstacleGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ATestObstacleGameGameMode constinit property declarations ****************
// ********** End Class ATestObstacleGameGameMode constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestObstacleGameGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATestObstacleGameGameMode_Statics
UObject* (*const Z_Construct_UClass_ATestObstacleGameGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TestObstacleGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestObstacleGameGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestObstacleGameGameMode_Statics::ClassParams = {
	&ATestObstacleGameGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestObstacleGameGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestObstacleGameGameMode_Statics::Class_MetaDataParams)
};
void ATestObstacleGameGameMode::StaticRegisterNativesATestObstacleGameGameMode()
{
}
UClass* Z_Construct_UClass_ATestObstacleGameGameMode()
{
	if (!Z_Registration_Info_UClass_ATestObstacleGameGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestObstacleGameGameMode.OuterSingleton, Z_Construct_UClass_ATestObstacleGameGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATestObstacleGameGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATestObstacleGameGameMode);
ATestObstacleGameGameMode::~ATestObstacleGameGameMode() {}
// ********** End Class ATestObstacleGameGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameGameMode_h__Script_TestObstacleGame_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATestObstacleGameGameMode, ATestObstacleGameGameMode::StaticClass, TEXT("ATestObstacleGameGameMode"), &Z_Registration_Info_UClass_ATestObstacleGameGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestObstacleGameGameMode), 3564664596U) },
	};
}; // Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameGameMode_h__Script_TestObstacleGame_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameGameMode_h__Script_TestObstacleGame_1556557119{
	TEXT("/Script/TestObstacleGame"),
	Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameGameMode_h__Script_TestObstacleGame_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameGameMode_h__Script_TestObstacleGame_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
