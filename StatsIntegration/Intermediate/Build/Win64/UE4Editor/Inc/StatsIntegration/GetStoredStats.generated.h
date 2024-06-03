// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESteamStatType : uint8;
struct FSteamStat;
#ifdef STATSINTEGRATION_GetStoredStats_generated_h
#error "GetStoredStats.generated.h already included, missing '#pragma once' in GetStoredStats.h"
#endif
#define STATSINTEGRATION_GetStoredStats_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUserStoredStat); \
	DECLARE_FUNCTION(execGetUserStoredStats);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUserStoredStat); \
	DECLARE_FUNCTION(execGetUserStoredStats);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGetStoredStats(); \
	friend struct Z_Construct_UClass_UGetStoredStats_Statics; \
public: \
	DECLARE_CLASS(UGetStoredStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UGetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUGetStoredStats(); \
	friend struct Z_Construct_UClass_UGetStoredStats_Statics; \
public: \
	DECLARE_CLASS(UGetStoredStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UGetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetStoredStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetStoredStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetStoredStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetStoredStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetStoredStats(UGetStoredStats&&); \
	NO_API UGetStoredStats(const UGetStoredStats&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGetStoredStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGetStoredStats(UGetStoredStats&&); \
	NO_API UGetStoredStats(const UGetStoredStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGetStoredStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGetStoredStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_30_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class UGetStoredStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_GetStoredStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
