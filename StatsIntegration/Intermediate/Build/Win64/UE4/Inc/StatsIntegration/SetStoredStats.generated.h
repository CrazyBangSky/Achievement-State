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
#ifdef STATSINTEGRATION_SetStoredStats_generated_h
#error "SetStoredStats.generated.h already included, missing '#pragma once' in SetStoredStats.h"
#endif
#define STATSINTEGRATION_SetStoredStats_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetStoredStat); \
	DECLARE_FUNCTION(execSetStoredStats);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetStoredStat); \
	DECLARE_FUNCTION(execSetStoredStats);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSetStoredStats(); \
	friend struct Z_Construct_UClass_USetStoredStats_Statics; \
public: \
	DECLARE_CLASS(USetStoredStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(USetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUSetStoredStats(); \
	friend struct Z_Construct_UClass_USetStoredStats_Statics; \
public: \
	DECLARE_CLASS(USetStoredStats, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(USetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetStoredStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetStoredStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetStoredStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetStoredStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetStoredStats(USetStoredStats&&); \
	NO_API USetStoredStats(const USetStoredStats&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USetStoredStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USetStoredStats(USetStoredStats&&); \
	NO_API USetStoredStats(const USetStoredStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USetStoredStats); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USetStoredStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USetStoredStats)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_30_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class USetStoredStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SetStoredStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
