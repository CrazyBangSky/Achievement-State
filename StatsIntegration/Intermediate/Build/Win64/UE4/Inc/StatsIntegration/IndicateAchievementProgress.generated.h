// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UIndicateAchievementProgress;
#ifdef STATSINTEGRATION_IndicateAchievementProgress_generated_h
#error "IndicateAchievementProgress.generated.h already included, missing '#pragma once' in IndicateAchievementProgress.h"
#endif
#define STATSINTEGRATION_IndicateAchievementProgress_generated_h

#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_31_DELEGATE \
struct _Script_StatsIntegration_eventResponseIndicateAchievementProgressDelegate_Parms \
{ \
	int32 SteamErrorOutput; \
}; \
static inline void FResponseIndicateAchievementProgressDelegate_DelegateWrapper(const FMulticastScriptDelegate& ResponseIndicateAchievementProgressDelegate, int32 SteamErrorOutput) \
{ \
	_Script_StatsIntegration_eventResponseIndicateAchievementProgressDelegate_Parms Parms; \
	Parms.SteamErrorOutput=SteamErrorOutput; \
	ResponseIndicateAchievementProgressDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_SPARSE_DATA
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIndicateUserAchievementProgress);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIndicateUserAchievementProgress);


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIndicateAchievementProgress(); \
	friend struct Z_Construct_UClass_UIndicateAchievementProgress_Statics; \
public: \
	DECLARE_CLASS(UIndicateAchievementProgress, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UIndicateAchievementProgress)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUIndicateAchievementProgress(); \
	friend struct Z_Construct_UClass_UIndicateAchievementProgress_Statics; \
public: \
	DECLARE_CLASS(UIndicateAchievementProgress, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StatsIntegration"), NO_API) \
	DECLARE_SERIALIZER(UIndicateAchievementProgress)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIndicateAchievementProgress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIndicateAchievementProgress) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicateAchievementProgress); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicateAchievementProgress); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIndicateAchievementProgress(UIndicateAchievementProgress&&); \
	NO_API UIndicateAchievementProgress(const UIndicateAchievementProgress&); \
public:


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIndicateAchievementProgress(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIndicateAchievementProgress(UIndicateAchievementProgress&&); \
	NO_API UIndicateAchievementProgress(const UIndicateAchievementProgress&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIndicateAchievementProgress); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIndicateAchievementProgress); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIndicateAchievementProgress)


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_34_PROLOG
#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_RPC_WRAPPERS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_INCLASS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_SPARSE_DATA \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATSINTEGRATION_API UClass* StaticClass<class UIndicateAchievementProgress>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_StatsIntegration_Source_StatsIntegration_Public_IndicateAchievementProgress_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
