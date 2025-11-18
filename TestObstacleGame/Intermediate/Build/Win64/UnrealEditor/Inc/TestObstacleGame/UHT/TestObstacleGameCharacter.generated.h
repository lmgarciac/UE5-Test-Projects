// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestObstacleGameCharacter.h"

#ifdef TESTOBSTACLEGAME_TestObstacleGameCharacter_generated_h
#error "TestObstacleGameCharacter.generated.h already included, missing '#pragma once' in TestObstacleGameCharacter.h"
#endif
#define TESTOBSTACLEGAME_TestObstacleGameCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATestObstacleGameCharacter ***********************************************
#define FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_ATestObstacleGameCharacter_Statics;
TESTOBSTACLEGAME_API UClass* Z_Construct_UClass_ATestObstacleGameCharacter_NoRegister();

#define FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestObstacleGameCharacter(); \
	friend struct ::Z_Construct_UClass_ATestObstacleGameCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TESTOBSTACLEGAME_API UClass* ::Z_Construct_UClass_ATestObstacleGameCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ATestObstacleGameCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestObstacleGame"), Z_Construct_UClass_ATestObstacleGameCharacter_NoRegister) \
	DECLARE_SERIALIZER(ATestObstacleGameCharacter)


#define FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATestObstacleGameCharacter(ATestObstacleGameCharacter&&) = delete; \
	ATestObstacleGameCharacter(const ATestObstacleGameCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestObstacleGameCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestObstacleGameCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATestObstacleGameCharacter) \
	NO_API virtual ~ATestObstacleGameCharacter();


#define FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_21_PROLOG
#define FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATestObstacleGameCharacter;

// ********** End Class ATestObstacleGameCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repositories_UnrealEngine_UE5_Test_Projects_TestObstacleGame_Source_TestObstacleGame_TestObstacleGameCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
