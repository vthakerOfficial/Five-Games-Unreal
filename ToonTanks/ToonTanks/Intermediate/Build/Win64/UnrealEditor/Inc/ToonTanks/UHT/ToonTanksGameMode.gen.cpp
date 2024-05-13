// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTanksGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToonTanksGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode();
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	struct ToonTanksGameMode_eventGameOver_Parms
	{
		bool bHasWon;
	};
	static FName NAME_AToonTanksGameMode_GameOver = FName(TEXT("GameOver"));
	void AToonTanksGameMode::GameOver(bool bHasWon)
	{
		ToonTanksGameMode_eventGameOver_Parms Parms;
		Parms.bHasWon=bHasWon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AToonTanksGameMode_GameOver),&Parms);
	}
	static FName NAME_AToonTanksGameMode_StartGame = FName(TEXT("StartGame"));
	void AToonTanksGameMode::StartGame()
	{
		ProcessEvent(FindFunctionChecked(NAME_AToonTanksGameMode_StartGame),NULL);
	}
	void AToonTanksGameMode::StaticRegisterNativesAToonTanksGameMode()
	{
	}
	struct Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics
	{
		static void NewProp_bHasWon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasWon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bHasWon_SetBit(void* Obj)
	{
		((ToonTanksGameMode_eventGameOver_Parms*)Obj)->bHasWon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bHasWon = { "bHasWon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ToonTanksGameMode_eventGameOver_Parms), &Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bHasWon_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::NewProp_bHasWon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToonTanksGameMode, nullptr, "GameOver", nullptr, nullptr, Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers), sizeof(ToonTanksGameMode_eventGameOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::PropPointers) < 2048);
	static_assert(sizeof(ToonTanksGameMode_eventGameOver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AToonTanksGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToonTanksGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// my stuff\n" },
#endif
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "my stuff" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AToonTanksGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AToonTanksGameMode_StartGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AToonTanksGameMode_StartGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToonTanksGameMode);
	UClass* Z_Construct_UClass_AToonTanksGameMode_NoRegister()
	{
		return AToonTanksGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AToonTanksGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToonTanksGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AToonTanksGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AToonTanksGameMode_GameOver, "GameOver" }, // 659051318
		{ &Z_Construct_UFunction_AToonTanksGameMode_StartGame, "StartGame" }, // 3458917555
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ToonTanksGameMode.h" },
		{ "ModuleRelativePath", "ToonTanksGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToonTanksGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTanksGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams = {
		&AToonTanksGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AToonTanksGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AToonTanksGameMode()
	{
		if (!Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton, Z_Construct_UClass_AToonTanksGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToonTanksGameMode.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<AToonTanksGameMode>()
	{
		return AToonTanksGameMode::StaticClass();
	}
	AToonTanksGameMode::AToonTanksGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTanksGameMode);
	AToonTanksGameMode::~AToonTanksGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToonTanksGameMode, AToonTanksGameMode::StaticClass, TEXT("AToonTanksGameMode"), &Z_Registration_Info_UClass_AToonTanksGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTanksGameMode), 4207809853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_374684571(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_noobk_OneDrive_Documents_Unreal_Projects_ToonTanks_ToonTanks_Source_ToonTanks_ToonTanksGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
