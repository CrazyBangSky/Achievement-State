// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/SetAchievementData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetAchievementData() {}
// Cross Module References
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USetAchievementData_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_USetAchievementData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
// End Cross Module References
	DEFINE_FUNCTION(USetAchievementData::execClearAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USetAchievementData::ClearAchievement(Z_Param_AchievementAPIName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USetAchievementData::execSetAchievement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USetAchievementData::SetAchievement(Z_Param_AchievementAPIName);
		P_NATIVE_END;
	}
	void USetAchievementData::StaticRegisterNativesUSetAchievementData()
	{
		UClass* Class = USetAchievementData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAchievement", &USetAchievementData::execClearAchievement },
			{ "SetAchievement", &USetAchievementData::execSetAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics
	{
		struct SetAchievementData_eventClearAchievement_Parms
		{
			FString AchievementAPIName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetAchievementData_eventClearAchievement_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SetAchievementData_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetAchievementData_eventClearAchievement_Parms), &Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Resets the unlock status of an achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. To send the unlock status to the server and to trigger the Steam overlay notification you must call 'StoreStatsAndAchievements'. */" },
		{ "ModuleRelativePath", "Public/SetAchievementData.h" },
		{ "ToolTip", "Resets the unlock status of an achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. To send the unlock status to the server and to trigger the Steam overlay notification you must call 'StoreStatsAndAchievements'." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetAchievementData, nullptr, "ClearAchievement", nullptr, nullptr, sizeof(SetAchievementData_eventClearAchievement_Parms), Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetAchievementData_ClearAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetAchievementData_ClearAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics
	{
		struct SetAchievementData_eventSetAchievement_Parms
		{
			FString AchievementAPIName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SetAchievementData_eventSetAchievement_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SetAchievementData_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SetAchievementData_eventSetAchievement_Parms), &Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Unlocks an achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. To send the unlock status to the server and to trigger the Steam overlay notification you must call 'StoreStatsAndAchievements'. */" },
		{ "ModuleRelativePath", "Public/SetAchievementData.h" },
		{ "ToolTip", "Unlocks an achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. To send the unlock status to the server and to trigger the Steam overlay notification you must call 'StoreStatsAndAchievements'." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USetAchievementData, nullptr, "SetAchievement", nullptr, nullptr, sizeof(SetAchievementData_eventSetAchievement_Parms), Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USetAchievementData_SetAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USetAchievementData_SetAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USetAchievementData_NoRegister()
	{
		return USetAchievementData::StaticClass();
	}
	struct Z_Construct_UClass_USetAchievementData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USetAchievementData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USetAchievementData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USetAchievementData_ClearAchievement, "ClearAchievement" }, // 2268617251
		{ &Z_Construct_UFunction_USetAchievementData_SetAchievement, "SetAchievement" }, // 688437380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USetAchievementData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "SetAchievementData.h" },
		{ "ModuleRelativePath", "Public/SetAchievementData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USetAchievementData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USetAchievementData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USetAchievementData_Statics::ClassParams = {
		&USetAchievementData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USetAchievementData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USetAchievementData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USetAchievementData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USetAchievementData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USetAchievementData, 3441347849);
	template<> STATSINTEGRATION_API UClass* StaticClass<USetAchievementData>()
	{
		return USetAchievementData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USetAchievementData(Z_Construct_UClass_USetAchievementData, &USetAchievementData::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("USetAchievementData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USetAchievementData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
