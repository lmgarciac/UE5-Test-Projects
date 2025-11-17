// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroCppCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeIntroCppCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppCameraManager();
INTROCPP_API UClass* Z_Construct_UClass_AIntroCppCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_IntroCpp();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroCppCameraManager ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroCppCameraManager;
UClass* AIntroCppCameraManager::GetPrivateStaticClass()
{
	using TClass = AIntroCppCameraManager;
	if (!Z_Registration_Info_UClass_AIntroCppCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("IntroCppCameraManager"),
			Z_Registration_Info_UClass_AIntroCppCameraManager.InnerSingleton,
			StaticRegisterNativesAIntroCppCameraManager,
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
	return Z_Registration_Info_UClass_AIntroCppCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroCppCameraManager_NoRegister()
{
	return AIntroCppCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroCppCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "IntroCppCameraManager.h" },
		{ "ModuleRelativePath", "IntroCppCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AIntroCppCameraManager constinit property declarations *******************
// ********** End Class AIntroCppCameraManager constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroCppCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AIntroCppCameraManager_Statics
UObject* (*const Z_Construct_UClass_AIntroCppCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_IntroCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroCppCameraManager_Statics::ClassParams = {
	&AIntroCppCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroCppCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroCppCameraManager_Statics::Class_MetaDataParams)
};
void AIntroCppCameraManager::StaticRegisterNativesAIntroCppCameraManager()
{
}
UClass* Z_Construct_UClass_AIntroCppCameraManager()
{
	if (!Z_Registration_Info_UClass_AIntroCppCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroCppCameraManager.OuterSingleton, Z_Construct_UClass_AIntroCppCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroCppCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AIntroCppCameraManager);
AIntroCppCameraManager::~AIntroCppCameraManager() {}
// ********** End Class AIntroCppCameraManager *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_IntroCpp_Source_IntroCpp_IntroCppCameraManager_h__Script_IntroCpp_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroCppCameraManager, AIntroCppCameraManager::StaticClass, TEXT("AIntroCppCameraManager"), &Z_Registration_Info_UClass_AIntroCppCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroCppCameraManager), 1885624398U) },
	};
}; // Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_IntroCpp_Source_IntroCpp_IntroCppCameraManager_h__Script_IntroCpp_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_IntroCpp_Source_IntroCpp_IntroCppCameraManager_h__Script_IntroCpp_2047004716{
	TEXT("/Script/IntroCpp"),
	Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_IntroCpp_Source_IntroCpp_IntroCppCameraManager_h__Script_IntroCpp_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repositories_UnrealEngine_UE5_Test_Projects_IntroCpp_Source_IntroCpp_IntroCppCameraManager_h__Script_IntroCpp_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
