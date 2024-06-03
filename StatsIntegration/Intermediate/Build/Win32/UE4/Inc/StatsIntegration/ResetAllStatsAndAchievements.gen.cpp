// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/ResetAllStatsAndAchievements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResetAllStatsAndAchievements() {}
// Cross Module References
	STATSINTEGRATION_API UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UResetAllStatsAndAchievements_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UResetAllStatsAndAchievements();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics
	{
		struct _Script_StatsIntegration_eventResponseResetStatsAndAchievementsDelegate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput = { "SteamErrorOutput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_StatsIntegration_eventResponseResetStatsAndAchievementsDelegate_Parms, SteamErrorOutput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::NewProp_SteamErrorOutput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration, nullptr, "ResponseResetStatsAndAchievementsDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_StatsIntegration_eventResponseResetStatsAndAchievementsDelegate_Parms), Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UResetAllStatsAndAchievements::execResetUserStatsAndAchievements)
	{
		P_GET_UBOOL(Z_Param_bAchievementsToo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UResetAllStatsAndAchievements**)Z_Param__Result=UResetAllStatsAndAchievements::ResetUserStatsAndAchievements(Z_Param_bAchievementsToo);
		P_NATIVE_END;
	}
	void UResetAllStatsAndAchievements::StaticRegisterNativesUResetAllStatsAndAchievements()
	{
		UClass* Class = UResetAllStatsAndAchievements::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetUserStatsAndAchievements", &UResetAllStatsAndAchievements::execResetUserStatsAndAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics
	{
		struct ResetAllStatsAndAchievements_eventResetUserStatsAndAchievements_Parms
		{
			bool bAchievementsToo;
			UResetAllStatsAndAchievements* ReturnValue;
		};
		static void NewProp_bAchievementsToo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
	{
		((ResetAllStatsAndAchievements_eventResetUserStatsAndAchievements_Parms*)Obj)->bAchievementsToo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ResetAllStatsAndAchievements_eventResetUserStatsAndAchievements_Parms), &Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ResetAllStatsAndAchievements_eventResetUserStatsAndAchievements_Parms, ReturnValue), Z_Construct_UClass_UResetAllStatsAndAchievements_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_bAchievementsToo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Reset achievements too? */" },
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
		{ "ToolTip", "Reset achievements too?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UResetAllStatsAndAchievements, nullptr, "ResetUserStatsAndAchievements", nullptr, nullptr, sizeof(ResetAllStatsAndAchievements_eventResetUserStatsAndAchievements_Parms), Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UResetAllStatsAndAchievements_NoRegister()
	{
		return UResetAllStatsAndAchievements::StaticClass();
	}
	struct Z_Construct_UClass_UResetAllStatsAndAchievements_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bresetAchievementsToo_MetaData[];
#endif
		static void NewProp_bresetAchievementsToo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bresetAchievementsToo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UResetAllStatsAndAchievements_ResetUserStatsAndAchievements, "ResetUserStatsAndAchievements" }, // 2056395929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "ResetAllStatsAndAchievements.h" },
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onSuccess = { "onSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetAllStatsAndAchievements, onSuccess), Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onFailure = { "onFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResetAllStatsAndAchievements, onFailure), Z_Construct_UDelegateFunction_StatsIntegration_ResponseResetStatsAndAchievementsDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ResetAllStatsAndAchievements.h" },
	};
#endif
	void Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo_SetBit(void* Obj)
	{
		((UResetAllStatsAndAchievements*)Obj)->bresetAchievementsToo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo = { "bresetAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UResetAllStatsAndAchievements), &Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_onFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::NewProp_bresetAchievementsToo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResetAllStatsAndAchievements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::ClassParams = {
		&UResetAllStatsAndAchievements::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResetAllStatsAndAchievements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResetAllStatsAndAchievements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResetAllStatsAndAchievements, 4119484676);
	template<> STATSINTEGRATION_API UClass* StaticClass<UResetAllStatsAndAchievements>()
	{
		return UResetAllStatsAndAchievements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResetAllStatsAndAchievements(Z_Construct_UClass_UResetAllStatsAndAchievements, &UResetAllStatsAndAchievements::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("UResetAllStatsAndAchievements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResetAllStatsAndAchievements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
