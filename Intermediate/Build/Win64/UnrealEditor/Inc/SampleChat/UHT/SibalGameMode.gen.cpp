// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SampleChat/SibalGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSibalGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
SAMPLECHAT_API UClass* Z_Construct_UClass_ASibalGameMode();
SAMPLECHAT_API UClass* Z_Construct_UClass_ASibalGameMode_NoRegister();
SAMPLECHAT_API UScriptStruct* Z_Construct_UScriptStruct_FStrikeBallResult();
UPackage* Z_Construct_UPackage__Script_SampleChat();
// End Cross Module References

// Begin ScriptStruct FStrikeBallResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StrikeBallResult;
class UScriptStruct* FStrikeBallResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StrikeBallResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StrikeBallResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStrikeBallResult, (UObject*)Z_Construct_UPackage__Script_SampleChat(), TEXT("StrikeBallResult"));
	}
	return Z_Registration_Info_UScriptStruct_StrikeBallResult.OuterSingleton;
}
template<> SAMPLECHAT_API UScriptStruct* StaticStruct<FStrikeBallResult>()
{
	return FStrikeBallResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStrikeBallResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SibalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strike_MetaData[] = {
		{ "Category", "StrikeBallResult" },
		{ "ModuleRelativePath", "SibalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[] = {
		{ "Category", "StrikeBallResult" },
		{ "ModuleRelativePath", "SibalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Master_Num_MetaData[] = {
		{ "Category", "StrikeBallResult" },
		{ "ModuleRelativePath", "SibalGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strike;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ball;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Master_Num;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStrikeBallResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Strike = { "Strike", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStrikeBallResult, Strike), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strike_MetaData), NewProp_Strike_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStrikeBallResult, Ball), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ball_MetaData), NewProp_Ball_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Master_Num = { "Master_Num", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStrikeBallResult, Master_Num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Master_Num_MetaData), NewProp_Master_Num_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStrikeBallResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Strike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Ball,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewProp_Master_Num,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrikeBallResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStrikeBallResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
	nullptr,
	&NewStructOps,
	"StrikeBallResult",
	Z_Construct_UScriptStruct_FStrikeBallResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrikeBallResult_Statics::PropPointers),
	sizeof(FStrikeBallResult),
	alignof(FStrikeBallResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStrikeBallResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStrikeBallResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStrikeBallResult()
{
	if (!Z_Registration_Info_UScriptStruct_StrikeBallResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StrikeBallResult.InnerSingleton, Z_Construct_UScriptStruct_FStrikeBallResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StrikeBallResult.InnerSingleton;
}
// End ScriptStruct FStrikeBallResult

// Begin Class ASibalGameMode Function HandleMessageFromClient
struct Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics
{
	struct SibalGameMode_eventHandleMessageFromClient_Parms
	{
		FString Message;
		FString Master_Num;
		FStrikeBallResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SibalGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Master_Num_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Master_Num;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SibalGameMode_eventHandleMessageFromClient_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_Master_Num = { "Master_Num", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SibalGameMode_eventHandleMessageFromClient_Parms, Master_Num), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Master_Num_MetaData), NewProp_Master_Num_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SibalGameMode_eventHandleMessageFromClient_Parms, ReturnValue), Z_Construct_UScriptStruct_FStrikeBallResult, METADATA_PARAMS(0, nullptr) }; // 3696725148
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_Master_Num,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASibalGameMode, nullptr, "HandleMessageFromClient", nullptr, nullptr, Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::SibalGameMode_eventHandleMessageFromClient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::SibalGameMode_eventHandleMessageFromClient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASibalGameMode::execHandleMessageFromClient)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_Master_Num);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FStrikeBallResult*)Z_Param__Result=P_THIS->HandleMessageFromClient(Z_Param_Message,Z_Param_Master_Num);
	P_NATIVE_END;
}
// End Class ASibalGameMode Function HandleMessageFromClient

// Begin Class ASibalGameMode Function make_Rand
struct Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics
{
	struct SibalGameMode_eventmake_Rand_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "SibalGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SibalGameMode_eventmake_Rand_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASibalGameMode, nullptr, "make_Rand", nullptr, nullptr, Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::SibalGameMode_eventmake_Rand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::SibalGameMode_eventmake_Rand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASibalGameMode_make_Rand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASibalGameMode_make_Rand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASibalGameMode::execmake_Rand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->make_Rand();
	P_NATIVE_END;
}
// End Class ASibalGameMode Function make_Rand

// Begin Class ASibalGameMode
void ASibalGameMode::StaticRegisterNativesASibalGameMode()
{
	UClass* Class = ASibalGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleMessageFromClient", &ASibalGameMode::execHandleMessageFromClient },
		{ "make_Rand", &ASibalGameMode::execmake_Rand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASibalGameMode);
UClass* Z_Construct_UClass_ASibalGameMode_NoRegister()
{
	return ASibalGameMode::StaticClass();
}
struct Z_Construct_UClass_ASibalGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SibalGameMode.h" },
		{ "ModuleRelativePath", "SibalGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASibalGameMode_HandleMessageFromClient, "HandleMessageFromClient" }, // 3158662590
		{ &Z_Construct_UFunction_ASibalGameMode_make_Rand, "make_Rand" }, // 1276898647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASibalGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASibalGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SampleChat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASibalGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASibalGameMode_Statics::ClassParams = {
	&ASibalGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASibalGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASibalGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASibalGameMode()
{
	if (!Z_Registration_Info_UClass_ASibalGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASibalGameMode.OuterSingleton, Z_Construct_UClass_ASibalGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASibalGameMode.OuterSingleton;
}
template<> SAMPLECHAT_API UClass* StaticClass<ASibalGameMode>()
{
	return ASibalGameMode::StaticClass();
}
ASibalGameMode::ASibalGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASibalGameMode);
ASibalGameMode::~ASibalGameMode() {}
// End Class ASibalGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FStrikeBallResult::StaticStruct, Z_Construct_UScriptStruct_FStrikeBallResult_Statics::NewStructOps, TEXT("StrikeBallResult"), &Z_Registration_Info_UScriptStruct_StrikeBallResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStrikeBallResult), 3696725148U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASibalGameMode, ASibalGameMode::StaticClass, TEXT("ASibalGameMode"), &Z_Registration_Info_UClass_ASibalGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASibalGameMode), 4235981715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_3307705011(TEXT("/Script/SampleChat"),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SampleChat_Source_SampleChat_SibalGameMode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
