// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/SteamRequests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamRequests() {}
// Cross Module References
	STATSINTEGRATION_API UEnum* Z_Construct_UEnum_StatsIntegration_ESteamStatType();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UScriptStruct* Z_Construct_UScriptStruct_FSteamStat();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USteamRequests_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USteamRequests();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESteamStatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsIntegration_ESteamStatType, Z_Construct_UPackage__Script_StatsIntegration(), TEXT("ESteamStatType"));
		}
		return Singleton;
	}
	template<> STATSINTEGRATION_API UEnum* StaticEnum<ESteamStatType>()
	{
		return ESteamStatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamStatType(ESteamStatType_StaticEnum, TEXT("/Script/StatsIntegration"), TEXT("ESteamStatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsIntegration_ESteamStatType_Hash() { return 1894008667U; }
	UEnum* Z_Construct_UEnum_StatsIntegration_ESteamStatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsIntegration();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamStatType"), 0, Get_Z_Construct_UEnum_StatsIntegration_ESteamStatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamStatType::STAT_INT", (int64)ESteamStatType::STAT_INT },
				{ "ESteamStatType::STAT_FLOAT", (int64)ESteamStatType::STAT_FLOAT },
				{ "ESteamStatType::STAT_AVGRATE", (int64)ESteamStatType::STAT_AVGRATE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "Simple Steam Stats & Achievements" },
				{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "ModuleRelativePath", "Public/SteamRequests.h" },
				{ "STAT_AVGRATE.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "STAT_AVGRATE.DisplayName", "Average" },
				{ "STAT_AVGRATE.Name", "ESteamStatType::STAT_AVGRATE" },
				{ "STAT_FLOAT.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "STAT_FLOAT.DisplayName", "Float" },
				{ "STAT_FLOAT.Name", "ESteamStatType::STAT_FLOAT" },
				{ "STAT_INT.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "STAT_INT.DisplayName", "Integer" },
				{ "STAT_INT.Name", "ESteamStatType::STAT_INT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration,
				nullptr,
				"ESteamStatType",
				"ESteamStatType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSteamStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSINTEGRATION_API uint32 Get_Z_Construct_UScriptStruct_FSteamStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamStat, Z_Construct_UPackage__Script_StatsIntegration(), TEXT("SteamStat"), sizeof(FSteamStat), Get_Z_Construct_UScriptStruct_FSteamStat_Hash());
	}
	return Singleton;
}
template<> STATSINTEGRATION_API UScriptStruct* StaticStruct<FSteamStat>()
{
	return FSteamStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamStat(FSteamStat::StaticStruct, TEXT("/Script/StatsIntegration"), TEXT("SteamStat"), false, nullptr, nullptr);
static struct FScriptStruct_StatsIntegration_StaticRegisterNativesFSteamStat
{
	FScriptStruct_StatsIntegration_StaticRegisterNativesFSteamStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamStat")),new UScriptStruct::TCppStructOps<FSteamStat>);
	}
} ScriptStruct_StatsIntegration_StaticRegisterNativesFSteamStat;
	struct Z_Construct_UScriptStruct_FSteamStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyStatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyStatName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_APIStatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_APIStatName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FriendlyStatName_MetaData[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FriendlyStatName = { "FriendlyStatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamStat, FriendlyStatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FriendlyStatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FriendlyStatName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_APIStatName_MetaData[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_APIStatName = { "APIStatName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamStat, APIStatName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_APIStatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_APIStatName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType_MetaData[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamStat, StatType), Z_Construct_UEnum_StatsIntegration_ESteamStatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_IntegerValue_MetaData[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamStat, IntegerValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_IntegerValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_IntegerValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamStat, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FloatValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FriendlyStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_APIStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_StatType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_IntegerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamStat_Statics::NewProp_FloatValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
		nullptr,
		&NewStructOps,
		"SteamStat",
		sizeof(FSteamStat),
		alignof(FSteamStat),
		Z_Construct_UScriptStruct_FSteamStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatsIntegration();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamStat"), sizeof(FSteamStat), Get_Z_Construct_UScriptStruct_FSteamStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamStat_Hash() { return 677276913U; }
	void USteamRequests::StaticRegisterNativesUSteamRequests()
	{
	}
	UClass* Z_Construct_UClass_USteamRequests_NoRegister()
	{
		return USteamRequests::StaticClass();
	}
	struct Z_Construct_UClass_USteamRequests_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamRequests_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamRequests_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "SteamRequests.h" },
		{ "ModuleRelativePath", "Public/SteamRequests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamRequests_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamRequests>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamRequests_Statics::ClassParams = {
		&USteamRequests::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamRequests_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamRequests_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamRequests()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamRequests_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamRequests, 1161409520);
	template<> STATSINTEGRATION_API UClass* StaticClass<USteamRequests>()
	{
		return USteamRequests::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamRequests(Z_Construct_UClass_USteamRequests, &USteamRequests::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("USteamRequests"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamRequests);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
