// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/StoreStatsAndAchievements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreStatsAndAchievements() {}
// Cross Module References
	STATSINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UStoreStatsAndAchievements_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UStoreStatsAndAchievements();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsIntegration_eventResponseStoreStatsAndAchievementsDelegate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput = { "SteamErrorOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StatsIntegration_eventResponseStoreStatsAndAchievementsDelegate_Parms, SteamErrorOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/StoreStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration, nullptr, "ResponseStoreStatsAndAchievementsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StatsIntegration_eventResponseStoreStatsAndAchievementsDelegate_Parms), Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UStoreStatsAndAchievements::execStoreUserStatsAndAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStoreStatsAndAchievements**)Z_Param__Result=UStoreStatsAndAchievements::StoreUserStatsAndAchievements();
		P_NATIVE_END;
	}
	void UStoreStatsAndAchievements::StaticRegisterNativesUStoreStatsAndAchievements()
	{
		UClass* Class = UStoreStatsAndAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StoreUserStatsAndAchievements", &UStoreStatsAndAchievements::execStoreUserStatsAndAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics
	{
		struct StoreStatsAndAchievements_eventStoreUserStatsAndAchievements_Parms
		{
			UStoreStatsAndAchievements* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoreStatsAndAchievements_eventStoreUserStatsAndAchievements_Parms, ReturnValue), Z_Construct_UClass_UStoreStatsAndAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Asynchronously uploads stats and achievements to the server. */" },
		{ "ModuleRelativePath", "Public/StoreStatsAndAchievements.h" },
		{ "ToolTip", "Asynchronously uploads stats and achievements to the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoreStatsAndAchievements, nullptr, "StoreUserStatsAndAchievements", nullptr, nullptr, sizeof(StoreStatsAndAchievements_eventStoreUserStatsAndAchievements_Parms), Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStoreStatsAndAchievements_NoRegister()
	{
		return UStoreStatsAndAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UStoreStatsAndAchievements_Statics
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
	UObject* (*const Z_Construct_UClass_UStoreStatsAndAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoreStatsAndAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoreStatsAndAchievements_StoreUserStatsAndAchievements, "StoreUserStatsAndAchievements" }, // 1491810805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreStatsAndAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "StoreStatsAndAchievements.h" },
		{ "ModuleRelativePath", "Public/StoreStatsAndAchievements.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreStatsAndAchievements, onSuccess), Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStoreStatsAndAchievements, onFailure), Z_Construct_UDelegateFunction_StatsIntegration_ResponseStoreStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onFailure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoreStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoreStatsAndAchievements_Statics::NewProp_onFailure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoreStatsAndAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoreStatsAndAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStoreStatsAndAchievements_Statics::ClassParams = {
		&UStoreStatsAndAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStoreStatsAndAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoreStatsAndAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoreStatsAndAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStoreStatsAndAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStoreStatsAndAchievements, 547025121);
	template<> STATSINTEGRATION_API UClass* StaticClass<UStoreStatsAndAchievements>()
	{
		return UStoreStatsAndAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStoreStatsAndAchievements(Z_Construct_UClass_UStoreStatsAndAchievements, &UStoreStatsAndAchievements::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("UStoreStatsAndAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoreStatsAndAchievements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
