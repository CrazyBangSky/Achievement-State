// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATSINTEGRATION_SteamRequests_generated_h
#error "SteamRequests.generated.h already included, missing '#pragma once' in SteamRequests.h"
#endif
#define STATSINTEGRATION_SteamRequests_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamStat_Statics; \
	STATSINTEGRATION_API static class UScriptStruct* StaticStruct();


template<> STATSINTEGRATION_API UScriptStruct* StaticStruct<struct FSteamStat>();

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_RPC_WRAPPERS
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamRequests(); \
	friend struct Z_Construct_UClass_USteamRequests_Statics; \
public: \
	DECLARE_CLASS(USteamRequests, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(USteamRequests)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_INCLASS \
private: \
	static void StaticRegisterNativesUSteamRequests(); \
	friend struct Z_Construct_UClass_USteamRequests_Statics; \
public: \
	DECLARE_CLASS(USteamRequests, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(USteamRequests)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamRequests(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequests) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamRequests); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequests); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamRequests(USteamRequests&&); \
	NO_API USteamRequests(const USteamRequests&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamRequests(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamRequests(USteamRequests&&); \
	NO_API USteamRequests(const USteamRequests&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamRequests); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamRequests); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamRequests)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_47_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class USteamRequests>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_SteamRequests_h


#define FOREACH_ENUM_ESTEAMSTATTYPE(op) \
	op(ESteamStatType::STAT_INT) \
	op(ESteamStatType::STAT_FLOAT) \
	op(ESteamStatType::STAT_AVGRATE) 

enum class ESteamStatType : uint8;
template<> STATSINTEGRATION_API UEnum* StaticEnum<ESteamStatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
