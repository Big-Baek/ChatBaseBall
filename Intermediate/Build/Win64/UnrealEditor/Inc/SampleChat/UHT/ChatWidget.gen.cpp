// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/ChatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChatWidget() {}

// Begin Cross Module References
SAMPLECHAT_API UClass* Z_Construct_UClass_UChatWidget();
SAMPLECHAT_API UClass* Z_Construct_UClass_UChatWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin Class UChatWidget
void UChatWidget::StaticRegisterNativesUChatWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChatWidget);
UClass* Z_Construct_UClass_UChatWidget_NoRegister()
{
	return UChatWidget::StaticClass();
}
struct Z_Construct_UClass_UChatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ChatWidget.h" },
		{ "ModuleRelativePath", "ChatWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UChatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UChatWidget_Statics::ClassParams = {
	&UChatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UChatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UChatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UChatWidget()
{
	if (!Z_Registration_Info_UClass_UChatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChatWidget.OuterSingleton, Z_Construct_UClass_UChatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UChatWidget.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<UChatWidget>()
{
	return UChatWidget::StaticClass();
}
UChatWidget::UChatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UChatWidget);
UChatWidget::~UChatWidget() {}
// End Class UChatWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_ChatWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UChatWidget, UChatWidget::StaticClass, TEXT("UChatWidget"), &Z_Registration_Info_UClass_UChatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChatWidget), 2626909181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_ChatWidget_h_3040621999(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_ChatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_ChatWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
