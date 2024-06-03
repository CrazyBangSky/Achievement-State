// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/IndicateAchievementProgress.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndicateAchievementProgress() {}
// Cross Module References
	STATSINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UIndicateAchievementProgress_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UIndicateAchievementProgress();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsIntegration_eventResponseIndicateAchievementProgressDelegate_Parms
		{
			int32 SteamErrorOutput;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SteamErrorOutput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput = { "SteamErrorOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StatsIntegration_eventResponseIndicateAchievementProgressDelegate_Parms, SteamErrorOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration, nullptr, "ResponseIndicateAchievementProgressDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StatsIntegration_eventResponseIndicateAchievementProgressDelegate_Parms), Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UIndicateAchievementProgress::execIndicateUserAchievementProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIndicateAchievementProgress**)Z_Param__Result=UIndicateAchievementProgress::IndicateUserAchievementProgress(Z_Param_AchievementAPIName,Z_Param_CurrentProgress,Z_Param_MaxProgress);
		P_NATIVE_END;
	}
	void UIndicateAchievementProgress::StaticRegisterNativesUIndicateAchievementProgress()
	{
		UClass* Class = UIndicateAchievementProgress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IndicateUserAchievementProgress", &UIndicateAchievementProgress::execIndicateUserAchievementProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics
	{
		struct IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms
		{
			FString AchievementAPIName;
			int32 CurrentProgress;
			int32 MaxProgress;
			UIndicateAchievementProgress* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms, CurrentProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms, ReturnValue), Z_Construct_UClass_UIndicateAchievementProgress_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_CurrentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_MaxProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Shows the user a pop-up notification with the current progress of an achievement. Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling Set Stat / Set Achievement! */" },
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
		{ "ToolTip", "Shows the user a pop-up notification with the current progress of an achievement. Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling Set Stat / Set Achievement!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIndicateAchievementProgress, nullptr, "IndicateUserAchievementProgress", nullptr, nullptr, sizeof(IndicateAchievementProgress_eventIndicateUserAchievementProgress_Parms), Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIndicateAchievementProgress_NoRegister()
	{
		return UIndicateAchievementProgress::StaticClass();
	}
	struct Z_Construct_UClass_UIndicateAchievementProgress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_onFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_achievementAPIName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_achievementAPIName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndicateAchievementProgress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIndicateAchievementProgress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIndicateAchievementProgress_IndicateUserAchievementProgress, "IndicateUserAchievementProgress" }, // 2568625055
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "IndicateAchievementProgress.h" },
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndicateAchievementProgress, onSuccess), Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndicateAchievementProgress, onFailure), Z_Construct_UDelegateFunction_StatsIntegration_ResponseIndicateAchievementProgressDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_achievementAPIName_MetaData[] = {
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_achievementAPIName = { "achievementAPIName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndicateAchievementProgress, achievementAPIName), METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_achievementAPIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_achievementAPIName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_currentProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_currentProgress = { "currentProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndicateAchievementProgress, currentProgress), METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_currentProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_currentProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_maxProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/IndicateAchievementProgress.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_maxProgress = { "maxProgress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndicateAchievementProgress, maxProgress), METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_maxProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_maxProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndicateAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_achievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_currentProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndicateAchievementProgress_Statics::NewProp_maxProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndicateAchievementProgress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndicateAchievementProgress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIndicateAchievementProgress_Statics::ClassParams = {
		&UIndicateAchievementProgress::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIndicateAchievementProgress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndicateAchievementProgress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndicateAchievementProgress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndicateAchievementProgress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIndicateAchievementProgress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIndicateAchievementProgress, 982252764);
	template<> STATSINTEGRATION_API UClass* StaticClass<UIndicateAchievementProgress>()
	{
		return UIndicateAchievementProgress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIndicateAchievementProgress(Z_Construct_UClass_UIndicateAchievementProgress, &UIndicateAchievementProgress::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("UIndicateAchievementProgress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndicateAchievementProgress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
