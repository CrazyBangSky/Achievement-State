// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/SetStoredStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetStoredStats() {}
// Cross Module References
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USetStoredStats_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USetStoredStats();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UEnum* Z_Construct_UEnum_StatsIntegration_ESteamStatType();
	STATSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamStat();
// End Cross Module References
	DEFINE_FUNCTION(USetStoredStats::execSetStoredStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_APIStatName);
		P_GET_ENUM(ESteamStatType,Z_Param_StatType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_IntegerValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USetStoredStats::SetStoredStat(Z_Param_APIStatName,ESteamStatType(Z_Param_StatType),Z_Param_FloatValue,Z_Param_IntegerValue,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetStoredStats::execSetStoredStats)
	{
		P_GET_TARRAY(FSteamStat,Z_Param_SteamStatsIn);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USetStoredStats::SetStoredStats(Z_Param_SteamStatsIn,Z_Param_SessionLength);
		P_NATIVE_END;
	}
	void USetStoredStats::StaticRegisterNativesUSetStoredStats()
	{
		UClass* Class = USetStoredStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStoredStat", &USetStoredStats::execSetStoredStat },
			{ "SetStoredStats", &USetStoredStats::execSetStoredStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics
	{
		struct SetStoredStats_eventSetStoredStat_Parms
		{
			FString APIStatName;
			ESteamStatType StatType;
			float FloatValue;
			int32 IntegerValue;
			float SessionLength;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIStatName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_APIStatName = { "APIStatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStat_Parms, APIStatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStat_Parms, StatType), Z_Construct_UEnum_StatsIntegration_ESteamStatType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStat_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStat_Parms, IntegerValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStat_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SetStoredStats_eventSetStoredStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetStoredStats_eventSetStoredStat_Parms), &Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_APIStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_StatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_StatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_IntegerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_SessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown. To submit the stats to the server you must call 'StoreUserStatsAndAchievements'. 'SessionLength' (seconds since last call to the set stat function) variable only required to calculate averages. */" },
		{ "ModuleRelativePath", "Public/SetStoredStats.h" },
		{ "ToolTip", "This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown. To submit the stats to the server you must call 'StoreUserStatsAndAchievements'. 'SessionLength' (seconds since last call to the set stat function) variable only required to calculate averages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetStoredStats, nullptr, "SetStoredStat", nullptr, nullptr, sizeof(SetStoredStats_eventSetStoredStat_Parms), Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetStoredStats_SetStoredStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetStoredStats_SetStoredStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics
	{
		struct SetStoredStats_eventSetStoredStats_Parms
		{
			TArray<FSteamStat> SteamStatsIn;
			float SessionLength;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamStatsIn_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SteamStatsIn;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SteamStatsIn_Inner = { "SteamStatsIn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SteamStatsIn = { "SteamStatsIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStats_Parms, SteamStatsIn), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetStoredStats_eventSetStoredStats_Parms, SessionLength), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SetStoredStats_eventSetStoredStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetStoredStats_eventSetStoredStats_Parms), &Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SteamStatsIn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SteamStatsIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_SessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown. To submit the stats to the server you must call 'StoreUserStatsAndAchievements'. 'SessionLength' (seconds since last call to the set stat function) variable only required to calculate averages. */" },
		{ "ModuleRelativePath", "Public/SetStoredStats.h" },
		{ "ToolTip", "This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown. To submit the stats to the server you must call 'StoreUserStatsAndAchievements'. 'SessionLength' (seconds since last call to the set stat function) variable only required to calculate averages." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetStoredStats, nullptr, "SetStoredStats", nullptr, nullptr, sizeof(SetStoredStats_eventSetStoredStats_Parms), Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetStoredStats_SetStoredStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetStoredStats_SetStoredStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USetStoredStats_NoRegister()
	{
		return USetStoredStats::StaticClass();
	}
	struct Z_Construct_UClass_USetStoredStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetStoredStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetStoredStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetStoredStats_SetStoredStat, "SetStoredStat" }, // 2632093532
		{ &Z_Construct_UFunction_USetStoredStats_SetStoredStats, "SetStoredStats" }, // 532447756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetStoredStats_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "SetStoredStats.h" },
		{ "ModuleRelativePath", "Public/SetStoredStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetStoredStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetStoredStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetStoredStats_Statics::ClassParams = {
		&USetStoredStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USetStoredStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetStoredStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetStoredStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetStoredStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetStoredStats, 2769141219);
	template<> STATSINTEGRATION_API UClass* StaticClass<USetStoredStats>()
	{
		return USetStoredStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetStoredStats(Z_Construct_UClass_USetStoredStats, &USetStoredStats::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("USetStoredStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetStoredStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
