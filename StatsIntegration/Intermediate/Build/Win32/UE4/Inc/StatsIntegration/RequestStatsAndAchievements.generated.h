// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URequestStatsAndAchievements;
#ifdef STATSINTEGRATION_RequestStatsAndAchievements_generated_h
#error "RequestStatsAndAchievements.generated.h already included, missing '#pragma once' in RequestStatsAndAchievements.h"
#endif
#define STATSINTEGRATION_RequestStatsAndAchievements_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_31_DELEGATE \
struct _Script_StatsIntegration_eventResponseRequestStatsAndAchievementsDelegate_Parms \
{ \
	int32 SteamErrorOutput; \
}; \
static inline void FResponseRequestStatsAndAchievementsDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseRequestStatsAndAchievementsDelegate, int32 SteamErrorOutput) \
{ \
	_Script_StatsIntegration_eventResponseRequestStatsAndAchievementsDelegate_Parms Parms; \
	Parms.SteamErrorOutput=SteamErrorOutput; \
	ResponseRequestStatsAndAchievementsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestUserStatsAndAchievements);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestUserStatsAndAchievements);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURequestStatsAndAchievements(); \
	friend struct Z_Construct_UClass_URequestStatsAndAchievements_Statics; \
public: \
	DECLARE_CLASS(URequestStatsAndAchievements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(URequestStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_INCLASS \
private: \
	static void StaticRegisterNativesURequestStatsAndAchievements(); \
	friend struct Z_Construct_UClass_URequestStatsAndAchievements_Statics; \
public: \
	DECLARE_CLASS(URequestStatsAndAchievements, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(URequestStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestStatsAndAchievements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestStatsAndAchievements) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestStatsAndAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestStatsAndAchievements); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestStatsAndAchievements(URequestStatsAndAchievements&&); \
	NO_API URequestStatsAndAchievements(const URequestStatsAndAchievements&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URequestStatsAndAchievements(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URequestStatsAndAchievements(URequestStatsAndAchievements&&); \
	NO_API URequestStatsAndAchievements(const URequestStatsAndAchievements&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URequestStatsAndAchievements); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URequestStatsAndAchievements); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URequestStatsAndAchievements)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_34_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class URequestStatsAndAchievements>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_RequestStatsAndAchievements_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
