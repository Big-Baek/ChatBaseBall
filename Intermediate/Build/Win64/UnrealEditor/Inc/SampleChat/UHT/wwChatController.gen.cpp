// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/wwChatController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodewwChatController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SAMPLECHAT_API UClass* Z_Construct_UClass_AwwChatController();
SAMPLECHAT_API UClass* Z_Construct_UClass_AwwChatController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class AwwChatController
void AwwChatController::StaticRegisterNativesAwwChatController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AwwChatController);
UClass* Z_Construct_UClass_AwwChatController_NoRegister()
{
	return AwwChatController::StaticClass();
}
struct Z_Construct_UClass_AwwChatController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "wwChatController.h" },
		{ "ModuleRelativePath", "wwChatController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AwwChatController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AwwChatController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AwwChatController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AwwChatController_Statics::ClassParams = {
	&AwwChatController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AwwChatController_Statics::Class_MetaDataParams), Z_Construct_UClass_AwwChatController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AwwChatController()
{
	if (!Z_Registration_Info_UClass_AwwChatController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AwwChatController.OuterSingleton, Z_Construct_UClass_AwwChatController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AwwChatController.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<AwwChatController>()
{
	return AwwChatController::StaticClass();
}
AwwChatController::AwwChatController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AwwChatController);
AwwChatController::~AwwChatController() {}
// End Class AwwChatController

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_wwChatController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AwwChatController, AwwChatController::StaticClass, TEXT("AwwChatController"), &Z_Registration_Info_UClass_AwwChatController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AwwChatController), 2516535777U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_wwChatController_h_1784420003(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_wwChatController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_wwChatController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
