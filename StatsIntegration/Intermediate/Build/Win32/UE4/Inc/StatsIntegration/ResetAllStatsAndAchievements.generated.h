// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UResetAllStatsAndAchievements;
#ifdef STATSINTEGRATION_ResetAllStatsAndAchievements_generated_h
#error "ResetAllStatsAndAchievements.generated.h already included, missing '#pragma once' in ResetAllStatsAndAchievements.h"
#endif
#define STATSINTEGRATION_ResetAllStatsAndAchievements_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_29_DELEGATE \
struct _Script_StatsIntegration_eventResponseResetStatsAndAchievementsDelegate_Parms \
{ \
	int32 SteamErrorOutput; \
}; \
static inline void FResponseResetStatsAndAchievementsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseResetStatsAndAchievementsDelegate, int32 SteamErrorOutput) \
{ \
	_Script_StatsIntegration_eventResponseResetStatsAndAchievementsDelegate_Parms Parms; \
	Parms.SteamErrorOutput=SteamErrorOutput; \
	ResponseResetStatsAndAchievementsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetUserStatsAndAchievements);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetUserStatsAndAchievements);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResetAllStatsAndAchievements(); \
	friend struct Z_Construct_UClass_UResetAllStatsAndAchievements_Statics; \
public: \
	DECLARE_CLASS(UResetAllStatsAndAchievements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UResetAllStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUResetAllStatsAndAchievements(); \
	friend struct Z_Construct_UClass_UResetAllStatsAndAchievements_Statics; \
public: \
	DECLARE_CLASS(UResetAllStatsAndAchievements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UResetAllStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResetAllStatsAndAchievements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResetAllStatsAndAchievements) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResetAllStatsAndAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResetAllStatsAndAchievements); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResetAllStatsAndAchievements(UResetAllStatsAndAchievements&&); \
	NO_API UResetAllStatsAndAchievements(const UResetAllStatsAndAchievements&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResetAllStatsAndAchievements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResetAllStatsAndAchievements(UResetAllStatsAndAchievements&&); \
	NO_API UResetAllStatsAndAchievements(const UResetAllStatsAndAchievements&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResetAllStatsAndAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResetAllStatsAndAchievements); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResetAllStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_32_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class UResetAllStatsAndAchievements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_ResetAllStatsAndAchievements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
