// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/RequestStatsAndAchievements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRequestStatsAndAchievements() {}
// Cross Module References
	STATSINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_URequestStatsAndAchievements_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_URequestStatsAndAchievements();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsIntegration_eventResponseRequestStatsAndAchievementsDelegate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput = { "SteamErrorOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StatsIntegration_eventResponseRequestStatsAndAchievementsDelegate_Parms, SteamErrorOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/RequestStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration, nullptr, "ResponseRequestStatsAndAchievementsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StatsIntegration_eventResponseRequestStatsAndAchievementsDelegate_Parms), Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URequestStatsAndAchievements::execRequestUserStatsAndAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URequestStatsAndAchievements**)Z_Param__Result=URequestStatsAndAchievements::RequestUserStatsAndAchievements();
		P_NATIVE_END;
	}
	void URequestStatsAndAchievements::StaticRegisterNativesURequestStatsAndAchievements()
	{
		UClass* Class = URequestStatsAndAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestUserStatsAndAchievements", &URequestStatsAndAchievements::execRequestUserStatsAndAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics
	{
		struct RequestStatsAndAchievements_eventRequestUserStatsAndAchievements_Parms
		{
			URequestStatsAndAchievements* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RequestStatsAndAchievements_eventRequestUserStatsAndAchievements_Parms, ReturnValue), Z_Construct_UClass_URequestStatsAndAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Asynchronously downloads stats and achievements from the server. */" },
		{ "ModuleRelativePath", "Public/RequestStatsAndAchievements.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements from the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URequestStatsAndAchievements, nullptr, "RequestUserStatsAndAchievements", nullptr, nullptr, sizeof(RequestStatsAndAchievements_eventRequestUserStatsAndAchievements_Parms), Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URequestStatsAndAchievements_NoRegister()
	{
		return URequestStatsAndAchievements::StaticClass();
	}
	struct Z_Construct_UClass_URequestStatsAndAchievements_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URequestStatsAndAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URequestStatsAndAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URequestStatsAndAchievements_RequestUserStatsAndAchievements, "RequestUserStatsAndAchievements" }, // 2225880922
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestStatsAndAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "RequestStatsAndAchievements.h" },
		{ "ModuleRelativePath", "Public/RequestStatsAndAchievements.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequestStatsAndAchievements, onSuccess), Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/RequestStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URequestStatsAndAchievements, onFailure), Z_Construct_UDelegateFunction_StatsIntegration_ResponseRequestStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URequestStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URequestStatsAndAchievements_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URequestStatsAndAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URequestStatsAndAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URequestStatsAndAchievements_Statics::ClassParams = {
		&URequestStatsAndAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URequestStatsAndAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URequestStatsAndAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URequestStatsAndAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URequestStatsAndAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URequestStatsAndAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URequestStatsAndAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URequestStatsAndAchievements, 2053041469);
	template<> STATSINTEGRATION_API UClass* StaticClass<URequestStatsAndAchievements>()
	{
		return URequestStatsAndAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URequestStatsAndAchievements(Z_Construct_UClass_URequestStatsAndAchievements, &URequestStatsAndAchievements::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("URequestStatsAndAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URequestStatsAndAchievements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
