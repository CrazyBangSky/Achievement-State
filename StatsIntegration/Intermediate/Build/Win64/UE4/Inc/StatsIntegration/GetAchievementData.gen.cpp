// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatsIntegration/Public/GetAchievementData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetAchievementData() {}
// Cross Module References
	STATSINTEGRATION_API UEnum* Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4();
	UPackage* Z_Construct_UPackage__Script_StatsIntegration();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UGetAchievementData_NoRegister();
	STATSINTEGRATION_API UClass* Z_Construct_UClass_UGetAchievementData();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
	static UEnum* EAchievementDisplayAttributeUE4_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4, Z_Construct_UPackage__Script_StatsIntegration(), TEXT("EAchievementDisplayAttributeUE4"));
		}
		return Singleton;
	}
	template<> STATSINTEGRATION_API UEnum* StaticEnum<EAchievementDisplayAttributeUE4>()
	{
		return EAchievementDisplayAttributeUE4_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementDisplayAttributeUE4(EAchievementDisplayAttributeUE4_StaticEnum, TEXT("/Script/StatsIntegration"), TEXT("EAchievementDisplayAttributeUE4"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4_Hash() { return 1673422726U; }
	UEnum* Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_StatsIntegration();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementDisplayAttributeUE4"), 0, Get_Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementDisplayAttributeUE4::ADA_EAttributeName", (int64)EAchievementDisplayAttributeUE4::ADA_EAttributeName },
				{ "EAchievementDisplayAttributeUE4::ADA_EAttributeDescription", (int64)EAchievementDisplayAttributeUE4::ADA_EAttributeDescription },
				{ "EAchievementDisplayAttributeUE4::ADA_EAttributeHidden", (int64)EAchievementDisplayAttributeUE4::ADA_EAttributeHidden },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ADA_EAttributeDescription.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "ADA_EAttributeDescription.DisplayName", "Description" },
				{ "ADA_EAttributeDescription.Name", "EAchievementDisplayAttributeUE4::ADA_EAttributeDescription" },
				{ "ADA_EAttributeHidden.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "ADA_EAttributeHidden.DisplayName", "Hidden Status" },
				{ "ADA_EAttributeHidden.Name", "EAchievementDisplayAttributeUE4::ADA_EAttributeHidden" },
				{ "ADA_EAttributeName.Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "ADA_EAttributeName.DisplayName", "Name" },
				{ "ADA_EAttributeName.Name", "EAchievementDisplayAttributeUE4::ADA_EAttributeName" },
				{ "BlueprintType", "true" },
				{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
				{ "ModuleRelativePath", "Public/GetAchievementData.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_StatsIntegration,
				nullptr,
				"EAchievementDisplayAttributeUE4",
				"EAchievementDisplayAttributeUE4",
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
	DEFINE_FUNCTION(UGetAchievementData::execGetAchievementDisplayAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_GET_ENUM(EAchievementDisplayAttributeUE4,Z_Param_Attribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGetAchievementData::GetAchievementDisplayAttribute(Z_Param_AchievementAPIName,EAchievementDisplayAttributeUE4(Z_Param_Attribute));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetAchievementData::execGetGlobalAchievementAchievedPercent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UGetAchievementData::GetGlobalAchievementAchievedPercent(Z_Param_AchievementAPIName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetAchievementData::execGetAchievementUnlockStatusAndUnlockTime)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_GET_UBOOL_REF(Z_Param_Out_AchievementUnlocked);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_UnlockTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGetAchievementData::GetAchievementUnlockStatusAndUnlockTime(Z_Param_AchievementAPIName,Z_Param_Out_AchievementUnlocked,Z_Param_Out_UnlockTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetAchievementData::execGetAchievementIcon)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AchievementAPIName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UGetAchievementData::GetAchievementIcon(Z_Param_AchievementAPIName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetAchievementData::execGetAchievementAPIName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AchievementIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UGetAchievementData::GetAchievementAPIName(Z_Param_AchievementIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetAchievementData::execGetNumAchievements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetAchievementData::GetNumAchievements();
		P_NATIVE_END;
	}
	void UGetAchievementData::StaticRegisterNativesUGetAchievementData()
	{
		UClass* Class = UGetAchievementData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAchievementAPIName", &UGetAchievementData::execGetAchievementAPIName },
			{ "GetAchievementDisplayAttribute", &UGetAchievementData::execGetAchievementDisplayAttribute },
			{ "GetAchievementIcon", &UGetAchievementData::execGetAchievementIcon },
			{ "GetAchievementUnlockStatusAndUnlockTime", &UGetAchievementData::execGetAchievementUnlockStatusAndUnlockTime },
			{ "GetGlobalAchievementAchievedPercent", &UGetAchievementData::execGetGlobalAchievementAchievedPercent },
			{ "GetNumAchievements", &UGetAchievementData::execGetNumAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics
	{
		struct GetAchievementData_eventGetAchievementAPIName_Parms
		{
			int32 AchievementIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AchievementIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::NewProp_AchievementIndex = { "AchievementIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementAPIName_Parms, AchievementIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementAPIName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::NewProp_AchievementIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
		{ "ToolTip", "You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetAchievementAPIName", nullptr, nullptr, sizeof(GetAchievementData_eventGetAchievementAPIName_Parms), Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics
	{
		struct GetAchievementData_eventGetAchievementDisplayAttribute_Parms
		{
			FString AchievementAPIName;
			EAchievementDisplayAttributeUE4 Attribute;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attribute_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Attribute;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementDisplayAttribute_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_Attribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementDisplayAttribute_Parms, Attribute), Z_Construct_UEnum_StatsIntegration_EAchievementDisplayAttributeUE4, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_Attribute_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_Attribute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
		{ "ToolTip", "Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, sizeof(GetAchievementData_eventGetAchievementDisplayAttribute_Parms), Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics
	{
		struct GetAchievementData_eventGetAchievementIcon_Parms
		{
			FString AchievementAPIName;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementIcon_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetAchievementIcon", nullptr, nullptr, sizeof(GetAchievementData_eventGetAchievementIcon_Parms), Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics
	{
		struct GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms
		{
			FString AchievementAPIName;
			bool AchievementUnlocked;
			FDateTime UnlockTime;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static void NewProp_AchievementUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AchievementUnlocked;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementUnlocked_SetBit(void* Obj)
	{
		((GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms*)Obj)->AchievementUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementUnlocked = { "AchievementUnlocked", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms), &Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementUnlocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms, UnlockTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_AchievementUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::NewProp_UnlockTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
		{ "ToolTip", "You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetAchievementUnlockStatusAndUnlockTime", nullptr, nullptr, sizeof(GetAchievementData_eventGetAchievementUnlockStatusAndUnlockTime_Parms), Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics
	{
		struct GetAchievementData_eventGetGlobalAchievementAchievedPercent_Parms
		{
			FString AchievementAPIName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievementAPIName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::NewProp_AchievementAPIName = { "AchievementAPIName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetGlobalAchievementAchievedPercent_Parms, AchievementAPIName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetGlobalAchievementAchievedPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::NewProp_AchievementAPIName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* Returns the percentage of users who have unlocked the specified achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
		{ "ToolTip", "Returns the percentage of users who have unlocked the specified achievement. You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetGlobalAchievementAchievedPercent", nullptr, nullptr, sizeof(GetAchievementData_eventGetGlobalAchievementAchievedPercent_Parms), Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics
	{
		struct GetAchievementData_eventGetNumAchievements_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetAchievementData_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Steam Stats & Achievements" },
		{ "Comment", "/* You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this. */" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
		{ "ToolTip", "You must have called 'RequestUserStatsAndAchievements' and it needs to return successfully via its callback prior to calling this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetAchievementData, nullptr, "GetNumAchievements", nullptr, nullptr, sizeof(GetAchievementData_eventGetNumAchievements_Parms), Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetAchievementData_GetNumAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetAchievementData_GetNumAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetAchievementData_NoRegister()
	{
		return UGetAchievementData::StaticClass();
	}
	struct Z_Construct_UClass_UGetAchievementData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetAchievementData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StatsIntegration,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetAchievementData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetAchievementData_GetAchievementAPIName, "GetAchievementAPIName" }, // 2632316519
		{ &Z_Construct_UFunction_UGetAchievementData_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 3908095956
		{ &Z_Construct_UFunction_UGetAchievementData_GetAchievementIcon, "GetAchievementIcon" }, // 1574445606
		{ &Z_Construct_UFunction_UGetAchievementData_GetAchievementUnlockStatusAndUnlockTime, "GetAchievementUnlockStatusAndUnlockTime" }, // 3322165882
		{ &Z_Construct_UFunction_UGetAchievementData_GetGlobalAchievementAchievedPercent, "GetGlobalAchievementAchievedPercent" }, // 4227743484
		{ &Z_Construct_UFunction_UGetAchievementData_GetNumAchievements, "GetNumAchievements" }, // 987777693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetAchievementData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "GetAchievementData.h" },
		{ "ModuleRelativePath", "Public/GetAchievementData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetAchievementData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetAchievementData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetAchievementData_Statics::ClassParams = {
		&UGetAchievementData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGetAchievementData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetAchievementData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetAchievementData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetAchievementData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetAchievementData, 4205026013);
	template<> STATSINTEGRATION_API UClass* StaticClass<UGetAchievementData>()
	{
		return UGetAchievementData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetAchievementData(Z_Construct_UClass_UGetAchievementData, &UGetAchievementData::StaticClass, TEXT("/Script/StatsIntegration"), TEXT("UGetAchievementData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetAchievementData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
