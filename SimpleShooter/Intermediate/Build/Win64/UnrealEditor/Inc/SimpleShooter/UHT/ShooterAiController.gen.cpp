// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleShooter/ShooterAiController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAiController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAiController();
	SIMPLESHOOTER_API UClass* Z_Construct_UClass_AShooterAiController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleShooter();
// End Cross Module References
	void AShooterAiController::StaticRegisterNativesAShooterAiController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterAiController);
	UClass* Z_Construct_UClass_AShooterAiController_NoRegister()
	{
		return AShooterAiController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterAiController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterAiController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleShooter,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAiController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAiController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterAiController.h" },
		{ "ModuleRelativePath", "ShooterAiController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterAiController_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "ShooterAiController" },
		{ "ModuleRelativePath", "ShooterAiController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterAiController_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShooterAiController, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAiController_Statics::NewProp_AIBehavior_MetaData), Z_Construct_UClass_AShooterAiController_Statics::NewProp_AIBehavior_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterAiController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterAiController_Statics::NewProp_AIBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterAiController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterAiController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterAiController_Statics::ClassParams = {
		&AShooterAiController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShooterAiController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAiController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAiController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterAiController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterAiController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShooterAiController()
	{
		if (!Z_Registration_Info_UClass_AShooterAiController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterAiController.OuterSingleton, Z_Construct_UClass_AShooterAiController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterAiController.OuterSingleton;
	}
	template<> SIMPLESHOOTER_API UClass* StaticClass<AShooterAiController>()
	{
		return AShooterAiController::StaticClass();
	}
	AShooterAiController::AShooterAiController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterAiController);
	AShooterAiController::~AShooterAiController() {}
	struct Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_SimpleShooter_Source_SimpleShooter_ShooterAiController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_SimpleShooter_Source_SimpleShooter_ShooterAiController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterAiController, AShooterAiController::StaticClass, TEXT("AShooterAiController"), &Z_Registration_Info_UClass_AShooterAiController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterAiController), 2092123153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_SimpleShooter_Source_SimpleShooter_ShooterAiController_h_2993449863(TEXT("/Script/SimpleShooter"),
		Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_SimpleShooter_Source_SimpleShooter_ShooterAiController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_SimpleShooter_Source_SimpleShooter_ShooterAiController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
