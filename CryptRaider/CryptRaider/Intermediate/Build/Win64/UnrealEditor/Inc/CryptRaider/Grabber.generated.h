// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRYPTRAIDER_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define CRYPTRAIDER_Grabber_generated_h

#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_SPARSE_DATA
#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGrab); \
	DECLARE_FUNCTION(execRelease);


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGrab); \
	DECLARE_FUNCTION(execRelease);


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_16_PROLOG
#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_RPC_WRAPPERS \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_INCLASS \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CryptRaider_Source_CryptRaider_Grabber_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_Grabber_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
