// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestObstacleGame_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	TESTOBSTACLEGAME_API UFunction* Z_Construct_UDelegateFunction_TestObstacleGame_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestObstacleGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestObstacleGame()
	{
		if (!Z_Registration_Info_UPackage__Script_TestObstacleGame.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_TestObstacleGame_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TestObstacleGame",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xCB994312,
			0x8773DB41,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestObstacleGame.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TestObstacleGame.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestObstacleGame(Z_Construct_UPackage__Script_TestObstacleGame, TEXT("/Script/TestObstacleGame"), Z_Registration_Info_UPackage__Script_TestObstacleGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCB994312, 0x8773DB41));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
