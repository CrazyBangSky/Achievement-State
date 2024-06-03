// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/GetStoredStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetStoredStats() {}
// Cross Module References
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UGetStoredStats_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UGetStoredStats();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UEnum* Z_Construct_UEnum_StatsIntegration_ESteamStatType();
	STATSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamStat();
// End Cross Module References
	DEFINE_FUNCTION(UGetStoredStats::execGetUserStoredStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_APIStatName);
		P_GET_ENUM(ESteamStatType,Z_Param_StatType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_IntegerValue);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_FloatValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGetStoredStats::GetUserStoredStat(Z_Param_APIStatName,ESteamStatType(Z_Param_StatType),Z_Param_Out_IntegerValue,Z_Param_Out_FloatValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetStoredStats::execGetUserStoredStats)
	{
		P_GET_TARRAY(FSteamStat,Z_Param_StatsToGet);
		P_GET_TARRAY_REF(FSteamStat,Z_Param_Out_StatsOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGetStoredStats::GetUserStoredStats(Z_Param_StatsToGet,Z_Param_Out_StatsOut);
		P_NATIVE_END;
	}
	void UGetStoredStats::StaticRegisterNativesUGetStoredStats()
	{
		UClass* Class = UGetStoredStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserStoredStat", &UGetStoredStats::execGetUserStoredStat },
			{ "GetUserStoredStats", &UGetStoredStats::execGetUserStoredStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics
	{
		struct GetStoredStats_eventGetUserStoredStat_Parms
		{
			FString APIStatName;
			ESteamStatType StatType;
			int32 IntegerValue;
			float FloatValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIStatName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_APIStatName = { "APIStatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStat_Parms, APIStatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStat_Parms, StatType), Z_Construct_UEnum_StatsIntegration_ESteamStatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStat_Parms, IntegerValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_APIStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_StatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_StatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_IntegerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::NewProp_FloatValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Gets the current value of the a stat for the specified user. You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetStoredStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user. You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetStoredStats, nullptr, "GetUserStoredStat", nullptr, nullptr, sizeof(GetStoredStats_eventGetUserStoredStat_Parms), Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics
	{
		struct GetStoredStats_eventGetUserStoredStats_Parms
		{
			TArray<FSteamStat> StatsToGet;
			TArray<FSteamStat> StatsOut;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsToGet_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatsToGet;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsOut_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatsOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsToGet_Inner = { "StatsToGet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsToGet = { "StatsToGet", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStats_Parms, StatsToGet), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsOut_Inner = { "StatsOut", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsOut = { "StatsOut", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetStoredStats_eventGetUserStoredStats_Parms, StatsOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsToGet_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsToGet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsOut_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::NewProp_StatsOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Gets the current value of the a stat for the specified user. You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetStoredStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user. You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetStoredStats, nullptr, "GetUserStoredStats", nullptr, nullptr, sizeof(GetStoredStats_eventGetUserStoredStats_Parms), Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetStoredStats_NoRegister()
	{
		return UGetStoredStats::StaticClass();
	}
	struct Z_Construct_UClass_UGetStoredStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetStoredStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetStoredStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetStoredStats_GetUserStoredStat, "GetUserStoredStat" }, // 3695809492
		{ &Z_Construct_UFunction_UGetStoredStats_GetUserStoredStats, "GetUserStoredStats" }, // 726350733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetStoredStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "GetStoredStats.h" },
		{ "ModuleRelativePath", "Public/GetStoredStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetStoredStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetStoredStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetStoredStats_Statics::ClassParams = {
		&UGetStoredStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetStoredStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetStoredStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetStoredStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetStoredStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetStoredStats, 4115624431);
	template<> STATSINTEGRATION_API UClass* StaticClass<UGetStoredStats>()
	{
		return UGetStoredStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetStoredStats(Z_Construct_UClass_UGetStoredStats, &UGetStoredStats::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("UGetStoredStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetStoredStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
