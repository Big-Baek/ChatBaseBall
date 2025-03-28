// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "wwChatController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SAMPLECHAT_wwChatController_generated_h
#error "wwChatController.generated.h already included, missing '#pragma once' in wwChatController.h"
#endif
#define SAMPLECHAT_wwChatController_generated_h

#define FID_SampleChat_Source_SampleChat_wwChatController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAwwChatController(); \
	friend struct Z_Construct_UClass_AwwChatController_Statics; \
public: \
	DECLARE_CLASS(AwwChatController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SampleChat"), NO_API) \
	DECLARE_SERIALIZER(AwwChatController)


#define FID_SampleChat_Source_SampleChat_wwChatController_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AwwChatController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AwwChatController(AwwChatController&&); \
	AwwChatController(const AwwChatController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AwwChatController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AwwChatController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AwwChatController) \
	NO_API virtual ~AwwChatController();


#define FID_SampleChat_Source_SampleChat_wwChatController_h_7_PROLOG
#define FID_SampleChat_Source_SampleChat_wwChatController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SampleChat_Source_SampleChat_wwChatController_h_10_INCLASS_NO_PURE_DECLS \
	FID_SampleChat_Source_SampleChat_wwChatController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SAMPLECHAT_API UClass* StaticClass<class AwwChatController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SampleChat_Source_SampleChat_wwChatController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
