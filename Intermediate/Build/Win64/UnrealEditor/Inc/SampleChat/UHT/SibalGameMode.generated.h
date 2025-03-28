// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SibalGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStrikeBallResult;
#ifdef SAMPLECHAT_SibalGameMode_generated_h
#error "SibalGameMode.generated.h already included, missing '#pragma once' in SibalGameMode.h"
#endif
#define SAMPLECHAT_SibalGameMode_generated_h

#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStrikeBallResult_Statics; \
	SAMPLECHAT_API static class UScriptStruct* StaticStruct();


template<> SAMPLECHAT_API UScriptStruct* StaticStruct<struct FStrikeBallResult>();

#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execmake_Rand); \
	DECLARE_FUNCTION(execHandleMessageFromClient);


#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASibalGameMode(); \
	friend struct Z_Construct_UClass_ASibalGameMode_Statics; \
public: \
	DECLARE_CLASS(ASibalGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(ASibalGameMode)


#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASibalGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASibalGameMode(ASibalGameMode&&); \
	ASibalGameMode(const ASibalGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASibalGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASibalGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASibalGameMode) \
	NO_API virtual ~ASibalGameMode();


#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_24_PROLOG
#define FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_SibalGameMode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class ASibalGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_SibalGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
