#pragma once

// RogueCompany (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Killstreak.AttachmentCollection.GetCompatibleAttachmentsForWeaponType
struct UAttachmentCollection_GetCompatibleAttachmentsForWeaponType_Params
{
	struct FGameplayTag*                               WeaponType;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.EchoBlueprintLibrary.RequestEchoFromActor
struct UEchoBlueprintLibrary_RequestEchoFromActor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              EchoEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OriginActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ZOffset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpeedOfSound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumberOfEchosToTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EchoTraceRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowPostAtMaxDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EchoBlueprintLibrary.RequestEcho
struct UEchoBlueprintLibrary_RequestEcho_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              EchoEvent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EchoOrigin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   EchoOrientation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SpeedOfSound;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumberOfEchosToTrace;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             EchoTraceRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowPostAtMaxDistance;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EnvironmentActorInterface.TrackerLeave
struct UEnvironmentActorInterface_TrackerLeave_Params
{
	class UEnvironmentTrackerComponent**               tracker;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.EnvironmentActorInterface.TrackerEnter
struct UEnvironmentActorInterface_TrackerEnter_Params
{
	class UEnvironmentTrackerComponent**               tracker;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.EnvironmentActorInterface.GetEnvironmentTag
struct UEnvironmentActorInterface_GetEnvironmentTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.EnvironmentListenerComponent.ViewTargetEnvironmentChanged
struct UEnvironmentListenerComponent_ViewTargetEnvironmentChanged_Params
{
	struct FName*                                      OldEnvironmentTag;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewEnvironmentTag;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EnvironmentListenerComponent.OnEnvironmentChanged
struct UEnvironmentListenerComponent_OnEnvironmentChanged_Params
{
	struct FName*                                      OldEnvironmentTag;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EnvironmentListenerComponent.GetCurrentEnvironment
struct UEnvironmentListenerComponent_GetCurrentEnvironment_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.EnvironmentTrackerComponent.ReevalulateEnvironment
struct UEnvironmentTrackerComponent_ReevalulateEnvironment_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.EnvironmentTrackerComponent.GetCurrentEnvironment
struct UEnvironmentTrackerComponent_GetCurrentEnvironment_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.EnvironmentTrackerComponent.EndTouchingOwnerUpdatedComponent
struct UEnvironmentTrackerComponent_EndTouchingOwnerUpdatedComponent_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EnvironmentTrackerComponent.BlueprintEnvironmentChanged
struct UEnvironmentTrackerComponent_BlueprintEnvironmentChanged_Params
{
	struct FName*                                      OldEnvironment;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.EnvironmentTrackerComponent.BeginTouchingOwnerUpdatedComponent
struct UEnvironmentTrackerComponent_BeginTouchingOwnerUpdatedComponent_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSJobRole.GetRoleIcon
struct UKSJobRole_GetRoleIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KickbackModule.MakeKickbackInstance
struct UKickbackModule_MakeKickbackInstance_Params
{
	int*                                               ShotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AbsoluteMaxDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInterpCurveVector2D                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KickbackModule.GetMaximumVerticalKick
struct UKickbackModule_GetMaximumVerticalKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KickbackModule.GetMaximumHorizontalKick
struct UKickbackModule_GetMaximumHorizontalKick_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAccoladeTracker.StartTracking
struct UKSAccoladeTracker_StartTracking_Params
{
};

// Function Killstreak.KSAccoladeTracker.ResetTracker
struct UKSAccoladeTracker_ResetTracker_Params
{
};

// Function Killstreak.KSAccoladeTracker.NativeHandleElimEvent
struct UKSAccoladeTracker_NativeHandleElimEvent_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
};

// Function Killstreak.KSAccoladeTracker.NativeHandleDownEvent
struct UKSAccoladeTracker_NativeHandleDownEvent_Params
{
	struct FCombatEventInfo*                           DownEvent;                                                // (Parm)
};

// Function Killstreak.KSAccoladeTracker.HandleElimEvent
struct UKSAccoladeTracker_HandleElimEvent_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
};

// Function Killstreak.KSAccoladeTracker.HandleDownEvent
struct UKSAccoladeTracker_HandleDownEvent_Params
{
	struct FCombatEventInfo*                           DownEvent;                                                // (Parm)
};

// Function Killstreak.KSAccoladeTracker.GetPrimaryAccoladeDisplayInfo
struct UKSAccoladeTracker_GetPrimaryAccoladeDisplayInfo_Params
{
	struct FAccoladeDisplayInfo                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSAccoladeTracker.GetOwningGameMode
struct UKSAccoladeTracker_GetOwningGameMode_Params
{
	class AKSGameMode*                                 OutGameMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAccoladeTracker.DispatchGameStateAccoladeDisplay
struct UKSAccoladeTracker_DispatchGameStateAccoladeDisplay_Params
{
	class AKSPlayerState**                             RelevantPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAccoladeDisplayInfo*                       AccoladeToDisplay;                                        // (Parm)
	bool*                                              IgnoreRelevantPlayerId;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivity.InitNewlyCreatedActivity
struct UKSActivity_InitNewlyCreatedActivity_Params
{
	int64_t*                                           InItemId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           InProgressLootId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           InRewardXpTableId;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           InRewardVendorId;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivity.GetInstanceForPlayer
struct UKSActivity_GetInstanceForPlayer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.UpdateActivityTiers
struct UKSActivityInstance_UpdateActivityTiers_Params
{
};

// Function Killstreak.KSActivityInstance.OnEventTrackerTriggered
struct UKSActivityInstance_OnEventTrackerTriggered_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.IsUnlocked
struct UKSActivityInstance_IsUnlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.IsFinished
struct UKSActivityInstance_IsFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.IsActive
struct UKSActivityInstance_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.IncrementProgress
struct UKSActivityInstance_IncrementProgress_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.HasPlatformAchievement
struct UKSActivityInstance_HasPlatformAchievement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.HasAuthority
struct UKSActivityInstance_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetTiers
struct UKSActivityInstance_GetTiers_Params
{
	TArray<struct FActivityTier>                       Tiers;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSActivityInstance.GetProgressTier
struct UKSActivityInstance_GetProgressTier_Params
{
	struct FActivityTier                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSActivityInstance.GetProgressPercentageToNextTier
struct UKSActivityInstance_GetProgressPercentageToNextTier_Params
{
	float                                              ProgressPercentage;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetProgressPercentageToMaxTier
struct UKSActivityInstance_GetProgressPercentageToMaxTier_Params
{
	float                                              ProgressPercentage;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetProgressEarned
struct UKSActivityInstance_GetProgressEarned_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetProgressDisplayText
struct UKSActivityInstance_GetProgressDisplayText_Params
{
	EKSActivityProgressDisplayType*                    DisplayType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSActivityInstance.GetProgressCount
struct UKSActivityInstance_GetProgressCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetPlayerId
struct UKSActivityInstance_GetPlayerId_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetNextTier
struct UKSActivityInstance_GetNextTier_Params
{
	struct FActivityTier                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSActivityInstance.GetMaxTier
struct UKSActivityInstance_GetMaxTier_Params
{
	struct FActivityTier                               MaxTier;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetLastProgressTime
struct UKSActivityInstance_GetLastProgressTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSActivityInstance.GetInventoryProgressCount
struct UKSActivityInstance_GetInventoryProgressCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityInstance.GetInventoryId
struct UKSActivityInstance_GetInventoryId_Params
{
	struct FInventoryId                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSActivityInstance.CreateTracker
struct UKSActivityInstance_CreateTracker_Params
{
};

// Function Killstreak.KSActivityManagerBase.RequestActivitiesLoad
struct UKSActivityManagerBase_RequestActivitiesLoad_Params
{
};

// Function Killstreak.KSActivityManagerBase.QueryActivityInstancesByTime
struct UKSActivityManagerBase_QueryActivityInstancesByTime_Params
{
	TArray<class UKSActivityInstance*>*                ActivityInstances;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FTimespan*                                  TimeWindow;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UKSActivityInstance*>                 Results;                                                  // (Parm, OutParm, ZeroConstructor)
	EKSActivityTimeQueryType*                          QueryType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.QueryActivityInstances
struct UKSActivityManagerBase_QueryActivityInstances_Params
{
	TArray<class UKSActivityInstance*>*                ActivityInstances;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EKSActivityInstanceQueryType*                      QueryType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSActivityInstance*>                 Results;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnStoreVendorsLoaded
struct UKSActivityManagerBase_OnStoreVendorsLoaded_Params
{
	int*                                               GroupId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       VendorIds;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSActivityManagerBase.OnSetupPhaseStarted
struct UKSActivityManagerBase_OnSetupPhaseStarted_Params
{
	EKSActivityManagerSetupPhase*                      Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnSetupPhaseFinished
struct UKSActivityManagerBase_OnSetupPhaseFinished_Params
{
	EKSActivityManagerSetupPhase*                      Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnServerPlayerPostLogin
struct UKSActivityManagerBase_OnServerPlayerPostLogin_Params
{
	class AGameModeBase**                              InGameMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnServerPlayerLogout
struct UKSActivityManagerBase_OnServerPlayerLogout_Params
{
	class AGameModeBase**                              InGameMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnGameModePhaseChanged
struct UKSActivityManagerBase_OnGameModePhaseChanged_Params
{
	struct FName*                                      PreviousPhaseName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnGameModeInitialized
struct UKSActivityManagerBase_OnGameModeInitialized_Params
{
	class AGameModeBase**                              InGameMode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.OnClientLoggedIn
struct UKSActivityManagerBase_OnClientLoggedIn_Params
{
};

// Function Killstreak.KSActivityManagerBase.OnAllActivitiesLoaded
struct UKSActivityManagerBase_OnAllActivitiesLoaded_Params
{
};

// Function Killstreak.KSActivityManagerBase.IsSetupFinished
struct UKSActivityManagerBase_IsSetupFinished_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.IsAchievementIntegrationEnabled
struct UKSActivityManagerBase_IsAchievementIntegrationEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.GoToNextSetupPhase
struct UKSActivityManagerBase_GoToNextSetupPhase_Params
{
};

// Function Killstreak.KSActivityManagerBase.GetActivityInstances
struct UKSActivityManagerBase_GetActivityInstances_Params
{
	TArray<class UKSActivityInstance*>                 ActivityInstances;                                        // (Parm, OutParm, ZeroConstructor)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.GetActivityInstanceByItemId
struct UKSActivityManagerBase_GetActivityInstanceByItemId_Params
{
	int64_t*                                           ItemId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.GetActivityInstance
struct UKSActivityManagerBase_GetActivityInstance_Params
{
	struct FInventoryId*                               InventoryId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.FindActivity
struct UKSActivityManagerBase_FindActivity_Params
{
	int64_t*                                           ReferenceValue1;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           ReferenceValue2;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           ReferenceValue3;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivity*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.FindActivitiesByJob
struct UKSActivityManagerBase_FindActivitiesByJob_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSJobActivity*>                      JobActivities;                                            // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.DoesRequireSetupPhase
struct UKSActivityManagerBase_DoesRequireSetupPhase_Params
{
	EKSActivityManagerSetupPhase*                      Phase;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSActivityManagerBase.AttemptInitialActivityCreation
struct UKSActivityManagerBase_AttemptInitialActivityCreation_Params
{
};

// Function Killstreak.KSLagCompensatedActor.YieldToRealActor
struct AKSLagCompensatedActor_YieldToRealActor_Params
{
};

// Function Killstreak.KSLagCompensatedActor.TryToDestroy
struct AKSLagCompensatedActor_TryToDestroy_Params
{
};

// Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromWeapon
struct AKSLagCompensatedActor_SetLagCompActorIDFromWeapon_Params
{
	class AKSWeapon**                                  SpawningWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromParentProjectile
struct AKSLagCompensatedActor_SetLagCompActorIDFromParentProjectile_Params
{
	class AKSProjectile**                              ParentProjectile;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.SetLagCompActorIDFromModInstance
struct AKSLagCompensatedActor_SetLagCompActorIDFromModInstance_Params
{
	class UKSPlayerModInstance**                       SpawningModInst;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.RealActorTakeOver
struct AKSLagCompensatedActor_RealActorTakeOver_Params
{
};

// Function Killstreak.KSLagCompensatedActor.RealActorDestroyed
struct AKSLagCompensatedActor_RealActorDestroyed_Params
{
	class AActor**                                     Real;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.OnTakeOverAsRealActor
struct AKSLagCompensatedActor_OnTakeOverAsRealActor_Params
{
};

// Function Killstreak.KSLagCompensatedActor.OnRep_LagCompActorID
struct AKSLagCompensatedActor_OnRep_LagCompActorID_Params
{
};

// Function Killstreak.KSLagCompensatedActor.OnRealActorSpawn
struct AKSLagCompensatedActor_OnRealActorSpawn_Params
{
	class AKSLagCompensatedActor**                     Real;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.IsClientPredictedActor
struct AKSLagCompensatedActor_IsClientPredictedActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.IsActiveRealActor
struct AKSLagCompensatedActor_IsActiveRealActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLagCompensatedActor.InitializeRealActor
struct AKSLagCompensatedActor_InitializeRealActor_Params
{
};

// Function Killstreak.KSLagCompensatedActor.InitializeFakeActor
struct AKSLagCompensatedActor_InitializeFakeActor_Params
{
};

// Function Killstreak.KSLagCompensatedActor.FakeDestroyCleanup
struct AKSLagCompensatedActor_FakeDestroyCleanup_Params
{
};

// Function Killstreak.KSAgentBase.RefundAgentAsset
struct AKSAgentBase_RefundAgentAsset_Params
{
};

// Function Killstreak.KSAgentBase.OnRep_CurrentHealth
struct AKSAgentBase_OnRep_CurrentHealth_Params
{
};

// Function Killstreak.KSAgentBase.OnMissionBegin
struct AKSAgentBase_OnMissionBegin_Params
{
};

// Function Killstreak.KSAgentBase.MovementPlaybackStop
struct AKSAgentBase_MovementPlaybackStop_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgentBase.BroadcastMissionBegin
struct AKSAgentBase_BroadcastMissionBegin_Params
{
};

// Function Killstreak.KSAgent_RevealDrone.UpdateReplicatedTimer
struct AKSAgent_RevealDrone_UpdateReplicatedTimer_Params
{
};

// Function Killstreak.KSAgent_RevealDrone.StartNextReveal
struct AKSAgent_RevealDrone_StartNextReveal_Params
{
};

// Function Killstreak.KSAgent_RevealDrone.SetPlayerOwner
struct AKSAgent_RevealDrone_SetPlayerOwner_Params
{
	class AKSCharacter**                               InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevealDrone.ScrambleEnemies
struct AKSAgent_RevealDrone_ScrambleEnemies_Params
{
};

// Function Killstreak.KSAgent_RevealDrone.RevealOpposingTeam
struct AKSAgent_RevealDrone_RevealOpposingTeam_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevealDrone.Ping
struct AKSAgent_RevealDrone_Ping_Params
{
	int*                                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SweepSpeed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SweepTimeRemaining;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevealDrone.GetRevealPeriodDuration
struct AKSAgent_RevealDrone_GetRevealPeriodDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevealDrone.EndRevealPeriod
struct AKSAgent_RevealDrone_EndRevealPeriod_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.TargetStartGuaranteedRevive
struct AKSAgent_RevivalDrone_TargetStartGuaranteedRevive_Params
{
	class AKSCharacter**                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.StartReviveEffects
struct AKSAgent_RevivalDrone_StartReviveEffects_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.SetOutlineVisibility
struct AKSAgent_RevivalDrone_SetOutlineVisibility_Params
{
	bool*                                              UseOutline;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.SetFriendlyOutlineVisibility
struct AKSAgent_RevivalDrone_SetFriendlyOutlineVisibility_Params
{
	bool*                                              UseOutline;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.OnReviveEnd
struct AKSAgent_RevivalDrone_OnReviveEnd_Params
{
	class AKSCharacter**                               RevivingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SuccessfulRevive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.OnRep_OngoingReviveEffectsActive
struct AKSAgent_RevivalDrone_OnRep_OngoingReviveEffectsActive_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.OnRep_DroneVulnerability
struct AKSAgent_RevivalDrone_OnRep_DroneVulnerability_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.OnRep_DroneVisibility
struct AKSAgent_RevivalDrone_OnRep_DroneVisibility_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.GetReviveProgress
struct AKSAgent_RevivalDrone_GetReviveProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.GetMovementStage
struct AKSAgent_RevivalDrone_GetMovementStage_Params
{
	EReviveDroneState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.GetFlightPath
struct AKSAgent_RevivalDrone_GetFlightPath_Params
{
	EReviveDroneFlightPath                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.EventStartReviveEffects
struct AKSAgent_RevivalDrone_EventStartReviveEffects_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.EventOngoingReviveEffectsStarted
struct AKSAgent_RevivalDrone_EventOngoingReviveEffectsStarted_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.EventEndReviveEffects
struct AKSAgent_RevivalDrone_EventEndReviveEffects_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.BroadcastMovementState
struct AKSAgent_RevivalDrone_BroadcastMovementState_Params
{
	EReviveDroneState*                                 State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.BroadcastEndReviveEffects
struct AKSAgent_RevivalDrone_BroadcastEndReviveEffects_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.BroadcastDroneVulnerability
struct AKSAgent_RevivalDrone_BroadcastDroneVulnerability_Params
{
	bool*                                              Vulnerable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.BroadcastDroneVisibility
struct AKSAgent_RevivalDrone_BroadcastDroneVisibility_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAgent_RevivalDrone.BeginRevive
struct AKSAgent_RevivalDrone_BeginRevive_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.ApplyDroneVulnerabilityInternal
struct AKSAgent_RevivalDrone_ApplyDroneVulnerabilityInternal_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.ApplyDroneVisibilityInternal
struct AKSAgent_RevivalDrone_ApplyDroneVisibilityInternal_Params
{
};

// Function Killstreak.KSAgent_RevivalDrone.ActivateDroneOngoingEffects
struct AKSAgent_RevivalDrone_ActivateDroneOngoingEffects_Params
{
};

// Function Killstreak.KSAIController.SetNavigationInteractTarget
struct AKSAIController_SetNavigationInteractTarget_Params
{
};

// Function Killstreak.KSAIController.OnPawnKilled
struct AKSAIController_OnPawnKilled_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIController.HandleTeamSidesFlipped
struct AKSAIController_HandleTeamSidesFlipped_Params
{
};

// Function Killstreak.KSAIController.GetOwnedCharacter
struct AKSAIController_GetOwnedCharacter_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIController.GetNavigationInteractTarget
struct AKSAIController_GetNavigationInteractTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIController.GetKSPerceptionComponent
struct AKSAIController_GetKSPerceptionComponent_Params
{
	class UKSAIPerceptionComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSAIController.ClearNavigationInteractTarget
struct AKSAIController_ClearNavigationInteractTarget_Params
{
};

// Function Killstreak.KSAIDifficultyComponent.GetCurrentDifficulty
struct UKSAIDifficultyComponent_GetCurrentDifficulty_Params
{
	class UKSBTDifficulty*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIDifficultyComponent.ChangeDifficulty
struct UKSAIDifficultyComponent_ChangeDifficulty_Params
{
	class UKSBTDifficulty**                            DifficultyIn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.InsertPriority
struct UKSAIItemPriorityComponent_InsertPriority_Params
{
	struct FKSBTItemPriorityTableRow*                  ItemPriority;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSAIItemPriorityComponent.InsertPriorities
struct UKSAIItemPriorityComponent_InsertPriorities_Params
{
	class UDataTable**                                 ItemPriorityTable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetWeightByName
struct UKSAIItemPriorityComponent_GetWeightByName_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetWeight
struct UKSAIItemPriorityComponent_GetWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetShopPurchaseWeightByName
struct UKSAIItemPriorityComponent_GetShopPurchaseWeightByName_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetShopPurchaseWeight
struct UKSAIItemPriorityComponent_GetShopPurchaseWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetShopPriorityGroupByName
struct UKSAIItemPriorityComponent_GetShopPriorityGroupByName_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetShopPriorityGroup
struct UKSAIItemPriorityComponent_GetShopPriorityGroup_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetPriorityMultiplierByName
struct UKSAIItemPriorityComponent_GetPriorityMultiplierByName_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.GetPriorityMultiplier
struct UKSAIItemPriorityComponent_GetPriorityMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIItemPriorityComponent.ClearPriorities
struct UKSAIItemPriorityComponent_ClearPriorities_Params
{
};

// Function Killstreak.KSAimAssistActor.ResetHealth
struct AKSAimAssistActor_ResetHealth_Params
{
};

// Function Killstreak.KSAimAssistActor.OnRep_HealthInfo
struct AKSAimAssistActor_OnRep_HealthInfo_Params
{
};

// Function Killstreak.KSAimAssistActor.OnKilled
struct AKSAimAssistActor_OnKilled_Params
{
};

// Function Killstreak.KSAimAssistActor.ModifyIncomingDamageTaken
struct AKSAimAssistActor_ModifyIncomingDamageTaken_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistActor.IsValidIncomingDamage
struct AKSAimAssistActor_IsValidIncomingDamage_Params
{
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistActor.GetAAHeadLocation
struct AKSAimAssistActor_GetAAHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistActor.GetAABodyLocation
struct AKSAimAssistActor_GetAABodyLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistActor.CanBeHitByWeapon
struct AKSAimAssistActor_CanBeHitByWeapon_Params
{
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistActor.AimAssistRightNow
struct AKSAimAssistActor_AimAssistRightNow_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistComponent.GetScaledProjectionBoundsForActor
struct UKSAimAssistComponent_GetScaledProjectionBoundsForActor_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      OutBounds;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistComponent.GetProjectionSpaceStackBoundary
struct UKSAimAssistComponent_GetProjectionSpaceStackBoundary_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistComponent.GetPlayerOwner
struct UKSAimAssistComponent_GetPlayerOwner_Params
{
	class AKSPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistComponent.GetAssistRingScreenSize
struct UKSAimAssistComponent_GetAssistRingScreenSize_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ProjectionSpaceSize;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistComponent.GetActorScreenBoundsForActor
struct UKSAimAssistComponent_GetActorScreenBoundsForActor_Params
{
	class APlayerController**                          Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox2D                                      OutBounds;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistTargetInterface.UnregisterAsAimAssistTarget
struct UKSAimAssistTargetInterface_UnregisterAsAimAssistTarget_Params
{
};

// Function Killstreak.KSAimAssistTargetInterface.RegisterAsAimAssistTarget
struct UKSAimAssistTargetInterface_RegisterAsAimAssistTarget_Params
{
};

// Function Killstreak.KSAimAssistTargetInterface.GetHeadLocation
struct UKSAimAssistTargetInterface_GetHeadLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistTargetInterface.GetBodyLocation
struct UKSAimAssistTargetInterface_GetBodyLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistTargetInterface.GetAsActor
struct UKSAimAssistTargetInterface_GetAsActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAimAssistTargetInterface.CanBeConsideredForAimAssistRightNow
struct UKSAimAssistTargetInterface_CanBeConsideredForAimAssistRightNow_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.UpdatePriority
struct UKSAIObjectivePriorityComponent_UpdatePriority_Params
{
	struct FName*                                      Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKSBTObjectivePriorityTableRow*             ObjectivePriority;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              ShouldResort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.UpdatePriorities
struct UKSAIObjectivePriorityComponent_UpdatePriorities_Params
{
	class UDataTable**                                 ObjectivePriorityTableIn;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.Setup
struct UKSAIObjectivePriorityComponent_Setup_Params
{
	class UDataTable**                                 ObjectivePriorityTableIn;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.InsertPriority
struct UKSAIObjectivePriorityComponent_InsertPriority_Params
{
	struct FName*                                      Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKSBTObjectivePriorityTableRow*             ObjectivePriority;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              ShouldResort;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.InsertPriorities
struct UKSAIObjectivePriorityComponent_InsertPriorities_Params
{
	class UDataTable**                                 ObjectivePriorityTableIn;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.GetPriority
struct UKSAIObjectivePriorityComponent_GetPriority_Params
{
	struct FName*                                      Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAIObjectivePriorityComponent.ClearPriorities
struct UKSAIObjectivePriorityComponent_ClearPriorities_Params
{
};

// Function Killstreak.KSAIObjectivePriorityComponent.ApplyPrioritiesFromDifficulty
struct UKSAIObjectivePriorityComponent_ApplyPrioritiesFromDifficulty_Params
{
	class UDataTable**                                 ObjectivePriorityTableIn;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAIPerceptionComponent.GetCurrentlyPerceivedStimuli
struct UKSAIPerceptionComponent_GetCurrentlyPerceivedStimuli_Params
{
	class UClass**                                     SenseToUse;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKSStimulusEvent>                    Stimuli;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSAISense_Objective.ReportObjectiveEvent
struct UKSAISense_Objective_ReportObjectiveEvent_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ObjectiveLocation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Loudness;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxRange;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAkAmbientSound.StopAmbientSound
struct AKSAkAmbientSound_StopAmbientSound_Params
{
};

// Function Killstreak.KSAkAmbientSound.StopAllKSAmbientSounds
struct AKSAkAmbientSound_StopAllKSAmbientSounds_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAkAmbientSound.StartAmbientSound
struct AKSAkAmbientSound_StartAmbientSound_Params
{
};

// Function Killstreak.KSAkAmbientSound.StartAllKSAmbientSounds
struct AKSAkAmbientSound_StartAllKSAmbientSounds_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.ShouldShowViewedItemLabel
struct AKSItemDrop_ShouldShowViewedItemLabel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.SetInactiveStencilValue
struct AKSItemDrop_SetInactiveStencilValue_Params
{
	EPlayerSilhouetteType*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.SetActiveStencilValue
struct AKSItemDrop_SetActiveStencilValue_Params
{
	EPlayerSilhouetteType*                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.PlayDestroyedEffects
struct AKSItemDrop_PlayDestroyedEffects_Params
{
};

// Function Killstreak.KSItemDrop.PickUp
struct AKSItemDrop_PickUp_Params
{
	class AKSCharacter**                               Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.OverridePickupFunction
struct AKSItemDrop_OverridePickupFunction_Params
{
	struct FScriptDelegate*                            ItemPickupOverride;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSItemDrop.OnRootMeshDetached
struct AKSItemDrop_OnRootMeshDetached_Params
{
	class UKSStaticMeshComponent**                     ResponsibleMesh;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.OnRep_PendingPickupCharacter
struct AKSItemDrop_OnRep_PendingPickupCharacter_Params
{
};

// Function Killstreak.KSItemDrop.OnRep_ItemAsset
struct AKSItemDrop_OnRep_ItemAsset_Params
{
};

// Function Killstreak.KSItemDrop.OnRep_DropHidePlayer
struct AKSItemDrop_OnRep_DropHidePlayer_Params
{
};

// Function Killstreak.KSItemDrop.GetPickupDelegate
struct AKSItemDrop_GetPickupDelegate_Params
{
	struct FScriptDelegate                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, ReferenceParm)
};

// Function Killstreak.KSItemDrop.GetPendingPickupCharacter
struct AKSItemDrop_GetPendingPickupCharacter_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.GetLootSiteSpawnRotation
struct AKSItemDrop_GetLootSiteSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.GetLabelInfoForSecondaryTitle
struct AKSItemDrop_GetLabelInfoForSecondaryTitle_Params
{
	struct FText                                       LabelText;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.GetLabelInfoForPrimaryTitle
struct AKSItemDrop_GetLabelInfoForPrimaryTitle_Params
{
	struct FText                                       LabelText;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.GetItemAsset
struct AKSItemDrop_GetItemAsset_Params
{
	class UKSItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.CalculateRandomImpulse
struct AKSItemDrop_CalculateRandomImpulse_Params
{
	struct FVector                                     LinearImpulse;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AngularImpulse;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.AsyncItemGiveComplete
struct AKSItemDrop_AsyncItemGiveComplete_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    GivenObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItemDrop.ApplyRandomImpulse
struct AKSItemDrop_ApplyRandomImpulse_Params
{
};

// Function Killstreak.KSItemDrop.AllowPickup
struct AKSItemDrop_AllowPickup_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItem.SoftGiveToAsync
struct UKSItem_SoftGiveToAsync_Params
{
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	struct FScriptDelegate*                            GivenToEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.SoftCreateDropAsync
struct UKSItem_SoftCreateDropAsync_Params
{
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDropItemParameters*                        InDropItemParameters;                                     // (Parm)
	struct FScriptDelegate*                            ItemDroppedEvent;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bEnablePhysics;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InSpawnLinearVelocity;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    InSpawnAngularVelocity;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.SetCollectionContainer
struct UKSItem_SetCollectionContainer_Params
{
	struct FGameplayTagContainer*                      InContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSItem.InitNewlyCreatedItem
struct UKSItem_InitNewlyCreatedItem_Params
{
	int64_t*                                           InItemId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSItem.GiveToAsync
struct UKSItem_GiveToAsync_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	struct FScriptDelegate*                            GivenToEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.GiveTo
struct UKSItem_GiveTo_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	class UObject*                                     OutObject;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.GetTextureAsync
struct UKSItem_GetTextureAsync_Params
{
	struct FScriptDelegate*                            IconLoadedEvent;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSItem.GetSpecialItemWidgetClass
struct UKSItem_GetSpecialItemWidgetClass_Params
{
};

// Function Killstreak.KSItem.GetItemPrice
struct UKSItem_GetItemPrice_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.GetItemDropClass
struct UKSItem_GetItemDropClass_Params
{
};

// Function Killstreak.KSItem.GetItemDisplayStats
struct UKSItem_GetItemDisplayStats_Params
{
	TArray<struct FItemDisplayStat>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSItem.GetItemCategoryText
struct UKSItem_GetItemCategoryText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSItem.GetColorCode
struct UKSItem_GetColorCode_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.GetCollectionContainer
struct UKSItem_GetCollectionContainer_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSItem.CreateDropAsync
struct UKSItem_CreateDropAsync_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDropItemParameters*                        InDropItemParameters;                                     // (Parm)
	struct FScriptDelegate*                            ItemDroppedEvent;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bEnablePhysics;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InSpawnLinearVelocity;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    InSpawnAngularVelocity;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.CreateDrop
struct UKSItem_CreateDrop_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SpawnTransform;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FDropItemParameters*                        InDropItemParameters;                                     // (Parm)
	class AKSItemDrop*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.CanBePickedUpByCharacter
struct UKSItem_CanBePickedUpByCharacter_Params
{
	class AKSCharacter**                               PotentialOwner;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItem.CanBePickedUpBy
struct UKSItem_CanBePickedUpBy_Params
{
	class AActor**                                     PotentialOwner;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAmmoDropAsset.GetAmmoType
struct UKSAmmoDropAsset_GetAmmoType_Params
{
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAnimationAuditComponent.AnimAuditStop
struct UKSAnimationAuditComponent_AnimAuditStop_Params
{
	class UKSAnimInstance**                            AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bExportImmediately;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnimationAuditComponent.AnimAuditStart
struct UKSAnimationAuditComponent_AnimAuditStart_Params
{
	class UKSAnimInstance**                            AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnimationAuditComponent.AnimAuditClear
struct UKSAnimationAuditComponent_AnimAuditClear_Params
{
	class UKSAnimInstance**                            AnimInst;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnimInstance.Montage_JumpToRandomSection
struct UKSAnimInstance_Montage_JumpToRandomSection_Params
{
	TArray<struct FName>*                              SectionNames;                                             // (Parm, ZeroConstructor)
	class UAnimMontage**                               Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDisallowCurrentSection;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.ShouldPlayTimeAnnouncementFromGroup
struct AKSAnnouncer_ShouldPlayTimeAnnouncementFromGroup_Params
{
	TArray<struct FName>*                              Groups;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.QueueAnnouncementStruct
struct AKSAnnouncer_QueueAnnouncementStruct_Params
{
	struct FAnnouncement*                              Announcement;                                             // (Parm)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DelayProcessing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.QueueAnnouncement
struct AKSAnnouncer_QueueAnnouncement_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              AltAkEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Lifetime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Lockout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DelayProcessing;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.ProcessTimeAnnouncementList
struct AKSAnnouncer_ProcessTimeAnnouncementList_Params
{
	struct FTimeAnnouncementList                       TimeAnnouncementList;                                     // (Parm, OutParm, ReferenceParm)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.ProcessQueue
struct AKSAnnouncer_ProcessQueue_Params
{
};

// Function Killstreak.KSAnnouncer.OnMatchTimerUpdate
struct AKSAnnouncer_OnMatchTimerUpdate_Params
{
	float*                                             TimeInWholeSeconds;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.OnLockoutComplete
struct AKSAnnouncer_OnLockoutComplete_Params
{
};

// Function Killstreak.KSAnnouncer.OnLocalViewTargetMovementModeChanged
struct AKSAnnouncer_OnLocalViewTargetMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        OldMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     OldCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.OnLocalViewTargetChanged
struct AKSAnnouncer_OnLocalViewTargetChanged_Params
{
	class AKSPlayerController**                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.LocalPlayerControllerDestroyed
struct AKSAnnouncer_LocalPlayerControllerDestroyed_Params
{
	class AActor**                                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.GetTeamOverrideForAnnouncementGroup
struct AKSAnnouncer_GetTeamOverrideForAnnouncementGroup_Params
{
	TArray<struct FName>*                              Groups;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.GetPlayerController
struct AKSAnnouncer_GetPlayerController_Params
{
	class AKSPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAnnouncer.EventQueueInGame
struct AKSAnnouncer_EventQueueInGame_Params
{
};

// Function Killstreak.KSAnnouncer.EventLocalPlayerControllerDestroyed
struct AKSAnnouncer_EventLocalPlayerControllerDestroyed_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEquipment.Unequip
struct AKSEquipment_Unequip_Params
{
	bool*                                              bLocal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWillReequip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEquipment.SetEquipPoint
struct AKSEquipment_SetEquipPoint_Params
{
	struct FGameplayTag*                               InEquipPoint;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.OnUnequipped
struct AKSEquipment_OnUnequipped_Params
{
	bool*                                              bWillReequip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEquipment.OnRep_EquipPoint
struct AKSEquipment_OnRep_EquipPoint_Params
{
};

// Function Killstreak.KSEquipment.OnRep_EquipmentId
struct AKSEquipment_OnRep_EquipmentId_Params
{
};

// Function Killstreak.KSEquipment.OnEquipped
struct AKSEquipment_OnEquipped_Params
{
};

// Function Killstreak.KSEquipment.IsInitialized
struct AKSEquipment_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.IsInAction
struct AKSEquipment_IsInAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.IsEquipped
struct AKSEquipment_IsEquipped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.GetOriginalOwnerId
struct AKSEquipment_GetOriginalOwnerId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.GetKSItem
struct AKSEquipment_GetKSItem_Params
{
	class UKSItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.GetEquipPoint
struct AKSEquipment_GetEquipPoint_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSEquipment.GetEquipmentId
struct AKSEquipment_GetEquipmentId_Params
{
	uint16_t                                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.GetCosmeticComponent
struct AKSEquipment_GetCosmeticComponent_Params
{
	class UKSEquipmentCosmeticComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSEquipment.EquipNoPoint
struct AKSEquipment_EquipNoPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipment.Drop
struct AKSEquipment_Drop_Params
{
};

// Function Killstreak.KSWeapon.StopFireOnRelease
struct AKSWeapon_StopFireOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StopFire
struct AKSWeapon_StopFire_Params
{
};

// Function Killstreak.KSWeapon.StopDefaultAim
struct AKSWeapon_StopDefaultAim_Params
{
};

// Function Killstreak.KSWeapon.StopAltFire
struct AKSWeapon_StopAltFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StopAimOverShoulder
struct AKSWeapon_StopAimOverShoulder_Params
{
};

// Function Killstreak.KSWeapon.StopAimDownSights
struct AKSWeapon_StopAimDownSights_Params
{
};

// Function Killstreak.KSWeapon.StateRequestTimeoutExpired
struct AKSWeapon_StateRequestTimeoutExpired_Params
{
};

// Function Killstreak.KSWeapon.StartRetrieving
struct AKSWeapon_StartRetrieving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StartReload
struct AKSWeapon_StartReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StartHolstering
struct AKSWeapon_StartHolstering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StartFire
struct AKSWeapon_StartFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StartDefaultAim
struct AKSWeapon_StartDefaultAim_Params
{
};

// Function Killstreak.KSWeapon.StartAltFire
struct AKSWeapon_StartAltFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.StartAimOverShoulder
struct AKSWeapon_StartAimOverShoulder_Params
{
};

// Function Killstreak.KSWeapon.StartAimDownSights
struct AKSWeapon_StartAimDownSights_Params
{
};

// Function Killstreak.KSWeapon.SimulateConsumeAmmo
struct AKSWeapon_SimulateConsumeAmmo_Params
{
	int                                                AmmoInClipAfterConsume;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AmmoToConsumeFromInventory;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldStartReloadInterruptSprinting
struct AKSWeapon_ShouldStartReloadInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldStartHolsterInterruptSprinting
struct AKSWeapon_ShouldStartHolsterInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldStartFireInterruptSprinting
struct AKSWeapon_ShouldStartFireInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldStartFireInterruptAimDownSights
struct AKSWeapon_ShouldStartFireInterruptAimDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldConsumeAmmoDirectlyFromInventory
struct AKSWeapon_ShouldConsumeAmmoDirectlyFromInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ShouldBeRemovedWhenExhausted
struct AKSWeapon_ShouldBeRemovedWhenExhausted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.SetAutoSwapOutWeaponId
struct AKSWeapon_SetAutoSwapOutWeaponId_Params
{
	uint32_t*                                          OtherWeaponId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ServerRetrieveActiveWeapon
struct AKSWeapon_ServerRetrieveActiveWeapon_Params
{
	struct FWeaponStateChangeRequest*                  request;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeapon.ServerRequestStateChange
struct AKSWeapon_ServerRequestStateChange_Params
{
	struct FWeaponStateChangeRequest*                  request;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeapon.ServerPostReload
struct AKSWeapon_ServerPostReload_Params
{
	struct FWeaponStateChangeRequest*                  request;                                                  // (ConstParm, Parm, ReferenceParm)
	int*                                               AmmoDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ServerCookReleased
struct AKSWeapon_ServerCookReleased_Params
{
	struct FWeaponStateChangeRequest*                  request;                                                  // (ConstParm, Parm, ReferenceParm)
	float*                                             AdditionalCookTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.Reload
struct AKSWeapon_Reload_Params
{
};

// Function Killstreak.KSWeapon.ProcessHits
struct AKSWeapon_ProcessHits_Params
{
	struct FAimData*                                   ReceivedAim;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>*                         Hits;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSWeapon.PreLoadAmmo
struct AKSWeapon_PreLoadAmmo_Params
{
};

// Function Killstreak.KSWeapon.OwnerIsTransitioningAimState
struct AKSWeapon_OwnerIsTransitioningAimState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsSwimming
struct AKSWeapon_OwnerIsSwimming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsSprinting
struct AKSWeapon_OwnerIsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsReloadingAnyWeapon
struct AKSWeapon_OwnerIsReloadingAnyWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsMovingOnGround
struct AKSWeapon_OwnerIsMovingOnGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsLocallyViewed
struct AKSWeapon_OwnerIsLocallyViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsFreeFalling
struct AKSWeapon_OwnerIsFreeFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsFiringMeleeWeapon
struct AKSWeapon_OwnerIsFiringMeleeWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsDowned
struct AKSWeapon_OwnerIsDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerIsAlive
struct AKSWeapon_OwnerIsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OwnerHasAmmo
struct AKSWeapon_OwnerHasAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartRetrieving
struct AKSWeapon_OnStartRetrieving_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartReloadCooldown
struct AKSWeapon_OnStartReloadCooldown_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartPreReload
struct AKSWeapon_OnStartPreReload_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartPreFire
struct AKSWeapon_OnStartPreFire_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartPostReload
struct AKSWeapon_OnStartPostReload_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartPostFire
struct AKSWeapon_OnStartPostFire_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartInactive
struct AKSWeapon_OnStartInactive_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartHolstering
struct AKSWeapon_OnStartHolstering_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartCooldown
struct AKSWeapon_OnStartCooldown_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnStartBuildup
struct AKSWeapon_OnStartBuildup_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnRep_WeaponState
struct AKSWeapon_OnRep_WeaponState_Params
{
};

// Function Killstreak.KSWeapon.OnRep_WeaponAsset
struct AKSWeapon_OnRep_WeaponAsset_Params
{
};

// Function Killstreak.KSWeapon.OnRep_AuxiliaryWeaponInfo
struct AKSWeapon_OnRep_AuxiliaryWeaponInfo_Params
{
};

// Function Killstreak.KSWeapon.OnRep_AutoSwapOutWeaponId
struct AKSWeapon_OnRep_AutoSwapOutWeaponId_Params
{
};

// Function Killstreak.KSWeapon.OnRep_Ammo
struct AKSWeapon_OnRep_Ammo_Params
{
};

// Function Killstreak.KSWeapon.OnPostMantleLockoutEnd
struct AKSWeapon_OnPostMantleLockoutEnd_Params
{
};

// Function Killstreak.KSWeapon.OnOwnerMovementModeChangedNative
struct AKSWeapon_OnOwnerMovementModeChangedNative_Params
{
	TEnumAsByte<EMovementMode>*                        OldMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     OldCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnOwnerMovementModeChanged
struct AKSWeapon_OnOwnerMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        OldMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     OldCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndRetrieving
struct AKSWeapon_OnEndRetrieving_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndReloadCooldown
struct AKSWeapon_OnEndReloadCooldown_Params
{
	EWeaponStateNew*                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndPreReload
struct AKSWeapon_OnEndPreReload_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndPreFire
struct AKSWeapon_OnEndPreFire_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndPostReload
struct AKSWeapon_OnEndPostReload_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndPostFire
struct AKSWeapon_OnEndPostFire_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndInactive
struct AKSWeapon_OnEndInactive_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndIdleState
struct AKSWeapon_OnEndIdleState_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndHolstering
struct AKSWeapon_OnEndHolstering_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndCooldown
struct AKSWeapon_OnEndCooldown_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnEndBuildup
struct AKSWeapon_OnEndBuildup_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.OnBeginIdleState
struct AKSWeapon_OnBeginIdleState_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ModifyDamageDealt
struct AKSWeapon_ModifyDamageDealt_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsRetrieving
struct AKSWeapon_IsRetrieving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsReloading
struct AKSWeapon_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsInSprintRecovery
struct AKSWeapon_IsInSprintRecovery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsInReloadingLoop
struct AKSWeapon_IsInReloadingLoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsInFiringLoop
struct AKSWeapon_IsInFiringLoop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsInDodgeRollRecovery
struct AKSWeapon_IsInDodgeRollRecovery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsHolstering
struct AKSWeapon_IsHolstering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsFiring
struct AKSWeapon_IsFiring_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsExhausted
struct AKSWeapon_IsExhausted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsEquippedMelee
struct AKSWeapon_IsEquippedMelee_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsEquippedMainWeapon
struct AKSWeapon_IsEquippedMainWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsEquippedGrenade
struct AKSWeapon_IsEquippedGrenade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsClipFull
struct AKSWeapon_IsClipFull_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsClipEmpty
struct AKSWeapon_IsClipEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.IsActiveWeapon
struct AKSWeapon_IsActiveWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.InstantReload
struct AKSWeapon_InstantReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.HasAttachment
struct AKSWeapon_HasAttachment_Params
{
	class UKSWeaponAttachmentInstance**                InAttachment;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.HandleExhausted
struct AKSWeapon_HandleExhausted_Params
{
};

// Function Killstreak.KSWeapon.GetWeaponState
struct AKSWeapon_GetWeaponState_Params
{
	EWeaponStateNew                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetWeaponComponent
struct AKSWeapon_GetWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetWeaponAsset
struct AKSWeapon_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetWalkSpeedModifier
struct AKSWeapon_GetWalkSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetReloadCooldownTime
struct AKSWeapon_GetReloadCooldownTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetPreReloadTime
struct AKSWeapon_GetPreReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetPostReloadTime
struct AKSWeapon_GetPostReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetMovementAccuracyPenalty
struct AKSWeapon_GetMovementAccuracyPenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetMaxFiringAccuracyLoss
struct AKSWeapon_GetMaxFiringAccuracyLoss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetLimbDamageAmount
struct AKSWeapon_GetLimbDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetInAirAccuracyModifier
struct AKSWeapon_GetInAirAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetHeadDamageAmount
struct AKSWeapon_GetHeadDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetDamageInstigator
struct AKSWeapon_GetDamageInstigator_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetDamageFalloffRangeScaler
struct AKSWeapon_GetDamageFalloffRangeScaler_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetCrouchAccuracyModifier
struct AKSWeapon_GetCrouchAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetClipSize
struct AKSWeapon_GetClipSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetCharacterOwner
struct AKSWeapon_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetCanUseOffGround
struct AKSWeapon_GetCanUseOffGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetBaseDamageAmount
struct AKSWeapon_GetBaseDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetBaseAccuracy
struct AKSWeapon_GetBaseAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAttachments
struct AKSWeapon_GetAttachments_Params
{
	TArray<class UKSWeaponAttachment*>                 OutWeaponAttachments;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon.GetAttachmentInstances
struct AKSWeapon_GetAttachmentInstances_Params
{
	TArray<class UKSWeaponAttachmentInstance*>         OutWeaponAttachmentInstances;                             // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon.GetAttachment
struct AKSWeapon_GetAttachment_Params
{
	struct FGameplayTag*                               InAttachPoint;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	class UKSWeaponAttachmentInstance*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAmmoType
struct AKSWeapon_GetAmmoType_Params
{
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAmmoInOwnerInventory
struct AKSWeapon_GetAmmoInOwnerInventory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAmmoInClip
struct AKSWeapon_GetAmmoInClip_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAimOverShoulderAccuracyModifier
struct AKSWeapon_GetAimOverShoulderAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAimDownSightsFOV
struct AKSWeapon_GetAimDownSightsFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAccuracyReturnRate
struct AKSWeapon_GetAccuracyReturnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAccuracyReturnDelay
struct AKSWeapon_GetAccuracyReturnDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.GetAccuracyLossPerShot
struct AKSWeapon_GetAccuracyLossPerShot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.FireWeapon
struct AKSWeapon_FireWeapon_Params
{
};

// Function Killstreak.KSWeapon.EndState
struct AKSWeapon_EndState_Params
{
	EWeaponStateNew*                                   NextState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ConsumePendingFire
struct AKSWeapon_ConsumePendingFire_Params
{
};

// Function Killstreak.KSWeapon.ConsumeAmmo
struct AKSWeapon_ConsumeAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ClientStateChangeRejected
struct AKSWeapon_ClientStateChangeRejected_Params
{
	uint16_t*                                          nRequestId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   RestoreState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ClientStateChangeAccepted
struct AKSWeapon_ClientStateChangeAccepted_Params
{
	uint16_t*                                          nRequestId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ClientRecoverSeedMisalignment
struct AKSWeapon_ClientRecoverSeedMisalignment_Params
{
	uint16_t*                                          RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRandomStream*                              ServerStream;                                             // (Parm, ZeroConstructor)
};

// Function Killstreak.KSWeapon.ClientNotifyRecoveryFinish
struct AKSWeapon_ClientNotifyRecoveryFinish_Params
{
};

// Function Killstreak.KSWeapon.ClientForceUpdateAmmoInClip
struct AKSWeapon_ClientForceUpdateAmmoInClip_Params
{
	int*                                               NewAmmo;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.ClientForceIdleFromFire
struct AKSWeapon_ClientForceIdleFromFire_Params
{
};

// Function Killstreak.KSWeapon.ClientFixLastReload
struct AKSWeapon_ClientFixLastReload_Params
{
	uint16_t*                                          RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CheckExhausted
struct AKSWeapon_CheckExhausted_Params
{
};

// Function Killstreak.KSWeapon.CanUseAnAimStateNow
struct AKSWeapon_CanUseAnAimStateNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanToggleOutOfAimDownSightsNow
struct AKSWeapon_CanToggleOutOfAimDownSightsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanToggleIntoAimDownSightsNow
struct AKSWeapon_CanToggleIntoAimDownSightsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanStartReloadNow
struct AKSWeapon_CanStartReloadNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanStartFireNow
struct AKSWeapon_CanStartFireNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanRetrieveNow
struct AKSWeapon_CanRetrieveNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanReloadNowCommon
struct AKSWeapon_CanReloadNowCommon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanRefireNow
struct AKSWeapon_CanRefireNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanReceiveAttachment
struct AKSWeapon_CanReceiveAttachment_Params
{
	class UKSWeaponAttachment**                        InAttachment;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AvailableAttachPoints;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanInteractWith
struct AKSWeapon_CanInteractWith_Params
{
	class AActor**                                     InteractableTarget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanHolsterNow
struct AKSWeapon_CanHolsterNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanFireNowCommon
struct AKSWeapon_CanFireNowCommon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanEverReload
struct AKSWeapon_CanEverReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanEverAimOverShoulder
struct AKSWeapon_CanEverAimOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanEverAimDownSights
struct AKSWeapon_CanEverAimDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanEverAimAlternate
struct AKSWeapon_CanEverAimAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanDropNow
struct AKSWeapon_CanDropNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanCookNow
struct AKSWeapon_CanCookNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanContinueReloadNow
struct AKSWeapon_CanContinueReloadNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CancelHolstering
struct AKSWeapon_CancelHolstering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanBeSwappedTo
struct AKSWeapon_CanBeSwappedTo_Params
{
	bool*                                              bByForce;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanBeSwappedFrom
struct AKSWeapon_CanBeSwappedFrom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CanBeInterruptedNow
struct AKSWeapon_CanBeInterruptedNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CalculateDamageFromHitInfo
struct AKSWeapon_CalculateDamageFromHitInfo_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CalculateDamageFalloffFromHitResults
struct AKSWeapon_CalculateDamageFalloffFromHitResults_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.CalculateDamageFalloffFromDistance
struct AKSWeapon_CalculateDamageFalloffFromDistance_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.BeginState
struct AKSWeapon_BeginState_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.AltFireInitiated
struct AKSWeapon_AltFireInitiated_Params
{
};

// Function Killstreak.KSWeapon.AltFireEnded
struct AKSWeapon_AltFireEnded_Params
{
};

// Function Killstreak.KSWeapon.AllowSprintingRightNow
struct AKSWeapon_AllowSprintingRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.AllowDodgeRollRightNow
struct AKSWeapon_AllowDodgeRollRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.AimTransitionComplete
struct AKSWeapon_AimTransitionComplete_Params
{
	EKSCharacterAimMode*                               NewAimState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon.AbortReload
struct AKSWeapon_AbortReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon.AbortFire
struct AKSWeapon_AbortFire_Params
{
};

// Function Killstreak.KSArmor.GetDurability
struct AKSArmor_GetDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmor.GetArmorAsset
struct AKSArmor_GetArmorAsset_Params
{
	class UKSArmorAsset*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmor.CanAbsorbDamageType
struct AKSArmor_CanAbsorbDamageType_Params
{
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmor.CalcAbsorbRadialDamage
struct AKSArmor_CalcAbsorbRadialDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent*                         RadialDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmor.CalcAbsorbPointDamage
struct AKSArmor_CalcAbsorbPointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent*                          PointDamageEvent;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.TryToEquipToCharacterNoPointGiven
struct UKSWeaponAsset_TryToEquipToCharacterNoPointGiven_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	bool*                                              bAllowSyncLoad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.TryToEquipToCharacter
struct UKSWeaponAsset_TryToEquipToCharacter_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               InOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               EquipPoint;                                               // (Parm)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	bool*                                              bAllowSyncLoad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldUseBuildupForCooking
struct UKSWeaponAsset_ShouldUseBuildupForCooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldStartReloadInterruptSprinting
struct UKSWeaponAsset_ShouldStartReloadInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldStartHolsterInterruptSprinting
struct UKSWeaponAsset_ShouldStartHolsterInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldStartFireInterruptSprinting
struct UKSWeaponAsset_ShouldStartFireInterruptSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldPreventDodgeRollDuringFire
struct UKSWeaponAsset_ShouldPreventDodgeRollDuringFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldPrefireOverlapSkipToFire
struct UKSWeaponAsset_ShouldPrefireOverlapSkipToFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldLockonPrefire
struct UKSWeaponAsset_ShouldLockonPrefire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldLagCompensateFire
struct UKSWeaponAsset_ShouldLagCompensateFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldForceUprightDrops
struct UKSWeaponAsset_ShouldForceUprightDrops_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldDoRadialDamage
struct UKSWeaponAsset_ShouldDoRadialDamage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ShouldBeRemovedWhenExhausted
struct UKSWeaponAsset_ShouldBeRemovedWhenExhausted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.RequiresAnEquipPoint
struct UKSWeaponAsset_RequiresAnEquipPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.MakeKickbackCurve
struct UKSWeaponAsset_MakeKickbackCurve_Params
{
	int*                                               nShotIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AbsoluteMaxDuration;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInterpCurveVector2D                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.LockoutAimStateInCooldown
struct UKSWeaponAsset_LockoutAimStateInCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.LimitNumInPlay
struct UKSWeaponAsset_LimitNumInPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.IsUnique
struct UKSWeaponAsset_IsUnique_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.IsRadialDamageConical
struct UKSWeaponAsset_IsRadialDamageConical_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.IsGadget
struct UKSWeaponAsset_IsGadget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.IsAudible
struct UKSWeaponAsset_IsAudible_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.HasKickback
struct UKSWeaponAsset_HasKickback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetWeaponUpgrade
struct UKSWeaponAsset_GetWeaponUpgrade_Params
{
};

// Function Killstreak.KSWeaponAsset.GetWeaponType
struct UKSWeaponAsset_GetWeaponType_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponStats
struct UKSWeaponAsset_GetWeaponStats_Params
{
	TArray<struct FString>                             OutStats;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponAsset.GetWeaponNameAsString
struct UKSWeaponAsset_GetWeaponNameAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponName
struct UKSWeaponAsset_GetWeaponName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponDropClass
struct UKSWeaponAsset_GetWeaponDropClass_Params
{
};

// Function Killstreak.KSWeaponAsset.GetWeaponDescriptionAsString
struct UKSWeaponAsset_GetWeaponDescriptionAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponDescription
struct UKSWeaponAsset_GetWeaponDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponComponentClass
struct UKSWeaponAsset_GetWeaponComponentClass_Params
{
};

// Function Killstreak.KSWeaponAsset.GetWeaponClass
struct UKSWeaponAsset_GetWeaponClass_Params
{
};

// Function Killstreak.KSWeaponAsset.GetWeaponAttachmentPoints
struct UKSWeaponAsset_GetWeaponAttachmentPoints_Params
{
	struct FGameplayTagContainer                       OutAttachPoints;                                          // (Parm, OutParm)
};

// Function Killstreak.KSWeaponAsset.GetWeaponAmmoWidgetClass
struct UKSWeaponAsset_GetWeaponAmmoWidgetClass_Params
{
};

// Function Killstreak.KSWeaponAsset.GetWalkSpeedModifier
struct UKSWeaponAsset_GetWalkSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetVibrationEffect
struct UKSWeaponAsset_GetVibrationEffect_Params
{
};

// Function Killstreak.KSWeaponAsset.GetValidEquipPoints
struct UKSWeaponAsset_GetValidEquipPoints_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetValidAttachments
struct UKSWeaponAsset_GetValidAttachments_Params
{
};

// Function Killstreak.KSWeaponAsset.GetUseAltFire
struct UKSWeaponAsset_GetUseAltFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetUnlimitedAmmo
struct UKSWeaponAsset_GetUnlimitedAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetThirdPersonFixedRelativeOffset
struct UKSWeaponAsset_GetThirdPersonFixedRelativeOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetSprintRecoveryTime
struct UKSWeaponAsset_GetSprintRecoveryTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetSoftItemRenderImage
struct UKSWeaponAsset_GetSoftItemRenderImage_Params
{
};

// Function Killstreak.KSWeaponAsset.GetShotPenetrationCount
struct UKSWeaponAsset_GetShotPenetrationCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRoundsPerBurst
struct UKSWeaponAsset_GetRoundsPerBurst_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRetrieveTime
struct UKSWeaponAsset_GetRetrieveTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetReticleType
struct UKSWeaponAsset_GetReticleType_Params
{
	EReticleType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetReloadType
struct UKSWeaponAsset_GetReloadType_Params
{
	EReloadType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetReloadCooldownTime
struct UKSWeaponAsset_GetReloadCooldownTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRadialIgnoreWalls
struct UKSWeaponAsset_GetRadialIgnoreWalls_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRadialIgnoreSelf
struct UKSWeaponAsset_GetRadialIgnoreSelf_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRadialIgnoreFriendlies
struct UKSWeaponAsset_GetRadialIgnoreFriendlies_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetRadialDamageParams
struct UKSWeaponAsset_GetRadialDamageParams_Params
{
	struct FRadialDamageParams                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetRadialConicalHalfAngle
struct UKSWeaponAsset_GetRadialConicalHalfAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPreReloadTime
struct UKSWeaponAsset_GetPreReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPreFireTime
struct UKSWeaponAsset_GetPreFireTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPrefireSkipWindowNum
struct UKSWeaponAsset_GetPrefireSkipWindowNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPrefireSkipWindow
struct UKSWeaponAsset_GetPrefireSkipWindow_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPrefireSkipWindow                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAsset.GetPrefireOverlapGracePeriod
struct UKSWeaponAsset_GetPrefireOverlapGracePeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPrefireLockonDistance
struct UKSWeaponAsset_GetPrefireLockonDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPrefireLockonAngle
struct UKSWeaponAsset_GetPrefireLockonAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPreFireInterruptThreshold
struct UKSWeaponAsset_GetPreFireInterruptThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPostReloadTime
struct UKSWeaponAsset_GetPostReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPostFireTime
struct UKSWeaponAsset_GetPostFireTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetPostFireForgivenessTime
struct UKSWeaponAsset_GetPostFireForgivenessTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetOuterRadius
struct UKSWeaponAsset_GetOuterRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetMovementAccuracyPenalty
struct UKSWeaponAsset_GetMovementAccuracyPenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetMaxNumInPlay
struct UKSWeaponAsset_GetMaxNumInPlay_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetMaxFiringAccuracyLoss
struct UKSWeaponAsset_GetMaxFiringAccuracyLoss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetMaxFalloffDistance
struct UKSWeaponAsset_GetMaxFalloffDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetMaxCumulativeKickbackVerticalAngle
struct UKSWeaponAsset_GetMaxCumulativeKickbackVerticalAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetLimbDamageAmount
struct UKSWeaponAsset_GetLimbDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetKickbackResetTime
struct UKSWeaponAsset_GetKickbackResetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetKickbackRecoveryRate
struct UKSWeaponAsset_GetKickbackRecoveryRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetKickbackRecoveryDelay
struct UKSWeaponAsset_GetKickbackRecoveryDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetKickbackRecoveryAcceleration
struct UKSWeaponAsset_GetKickbackRecoveryAcceleration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetKickbackApplicationOverride
struct UKSWeaponAsset_GetKickbackApplicationOverride_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetInnerRadius
struct UKSWeaponAsset_GetInnerRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetInAirAccuracyModifier
struct UKSWeaponAsset_GetInAirAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetHolsterTime
struct UKSWeaponAsset_GetHolsterTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetHeadDamageAmount
struct UKSWeaponAsset_GetHeadDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetGamepadKickbackScaling
struct UKSWeaponAsset_GetGamepadKickbackScaling_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetFirstShotPreReloadTime
struct UKSWeaponAsset_GetFirstShotPreReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetFireModeType
struct UKSWeaponAsset_GetFireModeType_Params
{
	EFireModeType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetDodgeRollRecoveryTime
struct UKSWeaponAsset_GetDodgeRollRecoveryTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetDefaultAmmo
struct UKSWeaponAsset_GetDefaultAmmo_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetDefaultAimTransitionTime
struct UKSWeaponAsset_GetDefaultAimTransitionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetDamageTypeClass
struct UKSWeaponAsset_GetDamageTypeClass_Params
{
};

// Function Killstreak.KSWeaponAsset.GetDamageAmount
struct UKSWeaponAsset_GetDamageAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetCrouchAccuracyModifier
struct UKSWeaponAsset_GetCrouchAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetCooldownDownTime
struct UKSWeaponAsset_GetCooldownDownTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetConsumeAmmoDirectlyFromInventory
struct UKSWeaponAsset_GetConsumeAmmoDirectlyFromInventory_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetCompatibleAttachments
struct UKSWeaponAsset_GetCompatibleAttachments_Params
{
	TArray<class UKSWeaponAttachment*>                 OutAttachments;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponAsset.GetCompatibleAttachmentAssets
struct UKSWeaponAsset_GetCompatibleAttachmentAssets_Params
{
};

// Function Killstreak.KSWeaponAsset.GetClipSize
struct UKSWeaponAsset_GetClipSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetCautionRadius
struct UKSWeaponAsset_GetCautionRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetCanUseOffGround
struct UKSWeaponAsset_GetCanUseOffGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetBuildupTime
struct UKSWeaponAsset_GetBuildupTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetBaseRadialDamage
struct UKSWeaponAsset_GetBaseRadialDamage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetBaseAccuracy
struct UKSWeaponAsset_GetBaseAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAudibleRange
struct UKSWeaponAsset_GetAudibleRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAttachmentSlotCount
struct UKSWeaponAsset_GetAttachmentSlotCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAmmoType
struct UKSWeaponAsset_GetAmmoType_Params
{
	EAmmoType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAlternativeVibrationEffect
struct UKSWeaponAsset_GetAlternativeVibrationEffect_Params
{
};

// Function Killstreak.KSWeaponAsset.GetAlternativeVibrationAttenuation
struct UKSWeaponAsset_GetAlternativeVibrationAttenuation_Params
{
};

// Function Killstreak.KSWeaponAsset.GetAlternatePreFireTime
struct UKSWeaponAsset_GetAlternatePreFireTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAlternatePostFireTime
struct UKSWeaponAsset_GetAlternatePostFireTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAimOverShoulderTransitionTime
struct UKSWeaponAsset_GetAimOverShoulderTransitionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAimOverShoulderAccuracyModifier
struct UKSWeaponAsset_GetAimOverShoulderAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAimDownSightsTransitionTime
struct UKSWeaponAsset_GetAimDownSightsTransitionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAimDownSightsFOV
struct UKSWeaponAsset_GetAimDownSightsFOV_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAimAlternateTransitionTime
struct UKSWeaponAsset_GetAimAlternateTransitionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetADSSpeedModifier
struct UKSWeaponAsset_GetADSSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAccuracyReturnRate
struct UKSWeaponAsset_GetAccuracyReturnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAccuracyReturnDelay
struct UKSWeaponAsset_GetAccuracyReturnDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.GetAccuracyLossPerShot
struct UKSWeaponAsset_GetAccuracyLossPerShot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.DoesRestoreAmmo
struct UKSWeaponAsset_DoesRestoreAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CreateProjectile
struct UKSWeaponAsset_CreateProjectile_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             WeaponAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SpawnLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   SpawnRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDropItemParameters*                        InDropItemParameters;                                     // (Parm)
	class AKSWeapon**                                  SpawningWeapon;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     SpawningOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      SpawningInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.ConeHalfAngleToAccuracy
struct UKSWeaponAsset_ConeHalfAngleToAccuracy_Params
{
	float*                                             HalfAngle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanWeaponStateTransition
struct UKSWeaponAsset_CanWeaponStateTransition_Params
{
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanResetKickback
struct UKSWeaponAsset_CanResetKickback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanRecoverFromKickback
struct UKSWeaponAsset_CanRecoverFromKickback_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanReceiveAttachment
struct UKSWeaponAsset_CanReceiveAttachment_Params
{
	class UKSWeaponAttachment**                        InAttachment;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AvailableAttachPoints;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanModsReplenishAmmo
struct UKSWeaponAsset_CanModsReplenishAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanInterruptPreReload
struct UKSWeaponAsset_CanInterruptPreReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanEverReload
struct UKSWeaponAsset_CanEverReload_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanEverFire
struct UKSWeaponAsset_CanEverFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanEverAimOverShoulder
struct UKSWeaponAsset_CanEverAimOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanEverAimDownSights
struct UKSWeaponAsset_CanEverAimDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanEverAimAlternate
struct UKSWeaponAsset_CanEverAimAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CanBeDropped
struct UKSWeaponAsset_CanBeDropped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CalculateDamageFromProjectileHit
struct UKSWeaponAsset_CalculateDamageFromProjectileHit_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AKSProjectile**                              Projectile;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CalculateDamageFromInstantHit
struct UKSWeaponAsset_CalculateDamageFromInstantHit_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             DamageFalloffRangeScaler;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromProjectileHit
struct UKSWeaponAsset_CalculateDamageFalloffFromProjectileHit_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AKSProjectile**                              Projectile;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromHitResults
struct UKSWeaponAsset_CalculateDamageFalloffFromHitResults_Params
{
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             FalloffRangeScaler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.CalculateDamageFalloffFromDistance
struct UKSWeaponAsset_CalculateDamageFalloffFromDistance_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FalloffRangeScaler;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset.AccuracyToConeHalfAngle
struct UKSWeaponAsset_AccuracyToConeHalfAngle_Params
{
	float*                                             Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.GetMaxDurability
struct UKSArmorAsset_GetMaxDurability_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.GetDisplayLevel
struct UKSArmorAsset_GetDisplayLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.GetDamageAbsorbPercent
struct UKSArmorAsset_GetDamageAbsorbPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.DoesAbsorbBreakingHit
struct UKSArmorAsset_DoesAbsorbBreakingHit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.CalcAbsorbRadialDamage
struct UKSArmorAsset_CalcAbsorbRadialDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRadialDamageEvent*                         RadialDamageEvent;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSArmorAsset.CalcAbsorbPointDamage
struct UKSArmorAsset_CalcAbsorbPointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPointDamageEvent*                          PointDamageEvent;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.SetBundledAmmoToDefault
struct AKSWeaponAssetDrop_SetBundledAmmoToDefault_Params
{
};

// Function Killstreak.KSWeaponAssetDrop.OverrideDropAmmo
struct AKSWeaponAssetDrop_OverrideDropAmmo_Params
{
	int*                                               ReserveAmmo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.OnReturnProjectileStopped
struct AKSWeaponAssetDrop_OnReturnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.OnRep_ReturnProjectile
struct AKSWeaponAssetDrop_OnRep_ReturnProjectile_Params
{
};

// Function Killstreak.KSWeaponAssetDrop.GetWeaponComponent
struct AKSWeaponAssetDrop_GetWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.GetWeaponAsset
struct AKSWeaponAssetDrop_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.GetReturnProjectile
struct AKSWeaponAssetDrop_GetReturnProjectile_Params
{
	class AKSProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.GetLabelInfoForFireModeType
struct AKSWeaponAssetDrop_GetLabelInfoForFireModeType_Params
{
	EFireModeType                                      FireModeType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.GetLabelInfoForAmmoType
struct AKSWeaponAssetDrop_GetLabelInfoForAmmoType_Params
{
	EAmmoType                                          AmmoType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.BroadcastPickupFailedInventoryFull
struct AKSWeaponAssetDrop_BroadcastPickupFailedInventoryFull_Params
{
	class AKSCharacter**                               Receiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponAssetDrop.AddAttachment
struct AKSWeaponAssetDrop_AddAttachment_Params
{
	class UKSWeaponAttachment**                        InAttachment;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSNeutralBombDrop.OnNeutralBombStateChanged
struct AKSNeutralBombDrop_OnNeutralBombStateChanged_Params
{
	struct FKSNeutralBombState*                        NewState;                                                 // (Parm)
};

// Function Killstreak.KSNeutralBombDrop.IsSpottedByTeam
struct AKSNeutralBombDrop_IsSpottedByTeam_Params
{
	class AKSTeamState**                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSNeutralBombDrop.IsSpottedByPlayer
struct AKSNeutralBombDrop_IsSpottedByPlayer_Params
{
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSNeutralBombDrop.ExplodeCosmetic
struct AKSNeutralBombDrop_ExplodeCosmetic_Params
{
};

// Function Killstreak.KSNeutralBombDrop.Explode
struct AKSNeutralBombDrop_Explode_Params
{
};

// Function Killstreak.KSObjectiveBase.SetState
struct AKSObjectiveBase_SetState_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.ResetState
struct AKSObjectiveBase_ResetState_Params
{
	bool*                                              ClearOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.OnRep_ObjectiveState
struct AKSObjectiveBase_OnRep_ObjectiveState_Params
{
};

// Function Killstreak.KSObjectiveBase.OnRep_ObjectiveId
struct AKSObjectiveBase_OnRep_ObjectiveId_Params
{
};

// Function Killstreak.KSObjectiveBase.HandleNewState
struct AKSObjectiveBase_HandleNewState_Params
{
};

// Function Killstreak.KSObjectiveBase.GetOwningTeamOrPlayer
struct AKSObjectiveBase_GetOwningTeamOrPlayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.GetObjectiveMeterProgressTotal
struct AKSObjectiveBase_GetObjectiveMeterProgressTotal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.GetObjectiveMeterProgress
struct AKSObjectiveBase_GetObjectiveMeterProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.GetObjectiveId
struct AKSObjectiveBase_GetObjectiveId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.GetObjectiveDisplayName
struct AKSObjectiveBase_GetObjectiveDisplayName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSObjectiveBase.GetObjectiveDisplayLabel
struct AKSObjectiveBase_GetObjectiveDisplayLabel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSObjectiveBase.GetCurrentState
struct AKSObjectiveBase_GetCurrentState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.CanChangeState
struct AKSObjectiveBase_CanChangeState_Params
{
	struct FName*                                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NewOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSObjectiveBase.AssignObjectiveId
struct AKSObjectiveBase_AssignObjectiveId_Params
{
	int*                                               NewId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSExtractionComputer.OnTeamSidesFlipped
struct AKSExtractionComputer_OnTeamSidesFlipped_Params
{
};

// Function Killstreak.KSExtractionComputer.NotifyBotsOfHackedState
struct AKSExtractionComputer_NotifyBotsOfHackedState_Params
{
};

// Function Killstreak.KSExtractionComputer.LocalHoverStateChanged
struct AKSExtractionComputer_LocalHoverStateChanged_Params
{
	bool*                                              bIsHovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSExtractionComputer.InteractionEndOverlap
struct AKSExtractionComputer_InteractionEndOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSExtractionComputer.InteractionComplete
struct AKSExtractionComputer_InteractionComplete_Params
{
};

// Function Killstreak.KSAvenger.StoreCombatInfo
struct UKSAvenger_StoreCombatInfo_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
};

// Function Killstreak.KSAvenger.RemoveTracker
struct UKSAvenger_RemoveTracker_Params
{
	struct FPlayerCombatInfo*                          CurrentTrackPlayer;                                       // (Parm)
};

// Function Killstreak.KSAvenger.CheckPlayerTrackers
struct UKSAvenger_CheckPlayerTrackers_Params
{
	class AKSPlayerState**                             Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSAwardsManager.GetAchievementActivityInstances
struct UKSAwardsManager_GetAchievementActivityInstances_Params
{
	TArray<class UKSActivityInstance*>                 Instances;                                                // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBanner.GetSoftSmallBannerIcon
struct UKSBanner_GetSoftSmallBannerIcon_Params
{
};

// Function Killstreak.KSBanner.GetSoftLargeBannerIcon
struct UKSBanner_GetSoftLargeBannerIcon_Params
{
};

// Function Killstreak.KSFXCurveComponent.UpdateScalarTrack
struct UKSFXCurveComponent_UpdateScalarTrack_Params
{
	struct FName*                                      TrackName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TrackValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFXCurveComponent.UpdateColorTrack
struct UKSFXCurveComponent_UpdateColorTrack_Params
{
	struct FName*                                      TrackName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TrackValue;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFXCurveComponent.Stop
struct UKSFXCurveComponent_Stop_Params
{
};

// Function Killstreak.KSFXCurveComponent.Reverse
struct UKSFXCurveComponent_Reverse_Params
{
};

// Function Killstreak.KSFXCurveComponent.ResetTime
struct UKSFXCurveComponent_ResetTime_Params
{
};

// Function Killstreak.KSFXCurveComponent.Play
struct UKSFXCurveComponent_Play_Params
{
};

// Function Killstreak.KSFXCurveComponent.IsPlaying
struct UKSFXCurveComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSFXCurveComponent.GetFxID
struct UKSFXCurveComponent_GetFxID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSFXCurveComponent.GetCharacterOwner
struct UKSFXCurveComponent_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBloodSplatterComponent.AddDamageInstance
struct UKSBloodSplatterComponent_AddDamageInstance_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.SetInteractability
struct AKSBlueprintableInteractable_SetInteractability_Params
{
	bool*                                              NewInteractable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.InterruptInteraction
struct AKSBlueprintableInteractable_InterruptInteraction_Params
{
	class AKSCharacter**                               InteractingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.InterruptAllInteractions
struct AKSBlueprintableInteractable_InterruptAllInteractions_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.InternalCanInteractOnPress
struct AKSBlueprintableInteractable_InternalCanInteractOnPress_Params
{
	class AKSCharacter**                               InteractingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.InternalCanInteractOnHold
struct AKSBlueprintableInteractable_InternalCanInteractOnHold_Params
{
	class AKSCharacter**                               InteractingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionStarted
struct AKSBlueprintableInteractable_BlueprintInteractionStarted_Params
{
	class AKSCharacter**                               InteractingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDuration;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionPoint
struct AKSBlueprintableInteractable_BlueprintInteractionPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.BlueprintInteractionEnded
struct AKSBlueprintableInteractable_BlueprintInteractionEnded_Params
{
	class AKSCharacter**                               InteractingCharacter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintableInteractable.AddOutlinedPrimitiveComponent
struct AKSBlueprintableInteractable_AddOutlinedPrimitiveComponent_Params
{
	class UPrimitiveComponent**                        InComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.TryToStartCarry
struct UKSBlueprintFunctionLibrary_TryToStartCarry_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UKSCarriedInterface>*       CarriedObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               InHauler;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SpawnTracerEmitterWithRotation
struct UKSBlueprintFunctionLibrary_SpawnTracerEmitterWithRotation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerParticleSystemComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SpawnTracerEmitter
struct UKSBlueprintFunctionLibrary_SpawnTracerEmitter_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerParticleSystemComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SpawnMeshTracerWithRotation
struct UKSBlueprintFunctionLibrary_SpawnMeshTracerWithRotation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  FriendlyMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance**                          EnemyMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerStaticMeshComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SpawnMeshTracer
struct UKSBlueprintFunctionLibrary_SpawnMeshTracer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  FriendlyMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance**                          EnemyMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerStaticMeshComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SpawnImpactDecalAtLocation
struct UKSBlueprintFunctionLibrary_SpawnImpactDecalAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         DecalMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DecalSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             LifeSpan;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ShouldDropshipDoorBeOpen
struct UKSBlueprintFunctionLibrary_ShouldDropshipDoorBeOpen_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.SetupSkeletalMeshLODReductionGroups
struct UKSBlueprintFunctionLibrary_SetupSkeletalMeshLODReductionGroups_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FSkeletalMeshMaterialToReductionGroup>* InReductionGroupMap;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ResetRenderTargetBuffer
struct UKSBlueprintFunctionLibrary_ResetRenderTargetBuffer_Params
{
};

// Function Killstreak.KSBlueprintFunctionLibrary.RemoveRowFromLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_RemoveRowFromLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.QuickMeshMerge
struct UKSBlueprintFunctionLibrary_QuickMeshMerge_Params
{
	TArray<class USkeletalMesh*>*                      SourceMeshList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class USkeletalMesh*                               OutMesh;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ProcessTakePointHitDamage
struct UKSBlueprintFunctionLibrary_ProcessTakePointHitDamage_Params
{
	class AKSCharacter**                               HitCharacter;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    RelativeHitLocation;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    RelativeHitNormal;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldHitLocation;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldHitNormal;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorToHitSource;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection                               HitDirection;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.PrintStringInShipping
struct UKSBlueprintFunctionLibrary_PrintStringInShipping_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    inString;                                                 // (Parm, ZeroConstructor)
	bool*                                              bPrintToScreen;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrintToLog;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TextColor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.PostEventKS
struct UKSBlueprintFunctionLibrary_PostEventKS_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CallbackMask;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            PostEventCallback;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	EOcclusionType*                                    OcclusionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.PostEvent
struct UKSBlueprintFunctionLibrary_PostEvent_Params
{
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    GameObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.PlayWorldCameraShake1P3P
struct UKSBlueprintFunctionLibrary_PlayWorldCameraShake1P3P_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Shake1P;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Shake3P;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Epicenter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InnerRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OuterRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Falloff;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bOrientShakeTowardsEpicenter;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.MakeActivityReference
struct UKSBlueprintFunctionLibrary_MakeActivityReference_Params
{
	int64_t*                                           ReferenceValue1;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           ReferenceValue2;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int64_t*                                           ReferenceValue3;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActivityReference                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.KSConvertRenderTargetToTexture2D
struct UKSBlueprintFunctionLibrary_KSConvertRenderTargetToTexture2D_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D**                     RenderTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D**                                 Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ItemHasToggleRelationship
struct UKSBlueprintFunctionLibrary_ItemHasToggleRelationship_Params
{
	struct FShopItem*                                  Item;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<EShopItemType>*                             ValidShopTypes;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsViewportWorld
struct UKSBlueprintFunctionLibrary_IsViewportWorld_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsRecurringDamageTypeClass
struct UKSBlueprintFunctionLibrary_IsRecurringDamageTypeClass_Params
{
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsRecurringDamageType
struct UKSBlueprintFunctionLibrary_IsRecurringDamageType_Params
{
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsRecurringDamageCategory
struct UKSBlueprintFunctionLibrary_IsRecurringDamageCategory_Params
{
	EDamageCategory*                                   DamageCategory;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsKillCamWorld
struct UKSBlueprintFunctionLibrary_IsKillCamWorld_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsItemAvailable
struct UKSBlueprintFunctionLibrary_IsItemAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsInViewportWorld
struct UKSBlueprintFunctionLibrary_IsInViewportWorld_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsInKillCamWorld
struct UKSBlueprintFunctionLibrary_IsInKillCamWorld_Params
{
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsChunkInstalling
struct UKSBlueprintFunctionLibrary_IsChunkInstalling_Params
{
	int*                                               ChunkId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsChunkAvailable
struct UKSBlueprintFunctionLibrary_IsChunkAvailable_Params
{
	int*                                               ChunkId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsAssetAvailable
struct UKSBlueprintFunctionLibrary_IsAssetAvailable_Params
{
	struct FAssetData*                                 AssetData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.IsAnyChunkInstalling
struct UKSBlueprintFunctionLibrary_IsAnyChunkInstalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.HideOutline
struct UKSBlueprintFunctionLibrary_HideOutline_Params
{
	class UPrimitiveComponent**                        TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetTeammatesFor
struct UKSBlueprintFunctionLibrary_GetTeammatesFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIncludeSelf;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AKSCharacter*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetTeamFor
struct UKSBlueprintFunctionLibrary_GetTeamFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSTeamState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetSkeletalMeshSettingsLODNum
struct UKSBlueprintFunctionLibrary_GetSkeletalMeshSettingsLODNum_Params
{
	class USkeletalMeshLODSettings**                   SkeletalMeshLODSettings;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetSkeletalMeshLODNum
struct UKSBlueprintFunctionLibrary_GetSkeletalMeshLODNum_Params
{
	class USkeletalMesh**                              SkeletalMesh;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetSideForTeam
struct UKSBlueprintFunctionLibrary_GetSideForTeam_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetScreenSpaceAccuracyRadius
struct UKSBlueprintFunctionLibrary_GetScreenSpaceAccuracyRadius_Params
{
	class APlayerController**                          PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ViewPortRadius;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetOutlineParameters
struct UKSBlueprintFunctionLibrary_GetOutlineParameters_Params
{
	EPlayerSilhouetteType*                             ColorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHideWhenOccluded;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldFill;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsHot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFriendly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSOutlineParameters                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetOutlineCustomDepth
struct UKSBlueprintFunctionLibrary_GetOutlineCustomDepth_Params
{
	EPlayerSilhouetteType*                             ColorType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHideWhenOccluded;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShouldFill;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsHot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFriendly;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetNumEventAssistantsForCombatEvent
struct UKSBlueprintFunctionLibrary_GetNumEventAssistantsForCombatEvent_Params
{
	struct FCombatEventInfo                            CombatEvent;                                              // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetNumberOfEmittersInSystem
struct UKSBlueprintFunctionLibrary_GetNumberOfEmittersInSystem_Params
{
	class UParticleSystemComponent**                   SystemComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetMinimapTextureForMap
struct UKSBlueprintFunctionLibrary_GetMinimapTextureForMap_Params
{
	struct FString*                                    mapName;                                                  // (Parm, ZeroConstructor)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetMiniMapAssistant
struct UKSBlueprintFunctionLibrary_GetMiniMapAssistant_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSMiniMapAssistant*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetMeshOffsetForSimulatedCharacter
struct UKSBlueprintFunctionLibrary_GetMeshOffsetForSimulatedCharacter_Params
{
	class AKSCharacter**                               SimulatedCharacter;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetLocalPlayerController
struct UKSBlueprintFunctionLibrary_GetLocalPlayerController_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameState_RoundGame
struct UKSBlueprintFunctionLibrary_GetKSGameState_RoundGame_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameState_RoundGame*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameState_NeutralBomb
struct UKSBlueprintFunctionLibrary_GetKSGameState_NeutralBomb_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameState_NeutralBomb*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameState_Extraction
struct UKSBlueprintFunctionLibrary_GetKSGameState_Extraction_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameState_Extraction*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameState
struct UKSBlueprintFunctionLibrary_GetKSGameState_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameMode_RoundGame
struct UKSBlueprintFunctionLibrary_GetKSGameMode_RoundGame_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameMode_RoundGame*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameMode_Extraction
struct UKSBlueprintFunctionLibrary_GetKSGameMode_Extraction_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameMode_Extraction*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKSGameMode
struct UKSBlueprintFunctionLibrary_GetKSGameMode_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSGameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKillCamForPlayer
struct UKSBlueprintFunctionLibrary_GetKillCamForPlayer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSKillCam*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetKillCamActorGuidFor
struct UKSBlueprintFunctionLibrary_GetKillCamActorGuidFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetEventAssistantAtIndexForCombatEvent
struct UKSBlueprintFunctionLibrary_GetEventAssistantAtIndexForCombatEvent_Params
{
	struct FCombatEventInfo                            CombatEvent;                                              // (Parm, OutParm)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetEnemyTeamsFor
struct UKSBlueprintFunctionLibrary_GetEnemyTeamsFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AKSTeamState*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetEnemiesFor
struct UKSBlueprintFunctionLibrary_GetEnemiesFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AKSCharacter*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetEndTraceLocation
struct UKSBlueprintFunctionLibrary_GetEndTraceLocation_Params
{
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetCurrentFrameTimestamp
struct UKSBlueprintFunctionLibrary_GetCurrentFrameTimestamp_Params
{
	struct FDateTime                                   Timestamp;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetAnimMontageSectionLength
struct UKSBlueprintFunctionLibrary_GetAnimMontageSectionLength_Params
{
	class UAnimMontage**                               TargetMontage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetAllWeaponComponents
struct UKSBlueprintFunctionLibrary_GetAllWeaponComponents_Params
{
	TScriptInterface<class UKSEquipmentContainerOwner>* Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSWeaponComponent*>                  OutWeaponComponents;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetAllItemTableElements
struct UKSBlueprintFunctionLibrary_GetAllItemTableElements_Params
{
	class UDataTable**                                 InDataTable;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               OutRowNames;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<struct FItemTableElement>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.GetAllEquipment
struct UKSBlueprintFunctionLibrary_GetAllEquipment_Params
{
	TScriptInterface<class UKSEquipmentContainerOwner>* Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             OutEquipment;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSBlueprintFunctionLibrary.FadeIn
struct UKSBlueprintFunctionLibrary_FadeIn_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             FadeInDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ExportCSVData
struct UKSBlueprintFunctionLibrary_ExportCSVData_Params
{
	struct FString*                                    Filename;                                                 // (Parm, ZeroConstructor)
	TArray<struct FKSCSVRow>*                          CSVRows;                                                  // (Parm, ZeroConstructor)
	bool*                                              AppendTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AllowOverwriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    SaveDirectory;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.CreateSphereComponentFor
struct UKSBlueprintFunctionLibrary_CreateSphereComponentFor_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Owner;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (Parm, IsPlainOldData)
	class USphereComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.ApplyOutlineParameters
struct UKSBlueprintFunctionLibrary_ApplyOutlineParameters_Params
{
	struct FKSOutlineParameters*                       OutlineParameters;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent**                        TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddStaticMeshToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddStaticMeshToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddSkeletalMeshToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddSkeletalMeshToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh**                              Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddRowToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddRowToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHardAssetTableRow*                         Row;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddParticleSystemToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddParticleSystemToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddMaterialInterfaceToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddMaterialInterfaceToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface**                         Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddClassToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddClassToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddAudioEventToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddAudioEventToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBlueprintFunctionLibrary.AddAnimationAssetToLegacyAssetDataTable
struct UKSBlueprintFunctionLibrary_AddAnimationAssetToLegacyAssetDataTable_Params
{
	class UDataTable**                                 DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset**                            Asset;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.Spawn
struct AKSBotFactory_Spawn_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AKSAIController*>                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSBotFactory.ShuffleSpawnPoints
struct AKSBotFactory_ShuffleSpawnPoints_Params
{
};

// Function Killstreak.KSBotFactory.SetWayPointSet
struct AKSBotFactory_SetWayPointSet_Params
{
	class AKSWayPointSet**                             InWPS;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.SetSpawnPoints
struct AKSBotFactory_SetSpawnPoints_Params
{
	TArray<class APlayerStart*>*                       InPlayerStarts;                                           // (Parm, ZeroConstructor)
};

// Function Killstreak.KSBotFactory.SetSideNum
struct AKSBotFactory_SetSideNum_Params
{
	int*                                               InSideNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.SetShouldReverseWayPointSetDirection
struct AKSBotFactory_SetShouldReverseWayPointSetDirection_Params
{
	bool*                                              InShouldReverse;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.SetBotSpawnCollection
struct AKSBotFactory_SetBotSpawnCollection_Params
{
	class UKSBotDefinitionCollection**                 InSpawnCollection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnSpawnedBotDestroyed
struct AKSBotFactory_OnSpawnedBotDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnRoundStart
struct AKSBotFactory_OnRoundStart_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSBotFactory.OnRoundSetup
struct AKSBotFactory_OnRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSBotFactory.OnRelevancyOverlapEnd
struct AKSBotFactory_OnRelevancyOverlapEnd_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnRelevancyOverlapBegin
struct AKSBotFactory_OnRelevancyOverlapBegin_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnPhaseChanged
struct AKSBotFactory_OnPhaseChanged_Params
{
	struct FName*                                      PreviousPhaseName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnExtractionPhaseTimeout
struct AKSBotFactory_OnExtractionPhaseTimeout_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBotFactory.OnAllPlayersFinishedPrePrep
struct AKSBotFactory_OnAllPlayersFinishedPrePrep_Params
{
};

// Function Killstreak.KSBotFactory.OnAlarmPeriodStart
struct AKSBotFactory_OnAlarmPeriodStart_Params
{
};

// Function Killstreak.KSBotFactory.GetTeamSize
struct AKSBotFactory_GetTeamSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBuild.YieldToRealTimerExpired
struct AKSBuild_YieldToRealTimerExpired_Params
{
};

// Function Killstreak.KSBuild.SelfDestructAfterDelay
struct AKSBuild_SelfDestructAfterDelay_Params
{
};

// Function Killstreak.KSBuild.SelfDestruct
struct AKSBuild_SelfDestruct_Params
{
};

// Function Killstreak.KSBuild.OnSelfDestructDelayStart
struct AKSBuild_OnSelfDestructDelayStart_Params
{
};

// Function Killstreak.KSBuild.OnSelfDestruct
struct AKSBuild_OnSelfDestruct_Params
{
};

// Function Killstreak.KSBuild.OnRep_Health
struct AKSBuild_OnRep_Health_Params
{
};

// Function Killstreak.KSBuild.OnRadialDamageTaken
struct AKSBuild_OnRadialDamageTaken_Params
{
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBuild.OnPointDamageTaken
struct AKSBuild_OnPointDamageTaken_Params
{
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      HitBone;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBuild.OnHealthChanged
struct AKSBuild_OnHealthChanged_Params
{
};

// Function Killstreak.KSBuild.OnBuildComponentDestroyed
struct AKSBuild_OnBuildComponentDestroyed_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBuild.GetRealActorTakeoverDelay
struct AKSBuild_GetRealActorTakeoverDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBuild.GetPlayerStateOwner
struct AKSBuild_GetPlayerStateOwner_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBuild.GetOutlineableMeshes
struct AKSBuild_GetOutlineableMeshes_Params
{
	TArray<class UPrimitiveComponent*>                 OutMeshes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSBuild.GetCharacterOwner
struct AKSBuild_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBuild.DestroyBuildComponent
struct AKSBuild_DestroyBuildComponent_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBuild.ComponentTakeDamage
struct AKSBuild_ComponentTakeDamage_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSBuild.BroadcastSelfDestructStart
struct AKSBuild_BroadcastSelfDestructStart_Params
{
};

// Function Killstreak.KSBuild.BroadcastSelfDestruct
struct AKSBuild_BroadcastSelfDestruct_Params
{
};

// Function Killstreak.KSBuild.BroadcastDestroyBuildComponent
struct AKSBuild_BroadcastDestroyBuildComponent_Params
{
	class UPrimitiveComponent**                        PrimitiveComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSBuild_APS.OnRep_Active
struct AKSBuild_APS_OnRep_Active_Params
{
};

// Function Killstreak.KSBuild_APS.OnProjectileIntercepted
struct AKSBuild_APS_OnProjectileIntercepted_Params
{
	struct FVector*                                    InterceptedProjectileLocation;                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBuild_APS.OnDeactivated
struct AKSBuild_APS_OnDeactivated_Params
{
};

// Function Killstreak.KSBuild_APS.OnActorOverlapBegin
struct AKSBuild_APS_OnActorOverlapBegin_Params
{
	class AActor**                                     OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSBuild_APS.OnActivated
struct AKSBuild_APS_OnActivated_Params
{
};

// Function Killstreak.KSBuild_APS.BroadcastProjectileIntercept
struct AKSBuild_APS_BroadcastProjectileIntercept_Params
{
	class AKSProjectile**                              DestroyedProjectile;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BackupLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCarriedInterface.StopActiveCarry
struct UKSCarriedInterface_StopActiveCarry_Params
{
};

// Function Killstreak.KSCarriedInterface.IsBeingCarriedRightNow
struct UKSCarriedInterface_IsBeingCarriedRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCarriedInterface.GetHauler
struct UKSCarriedInterface_GetHauler_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCarriedInterface.GetAsActor
struct UKSCarriedInterface_GetAsActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCarriedInterface.CanBeCarriedByRightNow
struct UKSCarriedInterface_CanBeCarriedByRightNow_Params
{
	class AKSCharacter**                               InHauler;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCarriedInterface.CanBeCarriedBy
struct UKSCarriedInterface_CanBeCarriedBy_Params
{
	class AKSCharacter**                               InHauler;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCashDrop.EndOverlap
struct AKSCashDrop_EndOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCashDrop.BeginOverlap
struct AKSCashDrop_BeginOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSCashExtractionPoint.StateTimerExpired
struct AKSCashExtractionPoint_StateTimerExpired_Params
{
};

// Function Killstreak.KSCashExtractionPoint.ShouldShowLabel
struct AKSCashExtractionPoint_ShouldShowLabel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCashExtractionPoint.OnRep_ContainedCash
struct AKSCashExtractionPoint_OnRep_ContainedCash_Params
{
};

// Function Killstreak.KSCashExtractionPoint.HideCashPoint
struct AKSCashExtractionPoint_HideCashPoint_Params
{
};

// Function Killstreak.KSCashExtractionPoint.GetRemainingTimeInState
struct AKSCashExtractionPoint_GetRemainingTimeInState_Params
{
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCashExtractionPoint.ActivateCashPoint
struct AKSCashExtractionPoint_ActivateCashPoint_Params
{
};

// Function Killstreak.KSCharacterBase.UpdateDebugHealthVisibility
struct AKSCharacterBase_UpdateDebugHealthVisibility_Params
{
};

// Function Killstreak.KSCharacterBase.UnSubmerge
struct AKSCharacterBase_UnSubmerge_Params
{
	bool*                                              bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.Submerge
struct AKSCharacterBase_Submerge_Params
{
	bool*                                              bClientSimulation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.StopSprint
struct AKSCharacterBase_StopSprint_Params
{
	bool*                                              bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.StopRegenerationTimers
struct AKSCharacterBase_StopRegenerationTimers_Params
{
};

// Function Killstreak.KSCharacterBase.StartSprint
struct AKSCharacterBase_StartSprint_Params
{
};

// Function Killstreak.KSCharacterBase.StartCameraShake
struct AKSCharacterBase_StartCameraShake_Params
{
	class UClass**                                     ShakeClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCameraShake*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.ShowDebugLocation
struct AKSCharacterBase_ShowDebugLocation_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.SetRevealed
struct AKSCharacterBase_SetRevealed_Params
{
	bool*                                              Reveal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.SetHealth
struct AKSCharacterBase_SetHealth_Params
{
	float*                                             NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.RevealToWholeTeam
struct AKSCharacterBase_RevealToWholeTeam_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Revealer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerSilhouetteType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Fill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Mark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.RevealForDuration
struct AKSCharacterBase_RevealForDuration_Params
{
	float*                                             RevealTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.Reveal
struct AKSCharacterBase_Reveal_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Revealer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerSilhouetteType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Fill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Mark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRevealInfo                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacterBase.ResetHealthRegeneration
struct AKSCharacterBase_ResetHealthRegeneration_Params
{
};

// Function Killstreak.KSCharacterBase.ResetHealthRegenDelay
struct AKSCharacterBase_ResetHealthRegenDelay_Params
{
};

// Function Killstreak.KSCharacterBase.ResetFreeFallState
struct AKSCharacterBase_ResetFreeFallState_Params
{
};

// Function Killstreak.KSCharacterBase.RemoveCameraShake
struct AKSCharacterBase_RemoveCameraShake_Params
{
	class UCameraShake**                               CameraShake;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.OverhealDecayTick
struct AKSCharacterBase_OverhealDecayTick_Params
{
};

// Function Killstreak.KSCharacterBase.Overheal
struct AKSCharacterBase_Overheal_Params
{
	float*                                             OverhealValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                HealInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HealCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.OnTeamUpdated
struct AKSCharacterBase_OnTeamUpdated_Params
{
};

// Function Killstreak.KSCharacterBase.OnStopDefaultAim
struct AKSCharacterBase_OnStopDefaultAim_Params
{
};

// Function Killstreak.KSCharacterBase.OnStopAimOverShoulder
struct AKSCharacterBase_OnStopAimOverShoulder_Params
{
};

// Function Killstreak.KSCharacterBase.OnStopAimDownSights
struct AKSCharacterBase_OnStopAimDownSights_Params
{
};

// Function Killstreak.KSCharacterBase.OnStopAimAlternate
struct AKSCharacterBase_OnStopAimAlternate_Params
{
};

// Function Killstreak.KSCharacterBase.OnStartDefaultAim
struct AKSCharacterBase_OnStartDefaultAim_Params
{
};

// Function Killstreak.KSCharacterBase.OnStartAimOverShoulder
struct AKSCharacterBase_OnStartAimOverShoulder_Params
{
};

// Function Killstreak.KSCharacterBase.OnStartAimDownSights
struct AKSCharacterBase_OnStartAimDownSights_Params
{
};

// Function Killstreak.KSCharacterBase.OnStartAimAlternate
struct AKSCharacterBase_OnStartAimAlternate_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_Sprint
struct AKSCharacterBase_OnRep_Sprint_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_Silhouette
struct AKSCharacterBase_OnRep_Silhouette_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_ReplicatedStun
struct AKSCharacterBase_OnRep_ReplicatedStun_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_ReplicatedAimState
struct AKSCharacterBase_OnRep_ReplicatedAimState_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_ReplicatedAbilityMovement
struct AKSCharacterBase_OnRep_ReplicatedAbilityMovement_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_PowerSlide
struct AKSCharacterBase_OnRep_PowerSlide_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_MantleInfo
struct AKSCharacterBase_OnRep_MantleInfo_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_LungeInfo
struct AKSCharacterBase_OnRep_LungeInfo_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_IsSubmerged
struct AKSCharacterBase_OnRep_IsSubmerged_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_DeathState
struct AKSCharacterBase_OnRep_DeathState_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_CurrentOverheal
struct AKSCharacterBase_OnRep_CurrentOverheal_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_CurrentLungCapacity
struct AKSCharacterBase_OnRep_CurrentLungCapacity_Params
{
};

// Function Killstreak.KSCharacterBase.OnRep_BackupPlayerState
struct AKSCharacterBase_OnRep_BackupPlayerState_Params
{
};

// Function Killstreak.KSCharacterBase.OnLeaveTeam
struct AKSCharacterBase_OnLeaveTeam_Params
{
	class AKSTeamState**                               OldTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.OnJoinTeam
struct AKSCharacterBase_OnJoinTeam_Params
{
	class AKSTeamState**                               NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.OnEndPowerSlide
struct AKSCharacterBase_OnEndPowerSlide_Params
{
	EKSPowerSlideEndReason*                            EndReason;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.OnBeginPowerSlide
struct AKSCharacterBase_OnBeginPowerSlide_Params
{
};

// Function Killstreak.KSCharacterBase.LockoutMovement
struct AKSCharacterBase_LockoutMovement_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsUnderwater
struct AKSCharacterBase_IsUnderwater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsThermalDetectable
struct AKSCharacterBase_IsThermalDetectable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsStunned
struct AKSCharacterBase_IsStunned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsSprinting
struct AKSCharacterBase_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsRevealPermanent
struct AKSCharacterBase_IsRevealPermanent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsRevealedToLocalPlayer
struct AKSCharacterBase_IsRevealedToLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsRevealed
struct AKSCharacterBase_IsRevealed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsLunging
struct AKSCharacterBase_IsLunging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsLocallyViewed
struct AKSCharacterBase_IsLocallyViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsLaunched
struct AKSCharacterBase_IsLaunched_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsInPowerSlide
struct AKSCharacterBase_IsInPowerSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsInHardLandLockout
struct AKSCharacterBase_IsInHardLandLockout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsInAimTransition
struct AKSCharacterBase_IsInAimTransition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsDeadOrDestroyed
struct AKSCharacterBase_IsDeadOrDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsBot
struct AKSCharacterBase_IsBot_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsAimingOverShoulder
struct AKSCharacterBase_IsAimingOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsAimingDownSights
struct AKSCharacterBase_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsAimingAlternate
struct AKSCharacterBase_IsAimingAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsAiming
struct AKSCharacterBase_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.IsAbilityMoving
struct AKSCharacterBase_IsAbilityMoving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.HealthRegenerationTick
struct AKSCharacterBase_HealthRegenerationTick_Params
{
};

// Function Killstreak.KSCharacterBase.HealthRegenDelayTimerTick
struct AKSCharacterBase_HealthRegenDelayTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.HealthRegenDelayTimerComplete
struct AKSCharacterBase_HealthRegenDelayTimerComplete_Params
{
};

// Function Killstreak.KSCharacterBase.HealthRegenDelayTimerActive
struct AKSCharacterBase_HealthRegenDelayTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.Heal
struct AKSCharacterBase_Heal_Params
{
	float*                                             HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                HealInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HealCauser;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetZiplineAdjustHeight
struct AKSCharacterBase_GetZiplineAdjustHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetStartSpot
struct AKSCharacterBase_GetStartSpot_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetSilhouetteComponents
struct AKSCharacterBase_GetSilhouetteComponents_Params
{
	TArray<class UPrimitiveComponent*>                 SilhouetteComponents;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSCharacterBase.GetReplicatedAimState
struct AKSCharacterBase_GetReplicatedAimState_Params
{
	EKSCharacterAimMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetPowerSlideProgress
struct AKSCharacterBase_GetPowerSlideProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetPowerSlideAngle
struct AKSCharacterBase_GetPowerSlideAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetMeleeThrowLocation
struct AKSCharacterBase_GetMeleeThrowLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetMeleeThrowComponent
struct AKSCharacterBase_GetMeleeThrowComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetMaximumLungCapacity
struct AKSCharacterBase_GetMaximumLungCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetMaxHealth
struct AKSCharacterBase_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetLungRecoveryTime
struct AKSCharacterBase_GetLungRecoveryTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetLastReplicatedAimState
struct AKSCharacterBase_GetLastReplicatedAimState_Params
{
	EKSCharacterAimMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetKSPlayerState
struct AKSCharacterBase_GetKSPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetKSMovementComponent
struct AKSCharacterBase_GetKSMovementComponent_Params
{
	class UKSCharacterMovementComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetKSCharacterAnimInst
struct AKSCharacterBase_GetKSCharacterAnimInst_Params
{
	class UKSCharacterAnimInst*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetKSBestPlayerState
struct AKSCharacterBase_GetKSBestPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetKSAnimInstance
struct AKSCharacterBase_GetKSAnimInstance_Params
{
	class UKSAnimInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetInteractionState
struct AKSCharacterBase_GetInteractionState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetImmediateDeathRagdoll
struct AKSCharacterBase_GetImmediateDeathRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetHealthRegenDelayTime
struct AKSCharacterBase_GetHealthRegenDelayTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetHealthPct
struct AKSCharacterBase_GetHealthPct_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetHealth
struct AKSCharacterBase_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetGrenadeThrowLocation
struct AKSCharacterBase_GetGrenadeThrowLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetGrenadeThrowComponent
struct AKSCharacterBase_GetGrenadeThrowComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetDeathState
struct AKSCharacterBase_GetDeathState_Params
{
	EKSDeathState                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetCurrentOverheal
struct AKSCharacterBase_GetCurrentOverheal_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetCurrentLungCapacity
struct AKSCharacterBase_GetCurrentLungCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetCurrentDesiredMovementDirection
struct AKSCharacterBase_GetCurrentDesiredMovementDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetCurrentAimState
struct AKSCharacterBase_GetCurrentAimState_Params
{
	EKSCharacterAimMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetCurrentAccelDirection
struct AKSCharacterBase_GetCurrentAccelDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetBestPlayerState
struct AKSCharacterBase_GetBestPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.GetBackupPlayerState
struct AKSCharacterBase_GetBackupPlayerState_Params
{
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.ForceSilhouette
struct AKSCharacterBase_ForceSilhouette_Params
{
	bool*                                              bInForceSilhouette;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EPlayerSilhouetteType*                             InSilhouetteType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InFillSilhouette;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InMarkSilhouette;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.EndAbilityMovement
struct AKSCharacterBase_EndAbilityMovement_Params
{
};

// Function Killstreak.KSCharacterBase.DoStun
struct AKSCharacterBase_DoStun_Params
{
	float*                                             StunDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FreezeInPlace;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.DoHardLandAvoid
struct AKSCharacterBase_DoHardLandAvoid_Params
{
};

// Function Killstreak.KSCharacterBase.DoHardLand
struct AKSCharacterBase_DoHardLand_Params
{
	float*                                             LockoutDuration;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.CanViewDebugHealth
struct AKSCharacterBase_CanViewDebugHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.BroadcastInstantInteraction
struct AKSCharacterBase_BroadcastInstantInteraction_Params
{
	struct FName*                                      InInteractionState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InInteractionHeight;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.BroadcastHardLandAvoid
struct AKSCharacterBase_BroadcastHardLandAvoid_Params
{
};

// Function Killstreak.KSCharacterBase.BlueprintOnStopSwimming
struct AKSCharacterBase_BlueprintOnStopSwimming_Params
{
};

// Function Killstreak.KSCharacterBase.BlueprintOnStopSubmerged
struct AKSCharacterBase_BlueprintOnStopSubmerged_Params
{
};

// Function Killstreak.KSCharacterBase.BlueprintOnStartSwimming
struct AKSCharacterBase_BlueprintOnStartSwimming_Params
{
};

// Function Killstreak.KSCharacterBase.BlueprintOnStartSubmerged
struct AKSCharacterBase_BlueprintOnStartSubmerged_Params
{
};

// Function Killstreak.KSCharacterBase.BeginDodgeRoll
struct AKSCharacterBase_BeginDodgeRoll_Params
{
};

// Function Killstreak.KSCharacterBase.BeginAbilityMovement
struct AKSCharacterBase_BeginAbilityMovement_Params
{
};

// Function Killstreak.KSCharacterBase.AllowSprintingRightNow
struct AKSCharacterBase_AllowSprintingRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterBase.AllowPowerSlideRightNow
struct AKSCharacterBase_AllowPowerSlideRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ViewedPawnTakeDamage
struct AKSCharacter_ViewedPawnTakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ViewedPawnNoLongerRevealed
struct AKSCharacter_ViewedPawnNoLongerRevealed_Params
{
};

// Function Killstreak.KSCharacter.ViewedPawnInstigatedHeadshot
struct AKSCharacter_ViewedPawnInstigatedHeadshot_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ViewedPawnInstigatedDamage
struct AKSCharacter_ViewedPawnInstigatedDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ViewedPawnHasBeenRevealed
struct AKSCharacter_ViewedPawnHasBeenRevealed_Params
{
	bool*                                              Permanent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.VehicleStateChanged
struct AKSCharacter_VehicleStateChanged_Params
{
	EKSVehicleState*                                   CurrentVehicleState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.UpdateNavModification
struct AKSCharacter_UpdateNavModification_Params
{
};

// Function Killstreak.KSCharacter.UpdateMantleHands
struct AKSCharacter_UpdateMantleHands_Params
{
	EKSPlayerHand*                                     Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.UpdateHoveredInteractable
struct AKSCharacter_UpdateHoveredInteractable_Params
{
};

// Function Killstreak.KSCharacter.UpdateAmmo
struct AKSCharacter_UpdateAmmo_Params
{
	EAmmoType*                                         AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.UpdateAimStatus
struct AKSCharacter_UpdateAimStatus_Params
{
};

// Function Killstreak.KSCharacter.UnregisterFootstepOverride
struct AKSCharacter_UnregisterFootstepOverride_Params
{
	TScriptInterface<class UKSFootstepOverrideInterface>* ToRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.UnlockShoulderSwap
struct AKSCharacter_UnlockShoulderSwap_Params
{
	bool*                                              ForceFullUnlock;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.UnHideADSMaterials
struct AKSCharacter_UnHideADSMaterials_Params
{
};

// Function Killstreak.KSCharacter.TryToStopRagdoll
struct AKSCharacter_TryToStopRagdoll_Params
{
};

// Function Killstreak.KSCharacter.TryToStopAiming
struct AKSCharacter_TryToStopAiming_Params
{
	bool*                                              IsInterrupt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.TryToAimOverShoulder
struct AKSCharacter_TryToAimOverShoulder_Params
{
	bool*                                              bSkipUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.TryToAimDownSights
struct AKSCharacter_TryToAimDownSights_Params
{
	bool*                                              bSkipUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.TryToAimAlternate
struct AKSCharacter_TryToAimAlternate_Params
{
	bool*                                              bSkipUpdate;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ToggleSprint
struct AKSCharacter_ToggleSprint_Params
{
};

// Function Killstreak.KSCharacter.ToggleScopeZoomIndexUp
struct AKSCharacter_ToggleScopeZoomIndexUp_Params
{
};

// Function Killstreak.KSCharacter.ToggleScopeZoomIndexLoop
struct AKSCharacter_ToggleScopeZoomIndexLoop_Params
{
};

// Function Killstreak.KSCharacter.ToggleScopeZoomIndexDown
struct AKSCharacter_ToggleScopeZoomIndexDown_Params
{
};

// Function Killstreak.KSCharacter.ToggleCrouchRoll
struct AKSCharacter_ToggleCrouchRoll_Params
{
};

// Function Killstreak.KSCharacter.ToggleCrouch
struct AKSCharacter_ToggleCrouch_Params
{
};

// Function Killstreak.KSCharacter.ToggleCarry
struct AKSCharacter_ToggleCarry_Params
{
};

// Function Killstreak.KSCharacter.ThrowGrenadeReleased
struct AKSCharacter_ThrowGrenadeReleased_Params
{
};

// Function Killstreak.KSCharacter.ThrowGrenadePressed
struct AKSCharacter_ThrowGrenadePressed_Params
{
};

// Function Killstreak.KSCharacter.TagForDownAssist
struct AKSCharacter_TagForDownAssist_Params
{
	class APlayerState**                               Assistant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapWeapon
struct AKSCharacter_SwapWeapon_Params
{
	class AKSWeapon**                                  NextWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToSecondary
struct AKSCharacter_SwapToSecondary_Params
{
};

// Function Killstreak.KSCharacter.SwapToPrimary
struct AKSCharacter_SwapToPrimary_Params
{
};

// Function Killstreak.KSCharacter.SwapToPreviousWeaponWithLoadedClip
struct AKSCharacter_SwapToPreviousWeaponWithLoadedClip_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToPreviousWeaponWithAmmo
struct AKSCharacter_SwapToPreviousWeaponWithAmmo_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToPreviousWeapon
struct AKSCharacter_SwapToPreviousWeapon_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToPreviousGrenade
struct AKSCharacter_SwapToPreviousGrenade_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToNextWeaponWithLoadedClip
struct AKSCharacter_SwapToNextWeaponWithLoadedClip_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToNextWeaponWithAmmo
struct AKSCharacter_SwapToNextWeaponWithAmmo_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToNextWeapon
struct AKSCharacter_SwapToNextWeapon_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToNextGrenade
struct AKSCharacter_SwapToNextGrenade_Params
{
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapToMelee
struct AKSCharacter_SwapToMelee_Params
{
};

// Function Killstreak.KSCharacter.SwapSeatsTimerComplete
struct AKSCharacter_SwapSeatsTimerComplete_Params
{
};

// Function Killstreak.KSCharacter.SwapSeatsReleased
struct AKSCharacter_SwapSeatsReleased_Params
{
};

// Function Killstreak.KSCharacter.SwapSeatsPressed
struct AKSCharacter_SwapSeatsPressed_Params
{
};

// Function Killstreak.KSCharacter.SwapGrenade
struct AKSCharacter_SwapGrenade_Params
{
	class AKSWeapon**                                  NextWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SwapActiveGrenade
struct AKSCharacter_SwapActiveGrenade_Params
{
};

// Function Killstreak.KSCharacter.StopRevealedToLocalPlayer
struct AKSCharacter_StopRevealedToLocalPlayer_Params
{
};

// Function Killstreak.KSCharacter.StopReveal
struct AKSCharacter_StopReveal_Params
{
	struct FRevealInfo*                                InRevealInfo;                                             // (Parm)
};

// Function Killstreak.KSCharacter.StopKSEffect
struct AKSCharacter_StopKSEffect_Params
{
	struct FName*                                      InFXID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.StopFire
struct AKSCharacter_StopFire_Params
{
};

// Function Killstreak.KSCharacter.StopAnimEvent
struct AKSCharacter_StopAnimEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.StopAimDownSights
struct AKSCharacter_StopAimDownSights_Params
{
};

// Function Killstreak.KSCharacter.StopActiveHaul
struct AKSCharacter_StopActiveHaul_Params
{
};

// Function Killstreak.KSCharacter.StartRevealedToLocalPlayer
struct AKSCharacter_StartRevealedToLocalPlayer_Params
{
};

// Function Killstreak.KSCharacter.StartLockoutCamera
struct AKSCharacter_StartLockoutCamera_Params
{
};

// Function Killstreak.KSCharacter.StartKSSpecialEffect
struct AKSCharacter_StartKSSpecialEffect_Params
{
	struct FKSSpecialEffect*                           Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRestart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSFXCurveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.StartHacking
struct AKSCharacter_StartHacking_Params
{
};

// Function Killstreak.KSCharacter.StartFire
struct AKSCharacter_StartFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetupChords
struct AKSCharacter_SetupChords_Params
{
};

// Function Killstreak.KSCharacter.SetSelfDestruct
struct AKSCharacter_SetSelfDestruct_Params
{
	bool*                                              InSelfDestruct;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetOnFire
struct AKSCharacter_SetOnFire_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetNoFire
struct AKSCharacter_SetNoFire_Params
{
};

// Function Killstreak.KSCharacter.SetInteractionFacesRotation
struct AKSCharacter_SetInteractionFacesRotation_Params
{
	bool*                                              FacesRotation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetInteractionCameraTransition
struct AKSCharacter_SetInteractionCameraTransition_Params
{
	struct FKSInteractableCameraTransition*            CameraTransition;                                         // (Parm)
};

// Function Killstreak.KSCharacter.SetGodMode
struct AKSCharacter_SetGodMode_Params
{
	bool*                                              InGodMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetActorTargetingMeForRevive
struct AKSCharacter_SetActorTargetingMeForRevive_Params
{
	class AActor**                                     Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetActiveCameraSimple
struct AKSCharacter_SetActiveCameraSimple_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InBlendTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.SetActiveCamera
struct AKSCharacter_SetActiveCamera_Params
{
	struct FName*                                      Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FViewTargetTransitionParams*                InBlendParams;                                            // (Parm)
};

// Function Killstreak.KSCharacter.ServerTryToCarry
struct AKSCharacter_ServerTryToCarry_Params
{
	class AActor**                                     CarryTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerStopGiveUpTimer
struct AKSCharacter_ServerStopGiveUpTimer_Params
{
};

// Function Killstreak.KSCharacter.ServerStopCarryChecked
struct AKSCharacter_ServerStopCarryChecked_Params
{
	class AActor**                                     CarryTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerStopCarry
struct AKSCharacter_ServerStopCarry_Params
{
};

// Function Killstreak.KSCharacter.ServerStartGiveUpTimer
struct AKSCharacter_ServerStartGiveUpTimer_Params
{
};

// Function Killstreak.KSCharacter.ServerSetActiveWeaponToNone
struct AKSCharacter_ServerSetActiveWeaponToNone_Params
{
	int*                                               InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerRequestActivateAbilityRelease
struct AKSCharacter_ServerRequestActivateAbilityRelease_Params
{
	int*                                               Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerRequestActivateAbility
struct AKSCharacter_ServerRequestActivateAbility_Params
{
	int*                                               Ability;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerGetInNextEmptySeat
struct AKSCharacter_ServerGetInNextEmptySeat_Params
{
};

// Function Killstreak.KSCharacter.ServerGetInDriverSeat
struct AKSCharacter_ServerGetInDriverSeat_Params
{
};

// Function Killstreak.KSCharacter.ServerExitVehicle
struct AKSCharacter_ServerExitVehicle_Params
{
};

// Function Killstreak.KSCharacter.ServerDropWeapon
struct AKSCharacter_ServerDropWeapon_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ServerChangeShoulderCamera
struct AKSCharacter_ServerChangeShoulderCamera_Params
{
	ECameraShoulder*                                   InShoulder;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RotateToFace
struct AKSCharacter_RotateToFace_Params
{
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReviveOverlapStopped
struct AKSCharacter_ReviveOverlapStopped_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReverseKSEffect
struct AKSCharacter_ReverseKSEffect_Params
{
	struct FName*                                      InFXID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RevealToWholeTeamWithInfo
struct AKSCharacter_RevealToWholeTeamWithInfo_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Revealer;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRevealInfo>                         OutRevealInfos;                                           // (Parm, OutParm, ZeroConstructor)
	EPlayerSilhouetteType*                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Fill;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Mark;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ResetKSEffectTime
struct AKSCharacter_ResetKSEffectTime_Params
{
	struct FName*                                      InFXID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReportFootstepNoise
struct AKSCharacter_ReportFootstepNoise_Params
{
	float*                                             Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReportFireNoise
struct AKSCharacter_ReportFireNoise_Params
{
	float*                                             Range;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReportDamageEvent
struct AKSCharacter_ReportDamageEvent_Params
{
	class AActor**                                     Damager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (Parm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReportDamagedNoise
struct AKSCharacter_ReportDamagedNoise_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReplicateSpecialAmmoEvent
struct AKSCharacter_ReplicateSpecialAmmoEvent_Params
{
	EAmmoType*                                         AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveWeaponFromInventory
struct AKSCharacter_RemoveWeaponFromInventory_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveParticleEffects
struct AKSCharacter_RemoveParticleEffects_Params
{
	TArray<class UParticleSystemComponent*>*           ParticleSystems;                                          // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCharacter.RemoveOutOfRangePickup
struct AKSCharacter_RemoveOutOfRangePickup_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveMod
struct AKSCharacter_RemoveMod_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              RemoveAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveEffectCurve
struct AKSCharacter_RemoveEffectCurve_Params
{
	struct FName*                                      InFXID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveBlendable
struct AKSCharacter_RemoveBlendable_Params
{
	TScriptInterface<class UBlendableInterface>*       InBlendableObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemoveBackpack
struct AKSCharacter_RemoveBackpack_Params
{
};

// Function Killstreak.KSCharacter.RemoveActionRestriction
struct AKSCharacter_RemoveActionRestriction_Params
{
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemotePlayerInteractStart
struct AKSCharacter_RemotePlayerInteractStart_Params
{
	float*                                             InteractDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InteractTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.RemotePlayerInteractEnd
struct AKSCharacter_RemotePlayerInteractEnd_Params
{
};

// Function Killstreak.KSCharacter.Reload
struct AKSCharacter_Reload_Params
{
};

// Function Killstreak.KSCharacter.ReleaseToggleCrouchRoll
struct AKSCharacter_ReleaseToggleCrouchRoll_Params
{
};

// Function Killstreak.KSCharacter.ReleaseGiveUp
struct AKSCharacter_ReleaseGiveUp_Params
{
};

// Function Killstreak.KSCharacter.ReleaseCrouch
struct AKSCharacter_ReleaseCrouch_Params
{
};

// Function Killstreak.KSCharacter.RegisterFootstepOverride
struct AKSCharacter_RegisterFootstepOverride_Params
{
	TScriptInterface<class UKSFootstepOverrideInterface>* ToAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ReevaluateNoFire
struct AKSCharacter_ReevaluateNoFire_Params
{
	class UPrimitiveComponent**                        LeftOverlapper;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.QuickMeleeHoldTimerComplete
struct AKSCharacter_QuickMeleeHoldTimerComplete_Params
{
};

// Function Killstreak.KSCharacter.QueryModsForAnimEvent
struct AKSCharacter_QueryModsForAnimEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInst;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.PrimaryWeaponFOVChanged
struct AKSCharacter_PrimaryWeaponFOVChanged_Params
{
	float*                                             NewFOV;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.PressGiveUp
struct AKSCharacter_PressGiveUp_Params
{
};

// Function Killstreak.KSCharacter.PlayVO
struct AKSCharacter_PlayVO_Params
{
	struct FKSVoicelineEvent*                          VoicelineEvent;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.PlayHitFromRadialDamage
struct AKSCharacter_PlayHitFromRadialDamage_Params
{
	struct FDamageEffect*                              Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSCharacter.PlayHitFromPointDamage
struct AKSCharacter_PlayHitFromPointDamage_Params
{
	struct FDamageEffect*                              Effect;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSCharacter.PlayActionCameraSequence
struct AKSCharacter_PlayActionCameraSequence_Params
{
	struct FName*                                      SequenceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OutOfBoundsWarningEnd
struct AKSCharacter_OutOfBoundsWarningEnd_Params
{
};

// Function Killstreak.KSCharacter.OutOfBoundsOverlapEnd
struct AKSCharacter_OutOfBoundsOverlapEnd_Params
{
};

// Function Killstreak.KSCharacter.OutOfBoundsOverlapBegin
struct AKSCharacter_OutOfBoundsOverlapBegin_Params
{
	float*                                             WarningLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnWeaponSwapSuccessful
struct AKSCharacter_OnWeaponSwapSuccessful_Params
{
	class AKSWeapon**                                  FromWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon**                                  ToWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnWeaponSwapFailed
struct AKSCharacter_OnWeaponSwapFailed_Params
{
	class AKSWeapon**                                  FromWeapon;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon**                                  ToWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnUnhovered
struct AKSCharacter_OnUnhovered_Params
{
	float*                                             ExtraTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnStopAimDownSightsCheckpoint
struct AKSCharacter_OnStopAimDownSightsCheckpoint_Params
{
};

// Function Killstreak.KSCharacter.OnStartAimDownSightsCheckpoint
struct AKSCharacter_OnStartAimDownSightsCheckpoint_Params
{
};

// Function Killstreak.KSCharacter.OnReviveStart
struct AKSCharacter_OnReviveStart_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ReviveTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Remote;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnReviveInterrupt
struct AKSCharacter_OnReviveInterrupt_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnReviveComplete
struct AKSCharacter_OnReviveComplete_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnRep_VehicleState
struct AKSCharacter_OnRep_VehicleState_Params
{
};

// Function Killstreak.KSCharacter.OnRep_StartingActiveWeaponEquipPoint
struct AKSCharacter_OnRep_StartingActiveWeaponEquipPoint_Params
{
};

// Function Killstreak.KSCharacter.OnRep_SelfDestruct
struct AKSCharacter_OnRep_SelfDestruct_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Scrambled
struct AKSCharacter_OnRep_Scrambled_Params
{
};

// Function Killstreak.KSCharacter.OnRep_ReviveInfo
struct AKSCharacter_OnRep_ReviveInfo_Params
{
};

// Function Killstreak.KSCharacter.OnRep_RevealedStatus
struct AKSCharacter_OnRep_RevealedStatus_Params
{
};

// Function Killstreak.KSCharacter.OnRep_OutOfBoundsInfo
struct AKSCharacter_OnRep_OutOfBoundsInfo_Params
{
};

// Function Killstreak.KSCharacter.OnRep_OnFire
struct AKSCharacter_OnRep_OnFire_Params
{
};

// Function Killstreak.KSCharacter.OnRep_IsInInteraction
struct AKSCharacter_OnRep_IsInInteraction_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Health
struct AKSCharacter_OnRep_Health_Params
{
};

// Function Killstreak.KSCharacter.OnRep_HaulingInfo
struct AKSCharacter_OnRep_HaulingInfo_Params
{
};

// Function Killstreak.KSCharacter.OnRep_GiveUpTimer
struct AKSCharacter_OnRep_GiveUpTimer_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Gender
struct AKSCharacter_OnRep_Gender_Params
{
};

// Function Killstreak.KSCharacter.OnRep_EMPLockout
struct AKSCharacter_OnRep_EMPLockout_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Emotion
struct AKSCharacter_OnRep_Emotion_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Downed
struct AKSCharacter_OnRep_Downed_Params
{
};

// Function Killstreak.KSCharacter.OnRep_CurrentBehaviorState
struct AKSCharacter_OnRep_CurrentBehaviorState_Params
{
};

// Function Killstreak.KSCharacter.OnRep_CarriedInfo
struct AKSCharacter_OnRep_CarriedInfo_Params
{
};

// Function Killstreak.KSCharacter.OnRep_CameraShoulder
struct AKSCharacter_OnRep_CameraShoulder_Params
{
};

// Function Killstreak.KSCharacter.OnRep_CameraPivotTargetActor
struct AKSCharacter_OnRep_CameraPivotTargetActor_Params
{
};

// Function Killstreak.KSCharacter.OnRep_Bot
struct AKSCharacter_OnRep_Bot_Params
{
};

// Function Killstreak.KSCharacter.OnRep_ApparelAssets
struct AKSCharacter_OnRep_ApparelAssets_Params
{
};

// Function Killstreak.KSCharacter.OnRep_ActiveEquipmentId
struct AKSCharacter_OnRep_ActiveEquipmentId_Params
{
};

// Function Killstreak.KSCharacter.OnImmuneStart
struct AKSCharacter_OnImmuneStart_Params
{
};

// Function Killstreak.KSCharacter.OnImmuneEnd
struct AKSCharacter_OnImmuneEnd_Params
{
};

// Function Killstreak.KSCharacter.OnHovered
struct AKSCharacter_OnHovered_Params
{
};

// Function Killstreak.KSCharacter.OnGrenadeClassLoaded
struct AKSCharacter_OnGrenadeClassLoaded_Params
{
	class UKSWeaponAsset_Grenade**                     pGrenadeWeaponAsset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.OnFieldOfViewModChange
struct AKSCharacter_OnFieldOfViewModChange_Params
{
};

// Function Killstreak.KSCharacter.OnEndOutOfBounds
struct AKSCharacter_OnEndOutOfBounds_Params
{
};

// Function Killstreak.KSCharacter.OnDeathCleanup
struct AKSCharacter_OnDeathCleanup_Params
{
};

// Function Killstreak.KSCharacter.OnBeginOutOfBounds
struct AKSCharacter_OnBeginOutOfBounds_Params
{
};

// Function Killstreak.KSCharacter.OnApparelTimeoutExpire
struct AKSCharacter_OnApparelTimeoutExpire_Params
{
};

// Function Killstreak.KSCharacter.NoseDiveCameraTransition
struct AKSCharacter_NoseDiveCameraTransition_Params
{
	bool*                                              bEnterNoseDive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AnimLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.NativeJumpToSwingMontage
struct AKSCharacter_NativeJumpToSwingMontage_Params
{
	struct FString*                                    SwingMontageSectionName;                                  // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCharacter.MoveRight
struct AKSCharacter_MoveRight_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.MoveForward
struct AKSCharacter_MoveForward_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.MeleeReleased
struct AKSCharacter_MeleeReleased_Params
{
};

// Function Killstreak.KSCharacter.MeleePressed
struct AKSCharacter_MeleePressed_Params
{
};

// Function Killstreak.KSCharacter.MeleeHoldTimerComplete
struct AKSCharacter_MeleeHoldTimerComplete_Params
{
};

// Function Killstreak.KSCharacter.MedPackReleased
struct AKSCharacter_MedPackReleased_Params
{
};

// Function Killstreak.KSCharacter.MedPackPressed
struct AKSCharacter_MedPackPressed_Params
{
};

// Function Killstreak.KSCharacter.LogShotgunHitData
struct AKSCharacter_LogShotgunHitData_Params
{
	struct FShotgunHitData*                            HitData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSCharacter.LockShoulderSwap
struct AKSCharacter_LockShoulderSwap_Params
{
};

// Function Killstreak.KSCharacter.KillIfDowned
struct AKSCharacter_KillIfDowned_Params
{
};

// Function Killstreak.KSCharacter.JumpToSwingMontage
struct AKSCharacter_JumpToSwingMontage_Params
{
	struct FString*                                    SwingMontageSectionName;                                  // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCharacter.IsZipLining
struct AKSCharacter_IsZipLining_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsShoulderSwapLocked
struct AKSCharacter_IsShoulderSwapLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsRevivingAnotherPlayer
struct AKSCharacter_IsRevivingAnotherPlayer_Params
{
	class AKSCharacter*                                OutReviveTarget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool*                                              bCountRemoteRevives;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsRevealable
struct AKSCharacter_IsRevealable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsPerformingAnInteraction
struct AKSCharacter_IsPerformingAnInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsOutOfRangePickup
struct AKSCharacter_IsOutOfRangePickup_Params
{
	class AActor**                                     OtherActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsOutOfBounds
struct AKSCharacter_IsOutOfBounds_Params
{
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsOnFire
struct AKSCharacter_IsOnFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsLobby
struct AKSCharacter_IsLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsInVehicle
struct AKSCharacter_IsInVehicle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsInRagdoll
struct AKSCharacter_IsInRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsInLockoutCameraCooldown
struct AKSCharacter_IsInLockoutCameraCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsInLockoutCamera
struct AKSCharacter_IsInLockoutCamera_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsHaulingRightNow
struct AKSCharacter_IsHaulingRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsDowned
struct AKSCharacter_IsDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsCrosshairHidden
struct AKSCharacter_IsCrosshairHidden_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsBlinded
struct AKSCharacter_IsBlinded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsBeingRevived
struct AKSCharacter_IsBeingRevived_Params
{
	class AKSCharacter*                                Reviver;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsAnyEquippedWeaponTakingAction
struct AKSCharacter_IsAnyEquippedWeaponTakingAction_Params
{
	class AKSWeapon**                                  IgnoredWeapon;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsAimLocked
struct AKSCharacter_IsAimLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.IsActiveWeapon
struct AKSCharacter_IsActiveWeapon_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.InvalidateAllRevealOfMe
struct AKSCharacter_InvalidateAllRevealOfMe_Params
{
};

// Function Killstreak.KSCharacter.InterruptNonCharacterRevive
struct AKSCharacter_InterruptNonCharacterRevive_Params
{
};

// Function Killstreak.KSCharacter.InterruptAimDownSightsToggle
struct AKSCharacter_InterruptAimDownSightsToggle_Params
{
	bool*                                              bReturnWhenComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.InterruptAimAlternateToggle
struct AKSCharacter_InterruptAimAlternateToggle_Params
{
	bool*                                              bReturnWhenComplete;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.InstantRevive
struct AKSCharacter_InstantRevive_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.InputStopSprint
struct AKSCharacter_InputStopSprint_Params
{
};

// Function Killstreak.KSCharacter.InputStartSprint
struct AKSCharacter_InputStartSprint_Params
{
};

// Function Killstreak.KSCharacter.InputStartFire
struct AKSCharacter_InputStartFire_Params
{
};

// Function Killstreak.KSCharacter.InitRagdoll
struct AKSCharacter_InitRagdoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.HideADSMaterials
struct AKSCharacter_HideADSMaterials_Params
{
};

// Function Killstreak.KSCharacter.HasModAny
struct AKSCharacter_HasModAny_Params
{
	TArray<class UKSPlayerMod*>*                       TestPlayerMods;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.HasMod
struct AKSCharacter_HasMod_Params
{
	class UKSPlayerMod**                               TestPlayerMod;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.HasEquipPoint
struct AKSCharacter_HasEquipPoint_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GiveUpTimerTick
struct AKSCharacter_GiveUpTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GiveUpTimerComplete
struct AKSCharacter_GiveUpTimerComplete_Params
{
};

// Function Killstreak.KSCharacter.GiveUpTimerActive
struct AKSCharacter_GiveUpTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GiveModInstance
struct AKSCharacter_GiveModInstance_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             ModInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerModInstance*                        Instance;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Unique;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GiveMod
struct AKSCharacter_GiveMod_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             ModInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Unique;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetWeaponByAsset
struct AKSCharacter_GetWeaponByAsset_Params
{
	class UKSWeaponAsset**                             InAsset;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetWeaponAtEquipPoint
struct AKSCharacter_GetWeaponAtEquipPoint_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetVOComponent
struct AKSCharacter_GetVOComponent_Params
{
	class UKSVOComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetValidWeaponPoints
struct AKSCharacter_GetValidWeaponPoints_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacter.GetUsedEquipPoints
struct AKSCharacter_GetUsedEquipPoints_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacter.GetSpecialties
struct AKSCharacter_GetSpecialties_Params
{
	TArray<class UKSSpecialty*>                        OutSpecialties;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetSeatAimCameraTag
struct AKSCharacter_GetSeatAimCameraTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetPickupSphere
struct AKSCharacter_GetPickupSphere_Params
{
	class USphereComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetOverrideByLocation
struct AKSCharacter_GetOverrideByLocation_Params
{
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               outShouldOverride;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       outOverrideName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetMostRecentInteractionType
struct AKSCharacter_GetMostRecentInteractionType_Params
{
	class UKSInteractionType*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetModInstances
struct AKSCharacter_GetModInstances_Params
{
	TArray<class UKSPlayerModInstance*>                OutMods;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetMaxHealthBonus
struct AKSCharacter_GetMaxHealthBonus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetLeftArmVisibility
struct AKSCharacter_GetLeftArmVisibility_Params
{
	EKSArmVisibilityType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetInteractionTarget
struct AKSCharacter_GetInteractionTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetHitPawnEffectOverride
struct AKSCharacter_GetHitPawnEffectOverride_Params
{
	class UParticleSystem*                             ParticleSystem;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetHitHeadAudioEventOverride
struct AKSCharacter_GetHitHeadAudioEventOverride_Params
{
	class UAkAudioEvent*                               SoundEffect;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetHitByAudioEventOverride
struct AKSCharacter_GetHitByAudioEventOverride_Params
{
	class UAkAudioEvent*                               SoundEffect;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetHitBodyAudioEventOverride
struct AKSCharacter_GetHitBodyAudioEventOverride_Params
{
	class UAkAudioEvent*                               SoundEffect;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetGiveUpTime
struct AKSCharacter_GetGiveUpTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetGender
struct AKSCharacter_GetGender_Params
{
	EKSCharacterGender                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetFXCurveComponentByFXID
struct AKSCharacter_GetFXCurveComponentByFXID_Params
{
	struct FName*                                      InFXID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSFXCurveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetFlashBangEffectDurationFromDistance
struct AKSCharacter_GetFlashBangEffectDurationFromDistance_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetFieldOfViewFromMods
struct AKSCharacter_GetFieldOfViewFromMods_Params
{
	float                                              OutFov;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetEquipmentManagerComponent
struct AKSCharacter_GetEquipmentManagerComponent_Params
{
	class UKSEquipmentManagerComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetEquipmentAtEquipPoint
struct AKSCharacter_GetEquipmentAtEquipPoint_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AKSEquipment*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetDownedTransitionMontage
struct AKSCharacter_GetDownedTransitionMontage_Params
{
	class UAnimMontage*                                OutAnimMontage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetDownedImmuneTime
struct AKSCharacter_GetDownedImmuneTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetDamageModifiers
struct AKSCharacter_GetDamageModifiers_Params
{
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDefenseModifier;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutOffenseModifier;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentVehicleSeat
struct AKSCharacter_GetCurrentVehicleSeat_Params
{
	class UKSVehicleSeatComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentVehicle
struct AKSCharacter_GetCurrentVehicle_Params
{
	class AKSVehicle*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentReviveDuration
struct AKSCharacter_GetCurrentReviveDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentCharacterEmotionAsName
struct AKSCharacter_GetCurrentCharacterEmotionAsName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentCameraShoulder
struct AKSCharacter_GetCurrentCameraShoulder_Params
{
	ECameraShoulder                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCurrentAbilityIndex
struct AKSCharacter_GetCurrentAbilityIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCompatibleEquipPoints
struct AKSCharacter_GetCompatibleEquipPoints_Params
{
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacter.GetCharacterAkComponent
struct AKSCharacter_GetCharacterAkComponent_Params
{
	class UKSAkComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCarriedObject
struct AKSCharacter_GetCarriedObject_Params
{
	TScriptInterface<class UKSCarriedInterface>        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetCameraShoulderSwapProgress
struct AKSCharacter_GetCameraShoulderSwapProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetBodyApparelSkinObject
struct AKSCharacter_GetBodyApparelSkinObject_Params
{
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetBehaviorState
struct AKSCharacter_GetBehaviorState_Params
{
	ECharacterBehaviorState                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetBasePickupRange
struct AKSCharacter_GetBasePickupRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetAvailableEquipPoints
struct AKSCharacter_GetAvailableEquipPoints_Params
{
	struct FGameplayTagContainer                       OutEquipPoints;                                           // (Parm, OutParm)
};

// Function Killstreak.KSCharacter.GetApparelSkinObjectByName
struct AKSCharacter_GetApparelSkinObjectByName_Params
{
	struct FName*                                      InSkinObjectName;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetAmmoCount
struct AKSCharacter_GetAmmoCount_Params
{
	EAmmoType*                                         AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetAllEquippedWeapons
struct AKSCharacter_GetAllEquippedWeapons_Params
{
	TArray<class AKSWeapon*>                           OutWeapons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSCharacter.GetActiveWeaponComponentAtIndex
struct AKSCharacter_GetActiveWeaponComponentAtIndex_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveWeaponComponent
struct AKSCharacter_GetActiveWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveWeapon
struct AKSCharacter_GetActiveWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveTemporary
struct AKSCharacter_GetActiveTemporary_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveMods
struct AKSCharacter_GetActiveMods_Params
{
	TArray<class UKSPlayerMod*>                        OutMods;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveMelee
struct AKSCharacter_GetActiveMelee_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveMedPack
struct AKSCharacter_GetActiveMedPack_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveMainWeapon
struct AKSCharacter_GetActiveMainWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveKSWeaponAnimInst
struct AKSCharacter_GetActiveKSWeaponAnimInst_Params
{
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAnimInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveGrenade
struct AKSCharacter_GetActiveGrenade_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveGadgetPoints
struct AKSCharacter_GetActiveGadgetPoints_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacter.GetActiveEquipPoints
struct AKSCharacter_GetActiveEquipPoints_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSCharacter.GetActiveCameraTag
struct AKSCharacter_GetActiveCameraTag_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveCamera
struct AKSCharacter_GetActiveCamera_Params
{
	class UCameraComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActiveAimedWeapon
struct AKSCharacter_GetActiveAimedWeapon_Params
{
	class AKSWeapon_Aimed*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetActivatableMods
struct AKSCharacter_GetActivatableMods_Params
{
	TArray<class UKSModInst_Activated*>                OutMods;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GetAbilityMovementMod
struct AKSCharacter_GetAbilityMovementMod_Params
{
	class UKSModInst_Activated*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GamepadToggleSprint
struct AKSCharacter_GamepadToggleSprint_Params
{
};

// Function Killstreak.KSCharacter.GamepadSwapReleased
struct AKSCharacter_GamepadSwapReleased_Params
{
};

// Function Killstreak.KSCharacter.GamepadSwapPressed
struct AKSCharacter_GamepadSwapPressed_Params
{
};

// Function Killstreak.KSCharacter.GamepadLookUp
struct AKSCharacter_GamepadLookUp_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.GamepadLookRight
struct AKSCharacter_GamepadLookRight_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ForceToShoulder
struct AKSCharacter_ForceToShoulder_Params
{
	ECameraShoulder*                                   ForcedShoulder;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ForceMainCameraBoomUpdate
struct AKSCharacter_ForceMainCameraBoomUpdate_Params
{
};

// Function Killstreak.KSCharacter.FinishHacking
struct AKSCharacter_FinishHacking_Params
{
};

// Function Killstreak.KSCharacter.FindTierOfEquipPoint
struct AKSCharacter_FindTierOfEquipPoint_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (ConstParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.FindAllTiersOfEquipPoint
struct AKSCharacter_FindAllTiersOfEquipPoint_Params
{
	struct FGameplayTag*                               EquipPoint;                                               // (ConstParm, Parm)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSCharacter.ExtinguishFire
struct AKSCharacter_ExtinguishFire_Params
{
};

// Function Killstreak.KSCharacter.ExitVehiclePressed
struct AKSCharacter_ExitVehiclePressed_Params
{
};

// Function Killstreak.KSCharacter.EventSetupCamerasForSpectator
struct AKSCharacter_EventSetupCamerasForSpectator_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.EvaluateCameraProximityFade
struct AKSCharacter_EvaluateCameraProximityFade_Params
{
};

// Function Killstreak.KSCharacter.EndOutOfBounds
struct AKSCharacter_EndOutOfBounds_Params
{
};

// Function Killstreak.KSCharacter.EndLockoutCamera
struct AKSCharacter_EndLockoutCamera_Params
{
};

// Function Killstreak.KSCharacter.DrownDamageTick
struct AKSCharacter_DrownDamageTick_Params
{
};

// Function Killstreak.KSCharacter.DropButtonReleased
struct AKSCharacter_DropButtonReleased_Params
{
};

// Function Killstreak.KSCharacter.DropButtonPressed
struct AKSCharacter_DropButtonPressed_Params
{
};

// Function Killstreak.KSCharacter.DropActiveWeapon
struct AKSCharacter_DropActiveWeapon_Params
{
};

// Function Killstreak.KSCharacter.DropActiveGrenade
struct AKSCharacter_DropActiveGrenade_Params
{
};

// Function Killstreak.KSCharacter.DownPlayer
struct AKSCharacter_DownPlayer_Params
{
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EHitLocationType*                                  HitLocationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.DoSetOnFire
struct AKSCharacter_DoSetOnFire_Params
{
};

// Function Killstreak.KSCharacter.DoExtinguishFire
struct AKSCharacter_DoExtinguishFire_Params
{
};

// Function Killstreak.KSCharacter.DoesTransitionSupportFocalPoint
struct AKSCharacter_DoesTransitionSupportFocalPoint_Params
{
	struct FName*                                      ActiveCamera;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PendingCamera;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.DetachViewTargetOnlyBPComponents
struct AKSCharacter_DetachViewTargetOnlyBPComponents_Params
{
};

// Function Killstreak.KSCharacter.DestructibleSpeedGateOverlappedEvent
struct AKSCharacter_DestructibleSpeedGateOverlappedEvent_Params
{
	struct FVector*                                    BreakingLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BreakingDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BreakingNormal;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.DamageRecordReset
struct AKSCharacter_DamageRecordReset_Params
{
};

// Function Killstreak.KSCharacter.CreditEliminationAssist
struct AKSCharacter_CreditEliminationAssist_Params
{
	class APlayerState**                               Assistant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CreditDownAssist
struct AKSCharacter_CreditDownAssist_Params
{
	class APlayerState**                               Assistant;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ContextualPingReleased
struct AKSCharacter_ContextualPingReleased_Params
{
};

// Function Killstreak.KSCharacter.ContextualPingPressed
struct AKSCharacter_ContextualPingPressed_Params
{
};

// Function Killstreak.KSCharacter.ContextualButtonReleased
struct AKSCharacter_ContextualButtonReleased_Params
{
};

// Function Killstreak.KSCharacter.ContextualButtonPressed
struct AKSCharacter_ContextualButtonPressed_Params
{
};

// Function Killstreak.KSCharacter.CompleteNonCharacterRevive
struct AKSCharacter_CompleteNonCharacterRevive_Params
{
};

// Function Killstreak.KSCharacter.CloneCharacterMesh
struct AKSCharacter_CloneCharacterMesh_Params
{
	class USkeletalMeshComponent**                     ClonedMesh;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClientSwapTo
struct AKSCharacter_ClientSwapTo_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClientSwapFrom
struct AKSCharacter_ClientSwapFrom_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClientStopInteractAcknowledge
struct AKSCharacter_ClientStopInteractAcknowledge_Params
{
	unsigned char*                                     InInteractRequestId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClientNotifyStuck
struct AKSCharacter_ClientNotifyStuck_Params
{
};

// Function Killstreak.KSCharacter.ClientInteractAcknowledge
struct AKSCharacter_ClientInteractAcknowledge_Params
{
	unsigned char*                                     InInteractRequestId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFailed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InteractDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRequiresManualInterrupt;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClientBroadcastModEvent
struct AKSCharacter_ClientBroadcastModEvent_Params
{
	struct FName*                                      ModEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ClearMaxHealthBonus
struct AKSCharacter_ClearMaxHealthBonus_Params
{
};

// Function Killstreak.KSCharacter.ClearActorTargetingMeForRevive
struct AKSCharacter_ClearActorTargetingMeForRevive_Params
{
};

// Function Killstreak.KSCharacter.ChangeShoulderCamera
struct AKSCharacter_ChangeShoulderCamera_Params
{
	ECameraShoulder*                                   InShoulder;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanInteractWithTest
struct AKSCharacter_CanInteractWithTest_Params
{
	class AActor**                                     InInteractionTarget;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPress;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHold;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanInteractWith
struct AKSCharacter_CanInteractWith_Params
{
	class AActor**                                     InInteractionTarget;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanFireRightNow
struct AKSCharacter_CanFireRightNow_Params
{
	EKSAbilityUsageFailureType                         OutAbilityFailureType;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAltFire;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CancelBleed
struct AKSCharacter_CancelBleed_Params
{
};

// Function Killstreak.KSCharacter.CanCarryDownedAllies
struct AKSCharacter_CanCarryDownedAllies_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanBeRevivedBy
struct AKSCharacter_CanBeRevivedBy_Params
{
	class AKSCharacter**                               Other;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIgnoreOverlap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSWeapon**                                  IgnoredWeapon;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanAimOverShoulderNow
struct AKSCharacter_CanAimOverShoulderNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanAimDownSightsNow
struct AKSCharacter_CanAimDownSightsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanAimAlternateNow
struct AKSCharacter_CanAimAlternateNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanActiveWeaponCanToggleOutOfAimDownSightsNow
struct AKSCharacter_CanActiveWeaponCanToggleOutOfAimDownSightsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CanActiveWeaponCanToggleIntoAimDownSightsNow
struct AKSCharacter_CanActiveWeaponCanToggleIntoAimDownSightsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.CacheLatestHit
struct AKSCharacter_CacheLatestHit_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    RelativeImpactLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentStateChange
struct AKSCharacter_BroadcastWeaponComponentStateChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (Parm)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentPostReload
struct AKSCharacter_BroadcastWeaponComponentPostReload_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredFull
struct AKSCharacter_BroadcastWeaponComponentFiredFull_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredAmmo
struct AKSCharacter_BroadcastWeaponComponentFiredAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentFiredAimAndAmmo
struct AKSCharacter_BroadcastWeaponComponentFiredAimAndAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentFired
struct AKSCharacter_BroadcastWeaponComponentFired_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentEmptyFire
struct AKSCharacter_BroadcastWeaponComponentEmptyFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastWeaponComponentAmmoChange
struct AKSCharacter_BroadcastWeaponComponentAmmoChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastTakeRadialDamage
struct AKSCharacter_BroadcastTakeRadialDamage_Params
{
	struct FDamageEffect*                              Effect;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.BroadcastTakePointDamage
struct AKSCharacter_BroadcastTakePointDamage_Params
{
	struct FDamageEffect*                              Effect;                                                   // (Parm)
};

// Function Killstreak.KSCharacter.BroadcastSpecialAmmoEvent
struct AKSCharacter_BroadcastSpecialAmmoEvent_Params
{
	EAmmoType*                                         AmmoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               AmmoDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastSkydiveSkipped
struct AKSCharacter_BroadcastSkydiveSkipped_Params
{
};

// Function Killstreak.KSCharacter.BroadcastReviveStart
struct AKSCharacter_BroadcastReviveStart_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ReviveTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Remote;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReviveInterrupt
struct AKSCharacter_BroadcastReviveInterrupt_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReviveComplete
struct AKSCharacter_BroadcastReviveComplete_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentStateChange
struct AKSCharacter_BroadcastReliableWeaponComponentStateChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (Parm)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentPostReload
struct AKSCharacter_BroadcastReliableWeaponComponentPostReload_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredFull
struct AKSCharacter_BroadcastReliableWeaponComponentFiredFull_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredAmmo
struct AKSCharacter_BroadcastReliableWeaponComponentFiredAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFiredAimAndAmmo
struct AKSCharacter_BroadcastReliableWeaponComponentFiredAimAndAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentFired
struct AKSCharacter_BroadcastReliableWeaponComponentFired_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentEmptyFire
struct AKSCharacter_BroadcastReliableWeaponComponentEmptyFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastReliableWeaponComponentAmmoChange
struct AKSCharacter_BroadcastReliableWeaponComponentAmmoChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	uint16_t*                                          nEquipmentId;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     AmmoInClip;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastOnDamageReduced
struct AKSCharacter_BroadcastOnDamageReduced_Params
{
};

// Function Killstreak.KSCharacter.BroadcastOnDamageImmune
struct AKSCharacter_BroadcastOnDamageImmune_Params
{
};

// Function Killstreak.KSCharacter.BroadcastModEvent
struct AKSCharacter_BroadcastModEvent_Params
{
	struct FName*                                      ModEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BroadcastGrenadeExplodeInHand
struct AKSCharacter_BroadcastGrenadeExplodeInHand_Params
{
	class UKSWeaponAsset_Grenade**                     pGrenadeWeaponAsset;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BlueprintHandleDeath
struct AKSCharacter_BlueprintHandleDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BeginOutOfBounds
struct AKSCharacter_BeginOutOfBounds_Params
{
	float*                                             WarningLength;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BeginNonCharacterRevive
struct AKSCharacter_BeginNonCharacterRevive_Params
{
	class AKSPlayerState**                             ReviveInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.BeginInstantRevive
struct AKSCharacter_BeginInstantRevive_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Guaranteed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AttachViewTargetOnlyBPComponents
struct AKSCharacter_AttachViewTargetOnlyBPComponents_Params
{
};

// Function Killstreak.KSCharacter.ApplyMaxHealthBonus
struct AKSCharacter_ApplyMaxHealthBonus_Params
{
	float*                                             Bonus;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     EventCauser;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ApplyLastHitImpulse
struct AKSCharacter_ApplyLastHitImpulse_Params
{
	bool*                                              UpdateTargetRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              AffectCapsule;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ApplyFlinchFromPointDamage
struct AKSCharacter_ApplyFlinchFromPointDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    RelativeImpactLocation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    RelativeImpactNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ApplyCameraProximityFade
struct AKSCharacter_ApplyCameraProximityFade_Params
{
	float*                                             Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ApplyApparelAsset
struct AKSCharacter_ApplyApparelAsset_Params
{
	class UKSApparelAsset**                            ApparelAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AnyActivatableModsActive
struct AKSCharacter_AnyActivatableModsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AnimAuditStop
struct AKSCharacter_AnimAuditStop_Params
{
};

// Function Killstreak.KSCharacter.AnimAuditStart
struct AKSCharacter_AnimAuditStart_Params
{
};

// Function Killstreak.KSCharacter.AnimAuditResume
struct AKSCharacter_AnimAuditResume_Params
{
};

// Function Killstreak.KSCharacter.AnimAuditClear
struct AKSCharacter_AnimAuditClear_Params
{
};

// Function Killstreak.KSCharacter.AimDownSightsToggle
struct AKSCharacter_AimDownSightsToggle_Params
{
};

// Function Killstreak.KSCharacter.AimDownSightsReleased
struct AKSCharacter_AimDownSightsReleased_Params
{
};

// Function Killstreak.KSCharacter.AimDownSightsPressed
struct AKSCharacter_AimDownSightsPressed_Params
{
};

// Function Killstreak.KSCharacter.AddParticleEffects
struct AKSCharacter_AddParticleEffects_Params
{
	TArray<struct FKSParticleSystemAttachment>*        ParticleSystemAttachments;                                // (Parm, ZeroConstructor)
	TArray<class UParticleSystemComponent*>            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSCharacter.AddOutOfRangePickup
struct AKSCharacter_AddOutOfRangePickup_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             PickupDistance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AddOrUpdateBlendable
struct AKSCharacter_AddOrUpdateBlendable_Params
{
	TScriptInterface<class UBlendableInterface>*       InBlendableObject;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InWeight;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AddActionRestrictionForDuration
struct AKSCharacter_AddActionRestrictionForDuration_Params
{
	struct FKSActionRestrictor*                        ActionRestrictor;                                         // (Parm)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AddActionRestriction
struct AKSCharacter_AddActionRestriction_Params
{
	struct FKSActionRestrictor*                        ActionRestrictor;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.ActivatableModAtIndexActive
struct AKSCharacter_ActivatableModAtIndexActive_Params
{
	int*                                               AbilityIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AbortFireAllWeapons
struct AKSCharacter_AbortFireAllWeapons_Params
{
};

// Function Killstreak.KSCharacter.AbilityChargeUpdated
struct AKSCharacter_AbilityChargeUpdated_Params
{
	class UKSPlayerMod_Activated**                     ChargingMod;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacter.AbilityActivated
struct AKSCharacter_AbilityActivated_Params
{
	int*                                               AbilityIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.UpdateTestCombatState
struct UKSCharacterAnimInst_UpdateTestCombatState_Params
{
	ECombatState*                                      NewCombatState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockCooldown;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.UpdateCombatState
struct UKSCharacterAnimInst_UpdateCombatState_Params
{
	ECombatState*                                      NewCombatState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockCooldown;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.UpdateCachedPivotLocation
struct UKSCharacterAnimInst_UpdateCachedPivotLocation_Params
{
};

// Function Killstreak.KSCharacterAnimInst.UnplantRightHand
struct UKSCharacterAnimInst_UnplantRightHand_Params
{
};

// Function Killstreak.KSCharacterAnimInst.UnplantLeftHand
struct UKSCharacterAnimInst_UnplantLeftHand_Params
{
};

// Function Killstreak.KSCharacterAnimInst.UnhideWeapon
struct UKSCharacterAnimInst_UnhideWeapon_Params
{
};

// Function Killstreak.KSCharacterAnimInst.UnhideMag
struct UKSCharacterAnimInst_UnhideMag_Params
{
};

// Function Killstreak.KSCharacterAnimInst.UnhideGadget
struct UKSCharacterAnimInst_UnhideGadget_Params
{
};

// Function Killstreak.KSCharacterAnimInst.TryToTriggerTurnInPlaceAnimation
struct UKSCharacterAnimInst_TryToTriggerTurnInPlaceAnimation_Params
{
	EKSTurnInPlaceAnimationVariant*                    AnimationVariant;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DelayTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.TryGetKSCharacterBase
struct UKSCharacterAnimInst_TryGetKSCharacterBase_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.TriggerDisableAims
struct UKSCharacterAnimInst_TriggerDisableAims_Params
{
	bool*                                              bShouldDisable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.TriggerCustomPivot
struct UKSCharacterAnimInst_TriggerCustomPivot_Params
{
};

// Function Killstreak.KSCharacterAnimInst.SwitchWeaponNative
struct UKSCharacterAnimInst_SwitchWeaponNative_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.SwitchWeaponIKNative
struct UKSCharacterAnimInst_SwitchWeaponIKNative_Params
{
	class UKSWeaponComponent**                         Weapon;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.StopSpray
struct UKSCharacterAnimInst_StopSpray_Params
{
};

// Function Killstreak.KSCharacterAnimInst.StopFire
struct UKSCharacterAnimInst_StopFire_Params
{
};

// Function Killstreak.KSCharacterAnimInst.StopEmote
struct UKSCharacterAnimInst_StopEmote_Params
{
};

// Function Killstreak.KSCharacterAnimInst.StartSpray
struct UKSCharacterAnimInst_StartSpray_Params
{
};

// Function Killstreak.KSCharacterAnimInst.StartFire
struct UKSCharacterAnimInst_StartFire_Params
{
};

// Function Killstreak.KSCharacterAnimInst.StartEmote
struct UKSCharacterAnimInst_StartEmote_Params
{
	class UAnimMontage**                               EmoteMontage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.ShoulderCharge
struct UKSCharacterAnimInst_ShoulderCharge_Params
{
};

// Function Killstreak.KSCharacterAnimInst.SetMaxSpeedValues
struct UKSCharacterAnimInst_SetMaxSpeedValues_Params
{
	class UKSWeaponAsset**                             WeaponAsset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.ReviveMesh
struct UKSCharacterAnimInst_ReviveMesh_Params
{
	class UAnimMontage**                               ReviveMontage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsInAir;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.RetrieveEnd
struct UKSCharacterAnimInst_RetrieveEnd_Params
{
};

// Function Killstreak.KSCharacterAnimInst.RetrieveBegin
struct UKSCharacterAnimInst_RetrieveBegin_Params
{
};

// Function Killstreak.KSCharacterAnimInst.RequestNewCombatState
struct UKSCharacterAnimInst_RequestNewCombatState_Params
{
	ECombatState*                                      NewCombatState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockCooldown;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.RequestLeftHandIKForceOff
struct UKSCharacterAnimInst_RequestLeftHandIKForceOff_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.ReleaseWorldRotationLock
struct UKSCharacterAnimInst_ReleaseWorldRotationLock_Params
{
	unsigned char*                                     InLockId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.PopLeftHandIKForceOffRequest
struct UKSCharacterAnimInst_PopLeftHandIKForceOffRequest_Params
{
	int*                                               RequestID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.PlayRecoilProfile
struct UKSCharacterAnimInst_PlayRecoilProfile_Params
{
	struct FRecoilProfile*                             RecoilProfile;                                            // (Parm)
};

// Function Killstreak.KSCharacterAnimInst.OnTestCombatStateCooldown
struct UKSCharacterAnimInst_OnTestCombatStateCooldown_Params
{
};

// Function Killstreak.KSCharacterAnimInst.OnShoulderChanged
struct UKSCharacterAnimInst_OnShoulderChanged_Params
{
};

// Function Killstreak.KSCharacterAnimInst.OnMovementDirectionChanged
struct UKSCharacterAnimInst_OnMovementDirectionChanged_Params
{
	EKSMovementDirection*                              OldDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection*                              NewDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.OnCombatStateCooldown
struct UKSCharacterAnimInst_OnCombatStateCooldown_Params
{
};

// Function Killstreak.KSCharacterAnimInst.LocomotionStop
struct UKSCharacterAnimInst_LocomotionStop_Params
{
	struct FVector*                                    StopLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.LocomotionStart
struct UKSCharacterAnimInst_LocomotionStart_Params
{
	struct FVector*                                    StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.LocomotionPrePivot
struct UKSCharacterAnimInst_LocomotionPrePivot_Params
{
};

// Function Killstreak.KSCharacterAnimInst.LocomotionPivotCheckpoint
struct UKSCharacterAnimInst_LocomotionPivotCheckpoint_Params
{
};

// Function Killstreak.KSCharacterAnimInst.LocomotionPivot
struct UKSCharacterAnimInst_LocomotionPivot_Params
{
	struct FVector*                                    PivotLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.LocomotionJumpStart
struct UKSCharacterAnimInst_LocomotionJumpStart_Params
{
	struct FVector*                                    StartLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.LocomotionJumpLand
struct UKSCharacterAnimInst_LocomotionJumpLand_Params
{
	struct FVector*                                    LandLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.LockToCurrentInWorldRotation
struct UKSCharacterAnimInst_LockToCurrentInWorldRotation_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.IsLeftHandIKForcedOff
struct UKSCharacterAnimInst_IsLeftHandIKForcedOff_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.HideWeapon
struct UKSCharacterAnimInst_HideWeapon_Params
{
};

// Function Killstreak.KSCharacterAnimInst.HideMag
struct UKSCharacterAnimInst_HideMag_Params
{
};

// Function Killstreak.KSCharacterAnimInst.HideGadget
struct UKSCharacterAnimInst_HideGadget_Params
{
};

// Function Killstreak.KSCharacterAnimInst.GetUnpairedMirrorBones
struct UKSCharacterAnimInst_GetUnpairedMirrorBones_Params
{
	TArray<struct FBoneReference>                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSCharacterAnimInst.GetPairedMirrorBones
struct UKSCharacterAnimInst_GetPairedMirrorBones_Params
{
	TArray<struct FBoneMirrorPair>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSCharacterAnimInst.GetMovementDirectionFromLocalAcceleration
struct UKSCharacterAnimInst_GetMovementDirectionFromLocalAcceleration_Params
{
	struct FVector*                                    NormalizedLocalAccel;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bGetOppositeDirection;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMovementDirection                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.FloatSpringInterp
struct UKSCharacterAnimInst_FloatSpringInterp_Params
{
	float*                                             Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFloatHitSpringState                        SpringState;                                              // (Parm, OutParm, ReferenceParm)
	float*                                             Stiffness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CriticalDampingFactor;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Mass;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventStopSwimming
struct UKSCharacterAnimInst_EventStopSwimming_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventStopSubmerge
struct UKSCharacterAnimInst_EventStopSubmerge_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventStartSwimming
struct UKSCharacterAnimInst_EventStartSwimming_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventStartSubmerge
struct UKSCharacterAnimInst_EventStartSubmerge_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventStartInteraction
struct UKSCharacterAnimInst_EventStartInteraction_Params
{
	struct FName*                                      NewInteractState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewInteractHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewInteractTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventPlayHitReactionAnimation
struct UKSCharacterAnimInst_EventPlayHitReactionAnimation_Params
{
	struct FName*                                      AttackDirection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWillReturnDamage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventPlayFireAnimation
struct UKSCharacterAnimInst_EventPlayFireAnimation_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventPlayDeathAnimation
struct UKSCharacterAnimInst_EventPlayDeathAnimation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventEndZipLineEnding
struct UKSCharacterAnimInst_EventEndZipLineEnding_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndZipLineBrace
struct UKSCharacterAnimInst_EventEndZipLineBrace_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndZipLine
struct UKSCharacterAnimInst_EventEndZipLine_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndVault
struct UKSCharacterAnimInst_EventEndVault_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndStun
struct UKSCharacterAnimInst_EventEndStun_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndPowerSlide
struct UKSCharacterAnimInst_EventEndPowerSlide_Params
{
	EKSPowerSlideEndReason*                            EndReason;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventEndInteraction
struct UKSCharacterAnimInst_EventEndInteraction_Params
{
	struct FName*                                      OldInteractState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventEndHardLand
struct UKSCharacterAnimInst_EventEndHardLand_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndActivatingMod
struct UKSCharacterAnimInst_EventEndActivatingMod_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventEndAbilityMovement
struct UKSCharacterAnimInst_EventEndAbilityMovement_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoZipLineEnding
struct UKSCharacterAnimInst_EventDoZipLineEnding_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoZipLineBrace
struct UKSCharacterAnimInst_EventDoZipLineBrace_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoZipLine
struct UKSCharacterAnimInst_EventDoZipLine_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoVault
struct UKSCharacterAnimInst_EventDoVault_Params
{
	float*                                             InMantleHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInVault;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InVaultDrop;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InUpDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InAcrossDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InDownDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      InMantleName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventDoStun
struct UKSCharacterAnimInst_EventDoStun_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoPowerSlide
struct UKSCharacterAnimInst_EventDoPowerSlide_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoHardLandAvoid
struct UKSCharacterAnimInst_EventDoHardLandAvoid_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoHardLand
struct UKSCharacterAnimInst_EventDoHardLand_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoGoDown
struct UKSCharacterAnimInst_EventDoGoDown_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoDodgeRoll
struct UKSCharacterAnimInst_EventDoDodgeRoll_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.EventDoActivatingMod
struct UKSCharacterAnimInst_EventDoActivatingMod_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventDoAbilityMovement
struct UKSCharacterAnimInst_EventDoAbilityMovement_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EventActivatedModExpired
struct UKSCharacterAnimInst_EventActivatedModExpired_Params
{
};

// Function Killstreak.KSCharacterAnimInst.EnableAims
struct UKSCharacterAnimInst_EnableAims_Params
{
};

// Function Killstreak.KSCharacterAnimInst.DoResetCustomPivot
struct UKSCharacterAnimInst_DoResetCustomPivot_Params
{
};

// Function Killstreak.KSCharacterAnimInst.DodgeRollExpire
struct UKSCharacterAnimInst_DodgeRollExpire_Params
{
};

// Function Killstreak.KSCharacterAnimInst.DisableAims
struct UKSCharacterAnimInst_DisableAims_Params
{
};

// Function Killstreak.KSCharacterAnimInst.CheckCanSpray
struct UKSCharacterAnimInst_CheckCanSpray_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.CheckCanEmote
struct UKSCharacterAnimInst_CheckCanEmote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.CanUseCombatState
struct UKSCharacterAnimInst_CanUseCombatState_Params
{
	ECombatState*                                      TestState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterAnimInst.BroadcastOnGoDown
struct UKSCharacterAnimInst_BroadcastOnGoDown_Params
{
};

// Function Killstreak.KSCharacterAnimInst.BlinkEyes
struct UKSCharacterAnimInst_BlinkEyes_Params
{
};

// Function Killstreak.KSCharacterAnimInst.AttemptTestCombatStateCooldown
struct UKSCharacterAnimInst_AttemptTestCombatStateCooldown_Params
{
};

// Function Killstreak.KSCharacterAnimInst.AttemptCombatStateCooldown
struct UKSCharacterAnimInst_AttemptCombatStateCooldown_Params
{
};

// Function Killstreak.KSCharacterCameraShake.StopShakeOnViewTargetChanged
struct UKSCharacterCameraShake_StopShakeOnViewTargetChanged_Params
{
	class APlayerController**                          NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterCameraShake.StopShakeOnActorDestroyed
struct UKSCharacterCameraShake_StopShakeOnActorDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterCameraShake.StopShakeDynamic
struct UKSCharacterCameraShake_StopShakeDynamic_Params
{
};

// Function Killstreak.KSCharacterCameraShake.OnAimStateChanged
struct UKSCharacterCameraShake_OnAimStateChanged_Params
{
	EKSCharacterAimMode*                               NextAimState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.ResetPostFireSprintLockout
struct UKSCharacterMovementComponent_ResetPostFireSprintLockout_Params
{
};

// Function Killstreak.KSCharacterMovementComponent.IsZipLining
struct UKSCharacterMovementComponent_IsZipLining_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsSprintingWithVelocity
struct UKSCharacterMovementComponent_IsSprintingWithVelocity_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsSprinting
struct UKSCharacterMovementComponent_IsSprinting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsInPowerSlide
struct UKSCharacterMovementComponent_IsInPowerSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsFlightRecovery
struct UKSCharacterMovementComponent_IsFlightRecovery_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsDowned
struct UKSCharacterMovementComponent_IsDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsDodgeRolling
struct UKSCharacterMovementComponent_IsDodgeRolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsAimingOverShoulder
struct UKSCharacterMovementComponent_IsAimingOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsAimingDownSights
struct UKSCharacterMovementComponent_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsAimingAlternate
struct UKSCharacterMovementComponent_IsAimingAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.IsAiming
struct UKSCharacterMovementComponent_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.GetWantsToSprint
struct UKSCharacterMovementComponent_GetWantsToSprint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.GetWantsToPowerSlide
struct UKSCharacterMovementComponent_GetWantsToPowerSlide_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.GetProratedMaxSpeed
struct UKSCharacterMovementComponent_GetProratedMaxSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.FindPointAboveWater
struct UKSCharacterMovementComponent_FindPointAboveWater_Params
{
	struct FVector*                                    TestPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.ClientAdjustPositionVault
struct UKSCharacterMovementComponent_ClientAdjustPositionVault_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewPreVaultLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCharacterMovementComponent.ClientAdjustPositionDodgeRoll
struct UKSCharacterMovementComponent_ClientAdjustPositionDodgeRoll_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLoc;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewVel;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        NewBase;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      NewBaseBoneName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bHasBase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBaseRelativePosition;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewDodgeDuration;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewDodgeDirection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSkeletalMeshComponent.SetTeleportDistanceDeltaThreshold
struct UKSSkeletalMeshComponent_SetTeleportDistanceDeltaThreshold_Params
{
	float*                                             Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSkeletalMeshComponent.SetForceTextureResidentFlag
struct UKSSkeletalMeshComponent_SetForceTextureResidentFlag_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSkeletalMeshComponent.GetTeleportDistanceDeltaThreshold
struct UKSSkeletalMeshComponent_GetTeleportDistanceDeltaThreshold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSkeletalMeshComponent.GetForceTextureResidentFlag
struct UKSSkeletalMeshComponent_GetForceTextureResidentFlag_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.WarpZ
struct UKSCheatComponent_WarpZ_Params
{
	float*                                             Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.WarpToSpawn
struct UKSCheatComponent_WarpToSpawn_Params
{
};

// Function Killstreak.KSCheatComponent.Warp
struct UKSCheatComponent_Warp_Params
{
	float*                                             X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ToggleWeaponDebug
struct UKSCheatComponent_ToggleWeaponDebug_Params
{
};

// Function Killstreak.KSCheatComponent.ToggleHud
struct UKSCheatComponent_ToggleHud_Params
{
};

// Function Killstreak.KSCheatComponent.ToggleGamepadAimDebug
struct UKSCheatComponent_ToggleGamepadAimDebug_Params
{
};

// Function Killstreak.KSCheatComponent.ToggleAdvancedCombatLog
struct UKSCheatComponent_ToggleAdvancedCombatLog_Params
{
};

// Function Killstreak.KSCheatComponent.TestPreviewActor
struct UKSCheatComponent_TestPreviewActor_Params
{
	struct FString*                                    JobName;                                                  // (Parm, ZeroConstructor)
	int*                                               PositionIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.TakeDamage
struct UKSCheatComponent_TakeDamage_Params
{
	struct FString*                                    WeaponName;                                               // (Parm, ZeroConstructor)
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Head;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.Suicide
struct UKSCheatComponent_Suicide_Params
{
};

// Function Killstreak.KSCheatComponent.Spectate
struct UKSCheatComponent_Spectate_Params
{
};

// Function Killstreak.KSCheatComponent.Spawn
struct UKSCheatComponent_Spawn_Params
{
	struct FString*                                    BotName;                                                  // (Parm, ZeroConstructor)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ShowWeaponStats
struct UKSCheatComponent_ShowWeaponStats_Params
{
};

// Function Killstreak.KSCheatComponent.ShowLocation
struct UKSCheatComponent_ShowLocation_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ShowKillCamWorld
struct UKSCheatComponent_ShowKillCamWorld_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ShowHealth
struct UKSCheatComponent_ShowHealth_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ShowDifficulties
struct UKSCheatComponent_ShowDifficulties_Params
{
};

// Function Killstreak.KSCheatComponent.ShowBots
struct UKSCheatComponent_ShowBots_Params
{
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.SetTimeLeft
struct UKSCheatComponent_SetTimeLeft_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.SetTeam
struct UKSCheatComponent_SetTeam_Params
{
	int*                                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.SetGroundSpeed
struct UKSCheatComponent_SetGroundSpeed_Params
{
	float*                                             Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.SetDifficulty
struct UKSCheatComponent_SetDifficulty_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerWarpZ
struct UKSCheatComponent_ServerWarpZ_Params
{
	float*                                             Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerWarpToSpawn
struct UKSCheatComponent_ServerWarpToSpawn_Params
{
};

// Function Killstreak.KSCheatComponent.ServerWarp
struct UKSCheatComponent_ServerWarp_Params
{
	float*                                             X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerToggleHud
struct UKSCheatComponent_ServerToggleHud_Params
{
};

// Function Killstreak.KSCheatComponent.ServerToggleCombatLog
struct UKSCheatComponent_ServerToggleCombatLog_Params
{
};

// Function Killstreak.KSCheatComponent.ServerTakeDamage
struct UKSCheatComponent_ServerTakeDamage_Params
{
	struct FString*                                    WeaponName;                                               // (Parm, ZeroConstructor)
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Head;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerSuicide
struct UKSCheatComponent_ServerSuicide_Params
{
};

// Function Killstreak.KSCheatComponent.ServerSpectate
struct UKSCheatComponent_ServerSpectate_Params
{
};

// Function Killstreak.KSCheatComponent.ServerSpawn
struct UKSCheatComponent_ServerSpawn_Params
{
	struct FString*                                    BotName;                                                  // (Parm, ZeroConstructor)
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerShowLocation
struct UKSCheatComponent_ServerShowLocation_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerShowHealth
struct UKSCheatComponent_ServerShowHealth_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerShowDifficulties
struct UKSCheatComponent_ServerShowDifficulties_Params
{
};

// Function Killstreak.KSCheatComponent.ServerShowBots
struct UKSCheatComponent_ServerShowBots_Params
{
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerSetTimeLeft
struct UKSCheatComponent_ServerSetTimeLeft_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerSetTeam
struct UKSCheatComponent_ServerSetTeam_Params
{
	int*                                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerSetGroundSpeed
struct UKSCheatComponent_ServerSetGroundSpeed_Params
{
	float*                                             Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerSetDifficulty
struct UKSCheatComponent_ServerSetDifficulty_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               DifficultyIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerRemoveFromLoadout
struct UKSCheatComponent_ServerRemoveFromLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerRemoveAllMods
struct UKSCheatComponent_ServerRemoveAllMods_Params
{
};

// Function Killstreak.KSCheatComponent.ServerQuickEndGame
struct UKSCheatComponent_ServerQuickEndGame_Params
{
	bool*                                              bWin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerInvisMe
struct UKSCheatComponent_ServerInvisMe_Params
{
	bool*                                              Invis;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerInstantReplay
struct UKSCheatComponent_ServerInstantReplay_Params
{
	float*                                             TimeToReplay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerInfiniteAmmo
struct UKSCheatComponent_ServerInfiniteAmmo_Params
{
	bool*                                              Infinite;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerGod
struct UKSCheatComponent_ServerGod_Params
{
};

// Function Killstreak.KSCheatComponent.ServerGiveKSPoints
struct UKSCheatComponent_ServerGiveKSPoints_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerGiveAsync
struct UKSCheatComponent_ServerGiveAsync_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerGiveAllKSPoints
struct UKSCheatComponent_ServerGiveAllKSPoints_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerGive
struct UKSCheatComponent_ServerGive_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerEnableKillCam
struct UKSCheatComponent_ServerEnableKillCam_Params
{
};

// Function Killstreak.KSCheatComponent.ServerDrop
struct UKSCheatComponent_ServerDrop_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerDisableAFKTimer
struct UKSCheatComponent_ServerDisableAFKTimer_Params
{
};

// Function Killstreak.KSCheatComponent.ServerCharReset
struct UKSCheatComponent_ServerCharReset_Params
{
};

// Function Killstreak.KSCheatComponent.ServerChangeCash
struct UKSCheatComponent_ServerChangeCash_Params
{
	int*                                               CashDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerBotGodMode
struct UKSCheatComponent_ServerBotGodMode_Params
{
	bool*                                              Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerAttach
struct UKSCheatComponent_ServerAttach_Params
{
	struct FString*                                    AttachmentName;                                           // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerAdjustDifficulty
struct UKSCheatComponent_ServerAdjustDifficulty_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.ServerAddToLoadout
struct UKSCheatComponent_ServerAddToLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.ServerAddAttachmentToLoadout
struct UKSCheatComponent_ServerAddAttachmentToLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    AttachmentName;                                           // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.RemoveFromLoadout
struct UKSCheatComponent_RemoveFromLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.RemoveAllMods
struct UKSCheatComponent_RemoveAllMods_Params
{
};

// Function Killstreak.KSCheatComponent.QuickEndGame
struct UKSCheatComponent_QuickEndGame_Params
{
	bool*                                              bWin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.QEG
struct UKSCheatComponent_QEG_Params
{
	bool*                                              bWin;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.OnRep_HudVisible
struct UKSCheatComponent_OnRep_HudVisible_Params
{
};

// Function Killstreak.KSCheatComponent.OnRep_CanViewLocation
struct UKSCheatComponent_OnRep_CanViewLocation_Params
{
};

// Function Killstreak.KSCheatComponent.OnRep_CanViewDebugHealth
struct UKSCheatComponent_OnRep_CanViewDebugHealth_Params
{
};

// Function Killstreak.KSCheatComponent.NextPerfCaptureCamera
struct UKSCheatComponent_NextPerfCaptureCamera_Params
{
};

// Function Killstreak.KSCheatComponent.InvisMe
struct UKSCheatComponent_InvisMe_Params
{
	bool*                                              Invis;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.InstantReplay
struct UKSCheatComponent_InstantReplay_Params
{
	float*                                             TimeToReplay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.InfiniteAmmo
struct UKSCheatComponent_InfiniteAmmo_Params
{
	bool*                                              Infinite;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.God
struct UKSCheatComponent_God_Params
{
};

// Function Killstreak.KSCheatComponent.GiveKSPoints
struct UKSCheatComponent_GiveKSPoints_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.GiveAsync
struct UKSCheatComponent_GiveAsync_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.GiveAllKSPoints
struct UKSCheatComponent_GiveAllKSPoints_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.Give
struct UKSCheatComponent_Give_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.EnableSound
struct UKSCheatComponent_EnableSound_Params
{
};

// Function Killstreak.KSCheatComponent.EnableKillCam
struct UKSCheatComponent_EnableKillCam_Params
{
};

// Function Killstreak.KSCheatComponent.Drop
struct UKSCheatComponent_Drop_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.DownSelf
struct UKSCheatComponent_DownSelf_Params
{
};

// Function Killstreak.KSCheatComponent.DisableSound
struct UKSCheatComponent_DisableSound_Params
{
};

// Function Killstreak.KSCheatComponent.DisableAFKTimer
struct UKSCheatComponent_DisableAFKTimer_Params
{
};

// Function Killstreak.KSCheatComponent.DebugThreatLevels
struct UKSCheatComponent_DebugThreatLevels_Params
{
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.CharReset
struct UKSCheatComponent_CharReset_Params
{
};

// Function Killstreak.KSCheatComponent.ChangeCash
struct UKSCheatComponent_ChangeCash_Params
{
	int*                                               CashDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.BotGodMode
struct UKSCheatComponent_BotGodMode_Params
{
	bool*                                              Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.Attach
struct UKSCheatComponent_Attach_Params
{
	struct FString*                                    AttachmentName;                                           // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.AdjustDifficulty
struct UKSCheatComponent_AdjustDifficulty_Params
{
	int*                                               Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCheatComponent.AddToLoadout
struct UKSCheatComponent_AddToLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCheatComponent.AddAttachmentToLoadout
struct UKSCheatComponent_AddAttachmentToLoadout_Params
{
	struct FString*                                    ItemName;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    AttachmentName;                                           // (Parm, ZeroConstructor)
};

// Function Killstreak.KSCombatLogComponent.ToggleDebugLogging
struct UKSCombatLogComponent_ToggleDebugLogging_Params
{
};

// Function Killstreak.KSCombatLogComponent.DrawToDebugCanvas
struct UKSCombatLogComponent_DrawToDebugCanvas_Params
{
	class UCanvas**                                    DebugCanvas;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          LocalController;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSCombatLogComponent.CombatSummaryRecieved
struct UKSCombatLogComponent_CombatSummaryRecieved_Params
{
	struct FAdvancedCombatSummary*                     CombatSummary;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSControllerInterface.RecordDamageDealt
struct UKSControllerInterface_RecordDamageDealt_Params
{
	float*                                             ProratedDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetSkinLevel
struct UKSControllerInterface_GetSkinLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetSkinId
struct UKSControllerInterface_GetSkinId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetKSPlayerState
struct UKSControllerInterface_GetKSPlayerState_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetKSCharacter
struct UKSControllerInterface_GetKSCharacter_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetController
struct UKSControllerInterface_GetController_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetCheatComponent
struct UKSControllerInterface_GetCheatComponent_Params
{
	class UKSCheatComponent*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSControllerInterface.GetBotId
struct UKSControllerInterface_GetBotId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSControlPoint.RemovePrimitiveToPawnOverlapCheck
struct AKSControlPoint_RemovePrimitiveToPawnOverlapCheck_Params
{
	class UPrimitiveComponent**                        InPrimitive;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSControlPoint.OnTeamSidesFlipped
struct AKSControlPoint_OnTeamSidesFlipped_Params
{
};

// Function Killstreak.KSControlPoint.OnEndOverlap
struct AKSControlPoint_OnEndOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSControlPoint.OnBeginOverlap
struct AKSControlPoint_OnBeginOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSControlPoint.AddPrimitiveToPawnOverlapCheck
struct AKSControlPoint_AddPrimitiveToPawnOverlapCheck_Params
{
	class UPrimitiveComponent**                        InPrimitive;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSCustomApparelComponent.GetSkinObject
struct UKSCustomApparelComponent_GetSkinObject_Params
{
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCustomApparelComponent.GetCharacterOwner
struct UKSCustomApparelComponent_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCustomApparelComponent.GetApparelAsset
struct UKSCustomApparelComponent_GetApparelAsset_Params
{
	class UKSApparelAsset_CustomComponent*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSCustomApparelComponent.BlueprintFinishedInitialization
struct UKSCustomApparelComponent_BlueprintFinishedInitialization_Params
{
};

// Function Killstreak.KSDamageable.ReportDamageByInstigator
struct UKSDamageable_ReportDamageByInstigator_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSDamageable.GetHitLocationTypeFromBoneName
struct UKSDamageable_GetHitLocationTypeFromBoneName_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EHitLocationType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDamageable.DoesBoneAllowHeadshotPassthrough
struct UKSDamageable_DoesBoneAllowHeadshotPassthrough_Params
{
	struct FName*                                      BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDamageTypeBase.GetDefaultObjectPropertiesFromDamageType
struct UKSDamageTypeBase_GetDefaultObjectPropertiesFromDamageType_Params
{
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             OutHitPawnEffect;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OutHitBodyAudioEvent;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OutHitHeadAudioEvent;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               OutHitByAudioEvent;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.TickTargeting
struct UKSWeaponTargetingModule_TickTargeting_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.IsTargetingModeEnabled
struct UKSWeaponTargetingModule_IsTargetingModeEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.IsAimedAtEnemy
struct UKSWeaponTargetingModule_IsAimedAtEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.GetWeaponComponent
struct UKSWeaponTargetingModule_GetWeaponComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.GetOwningCharacter
struct UKSWeaponTargetingModule_GetOwningCharacter_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponTargetingModule.ExitTargetingMode
struct UKSWeaponTargetingModule_ExitTargetingMode_Params
{
};

// Function Killstreak.KSWeaponTargetingModule.EnterTargetingMode
struct UKSWeaponTargetingModule_EnterTargetingMode_Params
{
};

// Function Killstreak.KSDefaultAimTargetingModule.IsWallMarkerActive
struct UKSDefaultAimTargetingModule_IsWallMarkerActive_Params
{
	struct FVector                                     WallLocation;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDefaultAimTargetingModule.IsCurrentlyBlocked
struct UKSDefaultAimTargetingModule_IsCurrentlyBlocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.ShouldCrouch
struct AKSMapPoint_ShouldCrouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.MatchesTags
struct AKSMapPoint_MatchesTags_Params
{
	struct FGameplayTagContainer*                      InMapPointTypes;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.MatchesTag
struct AKSMapPoint_MatchesTag_Params
{
	struct FGameplayTag*                               InMapPointType;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.IsFriendly
struct AKSMapPoint_IsFriendly_Params
{
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.IsAvailable
struct AKSMapPoint_IsAvailable_Params
{
	class AActor**                                     InActor;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMapPoint.IsActive
struct AKSMapPoint_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDefensePoint.RelevantObjectiveUpdated
struct AKSDefensePoint_RelevantObjectiveUpdated_Params
{
	class AKSObjectiveBase**                           Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSDefensePoint.GetTargetDefensePoint
struct AKSDefensePoint_GetTargetDefensePoint_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDeployable.ShouldSetFriendlyOutlineOnRegister
struct UKSDeployable_ShouldSetFriendlyOutlineOnRegister_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDeployable.SetOutlineColor
struct UKSDeployable_SetOutlineColor_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSOutlineParameters*                       OutlineParams;                                            // (Parm)
	int*                                               Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSDestroyableHazardComponent.ShouldFireAt
struct UKSDestroyableHazardComponent_ShouldFireAt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDestroyableHazardComponent.ShouldEMP
struct UKSDestroyableHazardComponent_ShouldEMP_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.UndoBadDestroy
struct AKSDestructibleBase_UndoBadDestroy_Params
{
};

// Function Killstreak.KSDestructibleBase.SpeedGateOverlap
struct AKSDestructibleBase_SpeedGateOverlap_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.SetupPreBroken
struct AKSDestructibleBase_SetupPreBroken_Params
{
};

// Function Killstreak.KSDestructibleBase.ResetDestructible
struct AKSDestructibleBase_ResetDestructible_Params
{
};

// Function Killstreak.KSDestructibleBase.PostDestructionEvent
struct AKSDestructibleBase_PostDestructionEvent_Params
{
	class UAkAudioEvent**                              InEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.OnRoundChange
struct AKSDestructibleBase_OnRoundChange_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSDestructibleBase.OnRep_Health
struct AKSDestructibleBase_OnRep_Health_Params
{
};

// Function Killstreak.KSDestructibleBase.OnDestructionChange
struct AKSDestructibleBase_OnDestructionChange_Params
{
	bool*                                              Destroyed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bInitialSetup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.OnDamageEvent
struct AKSDestructibleBase_OnDamageEvent_Params
{
	float*                                             NewHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              FromServer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.GetMaxHealth
struct AKSDestructibleBase_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.GetCurrentHealth
struct AKSDestructibleBase_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDestructibleBase.BlueprintPrepareKillCamPlayback
struct AKSDestructibleBase_BlueprintPrepareKillCamPlayback_Params
{
};

// Function Killstreak.KSDropLocation.ShouldReverseWayPointSetDirection
struct AKSDropLocation_ShouldReverseWayPointSetDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.IncrementSelectionCount
struct AKSDropLocation_IncrementSelectionCount_Params
{
};

// Function Killstreak.KSDropLocation.HandleRoundSetup
struct AKSDropLocation_HandleRoundSetup_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSDropLocation.GetWayPointSet
struct AKSDropLocation_GetWayPointSet_Params
{
	class AKSWayPointSet*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.GetValidSides
struct AKSDropLocation_GetValidSides_Params
{
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSDropLocation.GetTargetDropLocation
struct AKSDropLocation_GetTargetDropLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.GetNumTimesSelected
struct AKSDropLocation_GetNumTimesSelected_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.GetFreefallXYDistance
struct AKSDropLocation_GetFreefallXYDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.GetFreefallHeight
struct AKSDropLocation_GetFreefallHeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropLocation.GetFlightDistanceModifier
struct AKSDropLocation_GetFlightDistanceModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDropShipLocation.OnDropShipSpawned
struct AKSDropShipLocation_OnDropShipSpawned_Params
{
};

// Function Killstreak.KSDynamicMaskComponent.Wipe
struct UKSDynamicMaskComponent_Wipe_Params
{
};

// Function Killstreak.KSDynamicMaskComponent.GetColorAtPosition
struct UKSDynamicMaskComponent_GetColorAtPosition_Params
{
	struct FVector2D*                                  Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSDynamicMaskComponent.DrawDodecagon
struct UKSDynamicMaskComponent_DrawDodecagon_Params
{
	struct FVector2D*                                  Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSDynamicMaskComponent.DrawBox
struct UKSDynamicMaskComponent_DrawBox_Params
{
	struct FVector2D*                                  Position;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D*                                  Dimensions;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSDynamicMaskComponent.ConvertToTargetFromWorld
struct UKSDynamicMaskComponent_ConvertToTargetFromWorld_Params
{
	struct FVector*                                    WorldSpace;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmote.ShouldPreventPlay
struct UKSEmote_ShouldPreventPlay_Params
{
	EKSEmoteInterruptReason*                           InReason;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmote.ShouldInterrupt
struct UKSEmote_ShouldInterrupt_Params
{
	EKSEmoteInterruptReason*                           InReason;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmote.GetLockPawnRotationWhilePlaying
struct UKSEmote_GetLockPawnRotationWhilePlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmote.GetEmotionToApply
struct UKSEmote_GetEmotionToApply_Params
{
	EKSEmotion                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmote.GetEmoteInstanceClass
struct UKSEmote_GetEmoteInstanceClass_Params
{
};

// Function Killstreak.KSEmote.GetEmoteCosmeticClass
struct UKSEmote_GetEmoteCosmeticClass_Params
{
};

// Function Killstreak.KSEquipmentCosmeticComponent.OnRep_EquipPoint
struct UKSEquipmentCosmeticComponent_OnRep_EquipPoint_Params
{
};

// Function Killstreak.KSEquipmentCosmeticComponent.OnRep_EquipmentId
struct UKSEquipmentCosmeticComponent_OnRep_EquipmentId_Params
{
};

// Function Killstreak.KSEquipmentCosmeticComponent.IsOwnerDeadOrDestroyed
struct UKSEquipmentCosmeticComponent_IsOwnerDeadOrDestroyed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.IsLocallyViewed
struct UKSEquipmentCosmeticComponent_IsLocallyViewed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.IsLocallyManaged
struct UKSEquipmentCosmeticComponent_IsLocallyManaged_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.IsInAction
struct UKSEquipmentCosmeticComponent_IsInAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.GetEquipPoint
struct UKSEquipmentCosmeticComponent_GetEquipPoint_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSEquipmentCosmeticComponent.GetCharAnimInstance
struct UKSEquipmentCosmeticComponent_GetCharAnimInstance_Params
{
	class UKSCharacterAnimInst*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.GetCharacterOwner
struct UKSEquipmentCosmeticComponent_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.GetCharacterMesh
struct UKSEquipmentCosmeticComponent_GetCharacterMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSEquipmentCosmeticComponent.BlueprintOwnerSkinTagContainerChanged
struct UKSEquipmentCosmeticComponent_BlueprintOwnerSkinTagContainerChanged_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.OnRep_PlayTicker
struct UKSEmoteCosmeticComponent_OnRep_PlayTicker_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.OnRep_EmoteAsset
struct UKSEmoteCosmeticComponent_OnRep_EmoteAsset_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.OnInitialize
struct UKSEmoteCosmeticComponent_OnInitialize_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.MarkStopped
struct UKSEmoteCosmeticComponent_MarkStopped_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.MarkPlaying
struct UKSEmoteCosmeticComponent_MarkPlaying_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.IsPlaying
struct UKSEmoteCosmeticComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent.IsInitialized
struct UKSEmoteCosmeticComponent_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent.GetSkinObject
struct UKSEmoteCosmeticComponent_GetSkinObject_Params
{
	class UMultiSkinObject*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent.GetEmoteAsset
struct UKSEmoteCosmeticComponent_GetEmoteAsset_Params
{
	class UKSEmote*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent.BlueprintPlayEmote
struct UKSEmoteCosmeticComponent_BlueprintPlayEmote_Params
{
};

// Function Killstreak.KSEmoteCosmeticComponent.BlueprintInterruptEmote
struct UKSEmoteCosmeticComponent_BlueprintInterruptEmote_Params
{
	EKSEmoteInterruptReason*                           Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent_Spray.NetMulticastPlaySpray
struct UKSEmoteCosmeticComponent_Spray_NetMulticastPlaySpray_Params
{
	struct FVector*                                    SprayLocation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   SprayRotation;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent**                        SprayTarget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSEmoteCosmeticComponent_Spray.BlueprintPlaySpray
struct UKSEmoteCosmeticComponent_Spray_BlueprintPlaySpray_Params
{
	struct FVector*                                    SprayLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   SprayRotation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent**                        SprayTarget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.ServerPlayEmote
struct AKSEmoteInstance_ServerPlayEmote_Params
{
};

// Function Killstreak.KSEmoteInstance.ServerForceStopEmote
struct AKSEmoteInstance_ServerForceStopEmote_Params
{
};

// Function Killstreak.KSEmoteInstance.PlayEmote
struct AKSEmoteInstance_PlayEmote_Params
{
	EKSEmoteInterruptReason                            OutInterruptReason;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.OnRep_EmoteAsset
struct AKSEmoteInstance_OnRep_EmoteAsset_Params
{
};

// Function Killstreak.KSEmoteInstance.IsManagingEmoteLocally
struct AKSEmoteInstance_IsManagingEmoteLocally_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.GetEmoteCosmeticComponent
struct AKSEmoteInstance_GetEmoteCosmeticComponent_Params
{
	class UKSEmoteCosmeticComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.GetEmoteAsset
struct AKSEmoteInstance_GetEmoteAsset_Params
{
	class UKSEmote*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.GetActiveCharacterOwner
struct AKSEmoteInstance_GetActiveCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance.ForceStopEmote
struct AKSEmoteInstance_ForceStopEmote_Params
{
};

// Function Killstreak.KSEmoteInstance.DoEmote
struct AKSEmoteInstance_DoEmote_Params
{
};

// Function Killstreak.KSEmoteInstance.CanPlayEmoteNow
struct AKSEmoteInstance_CanPlayEmoteNow_Params
{
	EKSEmoteInterruptReason                            OutInterruptReason;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmoteInstance_Spray.ServerPlaySpray
struct AKSEmoteInstance_Spray_ServerPlaySpray_Params
{
	struct FAimData*                                   InSprayAim;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSEmotionComponentOwner.GetEmotionFloat
struct UKSEmotionComponentOwner_GetEmotionFloat_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponentOwner.GetEmotion
struct UKSEmotionComponentOwner_GetEmotion_Params
{
	EKSEmotion                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.RemoveEmotionById
struct UKSEmotionComponent_RemoveEmotionById_Params
{
	int*                                               InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.RemoveEmotion
struct UKSEmotionComponent_RemoveEmotion_Params
{
	EKSEmotion*                                        InEmotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.GetEmotionComponentOwner
struct UKSEmotionComponent_GetEmotionComponentOwner_Params
{
	TScriptInterface<class UKSEmotionComponentOwner>   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.GetCurrentEmotion
struct UKSEmotionComponent_GetCurrentEmotion_Params
{
	EKSEmotion                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.AddEmotionInternal
struct UKSEmotionComponent_AddEmotionInternal_Params
{
	EKSEmotion*                                        Emotion;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.AddEmotionForDuration
struct UKSEmotionComponent_AddEmotionForDuration_Params
{
	EKSEmotion*                                        InEmotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.AddEmotion
struct UKSEmotionComponent_AddEmotion_Params
{
	EKSEmotion*                                        InEmotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEmotionComponent.AddAndRemoveEmotion
struct UKSEmotionComponent_AddAndRemoveEmotion_Params
{
	EKSEmotion*                                        InEmotion;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InInstanceID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameRuleComponent.OnTeamSidesFlipped
struct UKSGameRuleComponent_OnTeamSidesFlipped_Params
{
};

// Function Killstreak.KSGameRuleComponent.NewPlayerStarting
struct UKSGameRuleComponent_NewPlayerStarting_Params
{
	class APlayerController**                          NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameRuleComponent.NewBotStarting
struct UKSGameRuleComponent_NewBotStarting_Params
{
	class AKSAIController**                            NewBot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEnforcedEquipmentState.OnRep_EnforcedItems
struct AKSEnforcedEquipmentState_OnRep_EnforcedItems_Params
{
};

// Function Killstreak.KSEnvironmentVolumeActor.UpdateEnvironmentTag
struct AKSEnvironmentVolumeActor_UpdateEnvironmentTag_Params
{
	struct FName*                                      NewTag;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEquipmentManagerComponent.SetEquipmentContainerOwner
struct UKSEquipmentManagerComponent_SetEquipmentContainerOwner_Params
{
	TScriptInterface<class UKSEquipmentContainerOwner>* InEquipmentContainerOwner;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSEquipmentManagerComponent.OnItemDropped
struct UKSEquipmentManagerComponent_OnItemDropped_Params
{
	class UKSItem**                                    InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                InDrop;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEquipmentManagerComponent.GetEquipmentByEquipPoint
struct UKSEquipmentManagerComponent_GetEquipmentByEquipPoint_Params
{
	struct FGameplayTag*                               InEquipPoint;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class AKSEquipment*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEscapePoint.OnEscapeOverlapEnd
struct AKSEscapePoint_OnEscapeOverlapEnd_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEscapePoint.OnEscapeOverlapBegin
struct AKSEscapePoint_OnEscapeOverlapBegin_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSEscapePoint.NotifyBots
struct AKSEscapePoint_NotifyBots_Params
{
};

// Function Killstreak.KSEventTracker.TriggerEvent
struct UKSEventTracker_TriggerEvent_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEventTracker.TickTracker
struct UKSEventTracker_TickTracker_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSEventTracker.HandleTrackerInitialized
struct UKSEventTracker_HandleTrackerInitialized_Params
{
	TMap<struct FString, float>*                       Config;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSEventTracker.HandleLostPlayerController
struct UKSEventTracker_HandleLostPlayerController_Params
{
};

// Function Killstreak.KSEventTracker.GetGameState
struct UKSEventTracker_GetGameState_Params
{
	class AKSGameState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEventTracker.GetGameMode
struct UKSEventTracker_GetGameMode_Params
{
	class AKSGameMode*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSEventTracker.GetGameInstance
struct UKSEventTracker_GetGameInstance_Params
{
	class UKSGameInstance*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSExtinguisher.ShouldExtinguishRightNow
struct UKSExtinguisher_ShouldExtinguishRightNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSExtractionPickup.IsPickupUsed
struct AKSExtractionPickup_IsPickupUsed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSExtractionPickup.IsPickupEnabled
struct AKSExtractionPickup_IsPickupEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSExtractionPickup.DeactivatePickup
struct AKSExtractionPickup_DeactivatePickup_Params
{
};

// Function Killstreak.KSExtractionPickup.ActivatePickup
struct AKSExtractionPickup_ActivatePickup_Params
{
};

// Function Killstreak.KSFinalBlowTracker.HandleOnLastPlayer
struct UKSFinalBlowTracker_HandleOnLastPlayer_Params
{
	class AKSPlayerState**                             LastPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFinalBlowTracker.CheckLastPlayer
struct UKSFinalBlowTracker_CheckLastPlayer_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
	class AKSPlayerState**                             LastPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFirstBloodTracker.HandleTrackerAccolade
struct UKSFirstBloodTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFlightRecoveryVolume.OnOverlapEnd
struct AKSFlightRecoveryVolume_OnOverlapEnd_Params
{
	class AActor**                                     OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFlightRecoveryVolume.OnOverlapBegin
struct AKSFlightRecoveryVolume_OnOverlapBegin_Params
{
	class AActor**                                     OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSFootstepOverrideInterface.GetPriorityLevel
struct UKSFootstepOverrideInterface_GetPriorityLevel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSFootstepOverrideInterface.GetOverrideByLocation
struct UKSFootstepOverrideInterface_GetOverrideByLocation_Params
{
	struct FVector*                                    WorldLocation;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               outShouldOverride;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       outOverrideName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGadgetAssetDrop.GetLabelInfoForGadgetDescription
struct AKSGadgetAssetDrop_GetLabelInfoForGadgetDescription_Params
{
	struct FText                                       DescriptionText;                                          // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameEngine.SetGoPlayMapTravelDelayed
struct UKSGameEngine_SetGoPlayMapTravelDelayed_Params
{
	bool*                                              DelayGoPlayMap;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameEngine.SetGoPlayMapDelayTimeoutLimit
struct UKSGameEngine_SetGoPlayMapDelayTimeoutLimit_Params
{
	float*                                             DelayTimeoutLimit;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameEngine.QuickGoPlayCachedMap
struct UKSGameEngine_QuickGoPlayCachedMap_Params
{
};

// Function Killstreak.KSGameEngine.OnTriggerGoPlayMap
struct UKSGameEngine_OnTriggerGoPlayMap_Params
{
};

// Function Killstreak.KSGameEngine.GetGoPlayMapTravelDelayed
struct UKSGameEngine_GetGoPlayMapTravelDelayed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameEngine.GetGoPlayMapDelayTimeoutLimit
struct UKSGameEngine_GetGoPlayMapDelayTimeoutLimit_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameEngine.FinishGoPlayMap
struct UKSGameEngine_FinishGoPlayMap_Params
{
};

// Function Killstreak.KSGameEngine.CancelDelayedGoPlayMap
struct UKSGameEngine_CancelDelayedGoPlayMap_Params
{
};

// Function Killstreak.KSGameInstance.UpdateRecordedAnimStats
struct UKSGameInstance_UpdateRecordedAnimStats_Params
{
	TMap<struct FName, struct FKSAnimStats>            NewStats;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSGameInstance.HandleAppResume
struct UKSGameInstance_HandleAppResume_Params
{
};

// Function Killstreak.KSGameInstance.HandleAppReactivated
struct UKSGameInstance_HandleAppReactivated_Params
{
};

// Function Killstreak.KSGameInstance.GetWeaponMasteryManager
struct UKSGameInstance_GetWeaponMasteryManager_Params
{
	class UKSWeaponMasteryManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetStoreItemHelper
struct UKSGameInstance_GetStoreItemHelper_Params
{
	class UPUMG_StoreItemHelper*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetPlayerStatsManager
struct UKSGameInstance_GetPlayerStatsManager_Params
{
	class UKSPlayerStatsManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetPlayerInventoryHelper
struct UKSGameInstance_GetPlayerInventoryHelper_Params
{
	class UKSPlayerInventoryHelper*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetNPETrackManager
struct UKSGameInstance_GetNPETrackManager_Params
{
	class UKSNPETrackManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetMercMasteryManager
struct UKSGameInstance_GetMercMasteryManager_Params
{
	class UKSMercMasteryManager*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetLoadingScreenImage
struct UKSGameInstance_GetLoadingScreenImage_Params
{
	struct FString*                                    InMapName;                                                // (Parm, ZeroConstructor)
	struct FText                                       MapDisplayName;                                           // (Parm, OutParm)
	struct FText                                       MapRegion;                                                // (Parm, OutParm)
	struct FText                                       MapDescription;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.GetAwardsManager
struct UKSGameInstance_GetAwardsManager_Params
{
	class UKSAwardsManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameInstance.ExportAnimAudit
struct UKSGameInstance_ExportAnimAudit_Params
{
	struct FString*                                    Filename;                                                 // (ConstParm, Parm, ZeroConstructor)
};

// Function Killstreak.KSGameInstance.EndLoading
struct UKSGameInstance_EndLoading_Params
{
};

// Function Killstreak.KSGameInstance.BeginLoading
struct UKSGameInstance_BeginLoading_Params
{
	struct FString*                                    mapName;                                                  // (Parm, ZeroConstructor)
};

// Function Killstreak.KSGameMode.UsePlayerLoadouts
struct AKSGameMode_UsePlayerLoadouts_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.SetMatchPhase
struct AKSGameMode_SetMatchPhase_Params
{
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.SetInfiniteAmmo
struct AKSGameMode_SetInfiniteAmmo_Params
{
	bool*                                              bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.SelectAWinner
struct AKSGameMode_SelectAWinner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.PopulateLootSites
struct AKSGameMode_PopulateLootSites_Params
{
};

// Function Killstreak.KSGameMode.PopulateInteractiveObjects
struct AKSGameMode_PopulateInteractiveObjects_Params
{
};

// Function Killstreak.KSGameMode.PlayerCanEnterPlay
struct AKSGameMode_PlayerCanEnterPlay_Params
{
	class AController**                                C;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnWaitForPlayersExpired
struct AKSGameMode_OnWaitForPlayersExpired_Params
{
};

// Function Killstreak.KSGameMode.OnTeamEliminated
struct AKSGameMode_OnTeamEliminated_Params
{
	class AKSTeamState**                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnPlayerEliminated
struct AKSGameMode_OnPlayerEliminated_Params
{
	class AKSPlayerState**                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnPlayerDownStateChanged
struct AKSGameMode_OnPlayerDownStateChanged_Params
{
	class AKSPlayerState**                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnKSCharacterRevived
struct AKSGameMode_OnKSCharacterRevived_Params
{
	class AKSCharacter**                               InRevivee;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             InReviver;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnKSCharacterDowned
struct AKSGameMode_OnKSCharacterDowned_Params
{
	class AKSCharacter**                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EHitLocationType*                                  HitLocationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnKSCharacterDownAssist
struct AKSGameMode_OnKSCharacterDownAssist_Params
{
	class AKSCharacter**                               InVictim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DownInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DownAssistant;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RawDamage;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.OnKSCharacterCombatSummary
struct AKSGameMode_OnKSCharacterCombatSummary_Params
{
	struct FAdvancedCombatSummary*                     CombatSummary;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSGameMode.OnKSCharacterCombatEvent
struct AKSGameMode_OnKSCharacterCombatEvent_Params
{
	struct FAdvancedCombatEvent*                       CombatEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSGameMode.OnKSCharacterBaseDied
struct AKSGameMode_OnKSCharacterBaseDied_Params
{
	class AKSCharacterBase**                           InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState**                               CharacterPlayer;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EHitLocationType*                                  HitLocationType;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSEventAssistants*                         EventAssistants;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageDealt;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.K2_OnMatchPhaseSet
struct AKSGameMode_K2_OnMatchPhaseSet_Params
{
	struct FName*                                      NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.IsAWinner
struct AKSGameMode_IsAWinner_Params
{
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EKSRewardType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.HandleAllPlayersFinishedPrePrep
struct AKSGameMode_HandleAllPlayersFinishedPrePrep_Params
{
};

// Function Killstreak.KSGameMode.GetStartingTeamNum
struct AKSGameMode_GetStartingTeamNum_Params
{
	class UPlayer**                                    NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class APGame_PlayerController**                    NewPlayerController;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.GetShotListener
struct AKSGameMode_GetShotListener_Params
{
	class AKSGlobalShotListener*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.GetRewardsCalculatorClass
struct AKSGameMode_GetRewardsCalculatorClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.GetMatchTimeElapsed
struct AKSGameMode_GetMatchTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.GetMatchPhase
struct AKSGameMode_GetMatchPhase_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.GetGameModeHUDSettings
struct AKSGameMode_GetGameModeHUDSettings_Params
{
	struct FKSGameHUDSettings                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSGameMode.GetDefaultPlayerMods
struct AKSGameMode_GetDefaultPlayerMods_Params
{
	TArray<class UKSPlayerMod*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSGameMode.GetCachedInteractiveObjects
struct AKSGameMode_GetCachedInteractiveObjects_Params
{
};

// Function Killstreak.KSGameMode.EventOnTeamCreated
struct AKSGameMode_EventOnTeamCreated_Params
{
	class AKSTeamState**                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.DestroyDynamicZipLines
struct AKSGameMode_DestroyDynamicZipLines_Params
{
};

// Function Killstreak.KSGameMode.DestroyActive
struct AKSGameMode_DestroyActive_Params
{
	class UClass**                                     ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode.ClearLootSites
struct AKSGameMode_ClearLootSites_Params
{
};

// Function Killstreak.KSGameMode.ClearInteractiveObjects
struct AKSGameMode_ClearInteractiveObjects_Params
{
};

// Function Killstreak.KSGameMode.CanUsePlayerStart
struct AKSGameMode_CanUsePlayerStart_Params
{
	class AController**                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerStart**                               PlayerStart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.CanSpawnBotsNow
struct AKSGameMode_CanSpawnBotsNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode.AllPlayersLockedInForComponent
struct AKSGameMode_AllPlayersLockedInForComponent_Params
{
};

// Function Killstreak.KSGameMode.AddInteractiveObject
struct AKSGameMode_AddInteractiveObject_Params
{
};

// Function Killstreak.KSGameMode_RoundGame.StartRound
struct AKSGameMode_RoundGame_StartRound_Params
{
};

// Function Killstreak.KSGameMode_RoundGame.ReadyToStartNextRound
struct AKSGameMode_RoundGame_ReadyToStartNextRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.ReadyToPrepareNextRound
struct AKSGameMode_RoundGame_ReadyToPrepareNextRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.PrepareForNextRound
struct AKSGameMode_RoundGame_PrepareForNextRound_Params
{
};

// Function Killstreak.KSGameMode_RoundGame.K2_OnSetRoundState
struct AKSGameMode_RoundGame_K2_OnSetRoundState_Params
{
	struct FName*                                      InRoundState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.IsRoundSetupComplete
struct AKSGameMode_RoundGame_IsRoundSetupComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.IsRoundInProgress
struct AKSGameMode_RoundGame_IsRoundInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.HasRoundStarted
struct AKSGameMode_RoundGame_HasRoundStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.HasRoundEnded
struct AKSGameMode_RoundGame_HasRoundEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.HasPreparedNextRound
struct AKSGameMode_RoundGame_HasPreparedNextRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.GetRoundState
struct AKSGameMode_RoundGame_GetRoundState_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.GetRoundStartTime
struct AKSGameMode_RoundGame_GetRoundStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.GetRoundNumber
struct AKSGameMode_RoundGame_GetRoundNumber_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_RoundGame.EndRoundKillCam
struct AKSGameMode_RoundGame_EndRoundKillCam_Params
{
};

// Function Killstreak.KSGameMode_RoundGame.EndRound
struct AKSGameMode_RoundGame_EndRound_Params
{
};

// Function Killstreak.KSGameMode_RoundGame.CanPlayerKeepInventoryBetweenRounds
struct AKSGameMode_RoundGame_CanPlayerKeepInventoryBetweenRounds_Params
{
	class AKSCharacter**                               Character;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_Control.GetUpdateRateForControlPoint
struct AKSGameMode_Control_GetUpdateRateForControlPoint_Params
{
	class AKSControlPoint**                            InPoint;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_NeutralBomb.ResetBombIfInSpawnedState
struct AKSGameMode_NeutralBomb_ResetBombIfInSpawnedState_Params
{
};

// Function Killstreak.KSGameMode_NeutralBomb.ResetBomb
struct AKSGameMode_NeutralBomb_ResetBomb_Params
{
};

// Function Killstreak.KSGameMode_ExtractionCoop.BroadcastAlarm
struct AKSGameMode_ExtractionCoop_BroadcastAlarm_Params
{
};

// Function Killstreak.KSGameMode_RoyaleBase.TickZoneDamage
struct AKSGameMode_RoyaleBase_TickZoneDamage_Params
{
};

// Function Killstreak.KSGameMode_RoyaleBase.GetMustContainActor
struct AKSGameMode_RoyaleBase_GetMustContainActor_Params
{
	class AActor*                                      MustContainActor;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SafeRadius;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_Sabotage.OnHackComplete
struct AKSGameMode_Sabotage_OnHackComplete_Params
{
	class AKSExtractionComputer**                      InComputer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameMode_Sabotage.HasDefendingTeamWon
struct AKSGameMode_Sabotage_HasDefendingTeamWon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameMode_Sabotage.HasAttackingTeamWon
struct AKSGameMode_Sabotage_HasAttackingTeamWon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGamepadCurvedLookSpeedManager.SetOuterDeadZone
struct UKSGamepadCurvedLookSpeedManager_SetOuterDeadZone_Params
{
	float*                                             NewZoneX;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewZoneY;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBoostMultiplier
struct UKSGamepadCurvedLookSpeedManager_SetBoostMultiplier_Params
{
	float*                                             NewBoostX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewBoostY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBoostAcceleration
struct UKSGamepadCurvedLookSpeedManager_SetBoostAcceleration_Params
{
	float*                                             NewAccel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGamepadCurvedLookSpeedManager.SetBaseVelocityCurve
struct UKSGamepadCurvedLookSpeedManager_SetBaseVelocityCurve_Params
{
	struct FName*                                      TestCurveName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGamepadCurvedLookSpeedManager.PrintLookSpeedParameters
struct UKSGamepadCurvedLookSpeedManager_PrintLookSpeedParameters_Params
{
};

// Function Killstreak.KSGameState.WasLastPhasePrepare
struct AKSGameState_WasLastPhasePrepare_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.SetSideForTeam
struct AKSGameState_SetSideForTeam_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SideNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.RemoveGameDisplayInfoForActor
struct AKSGameState_RemoveGameDisplayInfoForActor_Params
{
	class AActor**                                     pActor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.RemoveGameDisplayInfoById
struct AKSGameState_RemoveGameDisplayInfoById_Params
{
	int*                                               DisplayInfoIdToRemove;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.RemoveDeployable
struct AKSGameState_RemoveDeployable_Params
{
	TScriptInterface<class UKSDeployable>*             Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.ReceivedKillCamStatus
struct AKSGameState_ReceivedKillCamStatus_Params
{
};

// Function Killstreak.KSGameState.OnRep_MatchPhase
struct AKSGameState_OnRep_MatchPhase_Params
{
};

// Function Killstreak.KSGameState.OnRep_LootRarityTimerPairs
struct AKSGameState_OnRep_LootRarityTimerPairs_Params
{
};

// Function Killstreak.KSGameState.OnRep_InfiniteAmmo
struct AKSGameState_OnRep_InfiniteAmmo_Params
{
};

// Function Killstreak.KSGameState.OnRep_DisplayCash
struct AKSGameState_OnRep_DisplayCash_Params
{
};

// Function Killstreak.KSGameState.LootRespawnTimerTick
struct AKSGameState_LootRespawnTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity*                                   Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.LootRespawnTimerComplete
struct AKSGameState_LootRespawnTimerComplete_Params
{
	ELootSiteRarity*                                   Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.LootRespawnTimerActive
struct AKSGameState_LootRespawnTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	ELootSiteRarity*                                   Rarity;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.IsRoyaleMode
struct AKSGameState_IsRoyaleMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.IsKillCamRecording
struct AKSGameState_IsKillCamRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.IsInSetup
struct AKSGameState_IsInSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetWorldDeployables
struct AKSGameState_GetWorldDeployables_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSGameState.GetWinningTeamNum
struct AKSGameState_GetWinningTeamNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetTrackedWorldDrops
struct AKSGameState_GetTrackedWorldDrops_Params
{
	TArray<class AKSItemDrop*>                         ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSGameState.GetTrackedProjectiles
struct AKSGameState_GetTrackedProjectiles_Params
{
	TArray<class AKSProjectile*>                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSGameState.GetTeams
struct AKSGameState_GetTeams_Params
{
	TArray<class AKSTeamState*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSGameState.GetSideForTeam
struct AKSGameState_GetSideForTeam_Params
{
	int*                                               TeamNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetMiniMapAssistant
struct AKSGameState_GetMiniMapAssistant_Params
{
	class AKSMiniMapAssistant*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetMatchTimerState
struct AKSGameState_GetMatchTimerState_Params
{
	EPGame_ReplicateTimerState                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetMatchTimer
struct AKSGameState_GetMatchTimer_Params
{
	float                                              OutPhaseTimeRemaining;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTotalPhaseTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetMatchPhase
struct AKSGameState_GetMatchPhase_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetKillCamSecondaryFocusPawn
struct AKSGameState_GetKillCamSecondaryFocusPawn_Params
{
	int*                                               LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetKillCamFocusSpecial
struct AKSGameState_GetKillCamFocusSpecial_Params
{
	int*                                               LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetKillCamFocusPawn
struct AKSGameState_GetKillCamFocusPawn_Params
{
	int*                                               LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetKillCamActor
struct AKSGameState_GetKillCamActor_Params
{
	int*                                               Guid;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               LocalPlayerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetFirstTeamForSide
struct AKSGameState_GetFirstTeamForSide_Params
{
	int*                                               SideNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.GetAttackingTeam
struct AKSGameState_GetAttackingTeam_Params
{
	class AKSTeamState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.FlipTeamSides
struct AKSGameState_FlipTeamSides_Params
{
};

// Function Killstreak.KSGameState.ClientsNotifyWinnerSet
struct AKSGameState_ClientsNotifyWinnerSet_Params
{
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.ClientsNotifyLastManStanding
struct AKSGameState_ClientsNotifyLastManStanding_Params
{
	class AKSPlayerState**                             LastPlayer;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.CharacterBodiesPersistAfterDeath
struct AKSGameState_CharacterBodiesPersistAfterDeath_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.CalculateCashForAssist
struct AKSGameState_CalculateCashForAssist_Params
{
	float*                                             DamagePercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.BroadcastTeamSidesFlipped
struct AKSGameState_BroadcastTeamSidesFlipped_Params
{
};

// Function Killstreak.KSGameState.BroadcastKillCamParameters
struct AKSGameState_BroadcastKillCamParameters_Params
{
	class APawn**                                      InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      InSecondaryPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InSpecialDamageCauser;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState.BlueprintIsMatchInProgress
struct AKSGameState_BlueprintIsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.BlueprintHasMatchEnded
struct AKSGameState_BlueprintHasMatchEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.AddGameDisplayInfo
struct AKSGameState_AddGameDisplayInfo_Params
{
	struct FDisplayInfo*                               DisplayInfo;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState.AddDeployable
struct AKSGameState_AddDeployable_Params
{
	TScriptInterface<class UKSDeployable>*             Deployable;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.TryToReplayLastKill
struct AKSGameState_RoundGame_TryToReplayLastKill_Params
{
};

// Function Killstreak.KSGameState_RoundGame.RoundHasStarted
struct AKSGameState_RoundGame_RoundHasStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.RoundHasEnded
struct AKSGameState_RoundGame_RoundHasEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.PreparingForNextRound
struct AKSGameState_RoundGame_PreparingForNextRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.OnRep_RoundResult
struct AKSGameState_RoundGame_OnRep_RoundResult_Params
{
};

// Function Killstreak.KSGameState_RoundGame.OnRep_RoundInitState
struct AKSGameState_RoundGame_OnRep_RoundInitState_Params
{
};

// Function Killstreak.KSGameState_RoundGame.OnRep_RoundInfo
struct AKSGameState_RoundGame_OnRep_RoundInfo_Params
{
};

// Function Killstreak.KSGameState_RoundGame.IsTieBreakerRound
struct AKSGameState_RoundGame_IsTieBreakerRound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.IsTeamAtMatchPoint
struct AKSGameState_RoundGame_IsTeamAtMatchPoint_Params
{
	class AKSTeamState**                               Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.IsRoundInProgress
struct AKSGameState_RoundGame_IsRoundInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundStart
struct AKSGameState_RoundGame_HasTriggeredRoundStart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundSetup
struct AKSGameState_RoundGame_HasTriggeredRoundSetup_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.HasTriggeredRoundOver
struct AKSGameState_RoundGame_HasTriggeredRoundOver_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetRoundWinner
struct AKSGameState_RoundGame_GetRoundWinner_Params
{
	class AKSTeamState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetRoundTimerState
struct AKSGameState_RoundGame_GetRoundTimerState_Params
{
	EPGame_ReplicateTimerState                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetRoundTimer
struct AKSGameState_RoundGame_GetRoundTimer_Params
{
	float                                              OutRoundTimeRemaining;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutTotalRoundTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetRoundStartTime
struct AKSGameState_RoundGame_GetRoundStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetRoundNumber
struct AKSGameState_RoundGame_GetRoundNumber_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoundGame.GetAllRoundResults
struct AKSGameState_RoundGame_GetAllRoundResults_Params
{
	TArray<struct FRoundResult>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSGameState_Control.GetAllControlPoints
struct AKSGameState_Control_GetAllControlPoints_Params
{
	TArray<class AKSControlPoint*>                     OutControlPoints;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSGameState_NeutralBomb.OnRep_BombStateTimer
struct AKSGameState_NeutralBomb_OnRep_BombStateTimer_Params
{
};

// Function Killstreak.KSGameState_NeutralBomb.OnRep_BombState
struct AKSGameState_NeutralBomb_OnRep_BombState_Params
{
};

// Function Killstreak.KSGameState_NeutralBomb.GetBombState
struct AKSGameState_NeutralBomb_GetBombState_Params
{
	struct FKSNeutralBombState                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSGameState_NeutralBomb.BombStateTimerTick
struct AKSGameState_NeutralBomb_BombStateTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_NeutralBomb.BombStateTimerComplete
struct AKSGameState_NeutralBomb_BombStateTimerComplete_Params
{
};

// Function Killstreak.KSGameState_NeutralBomb.BombStateTimerActive
struct AKSGameState_NeutralBomb_BombStateTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_Demolition.OnRep_AttackingTeam
struct AKSGameState_Demolition_OnRep_AttackingTeam_Params
{
};

// Function Killstreak.KSGameState_Extraction.OnRep_HackingObjectiveState
struct AKSGameState_Extraction_OnRep_HackingObjectiveState_Params
{
};

// Function Killstreak.KSGameState_Extraction.OnRep_AttackingTeam
struct AKSGameState_Extraction_OnRep_AttackingTeam_Params
{
};

// Function Killstreak.KSGameState_Extraction.IsAComputerHacked
struct AKSGameState_Extraction_IsAComputerHacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_Extraction.GetComputers
struct AKSGameState_Extraction_GetComputers_Params
{
	TArray<class AKSExtractionComputer*>               OutComputers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSGameState_Extraction.CreditHacker
struct AKSGameState_Extraction_CreditHacker_Params
{
	class AKSPlayerState**                             Hacker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_Extraction.CreditDehacker
struct AKSGameState_Extraction_CreditDehacker_Params
{
	class AKSPlayerState**                             Dehacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_Extraction.ComputersUnlocked
struct AKSGameState_Extraction_ComputersUnlocked_Params
{
};

// Function Killstreak.KSGameState_ExtractionCoop.OnRep_AlarmState
struct AKSGameState_ExtractionCoop_OnRep_AlarmState_Params
{
};

// Function Killstreak.KSGameState_ExtractionCoop.BroadcastPhaseTimeout
struct AKSGameState_ExtractionCoop_BroadcastPhaseTimeout_Params
{
	struct FName*                                      PhaseName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionCoop.BroadcastExtractionPickupChanged
struct AKSGameState_ExtractionCoop_BroadcastExtractionPickupChanged_Params
{
	class AKSObjectiveBase**                           InObjective;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PickupsUsed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PickupsLeft;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionCoop.BroadcastEscapePointChanged
struct AKSGameState_ExtractionCoop_BroadcastEscapePointChanged_Params
{
	TArray<class AKSPlayerState*>*                     ContainedPlayers;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSGameState_RoyaleBase.ZoneWaitStart
struct AKSGameState_RoyaleBase_ZoneWaitStart_Params
{
	float*                                             TimeUntilShrink;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_RoyaleBase.ZoneShrinkStart
struct AKSGameState_RoyaleBase_ZoneShrinkStart_Params
{
	float*                                             TimeToShrink;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionRoyale.OnRep_HackingObjectiveState
struct AKSGameState_ExtractionRoyale_OnRep_HackingObjectiveState_Params
{
};

// Function Killstreak.KSGameState_ExtractionRoyale.OnRep_AttackingTeam
struct AKSGameState_ExtractionRoyale_OnRep_AttackingTeam_Params
{
};

// Function Killstreak.KSGameState_ExtractionRoyale.IsAComputerHacked
struct AKSGameState_ExtractionRoyale_IsAComputerHacked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionRoyale.GetComputers
struct AKSGameState_ExtractionRoyale_GetComputers_Params
{
	TArray<class AKSExtractionComputer*>               OutComputers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSGameState_ExtractionRoyale.CreditHacker
struct AKSGameState_ExtractionRoyale_CreditHacker_Params
{
	class AKSPlayerState**                             Hacker;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionRoyale.CreditDehacker
struct AKSGameState_ExtractionRoyale_CreditDehacker_Params
{
	class AKSPlayerState**                             Dehacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSGameState_ExtractionRoyale.ComputersUnlocked
struct AKSGameState_ExtractionRoyale_ComputersUnlocked_Params
{
};

// Function Killstreak.KSGameState_Heist.OnRep_TeamCash
struct AKSGameState_Heist_OnRep_TeamCash_Params
{
};

// Function Killstreak.KSGameState_Heist.OnRep_Refreshes
struct AKSGameState_Heist_OnRep_Refreshes_Params
{
};

// Function Killstreak.KSGameState_Heist.GetTeamCash
struct AKSGameState_Heist_GetTeamCash_Params
{
	int*                                               teamNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameState_Heist.GetRefreshes
struct AKSGameState_Heist_GetRefreshes_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameUserSettings.GetTextChatEnabled
struct UKSGameUserSettings_GetTextChatEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGameUserSettings.GetSafeFrameScale
struct UKSGameUserSettings_GetSafeFrameScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGlobalShotListener.ShotNotify
struct AKSGlobalShotListener_ShotNotify_Params
{
	struct FKSGlobalShotInfo*                          ShotInfo;                                                 // (Parm)
};

// Function Killstreak.KSGrenadeTargetingModule.ShouldShowPathGivenState
struct UKSGrenadeTargetingModule_ShouldShowPathGivenState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGrenadeTargetingModule.GetWeaponAsset_WithProjectile
struct UKSGrenadeTargetingModule_GetWeaponAsset_WithProjectile_Params
{
	class UKSWeaponAsset_WithProjectile*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGrenadeTargetingModule.GetWeaponAsset_Grenade
struct UKSGrenadeTargetingModule_GetWeaponAsset_Grenade_Params
{
	class UKSWeaponAsset_Grenade*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGrenadeTargetingModule.GetTraceStartLocation
struct UKSGrenadeTargetingModule_GetTraceStartLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSGroupedActivityEventTracker.OnChildActivityFinished
struct UKSGroupedActivityEventTracker_OnChildActivityFinished_Params
{
	class UKSActivityInstance**                        Activity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHeadShotTracker.HandleTrackerAccolade
struct UKSHeadShotTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHUDAnnouncementComponent.GetPlayerController
struct UKSHUDAnnouncementComponent_GetPlayerController_Params
{
	class AKSPlayerController*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSHUDInterface.SetHUDVisible
struct UKSHUDInterface_SetHUDVisible_Params
{
	bool*                                              bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHUDInterface.OnToggleHUD
struct UKSHUDInterface_OnToggleHUD_Params
{
};

// Function Killstreak.KSHUDInterface.OnLoadRoute
struct UKSHUDInterface_OnLoadRoute_Params
{
	struct FName*                                      Route;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHUDInterface.HandleOpenTextChat
struct UKSHUDInterface_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHUDInterface.CreateGameRuleWidget
struct UKSHUDInterface_CreateGameRuleWidget_Params
{
	struct FKSWidgetInfoParams*                        WidgetInfoParams;                                         // (Parm)
};

// Function Killstreak.KSHUDInterface.BroadcastWidgetMessage
struct UKSHUDInterface_BroadcastWidgetMessage_Params
{
	struct FName*                                      Message;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSHUDInterface.BindEventToWidgetMessages
struct UKSHUDInterface_BindEventToWidgetMessages_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSInMatchStore.ServerRequestPurchase
struct UKSInMatchStore_ServerRequestPurchase_Params
{
	struct FInMatchPurchaseInfo*                       request;                                                  // (Parm)
};

// Function Killstreak.KSInMatchStore.RequestPurchase
struct UKSInMatchStore_RequestPurchase_Params
{
	struct FInMatchPurchaseInfo                        request;                                                  // (Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSInMatchStore.GetStorePages
struct UKSInMatchStore_GetStorePages_Params
{
	int*                                               ItemsPerPage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInMatchStoreFilterInfo*                    Filter;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInMatchStore.GetStoreInventory
struct UKSInMatchStore_GetStoreInventory_Params
{
	TArray<struct FInMatchStoreItem>                   Items;                                                    // (Parm, OutParm, ZeroConstructor)
	int*                                               PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemsPerPage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInMatchStoreFilterInfo*                    Filter;                                                   // (Parm)
};

// Function Killstreak.KSInMatchStore.GetStockInCategory
struct UKSInMatchStore_GetStockInCategory_Params
{
	struct FName*                                      CategoryName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInMatchStore.ClientPurchaseSuccess
struct UKSInMatchStore_ClientPurchaseSuccess_Params
{
	struct FInMatchPurchaseInfo*                       Purchase;                                                 // (Parm)
};

// Function Killstreak.KSInMatchStore.ClientPurchaseError
struct UKSInMatchStore_ClientPurchaseError_Params
{
	EInMatchStoreError*                                ErrorId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInputFunctionLibrary.GetGamepadIconSet
struct UKSInputFunctionLibrary_GetGamepadIconSet_Params
{
	EKSGamepadIcons                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.UsePickupRangeForInteraction
struct UKSInteractable_UsePickupRangeForInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.ShouldDisplayProgress
struct UKSInteractable_ShouldDisplayProgress_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.IsInteracting
struct UKSInteractable_IsInteracting_Params
{
	class AKSCharacter**                               QueriedChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.IsAutomaticInteraction
struct UKSInteractable_IsAutomaticInteraction_Params
{
	class AKSCharacter**                               QueriedChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetRelativeHeight
struct UKSInteractable_GetRelativeHeight_Params
{
	class AKSCharacter**                               InteractingChar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetInteractionType
struct UKSInteractable_GetInteractionType_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetInteractionPromptText
struct UKSInteractable_GetInteractionPromptText_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSInteractable.GetInteractionProgressText
struct UKSInteractable_GetInteractionProgressText_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSInteractable.GetInteractionPriority
struct UKSInteractable_GetInteractionPriority_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetInteractionMode
struct UKSInteractable_GetInteractionMode_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetCurrentInteractors
struct UKSInteractable_GetCurrentInteractors_Params
{
	TArray<class AKSCharacter*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSInteractable.GetCurrentInteractNum
struct UKSInteractable_GetCurrentInteractNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.GetCameraTransition
struct UKSInteractable_GetCameraTransition_Params
{
	struct FKSInteractableCameraTransition             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSInteractable.GetBestInteractionPoint
struct UKSInteractable_GetBestInteractionPoint_Params
{
	class AActor**                                     Interactor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.FacesInteractable
struct UKSInteractable_FacesInteractable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.ConstructPrompt
struct UKSInteractable_ConstructPrompt_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Prefix;                                                   // (Parm, OutParm)
	struct FText                                       Suffix;                                                   // (Parm, OutParm)
};

// Function Killstreak.KSInteractable.CanInteractWhileSkydiving
struct UKSInteractable_CanInteractWhileSkydiving_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.CanInteractWhileMoving
struct UKSInteractable_CanInteractWhileMoving_Params
{
	class AKSCharacter**                               QueriedCharacter;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.CanInteractWhileDown
struct UKSInteractable_CanInteractWhileDown_Params
{
	class AKSCharacter**                               QueriedChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.CanInteractFromBehind
struct UKSInteractable_CanInteractFromBehind_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.CanInteract
struct UKSInteractable_CanInteract_Params
{
	class AKSCharacter**                               QueriedChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPress;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bHold;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractable.AllowsMultipleInteraction
struct UKSInteractable_AllowsMultipleInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.WeightedSiteShuffle
struct AKSLootSiteBase_WeightedSiteShuffle_Params
{
	TArray<class AKSLootSiteBase*>                     SiteArray;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSLootSiteBase.SpawnSpecificLoot
struct AKSLootSiteBase_SpawnSpecificLoot_Params
{
	struct FLootSiteDropInfo*                          Loot;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSLootSiteBase.SpawnSpecificItemDrop
struct AKSLootSiteBase_SpawnSpecificItemDrop_Params
{
	class UKSItem**                                    ItemAsset;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.SpawnItemDropInternal
struct AKSLootSiteBase_SpawnItemDropInternal_Params
{
};

// Function Killstreak.KSLootSiteBase.SpawnItemDrop
struct AKSLootSiteBase_SpawnItemDrop_Params
{
};

// Function Killstreak.KSLootSiteBase.SpawnedDropDestroyed
struct AKSLootSiteBase_SpawnedDropDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.SetSiteActive
struct AKSLootSiteBase_SetSiteActive_Params
{
	bool*                                              Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.Reset
struct AKSLootSiteBase_Reset_Params
{
};

// Function Killstreak.KSLootSiteBase.OnRep_RarityTag
struct AKSLootSiteBase_OnRep_RarityTag_Params
{
};

// Function Killstreak.KSLootSiteBase.OnRep_LootSiteState
struct AKSLootSiteBase_OnRep_LootSiteState_Params
{
};

// Function Killstreak.KSLootSiteBase.OnRep_CosmeticVisible
struct AKSLootSiteBase_OnRep_CosmeticVisible_Params
{
};

// Function Killstreak.KSLootSiteBase.OnCosmeticVisibilityChanged
struct AKSLootSiteBase_OnCosmeticVisibilityChanged_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.IsLooted
struct AKSLootSiteBase_IsLooted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.IsActive
struct AKSLootSiteBase_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.GetLootSiteState
struct AKSLootSiteBase_GetLootSiteState_Params
{
	struct FLootSiteState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.FindBestDropLocation
struct AKSLootSiteBase_FindBestDropLocation_Params
{
	class AKSItemDrop**                                InDrop;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLootSiteBase.ChoostLoot
struct AKSLootSiteBase_ChoostLoot_Params
{
	struct FLootSiteDropInfo                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSLootSiteBase.ChooseRandomLoot
struct AKSLootSiteBase_ChooseRandomLoot_Params
{
	TArray<struct FLootSiteDropInfo>*                  InLoot;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FLootSiteDropInfo                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSLootSiteBase.ChooseItemAsset
struct AKSLootSiteBase_ChooseItemAsset_Params
{
	class UKSItem*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractableLootSite.PickLoot
struct AKSInteractableLootSite_PickLoot_Params
{
};

// Function Killstreak.KSInteractableLootSite.OnSuccessfulInteraction
struct AKSInteractableLootSite_OnSuccessfulInteraction_Params
{
};

// Function Killstreak.KSInteractableLootSite.OnRep_ChosenLoot
struct AKSInteractableLootSite_OnRep_ChosenLoot_Params
{
};

// Function Killstreak.KSInteractableLootSite.OnRep_bLooted
struct AKSInteractableLootSite_OnRep_bLooted_Params
{
};

// Function Killstreak.KSInteractableLootSite.GetInteractionTime
struct AKSInteractableLootSite_GetInteractionTime_Params
{
	class AKSCharacter**                               InteractingChar;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSInteractableLootSite.ClientBroadcastSpawned
struct AKSInteractableLootSite_ClientBroadcastSpawned_Params
{
	class AKSPlayerController**                        Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Removed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInteractionManager.ServerTap
struct UKSInteractionManager_ServerTap_Params
{
};

// Function Killstreak.KSInteractionManager.ServerStartNew
struct UKSInteractionManager_ServerStartNew_Params
{
	int*                                               InInteractionId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InInteractable;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               InUser;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInteractionManager.ServerHoldRelease
struct UKSInteractionManager_ServerHoldRelease_Params
{
};

// Function Killstreak.KSInteractionManager.ServerHold
struct UKSInteractionManager_ServerHold_Params
{
};

// Function Killstreak.KSInteractionManager.ServerCancel
struct UKSInteractionManager_ServerCancel_Params
{
};

// Function Killstreak.KSInteractionManager.ClientInteractionStopped
struct UKSInteractionManager_ClientInteractionStopped_Params
{
	int*                                               InInteractionId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInteractionManager.ClientInteractionStarted
struct UKSInteractionManager_ClientInteractionStarted_Params
{
	int*                                               InInteractionId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSInteractionType.MakeInteractableEffect
struct UKSInteractionType_MakeInteractableEffect_Params
{
	bool*                                              bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InteractableLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSInteractionType.MakeCharacterEffect
struct UKSInteractionType_MakeCharacterEffect_Params
{
	bool*                                              bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Interactable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    InteractableLocation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSInteractionType.GetInteractableEffect
struct UKSInteractionType_GetInteractableEffect_Params
{
	bool*                                              bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSParticleSystemAttachment                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSInteractionType.GetCharacterEffect
struct UKSInteractionType_GetCharacterEffect_Params
{
	bool*                                              bIsStart;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EKSInteractionResult*                              Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSParticleSystemAttachment                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSItem_Gender.GetGender
struct UKSItem_Gender_GetGender_Params
{
	EKSCharacterGender                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSItemBundle.GetSortedBundledItems
struct UKSItemBundle_GetSortedBundledItems_Params
{
};

// Function Killstreak.ItemDropWidgetInterface.ShowLabel
struct UItemDropWidgetInterface_ShowLabel_Params
{
};

// Function Killstreak.ItemDropWidgetInterface.SetOwningWidgetComponent
struct UItemDropWidgetInterface_SetOwningWidgetComponent_Params
{
	class UActorComponent**                            WidgetComp;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.ItemDropWidgetInterface.SetLabel
struct UItemDropWidgetInterface_SetLabel_Params
{
	struct FText*                                      LabelText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.ItemDropWidgetInterface.HideLabel
struct UItemDropWidgetInterface_HideLabel_Params
{
};

// Function Killstreak.KSJobItem.IsValidJobItem
struct UKSJobItem_IsValidJobItem_Params
{
	class UKSItem**                                    KSItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetSoftSmallJobIcon
struct UKSJobItem_GetSoftSmallJobIcon_Params
{
};

// Function Killstreak.KSJobItem.GetSmallJobIcon
struct UKSJobItem_GetSmallJobIcon_Params
{
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetQuickMeleeWeapon
struct UKSJobItem_GetQuickMeleeWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetMeleeWeapon
struct UKSJobItem_GetMeleeWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetJobRole
struct UKSJobItem_GetJobRole_Params
{
	class UKSJobRole*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetDefaultSkin
struct UKSJobItem_GetDefaultSkin_Params
{
	class UKSSkinBundle*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetDefaultSecondaryWeapon
struct UKSJobItem_GetDefaultSecondaryWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetDefaultPrimaryWeapon
struct UKSJobItem_GetDefaultPrimaryWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetDefaultPerks
struct UKSJobItem_GetDefaultPerks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetDefaultGadget
struct UKSJobItem_GetDefaultGadget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetAlternativeSecondaryWeapon
struct UKSJobItem_GetAlternativeSecondaryWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetAlternativePrimaryWeapon
struct UKSJobItem_GetAlternativePrimaryWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobItem.GetAlternativeGadget
struct UKSJobItem_GetAlternativeGadget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.JobLoadout.ValidateAttachmentForWeapon
struct UJobLoadout_ValidateAttachmentForWeapon_Params
{
	class UKSItem**                                    AttachmentToCheck;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.JobLoadout.SetToJobDefaults
struct UJobLoadout_SetToJobDefaults_Params
{
	class UKSJobItem**                                 InJobItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.JobLoadout.SetSlot
struct UJobLoadout_SetSlot_Params
{
	EJobLoadoutSlot*                                   JobSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    KSItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IgnoreJobItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.JobLoadout.GetSlot
struct UJobLoadout_GetSlot_Params
{
	EJobLoadoutSlot*                                   JobSlot;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     OutKSItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.JobLoadout.GetAsMap
struct UJobLoadout_GetAsMap_Params
{
	TMap<EJobLoadoutSlot, class UKSItem*>              OutMap;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.JobLoadout.CleanJobLoadoutItems
struct UJobLoadout_CleanJobLoadoutItems_Params
{
	TArray<EJobLoadoutSlot>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSJobSelectionComponent.OnRep_EntryCount
struct UKSJobSelectionComponent_OnRep_EntryCount_Params
{
};

// Function Killstreak.KSJobSelectionComponent.OnPhaseChange
struct UKSJobSelectionComponent_OnPhaseChange_Params
{
	struct FName*                                      NewPhase;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionComponent.NewPlayerStarting
struct UKSJobSelectionComponent_NewPlayerStarting_Params
{
	class APlayerController**                          NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionComponent.NewBotStarting
struct UKSJobSelectionComponent_NewBotStarting_Params
{
	class AKSAIController**                            NewBot;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionComponent.IsReady
struct UKSJobSelectionComponent_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionComponent.InitializeJobSelectionList
struct UKSJobSelectionComponent_InitializeJobSelectionList_Params
{
};

// Function Killstreak.KSJobSelectionComponent.GetJobSelectionEntries
struct UKSJobSelectionComponent_GetJobSelectionEntries_Params
{
	TArray<struct FJobSelectionEntry>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSJobSelectionManager.ServerRequestSelectionState
struct UKSJobSelectionManager_ServerRequestSelectionState_Params
{
	int*                                               ItemId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.RequestSelectionState
struct UKSJobSelectionManager_RequestSelectionState_Params
{
	int*                                               ItemId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                State;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.PlayerTeamSet
struct UKSJobSelectionManager_PlayerTeamSet_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.PlayerStateSet
struct UKSJobSelectionManager_PlayerStateSet_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.JobSelectionComponentReady
struct UKSJobSelectionManager_JobSelectionComponentReady_Params
{
	class UKSJobSelectionComponent**                   InSelectionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.IsReady
struct UKSJobSelectionManager_IsReady_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.GetJobSelectionComponent
struct UKSJobSelectionManager_GetJobSelectionComponent_Params
{
	class UKSJobSelectionComponent*                    ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSJobSelectionManager.ClientAcknowledgeStateSelection
struct UKSJobSelectionManager_ClientAcknowledgeStateSelection_Params
{
	int*                                               ItemId;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EJobSelectionState*                                RequestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.SetModelViewerDelay
struct AKSJobSelectPreviewActor_SetModelViewerDelay_Params
{
	float*                                             Timer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.SetJobToQueuedId
struct AKSJobSelectPreviewActor_SetJobToQueuedId_Params
{
};

// Function Killstreak.KSJobSelectPreviewActor.SetJob
struct AKSJobSelectPreviewActor_SetJob_Params
{
};

// Function Killstreak.KSJobSelectPreviewActor.SetHoveredJob
struct AKSJobSelectPreviewActor_SetHoveredJob_Params
{
	int*                                               JobId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.PreLobbyCharacterDestroy
struct AKSJobSelectPreviewActor_PreLobbyCharacterDestroy_Params
{
};

// Function Killstreak.KSJobSelectPreviewActor.PostLobbyCharacterSpawned
struct AKSJobSelectPreviewActor_PostLobbyCharacterSpawned_Params
{
};

// Function Killstreak.KSJobSelectPreviewActor.GetPreviewLoadState
struct AKSJobSelectPreviewActor_GetPreviewLoadState_Params
{
	EKSJobSelectPreviewLoadState                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.GetPositionIndex
struct AKSJobSelectPreviewActor_GetPositionIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.GetLobbyCharacter
struct AKSJobSelectPreviewActor_GetLobbyCharacter_Params
{
	class AKSLobbyCharacter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSJobSelectPreviewActor.GetCharacterName
struct AKSJobSelectPreviewActor_GetCharacterName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSJobSelectPreviewActor.BlueprintStateChanged
struct AKSJobSelectPreviewActor_BlueprintStateChanged_Params
{
	EKSJobSelectPreviewLoadState*                      PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSKillCam.KillCamStop
struct UKSKillCam_KillCamStop_Params
{
};

// Function Killstreak.KSKillCam.DestroySpectatorController
struct UKSKillCam_DestroySpectatorController_Params
{
};

// Function Killstreak.KSPlayerController.ViewedPawnTakeDamage
struct AKSPlayerController_ViewedPawnTakeDamage_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ViewedPawnTakeArmorDamage
struct AKSPlayerController_ViewedPawnTakeArmorDamage_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ViewedPawnInstigatedDamageNotify
struct AKSPlayerController_ViewedPawnInstigatedDamageNotify_Params
{
	class AKSCharacterBase**                           InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPlayerController.ViewedPawnInstigatedDamage
struct AKSPlayerController_ViewedPawnInstigatedDamage_Params
{
	class AKSCharacterBase**                           InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.TriggerInputAction
struct AKSPlayerController_TriggerInputAction_Params
{
	struct FName*                                      ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          InputEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ToggleTouch
struct AKSPlayerController_ToggleTouch_Params
{
};

// Function Killstreak.KSPlayerController.SetGamepadTurnRateScale
struct AKSPlayerController_SetGamepadTurnRateScale_Params
{
	float*                                             NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.SetGamepadLookUpRateScale
struct AKSPlayerController_SetGamepadLookUpRateScale_Params
{
	float*                                             NewScale;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ServerUpdatePing
struct AKSPlayerController_ServerUpdatePing_Params
{
	float*                                             ExactPing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ServerPushFrameRateData
struct AKSPlayerController_ServerPushFrameRateData_Params
{
	struct FClientStatistics*                          PushedRender;                                             // (ConstParm, Parm, ReferenceParm)
	struct FClientStatistics*                          PushedGame;                                               // (ConstParm, Parm, ReferenceParm)
	struct FClientStatistics*                          PushedGPU;                                                // (ConstParm, Parm, ReferenceParm)
	struct FClientStatistics*                          PushedFrame;                                              // (ConstParm, Parm, ReferenceParm)
	struct FClientStatistics*                          PushedRHI;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSPlayerController.ServerPushClientSpec
struct AKSPlayerController_ServerPushClientSpec_Params
{
	struct FClientSpec*                                PushedClientSpec;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSPlayerController.ServerNotifyClientSimpleSimulation
struct AKSPlayerController_ServerNotifyClientSimpleSimulation_Params
{
	bool*                                              UseSimple;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ServerLagCompensationVisualization
struct AKSPlayerController_ServerLagCompensationVisualization_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ServerChangeSpectateTarget
struct AKSPlayerController_ServerChangeSpectateTarget_Params
{
	bool*                                              bForward;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ServerBouncePing
struct AKSPlayerController_ServerBouncePing_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ReportWeaponsEquipped
struct AKSPlayerController_ReportWeaponsEquipped_Params
{
};

// Function Killstreak.KSPlayerController.ReportTimeRevealedCharacter
struct AKSPlayerController_ReportTimeRevealedCharacter_Params
{
	class AKSCharacterBase**                           RevealedChar;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ReportSetRevealCharacter
struct AKSPlayerController_ReportSetRevealCharacter_Params
{
	class AKSCharacterBase**                           TargetChar;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Revealed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ReportKillcamWorldReady
struct AKSPlayerController_ReportKillcamWorldReady_Params
{
};

// Function Killstreak.KSPlayerController.ReportApparelApplied
struct AKSPlayerController_ReportApparelApplied_Params
{
};

// Function Killstreak.KSPlayerController.ReportAllReadyConditionsMet
struct AKSPlayerController_ReportAllReadyConditionsMet_Params
{
};

// Function Killstreak.KSPlayerController.PlayEmoteByEquipPoint
struct AKSPlayerController_PlayEmoteByEquipPoint_Params
{
	struct FGameplayTag*                               InEquipPoint;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.OnSpectateViewTargetDestroyed
struct AKSPlayerController_OnSpectateViewTargetDestroyed_Params
{
	class AActor**                                     InViewTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.OnSpectateControllerDestroyed
struct AKSPlayerController_OnSpectateControllerDestroyed_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.OnRep_CombatLogComponent
struct AKSPlayerController_OnRep_CombatLogComponent_Params
{
};

// Function Killstreak.KSPlayerController.OnPrimaryPawnDestroyed
struct AKSPlayerController_OnPrimaryPawnDestroyed_Params
{
	class AActor**                                     InPrimaryPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.OnKillcamWorldReady
struct AKSPlayerController_OnKillcamWorldReady_Params
{
};

// Function Killstreak.KSPlayerController.OnCurrentSpectateTargetDestroyed
struct AKSPlayerController_OnCurrentSpectateTargetDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.OnCharacterWeaponsEquipped
struct AKSPlayerController_OnCharacterWeaponsEquipped_Params
{
};

// Function Killstreak.KSPlayerController.OnCharacterApparelApplied
struct AKSPlayerController_OnCharacterApparelApplied_Params
{
};

// Function Killstreak.KSPlayerController.LocalStopAimDownSights
struct AKSPlayerController_LocalStopAimDownSights_Params
{
};

// Function Killstreak.KSPlayerController.LocalStartAimDownSights
struct AKSPlayerController_LocalStartAimDownSights_Params
{
};

// Function Killstreak.KSPlayerController.IsInShownWorld
struct AKSPlayerController_IsInShownWorld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetValidSpectateTargetCount
struct AKSPlayerController_GetValidSpectateTargetCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetUIPawn
struct AKSPlayerController_GetUIPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetUIKSCharacter
struct AKSPlayerController_GetUIKSCharacter_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetShotListener
struct AKSPlayerController_GetShotListener_Params
{
	class UKSPlayerShotListener*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetPrimaryPawn
struct AKSPlayerController_GetPrimaryPawn_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetPingManager
struct AKSPlayerController_GetPingManager_Params
{
	class UKSPingManager*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetJobSelectionManager
struct AKSPlayerController_GetJobSelectionManager_Params
{
	class UKSJobSelectionManager*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetHUDAnnouncmentComponent
struct AKSPlayerController_GetHUDAnnouncmentComponent_Params
{
	class UKSHUDAnnouncementComponent*                 ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetGamepadLookSpeedManager
struct AKSPlayerController_GetGamepadLookSpeedManager_Params
{
	class UKSGamepadLookSpeedManager*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetEquipmentManagerComponent
struct AKSPlayerController_GetEquipmentManagerComponent_Params
{
	class UKSEquipmentManagerComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.GetAimAssistComponent
struct AKSPlayerController_GetAimAssistComponent_Params
{
	class UKSAimAssistComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.FillInClientSpec
struct AKSPlayerController_FillInClientSpec_Params
{
};

// Function Killstreak.KSPlayerController.EventViewedPawnTakeDamage
struct AKSPlayerController_EventViewedPawnTakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.EventViewedPawnTakeArmorDamage
struct AKSPlayerController_EventViewedPawnTakeArmorDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.EventViewedPawnInstigatedDamageNotify
struct AKSPlayerController_EventViewedPawnInstigatedDamageNotify_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPlayerController.EventViewedPawnInstigatedDamage
struct AKSPlayerController_EventViewedPawnInstigatedDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ControllerChangedForPickupLabeling
struct AKSPlayerController_ControllerChangedForPickupLabeling_Params
{
	class AKSPlayerController**                        NewController;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.CompVis
struct AKSPlayerController_CompVis_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientViewedPawnTakeDamage
struct AKSPlayerController_ClientViewedPawnTakeDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrimaryPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientViewedPawnTakeArmorDamage
struct AKSPlayerController_ClientViewedPawnTakeArmorDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DamageOrigin;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrimaryPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientViewedPawnInstigatedDamageNotify
struct AKSPlayerController_ClientViewedPawnInstigatedDamageNotify_Params
{
	struct FCombatEventInfo*                           DamageInfo;                                               // (Parm)
	bool*                                              bPrimaryPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientViewedPawnInstigatedDamage
struct AKSPlayerController_ClientViewedPawnInstigatedDamage_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bPrimaryPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientSpectateTeam
struct AKSPlayerController_ClientSpectateTeam_Params
{
};

// Function Killstreak.KSPlayerController.ClientSignalEndOfMatch
struct AKSPlayerController_ClientSignalEndOfMatch_Params
{
};

// Function Killstreak.KSPlayerController.ClientReturnPing
struct AKSPlayerController_ClientReturnPing_Params
{
	float*                                             Timestamp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientPlayInstantReplay
struct AKSPlayerController_ClientPlayInstantReplay_Params
{
	float*                                             TimeToRewind;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DilationStart;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DilationAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientDrawDebugSphere
struct AKSPlayerController_ClientDrawDebugSphere_Params
{
	struct FVector*                                    Center;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor*                                     Color;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientDrawDebugLine
struct AKSPlayerController_ClientDrawDebugLine_Params
{
	struct FVector*                                    start;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FColor*                                     Color;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientDrawDebugCapsule
struct AKSPlayerController_ClientDrawDebugCapsule_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             HalfHeight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor*                                     Color;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.ClientDrawDebugBox
struct AKSPlayerController_ClientDrawDebugBox_Params
{
	struct FTransform*                                 Transform;                                                // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    Extent;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FColor*                                     Color;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.CachePostMatchScoreboard
struct AKSPlayerController_CachePostMatchScoreboard_Params
{
	struct FScoreboardStats*                           ScoreboardStats;                                          // (Parm)
};

// Function Killstreak.KSPlayerController.CachePostMatchInfo
struct AKSPlayerController_CachePostMatchInfo_Params
{
	struct FPlayerRewardsSummaryReplicated*            RewardsReplicated;                                        // (Parm)
};

// Function Killstreak.KSPlayerController.ApplyKickback
struct AKSPlayerController_ApplyKickback_Params
{
	struct FInterpCurveVector2D*                       KickbackCurve;                                            // (ConstParm, Parm, ZeroConstructor)
	float*                                             InKickbackRecoveryDelay;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InKickbackRecoveryRate;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InKickbackRecoveryAccel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InMaxCumulativeKickbackVerticalAngle;                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScalingFactor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.AimStateChangedForPickupLabeling
struct AKSPlayerController_AimStateChangedForPickupLabeling_Params
{
	EKSCharacterAimMode*                               AimState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerController.AddTimePlayed
struct AKSPlayerController_AddTimePlayed_Params
{
};

// Function Killstreak.KSKillLeaderTracker.ProcessElimEntry
struct UKSKillLeaderTracker_ProcessElimEntry_Params
{
	class AKSPlayerState**                             InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSKillLeaderTracker.HandleTrackerAccolade
struct UKSKillLeaderTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSKillLeaderTracker.FindPlayerEntry
struct UKSKillLeaderTracker_FindPlayerEntry_Params
{
	class AKSPlayerState**                             InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSKillLeaderTracker.CheckKillLeader
struct UKSKillLeaderTracker_CheckKillLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetWeapons
struct UKSLoadoutBundle_GetWeapons_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetWeaponItemIds
struct UKSLoadoutBundle_GetWeaponItemIds_Params
{
	TArray<int>                                        OutWeaponItemIds;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetPerks
struct UKSLoadoutBundle_GetPerks_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetPerkItemIds
struct UKSLoadoutBundle_GetPerkItemIds_Params
{
	TArray<int>                                        OutPerkItemIds;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetBundlePerks
struct UKSLoadoutBundle_GetBundlePerks_Params
{
	TArray<class UKSPlayerMod*>                        OutPerks;                                                 // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetBundleAbilities
struct UKSLoadoutBundle_GetBundleAbilities_Params
{
	TArray<class UKSPlayerMod_Activated*>              OutAbilities;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetAttachments
struct UKSLoadoutBundle_GetAttachments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetAttachmentItemIds
struct UKSLoadoutBundle_GetAttachmentItemIds_Params
{
	TArray<int>                                        OutAttachmentItemIds;                                     // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetAbilityItemIds
struct UKSLoadoutBundle_GetAbilityItemIds_Params
{
	TArray<int>                                        OutAbilityItemIds;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutBundle.GetAbilities
struct UKSLoadoutBundle_GetAbilities_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutClass.GetDynamicPoseImage
struct UKSLoadoutClass_GetDynamicPoseImage_Params
{
	bool*                                              bAllowSyncLoad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLoadoutRuleComponent.AllowItem
struct UKSLoadoutRuleComponent_AllowItem_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EJobLoadoutSlot*                                   Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.VisibilityChanged
struct AKSLobbyCharacter_VisibilityChanged_Params
{
	bool*                                              IsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.UpdateHiddenInGame
struct AKSLobbyCharacter_UpdateHiddenInGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.UnsetCharacter
struct AKSLobbyCharacter_UnsetCharacter_Params
{
};

// Function Killstreak.KSLobbyCharacter.ShowLobbyNameplate
struct AKSLobbyCharacter_ShowLobbyNameplate_Params
{
};

// Function Killstreak.KSLobbyCharacter.SetupLobbyCharacter
struct AKSLobbyCharacter_SetupLobbyCharacter_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	class UKSItem**                                    AvatarItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLeader;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.SetShouldHideInGame
struct AKSLobbyCharacter_SetShouldHideInGame_Params
{
	bool*                                              ShouldHide;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.SetLobbyNameplate
struct AKSLobbyCharacter_SetLobbyNameplate_Params
{
	struct FString*                                    PlayerName;                                               // (Parm, ZeroConstructor)
	class UKSItem**                                    AvatarItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLeader;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.SetLobbyCharacterAnimState
struct AKSLobbyCharacter_SetLobbyCharacterAnimState_Params
{
	ELobbyCharacterAnimState*                          AnimState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.SetCharacterSkin
struct AKSLobbyCharacter_SetCharacterSkin_Params
{
	class UKSItem**                                    SkinItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.OnLobbyPresenceStateChange
struct AKSLobbyCharacter_OnLobbyPresenceStateChange_Params
{
	ELobbyPresenceState*                               LobbyPresenceState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.IsSet
struct AKSLobbyCharacter_IsSet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.IsLobbyCharacter
struct AKSLobbyCharacter_IsLobbyCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.HideLobbyNameplate
struct AKSLobbyCharacter_HideLobbyNameplate_Params
{
};

// Function Killstreak.KSLobbyCharacter.GetCurrentAnimState
struct AKSLobbyCharacter_GetCurrentAnimState_Params
{
	ELobbyCharacterAnimState                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLobbyCharacter.GetCharacterIndex
struct AKSLobbyCharacter_GetCharacterIndex_Params
{
	ELobbyCharacterIndex                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLocalPlayer.IsKillCamReplayActive
struct UKSLocalPlayer_IsKillCamReplayActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLocalPlayer.GetKillCam
struct UKSLocalPlayer_GetKillCam_Params
{
	class UKSKillCam*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSLongShot.HandleTrackerAccolade
struct UKSLongShot_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMapDifficultyManager.HandleTeamCreated
struct AKSMapDifficultyManager_HandleTeamCreated_Params
{
	class AKSTeamState**                               TeamState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMapDifficultyManager.HandleRoundStart
struct AKSMapDifficultyManager_HandleRoundStart_Params
{
	struct FRoundInitState*                            RoundState;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSMapDifficultyManager.HandleRoundSetup
struct AKSMapDifficultyManager_HandleRoundSetup_Params
{
	struct FRoundInitState*                            RoundState;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSMapDifficultyManager.HandlePhaseChange
struct AKSMapDifficultyManager_HandlePhaseChange_Params
{
	struct FName*                                      PreviousPhaseName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NewPhaseName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMapDifficultyManager.HandleObjectiveClaimed
struct AKSMapDifficultyManager_HandleObjectiveClaimed_Params
{
};

// Function Killstreak.KSMapDifficultyManager.HandleCharacterOnTeamKilled
struct AKSMapDifficultyManager_HandleCharacterOnTeamKilled_Params
{
	class AKSTeamState**                               TeamState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMatchDataRecorder.OnPlayerLogout
struct UKSMatchDataRecorder_OnPlayerLogout_Params
{
	class AGameModeBase**                              GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMatchDataRecorder.OnPlayerLogin
struct UKSMatchDataRecorder_OnPlayerLogin_Params
{
	class AGameModeBase**                              GameMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController**                          NewPlayer;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMath.ShiftLocationBetweenTransforms
struct UKSMath_ShiftLocationBetweenTransforms_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform*                                 SourceTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform*                                 TargetTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.ScaleInterpCurveVector2D
struct UKSMath_ScaleInterpCurveVector2D_Params
{
	struct FInterpCurveVector2D*                       InCurve;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             InScale;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInterpCurveVector2D                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSMath.ScaleInterpCurveFloatInput
struct UKSMath_ScaleInterpCurveFloatInput_Params
{
	struct FInterpCurveFloat*                          InCurve;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             InScale;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FInterpCurveFloat                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSMath.RInterpConstantToDirectional
struct UKSMath_RInterpConstantToDirectional_Params
{
	struct FRotator*                                   Current;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Target;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.GetLineSphereIntersectionPoints
struct UKSMath_GetLineSphereIntersectionPoints_Params
{
	struct FVector*                                    LinePointA;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    LinePointB;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    SphereOrigin;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPointA;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutPointB;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.GetLineRectangleIntersectionPoints
struct UKSMath_GetLineRectangleIntersectionPoints_Params
{
	struct FVector2D*                                  LinePointA;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  LinePointB;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  RectCenter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  RectExtent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             RectYaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntPoint1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntPoint2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.GetLineCircleIntersectionPoints
struct UKSMath_GetLineCircleIntersectionPoints_Params
{
	struct FVector2D*                                  LinePointA;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  LinePointB;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D*                                  CircleCenter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CircleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntPoint1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   IntPoint2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.FloatInterpCurveIntegralTrapezoid
struct UKSMath_FloatInterpCurveIntegralTrapezoid_Params
{
	struct FInterpCurveFloat*                          InCurve;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             MinTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.FInterpRadiansTo
struct UKSMath_FInterpRadiansTo_Params
{
	float*                                             Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.FInterpDegreesTo
struct UKSMath_FInterpDegreesTo_Params
{
	float*                                             Current;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InterpSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMath.ClampVector2D
struct UKSMath_ClampVector2D_Params
{
	struct FVector2D*                                  InVector2D;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MinSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MaxSize;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMedPack.GetBuildupTime
struct AKSMedPack_GetBuildupTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetWinPercentForJob
struct UKSMercMasteryManager_GetWinPercentForJob_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetLowestJobForActivityType
struct UKSMercMasteryManager_GetLowestJobForActivityType_Params
{
	EKSMercMasteryActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetHighestJobForActivityType
struct UKSMercMasteryManager_GetHighestJobForActivityType_Params
{
	EKSMercMasteryActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetActivityInstancesWithType
struct UKSMercMasteryManager_GetActivityInstancesWithType_Params
{
	EKSMercMasteryActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSActivityInstance*>                 OutActivityInstances;                                     // (Parm, OutParm, ZeroConstructor)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetActivityInstancesWithJob
struct UKSMercMasteryManager_GetActivityInstancesWithJob_Params
{
	class UKSJobItem**                                 Job;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSActivityInstance*>                 OutActivityInstances;                                     // (Parm, OutParm, ZeroConstructor)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.GetActivityInstanceByJobAndType
struct UKSMercMasteryManager_GetActivityInstanceByJobAndType_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMercMasteryActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMercMasteryManager.FindActivityByJobAndType
struct UKSMercMasteryManager_FindActivityByJobAndType_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EKSMercMasteryActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSMercMasteryActivity*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMiniMapAssistant.GetRelativeMinimapHeightToLocalPlayer
struct AKSMiniMapAssistant_GetRelativeMinimapHeightToLocalPlayer_Params
{
	struct FVector*                                    ActorLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EKSRelativeMinimapHeight                           RelativeHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMinimapRendererBase.GetMinimapWidth
struct AKSMinimapRendererBase_GetMinimapWidth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.StopAnimationFromEvent
struct UKSPlayerModInstance_StopAnimationFromEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.ReactsToAnimationEvent
struct UKSPlayerModInstance_ReactsToAnimationEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.PlayAnimationFromEvent
struct UKSPlayerModInstance_PlayAnimationFromEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.OwnerIsLocal
struct UKSPlayerModInstance_OwnerIsLocal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.OwnerHasAuthority
struct UKSPlayerModInstance_OwnerHasAuthority_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.OverrideInteraction
struct UKSPlayerModInstance_OverrideInteraction_Params
{
	TScriptInterface<class UKSInteractable>*           Interactable;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.OnRep_OwnerCharacter
struct UKSPlayerModInstance_OnRep_OwnerCharacter_Params
{
};

// Function Killstreak.KSPlayerModInstance.OnRep_ModAsset
struct UKSPlayerModInstance_OnRep_ModAsset_Params
{
};

// Function Killstreak.KSPlayerModInstance.OnRep_InstanceCount
struct UKSPlayerModInstance_OnRep_InstanceCount_Params
{
};

// Function Killstreak.KSPlayerModInstance.OnOwnerDied
struct UKSPlayerModInstance_OnOwnerDied_Params
{
	class AKSCharacterBase**                           KillerCharacter;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.OnNewCharacter
struct UKSPlayerModInstance_OnNewCharacter_Params
{
};

// Function Killstreak.KSPlayerModInstance.OnModInitialized
struct UKSPlayerModInstance_OnModInitialized_Params
{
};

// Function Killstreak.KSPlayerModInstance.OnCharacterOwnerDeath
struct UKSPlayerModInstance_OnCharacterOwnerDeath_Params
{
	class AKSCharacterBase**                           Killer;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.ModifyDamageDealt
struct UKSPlayerModInstance_ModifyDamageDealt_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.ModEventReceived
struct UKSPlayerModInstance_ModEventReceived_Params
{
	struct FName*                                      ModEvent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.InitializeMod
struct UKSPlayerModInstance_InitializeMod_Params
{
};

// Function Killstreak.KSPlayerModInstance.GetPlayerStateOwner
struct UKSPlayerModInstance_GetPlayerStateOwner_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetModType
struct UKSPlayerModInstance_GetModType_Params
{
	EPlayerModType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetModInstigator
struct UKSPlayerModInstance_GetModInstigator_Params
{
	class AKSPlayerState*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetModAsset
struct UKSPlayerModInstance_GetModAsset_Params
{
	class UKSPlayerMod*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetInstanceCount
struct UKSPlayerModInstance_GetInstanceCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetDuration
struct UKSPlayerModInstance_GetDuration_Params
{
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               UsesDuration;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.GetCharacterOwner
struct UKSPlayerModInstance_GetCharacterOwner_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInstance.BroadcastModTriggeredInternal
struct UKSPlayerModInstance_BroadcastModTriggeredInternal_Params
{
};

// Function Killstreak.KSPlayerModInstance.BroadcastModTriggered
struct UKSPlayerModInstance_BroadcastModTriggered_Params
{
};

// Function Killstreak.KSModInst_Activated.UpdateChargeDirect
struct UKSModInst_Activated_UpdateChargeDirect_Params
{
	float*                                             DeltaCharge;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.UpdateCharge
struct UKSModInst_Activated_UpdateCharge_Params
{
	int*                                               Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.TryToCancel
struct UKSModInst_Activated_TryToCancel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.TryToActivate
struct UKSModInst_Activated_TryToActivate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.SetAbilityMovementMode
struct UKSModInst_Activated_SetAbilityMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        InMovementMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EKSGame_CustomMovement>*               InCustomMovementMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.SetAbilityMovementDisabled
struct UKSModInst_Activated_SetAbilityMovementDisabled_Params
{
	bool*                                              bDisable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.RefundCharge
struct UKSModInst_Activated_RefundCharge_Params
{
};

// Function Killstreak.KSModInst_Activated.OnSetup
struct UKSModInst_Activated_OnSetup_Params
{
};

// Function Killstreak.KSModInst_Activated.OnRep_LockoutTimer
struct UKSModInst_Activated_OnRep_LockoutTimer_Params
{
};

// Function Killstreak.KSModInst_Activated.OnRep_Locked
struct UKSModInst_Activated_OnRep_Locked_Params
{
};

// Function Killstreak.KSModInst_Activated.OnRep_CurrentCharge
struct UKSModInst_Activated_OnRep_CurrentCharge_Params
{
};

// Function Killstreak.KSModInst_Activated.OnOwnerDownStateChanged
struct UKSModInst_Activated_OnOwnerDownStateChanged_Params
{
	class AKSPlayerState**                             DownedPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.OnLockoutTimerTick
struct UKSModInst_Activated_OnLockoutTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.OnLockoutTimerActive
struct UKSModInst_Activated_OnLockoutTimerActive_Params
{
	bool*                                              bIsTimerActive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.OnFullyCharged
struct UKSModInst_Activated_OnFullyCharged_Params
{
};

// Function Killstreak.KSModInst_Activated.OnEndRecovery
struct UKSModInst_Activated_OnEndRecovery_Params
{
};

// Function Killstreak.KSModInst_Activated.OnEndActivationWarning
struct UKSModInst_Activated_OnEndActivationWarning_Params
{
};

// Function Killstreak.KSModInst_Activated.OnEndActivation
struct UKSModInst_Activated_OnEndActivation_Params
{
};

// Function Killstreak.KSModInst_Activated.OnActivation
struct UKSModInst_Activated_OnActivation_Params
{
};

// Function Killstreak.KSModInst_Activated.OnAbilityReleased
struct UKSModInst_Activated_OnAbilityReleased_Params
{
};

// Function Killstreak.KSModInst_Activated.IsLocked
struct UKSModInst_Activated_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.IsActivated
struct UKSModInst_Activated_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.IsAbilityMovementDisabled
struct UKSModInst_Activated_IsAbilityMovementDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetSetupActionRestrictor
struct UKSModInst_Activated_GetSetupActionRestrictor_Params
{
	struct FKSActionRestrictor                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSModInst_Activated.GetRequiredCharge
struct UKSModInst_Activated_GetRequiredCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetRecoveryActionRestrictor
struct UKSModInst_Activated_GetRecoveryActionRestrictor_Params
{
	struct FKSActionRestrictor                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSModInst_Activated.GetMaximumCharge
struct UKSModInst_Activated_GetMaximumCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetLockoutTimeRemaining
struct UKSModInst_Activated_GetLockoutTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetDefaultCharge
struct UKSModInst_Activated_GetDefaultCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetCurrentCharge
struct UKSModInst_Activated_GetCurrentCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetActivatedModAsset
struct UKSModInst_Activated_GetActivatedModAsset_Params
{
	class UKSPlayerMod_Activated*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetAbilitySetupDuration
struct UKSModInst_Activated_GetAbilitySetupDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetAbilityRecoveryDuration
struct UKSModInst_Activated_GetAbilityRecoveryDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.GetAbilityDuration
struct UKSModInst_Activated_GetAbilityDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.EndActivation
struct UKSModInst_Activated_EndActivation_Params
{
};

// Function Killstreak.KSModInst_Activated.ConsumeChargeAmount
struct UKSModInst_Activated_ConsumeChargeAmount_Params
{
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.ConsumeCharge
struct UKSModInst_Activated_ConsumeCharge_Params
{
};

// Function Killstreak.KSModInst_Activated.ClientModFailedToActivate
struct UKSModInst_Activated_ClientModFailedToActivate_Params
{
	EKSAbilityUsageFailureType*                        AbilityFailureType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.CanActivateWhileDowned
struct UKSModInst_Activated_CanActivateWhileDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.CanActivateNow
struct UKSModInst_Activated_CanActivateNow_Params
{
	EKSAbilityUsageFailureType                         OutAbilityFailureType;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.BroadcastModSetup
struct UKSModInst_Activated_BroadcastModSetup_Params
{
};

// Function Killstreak.KSModInst_Activated.BroadcastModActivated
struct UKSModInst_Activated_BroadcastModActivated_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_Activated.BroadcastEndRecovery
struct UKSModInst_Activated_BroadcastEndRecovery_Params
{
};

// Function Killstreak.KSModInst_Activated.BroadcastEndActivationWarning
struct UKSModInst_Activated_BroadcastEndActivationWarning_Params
{
};

// Function Killstreak.KSModInst_Activated.BeginSetup
struct UKSModInst_Activated_BeginSetup_Params
{
};

// Function Killstreak.KSModInst_Activated.BeginActivation
struct UKSModInst_Activated_BeginActivation_Params
{
};

// Function Killstreak.KSModInst_Activated.AbilityActivationRequestTimeout
struct UKSModInst_Activated_AbilityActivationRequestTimeout_Params
{
};

// Function Killstreak.KSModInst_ActivatedTarget.GetCachedTarget
struct UKSModInst_ActivatedTarget_GetCachedTarget_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_ActivatedTarget.BroadcastTarget
struct UKSModInst_ActivatedTarget_BroadcastTarget_Params
{
	class AKSCharacter**                               InTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_ActivatedTarget.AssignTarget
struct UKSModInst_ActivatedTarget_AssignTarget_Params
{
	class AKSCharacter*                                OutTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDamageOther.OnMatchingDamageDealt
struct UKSModInst_OnDamageOther_OnMatchingDamageDealt_Params
{
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDamageOther.OnInstigatedDamage
struct UKSModInst_OnDamageOther_OnInstigatedDamage_Params
{
	class AKSCharacterBase**                           Damager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDamageOther.DoesDamageMatch
struct UKSModInst_OnDamageOther_DoesDamageMatch_Params
{
	class AKSCharacterBase**                           Damager;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSDamageTypeBase**                          DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_ApplyDebuffOnDamage.DebuffTimeExpired
struct UKSModInst_ApplyDebuffOnDamage_DebuffTimeExpired_Params
{
	class AKSCharacter**                               DebuffedCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OverTimeEffect.OnRep_EffectTimer
struct UKSModInst_OverTimeEffect_OnRep_EffectTimer_Params
{
};

// Function Killstreak.KSModInst_OverTimeEffect.GetEffectTickPeriod
struct UKSModInst_OverTimeEffect_GetEffectTickPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_OverTimeEffect.EffectTick
struct UKSModInst_OverTimeEffect_EffectTick_Params
{
};

// Function Killstreak.KSModInst_DetectEnemy.OnRep_EnemyDetected
struct UKSModInst_DetectEnemy_OnRep_EnemyDetected_Params
{
};

// Function Killstreak.KSModInst_DetectEnemy.IsDetectingEnemy
struct UKSModInst_DetectEnemy_IsDetectingEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_DetectEnemy.GetWidgetClass
struct UKSModInst_DetectEnemy_GetWidgetClass_Params
{
};

// Function Killstreak.KSModInst_DetectEnemy.DetectEnemy
struct UKSModInst_DetectEnemy_DetectEnemy_Params
{
	bool*                                              bDetectEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveItemOnActivation.TryToRemoveItem
struct UKSModInst_GiveItemOnActivation_TryToRemoveItem_Params
{
};

// Function Killstreak.KSModInst_GiveItemOnActivation.OnRep_GivenItem
struct UKSModInst_GiveItemOnActivation_OnRep_GivenItem_Params
{
};

// Function Killstreak.KSModInst_GiveItemOnActivation.OnNewGivenItem
struct UKSModInst_GiveItemOnActivation_OnNewGivenItem_Params
{
};

// Function Killstreak.KSModInst_GiveItemOnActivation.OnItemRemoved
struct UKSModInst_GiveItemOnActivation_OnItemRemoved_Params
{
};

// Function Killstreak.KSModInst_GiveItemOnActivation.AsyncItemGiveComplete
struct UKSModInst_GiveItemOnActivation_AsyncItemGiveComplete_Params
{
	class UKSItem**                                    Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    GivenObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.TryToSwapBackToWeapon
struct UKSModInst_GiveWeaponOnActivation_TryToSwapBackToWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.SwapFromRetry
struct UKSModInst_GiveWeaponOnActivation_SwapFromRetry_Params
{
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.OnWeaponStateChanged
struct UKSModInst_GiveWeaponOnActivation_OnWeaponStateChanged_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.OnGivenWeaponInstigatedDamage
struct UKSModInst_GiveWeaponOnActivation_OnGivenWeaponInstigatedDamage_Params
{
	class AKSCharacterBase**                           InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.HandleWeaponExhausted
struct UKSModInst_GiveWeaponOnActivation_HandleWeaponExhausted_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.GivenWeaponInstigatedDamage
struct UKSModInst_GiveWeaponOnActivation_GivenWeaponInstigatedDamage_Params
{
	class AKSCharacterBase**                           InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.EndsActivationOnHolster
struct UKSModInst_GiveWeaponOnActivation_EndsActivationOnHolster_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.EndsActivationOnEmptyClip
struct UKSModInst_GiveWeaponOnActivation_EndsActivationOnEmptyClip_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveWeaponOnActivation.BroadcastGivenWeaponInstigatedDamage
struct UKSModInst_GiveWeaponOnActivation_BroadcastGivenWeaponInstigatedDamage_Params
{
	class AKSCharacterBase**                           InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCombatEventInfo*                           DamageInfo;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSModInst_FireWeaponOnActivation.HandleIdle
struct UKSModInst_FireWeaponOnActivation_HandleIdle_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_FireWeaponOnActivation.HandleCooldown
struct UKSModInst_FireWeaponOnActivation_HandleCooldown_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_FireWeaponOnActivation.HandleBuildup
struct UKSModInst_FireWeaponOnActivation_HandleBuildup_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_FireWeaponOnActivation.ClientFire
struct UKSModInst_FireWeaponOnActivation_ClientFire_Params
{
	class AKSWeapon**                                  Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_DirectTargetWeapon.GetCurrentTarget
struct UKSModInst_DirectTargetWeapon_GetCurrentTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveBuildOnActivation.BuildSucceeded
struct UKSModInst_GiveBuildOnActivation_BuildSucceeded_Params
{
};

// Function Killstreak.KSModInst_GiveBuildOnActivation.BuildSpawned
struct UKSModInst_GiveBuildOnActivation_BuildSpawned_Params
{
	class AKSBuild**                                   SpawnedBuild;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveBuildOnActivation.BuildReclaimed
struct UKSModInst_GiveBuildOnActivation_BuildReclaimed_Params
{
	class AKSBuild**                                   Reclaimed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_GiveBuildOnActivation.BuildFailed
struct UKSModInst_GiveBuildOnActivation_BuildFailed_Params
{
};

// Function Killstreak.KSModInst_MartialArtist.GetThrowDistance
struct UKSModInst_MartialArtist_GetThrowDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_MartialArtist.GetThrowDirection
struct UKSModInst_MartialArtist_GetThrowDirection_Params
{
	struct FVector*                                    ToDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EThrowDirection*                                   ThrowDirection;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_MartialArtist.GetCardinalThrowDirection
struct UKSModInst_MartialArtist_GetCardinalThrowDirection_Params
{
	EThrowDirection                                    OutThrowDirection;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_MartialArtist.BroadcastTargetInfo
struct UKSModInst_MartialArtist_BroadcastTargetInfo_Params
{
	EThrowDirection*                                   Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>*                            Path;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	float*                                             PathDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_MovementAbility.GetDistance
struct UKSModInst_MovementAbility_GetDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDodgeRoll.Triggered
struct UKSModInst_OnDodgeRoll_Triggered_Params
{
	float*                                             RollDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDodgeRoll.OnDodgeRoll
struct UKSModInst_OnDodgeRoll_OnDodgeRoll_Params
{
	float*                                             RollDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDownOrRevive.OnReviveComplete
struct UKSModInst_OnDownOrRevive_OnReviveComplete_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDownOther.OnDownOther
struct UKSModInst_OnDownOther_OnDownOther_Params
{
	class AKSCharacter**                               Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnDownOther.DownTriggered
struct UKSModInst_OnDownOther_DownTriggered_Params
{
	class AKSCharacter**                               Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnPickupItem.OnItemPickedUp
struct UKSModInst_OnPickupItem_OnItemPickedUp_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                ItemDrop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnPickupItem.ItemPickedUp
struct UKSModInst_OnPickupItem_ItemPickedUp_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                ItemDrop;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnReviveOther.Triggered
struct UKSModInst_OnReviveOther_Triggered_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnReviveOther.OnReviveOther
struct UKSModInst_OnReviveOther_OnReviveOther_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnTakeDamage.TakeDamageTimerComplete
struct UKSModInst_OnTakeDamage_TakeDamageTimerComplete_Params
{
};

// Function Killstreak.KSModInst_OnTakeDamage.StopTakeDamageTimer
struct UKSModInst_OnTakeDamage_StopTakeDamageTimer_Params
{
};

// Function Killstreak.KSModInst_OnTakeDamage.StartTakeDamageTimer
struct UKSModInst_OnTakeDamage_StartTakeDamageTimer_Params
{
	float*                                             Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnTakeDamage.ReviveCompleted
struct UKSModInst_OnTakeDamage_ReviveCompleted_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnTakeDamage.OnTakeDamage
struct UKSModInst_OnTakeDamage_OnTakeDamage_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnTakeDamage.OnReviveCompleted
struct UKSModInst_OnTakeDamage_OnReviveCompleted_Params
{
	class AKSCharacter**                               Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_OnTakeDamage.OnRep_TakeDamageTimer
struct UKSModInst_OnTakeDamage_OnRep_TakeDamageTimer_Params
{
};

// Function Killstreak.KSModInst_OnTakeDamage.MatchingDamageTaken
struct UKSModInst_OnTakeDamage_MatchingDamageTaken_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageTypeCDO;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_PingOnOtherDowned.PingFromDownedEnemy
struct UKSModInst_PingOnOtherDowned_PingFromDownedEnemy_Params
{
	class AKSPlayerState**                             DownedEnemy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_PingOnOtherDowned.OnPlayerDowned
struct UKSModInst_PingOnOtherDowned_OnPlayerDowned_Params
{
	struct FCombatEventInfo*                           EventInfo;                                                // (Parm)
	int*                                               XpBonus;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_PingOnOtherDowned.OnCharacterPinged
struct UKSModInst_PingOnOtherDowned_OnCharacterPinged_Params
{
	class AKSCharacter**                               PingedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_PingOnOtherDowned.BroadcastSpawnPingEmitter
struct UKSModInst_PingOnOtherDowned_BroadcastSpawnPingEmitter_Params
{
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_PingOnOtherDowned.BroadcastPingedCharacter
struct UKSModInst_PingOnOtherDowned_BroadcastPingedCharacter_Params
{
	class AKSCharacter**                               PingedCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSModInst_RevealOnMinimap.GeneratePing
struct UKSModInst_RevealOnMinimap_GeneratePing_Params
{
};

// Function Killstreak.KSModInst_StartingEquipment.GiveEquipment
struct UKSModInst_StartingEquipment_GiveEquipment_Params
{
};

// Function Killstreak.KSModInst_WeaponSkinOverride.OnActiveWeaponChanged
struct UKSModInst_WeaponSkinOverride_OnActiveWeaponChanged_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMultiDownsTracker.RemoveTrackerByPlayerState
struct UKSMultiDownsTracker_RemoveTrackerByPlayerState_Params
{
	class AKSPlayerState**                             CurrentPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMultiDownsTracker.RemoveTracker
struct UKSMultiDownsTracker_RemoveTracker_Params
{
	struct FAccoladePlayerTrackers*                    CurrentTrackPlayer;                                       // (Parm)
};

// Function Killstreak.KSMultiDownsTracker.HandleTrackerAccolade
struct UKSMultiDownsTracker_HandleTrackerAccolade_Params
{
	struct FAccoladePlayerTrackers*                    CurrentTrackPlayer;                                       // (Parm)
};

// Function Killstreak.KSMultiDownsTracker.GetTrackPlayer
struct UKSMultiDownsTracker_GetTrackPlayer_Params
{
	int*                                               PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAccoladePlayerTrackers                     OutTracker;                                               // (Parm, OutParm)
	int                                                TrackerIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSMultiElimTracker.RemoveTrackerByPlayerState
struct UKSMultiElimTracker_RemoveTrackerByPlayerState_Params
{
	class AKSPlayerState**                             CurrentPlayerState;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSMultiElimTracker.HandleTrackerAccolade
struct UKSMultiElimTracker_HandleTrackerAccolade_Params
{
	struct FAccoladePlayerTrackers*                    CurrentTrackPlayer;                                       // (Parm)
};

// Function Killstreak.KSMultiElimTracker.GetTrackPlayer
struct UKSMultiElimTracker_GetTrackPlayer_Params
{
	int*                                               PlayerId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAccoladePlayerTrackers                     OutTracker;                                               // (Parm, OutParm)
	int                                                TrackerIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSNamedObject.GetKSName
struct UKSNamedObject_GetKSName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSNavModifierComponent.UpdateNavigationMesh
struct UKSNavModifierComponent_UpdateNavigationMesh_Params
{
};

// Function Killstreak.KSNavModifierComponent.UpdateCachedBounds
struct UKSNavModifierComponent_UpdateCachedBounds_Params
{
};

// Function Killstreak.KSNavModifierComponent.SetAreaClassAndCacheBounds
struct UKSNavModifierComponent_SetAreaClassAndCacheBounds_Params
{
	class UClass**                                     NewAreaClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSNeutralBombZone.TeamUpdated
struct AKSNeutralBombZone_TeamUpdated_Params
{
};

// Function Killstreak.KSNeutralBombZone.OnTeamSidesFlipped
struct AKSNeutralBombZone_OnTeamSidesFlipped_Params
{
};

// Function Killstreak.KSNeutralBombZone.OnRep_Team
struct AKSNeutralBombZone_OnRep_Team_Params
{
};

// Function Killstreak.KSNeutralBombZone.OnRep_Activated
struct AKSNeutralBombZone_OnRep_Activated_Params
{
};

// Function Killstreak.KSNeutralBombZone.Activated
struct AKSNeutralBombZone_Activated_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSNoFlyZoneTracker.UpdatePlayerTrackers
struct UKSNoFlyZoneTracker_UpdatePlayerTrackers_Params
{
	class AKSPlayerState**                             InstigatorPlayerState;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSNoFlyZoneTracker.HandleTrackerAccolade
struct UKSNoFlyZoneTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSNPETrackManager.GetActivityInstanceByType
struct UKSNPETrackManager_GetActivityInstanceByType_Params
{
	EKSNPEActivityType*                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSNPETrackManager.FindActivityByType
struct UKSNPETrackManager_FindActivityByType_Params
{
	EKSNPEActivityType*                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSNPEActivity*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.TickDamage
struct UKSOutOfBoundsManager_TickDamage_Params
{
};

// Function Killstreak.KSOutOfBoundsManager.OnOutOfBoundsWarningExpired
struct UKSOutOfBoundsManager_OnOutOfBoundsWarningExpired_Params
{
};

// Function Killstreak.KSOutOfBoundsManager.OnCharacterOutOfWorld
struct UKSOutOfBoundsManager_OnCharacterOutOfWorld_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.OnActorOverlapZoneEnd
struct UKSOutOfBoundsManager_OnActorOverlapZoneEnd_Params
{
	class AActor**                                     OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.OnActorOverlapZoneBegin
struct UKSOutOfBoundsManager_OnActorOverlapZoneBegin_Params
{
	class AActor**                                     OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.OnActorOverlapVolumeEnd
struct UKSOutOfBoundsManager_OnActorOverlapVolumeEnd_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.OnActorOverlapVolumeBegin
struct UKSOutOfBoundsManager_OnActorOverlapVolumeBegin_Params
{
	class UPrimitiveComponent**                        OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSOutOfBoundsManager.ExpireTimeSpentGroundedTimer
struct UKSOutOfBoundsManager_ExpireTimeSpentGroundedTimer_Params
{
};

// Function Killstreak.KSOutOfBoundsManager_RoundGame.OnRoundStarted
struct UKSOutOfBoundsManager_RoundGame_OnRoundStarted_Params
{
	struct FRoundInitState*                            RoundState;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSOutOfBoundsManager_RoundGame.OnFreezeEnd
struct UKSOutOfBoundsManager_RoundGame_OnFreezeEnd_Params
{
};

// Function Killstreak.KSOutOfBoundsZone.TurnOnDropBoundary
struct AKSOutOfBoundsZone_TurnOnDropBoundary_Params
{
};

// Function Killstreak.KSOutOfBoundsZone.TurnOffDropBoundary
struct AKSOutOfBoundsZone_TurnOffDropBoundary_Params
{
};

// Function Killstreak.KSOutOfBoundsZone.TurnOffCollision
struct AKSOutOfBoundsZone_TurnOffCollision_Params
{
	class AKSGameState**                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSOutOfBoundsVolume.TurnOnCollision
struct AKSOutOfBoundsVolume_TurnOnCollision_Params
{
};

// Function Killstreak.KSOutOfBoundsVolume.TurnOffCollision
struct AKSOutOfBoundsVolume_TurnOffCollision_Params
{
	class AKSGameState**                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPawnCommonInterface.PrepareForNextRound
struct UKSPawnCommonInterface_PrepareForNextRound_Params
{
	class AActor*                                      ActorToDestroy;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPayBackTracker.IsVictimStored
struct UKSPayBackTracker_IsVictimStored_Params
{
	int*                                               VictimPlayerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTrackPlayerElim                            PlayerTracker;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TrackerIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPayBackTracker.HandleTrackerAccolade
struct UKSPayBackTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPayBackTracker.CheckLastInstigator
struct UKSPayBackTracker_CheckLastInstigator_Params
{
	int*                                               VictimId;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               CurrentInstigatorId;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTrackPlayerElim                            PlayerTracker;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TrackerIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPerformanceCaptureCamera.GetNextCamera
struct AKSPerformanceCaptureCamera_GetNextCamera_Params
{
};

// Function Killstreak.KSPhysicsAssetUtilities.AppendPhysicsAsset
struct UKSPhysicsAssetUtilities_AppendPhysicsAsset_Params
{
	class USkeletalMeshComponent**                     Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsAsset**                              PhysicsAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CollisionProfileName;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SimulatePhysics;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPingBeaconBase.PingRemoved
struct AKSPingBeaconBase_PingRemoved_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             OwningPlayer;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.UpdateHoveredPing
struct UKSPingManager_UpdateHoveredPing_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PingingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.ThrottleDetectionPeriodExpired
struct UKSPingManager_ThrottleDetectionPeriodExpired_Params
{
};

// Function Killstreak.KSPingManager.ServerRemovePing
struct UKSPingManager_ServerRemovePing_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.ServerPingRequest
struct UKSPingManager_ServerPingRequest_Params
{
	struct FPingInfo*                                  PingInfo;                                                 // (Parm)
};

// Function Killstreak.KSPingManager.RemovePing
struct UKSPingManager_RemovePing_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PingingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.OnPingExpired
struct UKSPingManager_OnPingExpired_Params
{
	struct FPingInfo*                                  ExpiringPing;                                             // (Parm)
};

// Function Killstreak.KSPingManager.HoldTimerExpired
struct UKSPingManager_HoldTimerExpired_Params
{
};

// Function Killstreak.KSPingManager.GetPingLifetimes
struct UKSPingManager_GetPingLifetimes_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPingManager.GetPingInfoById
struct UKSPingManager_GetPingInfoById_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPingInfo                                   OutPingInfo;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPingManager.GetPingIdForDisplayId
struct UKSPingManager_GetPingIdForDisplayId_Params
{
	int*                                               DisplayId;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPingManager.GameRoundOver
struct UKSPingManager_GameRoundOver_Params
{
	class AKSGameState**                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPingManager.DoubleClickTimerExpired
struct UKSPingManager_DoubleClickTimerExpired_Params
{
};

// Function Killstreak.KSPingManager.ClientPingRejected
struct UKSPingManager_ClientPingRejected_Params
{
	EPingFailedType*                                   Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.ClearPingsOfType
struct UKSPingManager_ClearPingsOfType_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.AttemptRemovePing
struct UKSPingManager_AttemptRemovePing_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PingingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.AttemptPing2D
struct UKSPingManager_AttemptPing2D_Params
{
	struct FVector2D*                                  WorldLocation2D;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.AttemptManualPing
struct UKSPingManager_AttemptManualPing_Params
{
	EPingType*                                         PingType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     PingedActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bRemoveOtherPingsOfType;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPingManager.AddPing
struct UKSPingManager_AddPing_Params
{
	struct FPingInfo*                                  PingInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPlayerInventoryHelper.RemoveAllItemUpdatedCallbacks
struct UKSPlayerInventoryHelper_RemoveAllItemUpdatedCallbacks_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSPlayerInventoryHelper.RemoveAllItemTypeUpdatedCallbacks
struct UKSPlayerInventoryHelper_RemoveAllItemTypeUpdatedCallbacks_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSPlayerInventoryHelper.GetCountByType
struct UKSPlayerInventoryHelper_GetCountByType_Params
{
	int*                                               ItemTypeId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemSubTypeId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerInventoryHelper.GetCount
struct UKSPlayerInventoryHelper_GetCount_Params
{
	int64_t*                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerInventoryHelper.GetAcquiredTime
struct UKSPlayerInventoryHelper_GetAcquiredTime_Params
{
	int64_t*                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerInventoryHelper.AddItemUpdatedCallback
struct UKSPlayerInventoryHelper_AddItemUpdatedCallback_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int64_t*                                           ItemId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerInventoryHelper.AddItemTypeUpdatedCallback
struct UKSPlayerInventoryHelper_AddItemTypeUpdatedCallback_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int*                                               ItemTypeId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ItemSubTypeId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.IsSingleInstanceStack
struct UKSPlayerMod_IsSingleInstanceStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.IsPerk
struct UKSPlayerMod_IsPerk_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.IsInstanceReplicated
struct UKSPlayerMod_IsInstanceReplicated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.GetTriggerEvents
struct UKSPlayerMod_GetTriggerEvents_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerMod.GetPerkCategory
struct UKSPlayerMod_GetPerkCategory_Params
{
	class UPerkCategory*                               FoundPerkCategory;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.GetModUnlockTier
struct UKSPlayerMod_GetModUnlockTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.GetModType
struct UKSPlayerMod_GetModType_Params
{
	EPlayerModType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.GetModInteraction
struct UKSPlayerMod_GetModInteraction_Params
{
	EModInterferenceType                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod.GetFunctionalClass
struct UKSPlayerMod_GetFunctionalClass_Params
{
};

// Function Killstreak.KSPlayerMod.GetEffectCategories
struct UKSPlayerMod_GetEffectCategories_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSPlayerMod_Activated.GetRequiredCharge
struct UKSPlayerMod_Activated_GetRequiredCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetRefundFactor
struct UKSPlayerMod_Activated_GetRefundFactor_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetMaximumCharge
struct UKSPlayerMod_Activated_GetMaximumCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetDefaultCharge
struct UKSPlayerMod_Activated_GetDefaultCharge_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetBuffs
struct UKSPlayerMod_Activated_GetBuffs_Params
{
};

// Function Killstreak.KSPlayerMod_Activated.GetAbilitySetupDuration
struct UKSPlayerMod_Activated_GetAbilitySetupDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetAbilityRecoveryDuration
struct UKSPlayerMod_Activated_GetAbilityRecoveryDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetAbilityEndWarningTime
struct UKSPlayerMod_Activated_GetAbilityEndWarningTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_Activated.GetAbilityDuration
struct UKSPlayerMod_Activated_GetAbilityDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_ActivatedTarget.GetTargetBuffs
struct UKSPlayerMod_ActivatedTarget_GetTargetBuffs_Params
{
};

// Function Killstreak.KSPlayerMod_AngleConfig.CheckDistanceAndAngleFromEnemies
struct UKSPlayerMod_AngleConfig_CheckDistanceAndAngleFromEnemies_Params
{
	class AKSCharacter**                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithinDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithinAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_AngleConfig.CheckDistanceAndAngle
struct UKSPlayerMod_AngleConfig_CheckDistanceAndAngle_Params
{
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    DirectionToCheck;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithinDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithinAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_AngleConfig.CheckAngle
struct UKSPlayerMod_AngleConfig_CheckAngle_Params
{
	struct FVector*                                    Direction1;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Direction2;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bWithinAngle;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_ApplyModOnEvent.RemoveMod
struct UKSPlayerMod_ApplyModOnEvent_RemoveMod_Params
{
	class AKSPlayerState**                             ModOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_ApplyModOnEvent.GetModDuration
struct UKSPlayerMod_ApplyModOnEvent_GetModDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_ApplyModOnEvent.ApplyMod
struct UKSPlayerMod_ApplyModOnEvent_ApplyMod_Params
{
	class AKSPlayerState**                             ModOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_DamageTaken.GetAffectedDamageCategories
struct UKSPlayerMod_DamageTaken_GetAffectedDamageCategories_Params
{
	TArray<EDamageCategory>                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerMod_GiveItemOnActivation.GetGivenItem
struct UKSPlayerMod_GiveItemOnActivation_GetGivenItem_Params
{
};

// Function Killstreak.KSPlayerMod_GiveItemOnEvent.GiveItem
struct UKSPlayerMod_GiveItemOnEvent_GiveItem_Params
{
	class AKSCharacter**                               ModOwner;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            GivenToEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSPlayerMod_GiveItemOnEvent.GetItemToGive
struct UKSPlayerMod_GiveItemOnEvent_GetItemToGive_Params
{
};

// Function Killstreak.KSPlayerMod_GiveWeaponConfig.GetReclaimCharge
struct UKSPlayerMod_GiveWeaponConfig_GetReclaimCharge_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_GiveWeaponConfig.GetRadius
struct UKSPlayerMod_GiveWeaponConfig_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealUpTo
struct UKSPlayerMod_HealOnEvent_GetHealUpTo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealTickCount
struct UKSPlayerMod_HealOnEvent_GetHealTickCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealthPercentage
struct UKSPlayerMod_HealOnEvent_GetHealthPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealthAmount
struct UKSPlayerMod_HealOnEvent_GetHealthAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealPeriod
struct UKSPlayerMod_HealOnEvent_GetHealPeriod_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealDelay
struct UKSPlayerMod_HealOnEvent_GetHealDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetHealAsPercentage
struct UKSPlayerMod_HealOnEvent_GetHealAsPercentage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.GetFirstTickImmediately
struct UKSPlayerMod_HealOnEvent_GetFirstTickImmediately_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.ApplyOverheal
struct UKSPlayerMod_HealOnEvent_ApplyOverheal_Params
{
	class AKSCharacter**                               CharacterToHeal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_HealOnEvent.ApplyHeal
struct UKSPlayerMod_HealOnEvent_ApplyHeal_Params
{
	class AKSCharacter**                               CharacterToHeal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSCharacter**                               Healer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMod_PickupRange.GetPickupRadius
struct UKSPlayerMod_PickupRange_GetPickupRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerModInst_WeaponAttachment.WeaponAddedToOwnerInventory
struct UKSPlayerModInst_WeaponAttachment_WeaponAddedToOwnerInventory_Params
{
	class AKSWeapon**                                  NewWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
};

// Function Killstreak.KSPlayerModInst_WeaponAttachment.OnAttachmentGivenSuccess
struct UKSPlayerModInst_WeaponAttachment_OnAttachmentGivenSuccess_Params
{
	class UKSItem**                                    ItemToGive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAttachmentInstance**                GivenAttachment;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
};

// Function Killstreak.KSPlayerModInst_WeaponAttachment.OnAttachmentGiven
struct UKSPlayerModInst_WeaponAttachment_OnAttachmentGiven_Params
{
	class UKSItem**                                    ItemToGive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    GivenObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGiveItemParameters*                        InGiveItemParameters;                                     // (Parm)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWidgetInfoActor.OnHUDSetup
struct AKSWidgetInfoActor_OnHUDSetup_Params
{
};

// Function Killstreak.KSPlayerShop.ZoneLeftByPlayer
struct AKSPlayerShop_ZoneLeftByPlayer_Params
{
	class AKSPlayerState**                             InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.ZoneEnteredByPlayer
struct AKSPlayerShop_ZoneEnteredByPlayer_Params
{
	class AKSPlayerState**                             InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.TryToSetItemActive
struct AKSPlayerShop_TryToSetItemActive_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.TryToPurchaseItem
struct AKSPlayerShop_TryToPurchaseItem_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.ToggleShop
struct AKSPlayerShop_ToggleShop_Params
{
};

// Function Killstreak.KSPlayerShop.ServerSetItemActive
struct AKSPlayerShop_ServerSetItemActive_Params
{
	struct FPlayerShopTransaction*                     InTransactionInfo;                                        // (Parm)
};

// Function Killstreak.KSPlayerShop.ServerAttemptPurchase
struct AKSPlayerShop_ServerAttemptPurchase_Params
{
	struct FPlayerShopTransaction*                     InTransactionInfo;                                        // (Parm)
};

// Function Killstreak.KSPlayerShop.OpenShop
struct AKSPlayerShop_OpenShop_Params
{
};

// Function Killstreak.KSPlayerShop.OnRep_PlayerState
struct AKSPlayerShop_OnRep_PlayerState_Params
{
};

// Function Killstreak.KSPlayerShop.OnRep_bAvailable
struct AKSPlayerShop_OnRep_bAvailable_Params
{
};

// Function Killstreak.KSPlayerShop.OnPlayerScoreChanged
struct AKSPlayerShop_OnPlayerScoreChanged_Params
{
	struct FKSScoreChangeEvent*                        ScoreEvent;                                               // (Parm)
};

// Function Killstreak.KSPlayerShop.OnPlayerJobChanged
struct AKSPlayerShop_OnPlayerJobChanged_Params
{
};

// Function Killstreak.KSPlayerShop.OnOwnerDestroyed
struct AKSPlayerShop_OnOwnerDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.NotifyShopItemPurchased
struct AKSPlayerShop_NotifyShopItemPurchased_Params
{
	struct FShopItem*                                  ShopItem;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPlayerShop.NotifyShopItemChanged
struct AKSPlayerShop_NotifyShopItemChanged_Params
{
	struct FShopItem*                                  ShopItem;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSPlayerShop.InitializeShopItems
struct AKSPlayerShop_InitializeShopItems_Params
{
};

// Function Killstreak.KSPlayerShop.GetShopItemByType
struct AKSPlayerShop_GetShopItemByType_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FShopItem                                   Item;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.GetShopAvailability
struct AKSPlayerShop_GetShopAvailability_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.GetPriceOfItem
struct AKSPlayerShop_GetPriceOfItem_Params
{
	class UKSItem**                                    InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.CloseShop
struct AKSPlayerShop_CloseShop_Params
{
};

// Function Killstreak.KSPlayerShop.ClientPurchaseAcknowledge
struct AKSPlayerShop_ClientPurchaseAcknowledge_Params
{
	struct FPlayerShopTransaction*                     InTransactionInfo;                                        // (Parm)
	bool*                                              bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShop.CanPurchaseItemNow
struct AKSPlayerShop_CanPurchaseItemNow_Params
{
	EShopItemType*                                     ShopItemType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutAvailable;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAfford;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerShopZone.ZoneLeftByPlayer
struct AKSPlayerShopZone_ZoneLeftByPlayer_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShopZone.ZoneEnteredByPlayer
struct AKSPlayerShopZone_ZoneEnteredByPlayer_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShotListener.OnKSGameStateDestroyed
struct UKSPlayerShotListener_OnKSGameStateDestroyed_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerShotListener.ClientRecieveShotInfo
struct UKSPlayerShotListener_ClientRecieveShotInfo_Params
{
	struct FKSClientShotInfo*                          ShotInfo;                                                 // (Parm)
};

// Function Killstreak.KSPlayerShotListener.Authority_ProcessShotInfo
struct UKSPlayerShotListener_Authority_ProcessShotInfo_Params
{
	struct FKSGlobalShotInfo*                          ShotInfo;                                                 // (Parm)
};

// Function Killstreak.KSPlayerStart.SetSideNum
struct AKSPlayerStart_SetSideNum_Params
{
	int*                                               InSideNum;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerStart.Init
struct AKSPlayerStart_Init_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerStart.GetSideNum
struct AKSPlayerStart_GetSideNum_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerStart.CharacterLoadoutRestored
struct AKSPlayerStart_CharacterLoadoutRestored_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.TryToBroadCastUIRelevantInfoHasChanged
struct AKSPlayerState_TryToBroadCastUIRelevantInfoHasChanged_Params
{
};

// Function Killstreak.KSPlayerState.SpendCash
struct AKSPlayerState_SpendCash_Params
{
	int*                                               cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.SpawnedDropDestroyed
struct AKSPlayerState_SpawnedDropDestroyed_Params
{
	class AActor**                                     Drop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.SetMoney
struct AKSPlayerState_SetMoney_Params
{
	int*                                               NewAmount;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.SelectActiveMod
struct AKSPlayerState_SelectActiveMod_Params
{
	class UKSPlayerMod**                               NewMod;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.RespawnTimerTick
struct AKSPlayerState_RespawnTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.RespawnTimerComplete
struct AKSPlayerState_RespawnTimerComplete_Params
{
};

// Function Killstreak.KSPlayerState.RespawnTimerActive
struct AKSPlayerState_RespawnTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.ResetElimination
struct AKSPlayerState_ResetElimination_Params
{
};

// Function Killstreak.KSPlayerState.RemoveMod
struct AKSPlayerState_RemoveMod_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              RemoveAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.OnTeamUpdated
struct AKSPlayerState_OnTeamUpdated_Params
{
};

// Function Killstreak.KSPlayerState.OnReverseFriendlyFireEnabled
struct AKSPlayerState_OnReverseFriendlyFireEnabled_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_TotalCashEarned
struct AKSPlayerState_OnRep_TotalCashEarned_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Specialties
struct AKSPlayerState_OnRep_Specialties_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_RespawnTimer
struct AKSPlayerState_OnRep_RespawnTimer_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_PlayerType
struct AKSPlayerState_OnRep_PlayerType_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Money
struct AKSPlayerState_OnRep_Money_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_MctsNetId
struct AKSPlayerState_OnRep_MctsNetId_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_LoadoutClass
struct AKSPlayerState_OnRep_LoadoutClass_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_JobItem
struct AKSPlayerState_OnRep_JobItem_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Gender
struct AKSPlayerState_OnRep_Gender_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Eliminated
struct AKSPlayerState_OnRep_Eliminated_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_DownedTimer
struct AKSPlayerState_OnRep_DownedTimer_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Downed
struct AKSPlayerState_OnRep_Downed_Params
{
};

// Function Killstreak.KSPlayerState.OnRep_Cash
struct AKSPlayerState_OnRep_Cash_Params
{
};

// Function Killstreak.KSPlayerState.OnDeathDrop
struct AKSPlayerState_OnDeathDrop_Params
{
	class UKSItem**                                    InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSItemDrop**                                InDrop;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.NotifyScoreChange
struct AKSPlayerState_NotifyScoreChange_Params
{
	struct FKSScoreChangeEvent*                        Event;                                                    // (Parm)
};

// Function Killstreak.KSPlayerState.NotifyCashChange
struct AKSPlayerState_NotifyCashChange_Params
{
	struct FKSScoreChangeEvent*                        Event;                                                    // (Parm)
};

// Function Killstreak.KSPlayerState.IsWaitingForRespawn
struct AKSPlayerState_IsWaitingForRespawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsUIRelevant
struct AKSPlayerState_IsUIRelevant_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsReverseFriendlyFireEnabled
struct AKSPlayerState_IsReverseFriendlyFireEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsRespawning
struct AKSPlayerState_IsRespawning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsPremiumBoosted
struct AKSPlayerState_IsPremiumBoosted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsPlayer
struct AKSPlayerState_IsPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsInPlay
struct AKSPlayerState_IsInPlay_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsInParty
struct AKSPlayerState_IsInParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsEliminated
struct AKSPlayerState_IsEliminated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.IsDowned
struct AKSPlayerState_IsDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.HasModAny
struct AKSPlayerState_HasModAny_Params
{
	TArray<class UKSPlayerMod*>*                       TestPlayerMods;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.HasMod
struct AKSPlayerState_HasMod_Params
{
	class UKSPlayerMod**                               TestPlayerMod;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.HasHideTarget
struct AKSPlayerState_HasHideTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GiveModInstance
struct AKSPlayerState_GiveModInstance_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             ModInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerModInstance*                        Instance;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Unique;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GiveMod
struct AKSPlayerState_GiveMod_Params
{
	class UKSPlayerMod**                               Mod;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             ModInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Unique;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetTimeUntilRespawnAllowed
struct AKSPlayerState_GetTimeUntilRespawnAllowed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetSpecialties
struct AKSPlayerState_GetSpecialties_Params
{
	TArray<class UKSSpecialty*>                        OutSpecialties;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetScore
struct AKSPlayerState_GetScore_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetRevives
struct AKSPlayerState_GetRevives_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetRemainingRespawnTime
struct AKSPlayerState_GetRemainingRespawnTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetPlayerInfo
struct AKSPlayerState_GetPlayerInfo_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetPlayerId
struct AKSPlayerState_GetPlayerId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetPartySize
struct AKSPlayerState_GetPartySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetModTierProgress
struct AKSPlayerState_GetModTierProgress_Params
{
	int                                                Current;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetModOptionsOfTier
struct AKSPlayerState_GetModOptionsOfTier_Params
{
	int*                                               Tier;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSPlayerMod*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerState.GetModInstances
struct AKSPlayerState_GetModInstances_Params
{
	TArray<class UKSPlayerModInstance*>                OutMods;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetMctsPlayerId
struct AKSPlayerState_GetMctsPlayerId_Params
{
	int64_t                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetLoadoutClass
struct AKSPlayerState_GetLoadoutClass_Params
{
	class UKSLoadoutClass*                             OutLoadoutClass;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetKills
struct AKSPlayerState_GetKills_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetJob
struct AKSPlayerState_GetJob_Params
{
	class UKSJobItem*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetItemsDroppedOnDeath
struct AKSPlayerState_GetItemsDroppedOnDeath_Params
{
	TArray<class AKSItemDrop*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerState.GetHacks
struct AKSPlayerState_GetHacks_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetEliminations
struct AKSPlayerState_GetEliminations_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetEliminatedState
struct AKSPlayerState_GetEliminatedState_Params
{
	EEliminationState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetDowns
struct AKSPlayerState_GetDowns_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetDehacks
struct AKSPlayerState_GetDehacks_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetDeaths
struct AKSPlayerState_GetDeaths_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetCurrentTimePlayed
struct AKSPlayerState_GetCurrentTimePlayed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetCurrentModTier
struct AKSPlayerState_GetCurrentModTier_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetCurrentCash
struct AKSPlayerState_GetCurrentCash_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetCharacterOwner
struct AKSPlayerState_GetCharacterOwner_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetBestCharacterOwner
struct AKSPlayerState_GetBestCharacterOwner_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetBackupCharacterOwner
struct AKSPlayerState_GetBackupCharacterOwner_Params
{
	class AKSCharacterBase*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetAssists
struct AKSPlayerState_GetAssists_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.GetActiveMods
struct AKSPlayerState_GetActiveMods_Params
{
	TArray<class UKSPlayerMod*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSPlayerState.GetActivatableMods
struct AKSPlayerState_GetActivatableMods_Params
{
	TArray<class UKSModInst_Activated*>                OutMods;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.EnterPlay
struct AKSPlayerState_EnterPlay_Params
{
	bool*                                              bSkipResetEliminatedOrDownedTest;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSpendTicket;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.EliminatePlayer
struct AKSPlayerState_EliminatePlayer_Params
{
};

// Function Killstreak.KSPlayerState.EarnCash
struct AKSPlayerState_EarnCash_Params
{
	int*                                               Earnings;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bShareWithTeam;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Reason;                                                   // (Parm)
};

// Function Killstreak.KSPlayerState.DownedTimerTick
struct AKSPlayerState_DownedTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.DownedTimerComplete
struct AKSPlayerState_DownedTimerComplete_Params
{
};

// Function Killstreak.KSPlayerState.DownedTimerActive
struct AKSPlayerState_DownedTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.ClientNotifyFriendlyFireDamageApplied
struct AKSPlayerState_ClientNotifyFriendlyFireDamageApplied_Params
{
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.ClientNotifyExceededReverseFriendlyFireThreshold
struct AKSPlayerState_ClientNotifyExceededReverseFriendlyFireThreshold_Params
{
};

// Function Killstreak.KSPlayerState.ChangeMoney
struct AKSPlayerState_ChangeMoney_Params
{
	int*                                               Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Reason;                                                   // (Parm)
	bool*                                              bBonus;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AnyActivatableModsActive
struct AKSPlayerState_AnyActivatableModsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddScore
struct AKSPlayerState_AddScore_Params
{
	int*                                               InScore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddRevive
struct AKSPlayerState_AddRevive_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddPerSecondCharge
struct AKSPlayerState_AddPerSecondCharge_Params
{
};

// Function Killstreak.KSPlayerState.AddKill
struct AKSPlayerState_AddKill_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddHack
struct AKSPlayerState_AddHack_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddElimination
struct AKSPlayerState_AddElimination_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddDown
struct AKSPlayerState_AddDown_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddDehack
struct AKSPlayerState_AddDehack_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddDeath
struct AKSPlayerState_AddDeath_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.AddAssist
struct AKSPlayerState_AddAssist_Params
{
	int*                                               Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerState.ActivatableModAtIndexActive
struct AKSPlayerState_ActivatableModAtIndexActive_Params
{
	int*                                               AbilityIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState_Heist.GetSoftCash
struct AKSPlayerState_Heist_GetSoftCash_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerState_Heist.GetHardCash
struct AKSPlayerState_Heist_GetHardCash_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerStatsManager.GetActivityInstanceByType
struct UKSPlayerStatsManager_GetActivityInstanceByType_Params
{
	EKSPlayerStatsActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSActivityInstance*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSPlayerStatsManager.FindActivityByType
struct UKSPlayerStatsManager_FindActivityByType_Params
{
	EKSPlayerStatsActivityType*                        Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerStatsActivity*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.UpdateSpinRotation
struct AKSProjectile_UpdateSpinRotation_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.TriggerExplosionFromHitResult
struct AKSProjectile_TriggerExplosionFromHitResult_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EProjectileExplosionType*                          ExplosionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.TriggerExplosion
struct AKSProjectile_TriggerExplosion_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSProjectile.SpawnSpang
struct AKSProjectile_SpawnSpang_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.SimulateExplosion
struct AKSProjectile_SimulateExplosion_Params
{
};

// Function Killstreak.KSProjectile.ShouldBounceOff
struct AKSProjectile_ShouldBounceOff_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.SetWeaponAsset
struct AKSProjectile_SetWeaponAsset_Params
{
	class UKSWeaponAsset**                             InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.SetHorizontalThrowSpeed
struct AKSProjectile_SetHorizontalThrowSpeed_Params
{
	float*                                             InSpeed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.SetDamageOverrideWeaponAsset
struct AKSProjectile_SetDamageOverrideWeaponAsset_Params
{
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.ServerProcessPredictedHits
struct AKSProjectile_ServerProcessPredictedHits_Params
{
	TArray<struct FLaggedProjectileHit>*               PredictedHits;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSProjectile.RecordPredictedHits
struct AKSProjectile_RecordPredictedHits_Params
{
	TArray<struct FHitResult>                          HitResults;                                               // (Parm, OutParm, ZeroConstructor)
	EProjectilePredictionType*                         PredictionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.RecordPredictedHit
struct AKSProjectile_RecordPredictedHit_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EProjectilePredictionType*                         PredictionType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.PlayFizzle
struct AKSProjectile_PlayFizzle_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSProjectile.PlayExplosion
struct AKSProjectile_PlayExplosion_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSProjectile.OnRep_WeaponAsset
struct AKSProjectile_OnRep_WeaponAsset_Params
{
};

// Function Killstreak.KSProjectile.OnRep_StoppingHit
struct AKSProjectile_OnRep_StoppingHit_Params
{
};

// Function Killstreak.KSProjectile.OnRep_ProjectileHit
struct AKSProjectile_OnRep_ProjectileHit_Params
{
};

// Function Killstreak.KSProjectile.OnRep_CurrentHealth
struct AKSProjectile_OnRep_CurrentHealth_Params
{
};

// Function Killstreak.KSProjectile.OnProjectileStopped
struct AKSProjectile_OnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.OnProjectileBounced
struct AKSProjectile_OnProjectileBounced_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.OnKilled
struct AKSProjectile_OnKilled_Params
{
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile.NativeOnProjectileStopped
struct AKSProjectile_NativeOnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.NativeOnProjectileBounced
struct AKSProjectile_NativeOnProjectileBounced_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.ModifyDamageDealt
struct AKSProjectile_ModifyDamageDealt_Params
{
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.IsActive
struct AKSProjectile_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetWeaponAsset
struct AKSProjectile_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetSpawnRotation
struct AKSProjectile_GetSpawnRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetSpawnLocation
struct AKSProjectile_GetSpawnLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetSpawningWeapon
struct AKSProjectile_GetSpawningWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetProjectileUpdatedComponent
struct AKSProjectile_GetProjectileUpdatedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetOutlineableMeshes
struct AKSProjectile_GetOutlineableMeshes_Params
{
	TArray<class UPrimitiveComponent*>                 OutMeshes;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSProjectile.GetMovementComponent
struct AKSProjectile_GetMovementComponent_Params
{
	class UProjectileMovementComponent*                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetHorizontalThrowSpeed
struct AKSProjectile_GetHorizontalThrowSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetDamageWeaponAsset
struct AKSProjectile_GetDamageWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetDamageInstigator
struct AKSProjectile_GetDamageInstigator_Params
{
	class AController*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetDamageFalloffRangeScaler
struct AKSProjectile_GetDamageFalloffRangeScaler_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetComponentToRotate
struct AKSProjectile_GetComponentToRotate_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile.GetClusterComponent
struct AKSProjectile_GetClusterComponent_Params
{
	class UKSProjectileClusterComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile.DoRadialDamageDefault
struct AKSProjectile_DoRadialDamageDefault_Params
{
};

// Function Killstreak.KSProjectile.Deactivate
struct AKSProjectile_Deactivate_Params
{
};

// Function Killstreak.KSProjectile.CreateClusterSegmentsFromStoppingHit
struct AKSProjectile_CreateClusterSegmentsFromStoppingHit_Params
{
};

// Function Killstreak.KSProjectile.ComponentTakeDamage
struct AKSProjectile_ComponentTakeDamage_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float*                                             DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile.BroadcastExplosion
struct AKSProjectile_BroadcastExplosion_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSProjectile.AffectsActor
struct AKSProjectile_AffectsActor_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.UnregisterTouchEvent
struct AKSProjectile_Grenade_UnregisterTouchEvent_Params
{
	class AKSCharacter**                               KSCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.ShouldExplodeOnBounce
struct AKSProjectile_Grenade_ShouldExplodeOnBounce_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.SetFuseTime
struct AKSProjectile_Grenade_SetFuseTime_Params
{
	float*                                             InFuseTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.RegisterTouchEvent
struct AKSProjectile_Grenade_RegisterTouchEvent_Params
{
	class AKSCharacter**                               KSCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.OnRep_FuseTimeRemaining
struct AKSProjectile_Grenade_OnRep_FuseTimeRemaining_Params
{
};

// Function Killstreak.KSProjectile_Grenade.OnOverlapEnd
struct AKSProjectile_Grenade_OnOverlapEnd_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.OnOverlapBegin
struct AKSProjectile_Grenade_OnOverlapBegin_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.OnLocalViewTargetChanged
struct AKSProjectile_Grenade_OnLocalViewTargetChanged_Params
{
	class AKSPlayerController**                        InController;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OldViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     NewViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.IsInProximityOfLocalCharacter
struct AKSProjectile_Grenade_IsInProximityOfLocalCharacter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Grenade.FuseTimeExpired
struct AKSProjectile_Grenade_FuseTimeExpired_Params
{
};

// Function Killstreak.KSProjectile_Grenade.CanSeeProximityWarning
struct AKSProjectile_Grenade_CanSeeProximityWarning_Params
{
	class AController**                                QueriedPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSpreadProjectile.OnProjectileStopped
struct AKSSpreadProjectile_OnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSpreadProjectile.OnProjectileBounced
struct AKSSpreadProjectile_OnProjectileBounced_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSpreadProjectile.NativeOnProjectileStopped
struct AKSSpreadProjectile_NativeOnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSSpreadProjectile.NativeOnProjectileBounced
struct AKSSpreadProjectile_NativeOnProjectileBounced_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector*                                    ImpactVelocity;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSGrenadeSpreadRule.GetSpread
struct UKSGrenadeSpreadRule_GetSpread_Params
{
	class UWorld**                                     World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 Transform;                                                // (Parm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NormalZMin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSProjectile_GrenadeSpread.ProcessNextSpreadTransform
struct AKSProjectile_GrenadeSpread_ProcessNextSpreadTransform_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTransformRemoved
struct AKSProjectile_GrenadeSpread_OnSpreadTransformRemoved_Params
{
	struct FTransform*                                 RemovedTransform;                                         // (Parm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTransformAdded
struct AKSProjectile_GrenadeSpread_OnSpreadTransformAdded_Params
{
	struct FTransform*                                 AddedTransform;                                           // (Parm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadTick
struct AKSProjectile_GrenadeSpread_OnSpreadTick_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnSpreadProjectileStopped
struct AKSProjectile_GrenadeSpread_OnSpreadProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnLingerEnd
struct AKSProjectile_GrenadeSpread_OnLingerEnd_Params
{
	class AActor**                                     LingerActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnDamageTick
struct AKSProjectile_GrenadeSpread_OnDamageTick_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnBeginLingering
struct AKSProjectile_GrenadeSpread_OnBeginLingering_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnAllSpreadTransformsRemoved
struct AKSProjectile_GrenadeSpread_OnAllSpreadTransformsRemoved_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnAffectedDestroyed
struct AKSProjectile_GrenadeSpread_OnAffectedDestroyed_Params
{
	class AActor**                                     AffectedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnActorUnaffected
struct AKSProjectile_GrenadeSpread_OnActorUnaffected_Params
{
	class AActor**                                     UnaffectedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnActorDamaged
struct AKSProjectile_GrenadeSpread_OnActorDamaged_Params
{
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.OnActorAffected
struct AKSProjectile_GrenadeSpread_OnActorAffected_Params
{
	class AActor**                                     AffectedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.ConfigureSpreadTransformParticleSystem
struct AKSProjectile_GrenadeSpread_ConfigureSpreadTransformParticleSystem_Params
{
	class UParticleSystemComponent**                   ParticleSystem;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile_GrenadeSpread.CleanupParticleSystemComponents
struct AKSProjectile_GrenadeSpread_CleanupParticleSystemComponents_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.CleanupMeshComponents
struct AKSProjectile_GrenadeSpread_CleanupMeshComponents_Params
{
};

// Function Killstreak.KSProjectile_GrenadeSpread.BeginLingering
struct AKSProjectile_GrenadeSpread_BeginLingering_Params
{
};

// Function Killstreak.KSProjectile_Melee.PredictDamage
struct AKSProjectile_Melee_PredictDamage_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Melee.LookAheadHit
struct AKSProjectile_Melee_LookAheadHit_Params
{
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (Parm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_Melee.FlushHitIgnoreActors
struct AKSProjectile_Melee_FlushHitIgnoreActors_Params
{
};

// Function Killstreak.KSProjectile_Melee.AllowFutureHitOnActor
struct AKSProjectile_Melee_AllowFutureHitOnActor_Params
{
	class AActor**                                     PreviouslyHitActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_ProximityGrenade.ProximityActorUpdated
struct AKSProjectile_ProximityGrenade_ProximityActorUpdated_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKSActorProximityInfo*                      ProximityInfo;                                            // (Parm)
};

// Function Killstreak.KSProjectile_ProximityGrenade.GetProximityTraceRelativeLocation
struct AKSProjectile_ProximityGrenade_GetProximityTraceRelativeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_ProximityGrenade.GetProximityComponent
struct AKSProjectile_ProximityGrenade_GetProximityComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProjectile_RemoteTrigger.ReportOwningClientLoaded
struct AKSProjectile_RemoteTrigger_ReportOwningClientLoaded_Params
{
};

// Function Killstreak.KSProjectile_RemoteTrigger.OnRealActorStopped
struct AKSProjectile_RemoteTrigger_OnRealActorStopped_Params
{
	class AKSProjectile_RemoteTrigger**                RealProjectile;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectile_RemoteTrigger.IsDetonatable
struct AKSProjectile_RemoteTrigger_IsDetonatable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectile_ReviveDart.OnReviveEnd
struct AKSProjectile_ReviveDart_OnReviveEnd_Params
{
	class AKSCharacter**                               RevivingCharacter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              SuccessfulRevive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectileClusterComponent.OnSegmentKilled
struct UKSProjectileClusterComponent_OnSegmentKilled_Params
{
	class AKSProjectile**                              Segment;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProjectileClusterComponent.GetSpawnedSegments
struct UKSProjectileClusterComponent_GetSpawnedSegments_Params
{
	TArray<class AKSProjectile*>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSProjectileClusterComponent.GetClusterTransform
struct UKSProjectileClusterComponent_GetClusterTransform_Params
{
	struct FHitResult*                                 Hit;                                                      // (Parm, IsPlainOldData)
	struct FVector*                                    PassThroughVector;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProjectileClusterComponent.CreateClusterSegments
struct UKSProjectileClusterComponent_CreateClusterSegments_Params
{
	struct FHitResult*                                 Hit;                                                      // (Parm, IsPlainOldData)
	class AKSWeapon**                                  WeaponUsed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.UnregisterOverlapShape
struct UKSProximityComponent_UnregisterOverlapShape_Params
{
	class UPrimitiveComponent**                        OverlapShape;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.ShouldTrackActor
struct UKSProximityComponent_ShouldTrackActor_Params
{
	class AActor**                                     InActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.SetProximityTraceOffset
struct UKSProximityComponent_SetProximityTraceOffset_Params
{
	struct FVector*                                    Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.SetProximityCheckingEnabled
struct UKSProximityComponent_SetProximityCheckingEnabled_Params
{
	bool*                                              Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.RegisterOverlapShape
struct UKSProximityComponent_RegisterOverlapShape_Params
{
	class UPrimitiveComponent**                        OverlapShape;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.ProximityOverlapStart
struct UKSProximityComponent_ProximityOverlapStart_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSProximityComponent.ProximityOverlapEnd
struct UKSProximityComponent_ProximityOverlapEnd_Params
{
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSReverseTracker.StoreDamageTakenEvent
struct UKSReverseTracker_StoreDamageTakenEvent_Params
{
	struct FAdvancedCombatEvent*                       DamageEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSReverseTracker.HandleTrackerAccolade
struct UKSReverseTracker_HandleTrackerAccolade_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSReverseTracker.CheckVictimDamageInstigator
struct UKSReverseTracker_CheckVictimDamageInstigator_Params
{
	class AKSPlayerState**                             Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             Victim;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerDamageInfo                           OutPlayerInfo;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRewardsCalculator.GetStatsOrdering
struct UKSRewardsCalculator_GetStatsOrdering_Params
{
	TArray<EPlayerStatType>                            StatsOrdering;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSRewardsCalculator.GetRewardsFromStat
struct UKSRewardsCalculator_GetRewardsFromStat_Params
{
	struct FPlayerMatchStatInfo*                       PlayerStatInfo;                                           // (Parm)
	float                                              OutExpRewardValue;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRewardsCalculator.CalcPlayerRewards
struct UKSRewardsCalculator_CalcPlayerRewards_Params
{
	int*                                               PlayerTeamNum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerMatchStats**                        playerStats;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerRewardsSummary                       Rewards;                                                  // (Parm, OutParm)
	class AKSPlayerController**                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSpectatorPawn.GamepadLookUp
struct AKSSpectatorPawn_GamepadLookUp_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSpectatorPawn.GamepadLookRight
struct AKSSpectatorPawn_GamepadLookRight_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRocket.OnRep_FlightDurationTimer
struct AKSRocket_OnRep_FlightDurationTimer_Params
{
};

// Function Killstreak.KSRocket.OnIgnitionKickoff
struct AKSRocket_OnIgnitionKickoff_Params
{
};

// Function Killstreak.KSRocket.NativeOnProjectileStopped
struct AKSRocket_NativeOnProjectileStopped_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSRocket.NativeOnIgnitionKickoff
struct AKSRocket_NativeOnIgnitionKickoff_Params
{
};

// Function Killstreak.KSRocket.NativeDetonate
struct AKSRocket_NativeDetonate_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSRocket.GetWeaponAsset
struct AKSRocket_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRocket.GetFlightDuration
struct AKSRocket_GetFlightDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRocket.GamepadLookUp
struct AKSRocket_GamepadLookUp_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRocket.GamepadLookRight
struct AKSRocket_GamepadLookRight_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRocket.FlightDurationTimerTick
struct AKSRocket_FlightDurationTimerTick_Params
{
	float*                                             Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRocket.FlightDurationTimerComplete
struct AKSRocket_FlightDurationTimerComplete_Params
{
};

// Function Killstreak.KSRocket.FlightDurationTimerActive
struct AKSRocket_FlightDurationTimerActive_Params
{
	bool*                                              bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRocket.EnableCameraControl
struct AKSRocket_EnableCameraControl_Params
{
};

// Function Killstreak.KSRocket.Detonate
struct AKSRocket_Detonate_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSRocket.BroadcastDetonate
struct AKSRocket_BroadcastDetonate_Params
{
	struct FProjectileExplosionInfo*                   ExplosionInfo;                                            // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSRocketMovementComponent.StopSimulating
struct UKSRocketMovementComponent_StopSimulating_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Killstreak.KSRocketMovementComponent.OnRocketStopDelegate__DelegateSignature
struct UKSRocketMovementComponent_OnRocketStopDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Killstreak.KSRocketMovementComponent.OnIgnitionKickoffDelegate__DelegateSignature
struct UKSRocketMovementComponent_OnIgnitionKickoffDelegate__DelegateSignature_Params
{
};

// Function Killstreak.KSRoundBasedObject.ReceiveGameSetup
struct AKSRoundBasedObject_ReceiveGameSetup_Params
{
};

// Function Killstreak.KSRoundBasedObject.OnSkyDiveStarted
struct AKSRoundBasedObject_OnSkyDiveStarted_Params
{
	class AKSCharacter**                               SkyDiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.OnSkyDiveSkipped
struct AKSRoundBasedObject_OnSkyDiveSkipped_Params
{
	class AKSCharacter**                               SkyDiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.OnSkyDiveEnded
struct AKSRoundBasedObject_OnSkyDiveEnded_Params
{
	class AKSCharacter**                               SkyDiver;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.OnRoundStarted
struct AKSRoundBasedObject_OnRoundStarted_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSRoundBasedObject.OnRoundEnded
struct AKSRoundBasedObject_OnRoundEnded_Params
{
	class AKSGameState**                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSRoundBasedObject.OnGameSetup
struct AKSRoundBasedObject_OnGameSetup_Params
{
};

// Function Killstreak.KSRoundBasedObject.IsSkyDivingActive
struct AKSRoundBasedObject_IsSkyDivingActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.CheckPlayerForMatchingTeam
struct AKSRoundBasedObject_CheckPlayerForMatchingTeam_Params
{
	class APlayerController**                          PC;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.CheckLocalPlayerForMatchingTeam
struct AKSRoundBasedObject_CheckLocalPlayerForMatchingTeam_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRoundBasedObject.CheckCharacterForMatchingTeam
struct AKSRoundBasedObject_CheckCharacterForMatchingTeam_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRoyaleSafeZone.TryToDamage
struct AKSRoyaleSafeZone_TryToDamage_Params
{
	class AActor**                                     TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AttemptedDamage;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSRoyaleSafeZone.StartShrink
struct AKSRoyaleSafeZone_StartShrink_Params
{
};

// Function Killstreak.KSRoyaleSafeZone.SetNewZoneParams
struct AKSRoyaleSafeZone_SetNewZoneParams_Params
{
	float*                                             NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TimeToChange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     MustContainActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             MustContainSafeRadius;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRoyaleSafeZone.OnZoneActivated
struct AKSRoyaleSafeZone_OnZoneActivated_Params
{
};

// Function Killstreak.KSRoyaleSafeZone.OnRep_ZoneActive
struct AKSRoyaleSafeZone_OnRep_ZoneActive_Params
{
};

// Function Killstreak.KSRoyaleSafeZone.OnRep_NewParams
struct AKSRoyaleSafeZone_OnRep_NewParams_Params
{
};

// Function Killstreak.KSRoyaleSafeZone.OnCircleUpdate
struct AKSRoyaleSafeZone_OnCircleUpdate_Params
{
	float*                                             NewRadius;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    NewLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSRoyaleSafeZone.IsZoneActive
struct AKSRoyaleSafeZone_IsZoneActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSafeZone.RevealOverlappedCharacter
struct AKSSafeZone_RevealOverlappedCharacter_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SpawnTracerEmitterWithRotation
struct UKSSceneComponentPoolStatics_SpawnTracerEmitterWithRotation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DeactivatesOnDestinationReached;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerParticleSystemComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SpawnTracerEmitter
struct UKSSceneComponentPoolStatics_SpawnTracerEmitter_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem**                            EmitterTemplate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              DeactivatesOnDestinationReached;                          // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerParticleSystemComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SpawnMeshTracerWithRotation
struct UKSSceneComponentPoolStatics_SpawnMeshTracerWithRotation_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  FriendlyMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance**                          EnemyMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerStaticMeshComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SpawnMeshTracer
struct UKSSceneComponentPoolStatics_SpawnMeshTracer_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterial**                                  FriendlyMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance**                          EnemyMaterial;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TravelSpeed;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UTracerStaticMeshComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SpawnAkComponentAtLocation
struct UKSSceneComponentPoolStatics_SpawnAkComponentAtLocation_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAuxBus**                                  EarlyReflectionsBus;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	struct FString*                                    EarlyReflectionsBusName;                                  // (Parm, ZeroConstructor)
	EOcclusionType*                                    OcclusionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseDirection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SetSwitchOnNextAkComponentInPool
struct UKSSceneComponentPoolStatics_SetSwitchOnNextAkComponentInPool_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSceneComponentPoolStatics.SetRTPCValueOnNextAkComponentInPool
struct UKSSceneComponentPoolStatics_SetRTPCValueOnNextAkComponentInPool_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSShield.SetShieldEnabled
struct AKSShield_SetShieldEnabled_Params
{
	bool*                                              ShieldEnabled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSShield.OnRep_ShieldEnabled
struct AKSShield_OnRep_ShieldEnabled_Params
{
};

// Function Killstreak.KSShield.OnRep_Health
struct AKSShield_OnRep_Health_Params
{
};

// Function Killstreak.KSShopRuleComponent.GetShopForPlayer
struct UKSShopRuleComponent_GetShopForPlayer_Params
{
	class AKSPlayerState**                             InPlayerState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerShop*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSkinBundle.IsStarterSkin
struct UKSSkinBundle_IsStarterSkin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSkinBundle.GetSkinImage
struct UKSSkinBundle_GetSkinImage_Params
{
};

// Function Killstreak.KSSpecialty.GetDynamicPoseImage
struct UKSSpecialty_GetDynamicPoseImage_Params
{
	bool*                                              bAllowSyncLoad;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSprintCameraShake.StopShakeOnStopSprint
struct UKSSprintCameraShake_StopShakeOnStopSprint_Params
{
	bool*                                              NewSprint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSPlayerMatchStats.GetStat
struct UKSPlayerMatchStats_GetStat_Params
{
	EPlayerStatType*                                   StatType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerMatchStatInfo                        OutStat;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSStoreItemHelper.HasPortalOffers
struct UKSStoreItemHelper_HasPortalOffers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSSwimmingAnimInst.SwimNotifyTransitionStateLock
struct UKSSwimmingAnimInst_SwimNotifyTransitionStateLock_Params
{
	bool*                                              bShouldLock;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSSwimmingAnimInst.SwimNotifyTransitionEnd
struct UKSSwimmingAnimInst_SwimNotifyTransitionEnd_Params
{
};

// Function Killstreak.KSTabletAnimInstance.OpenTablet
struct UKSTabletAnimInstance_OpenTablet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTabletAnimInstance.FullyOpened
struct UKSTabletAnimInstance_FullyOpened_Params
{
};

// Function Killstreak.KSTabletAnimInstance.FullyClosed
struct UKSTabletAnimInstance_FullyClosed_Params
{
};

// Function Killstreak.KSTabletAnimInstance.CloseTablet
struct UKSTabletAnimInstance_CloseTablet_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTabletAnimInstance.CheckFullyOpened
struct UKSTabletAnimInstance_CheckFullyOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTabletAnimInstance.CheckFullyClosed
struct UKSTabletAnimInstance_CheckFullyClosed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTabletMeshComponent.OpenTablet
struct UKSTabletMeshComponent_OpenTablet_Params
{
};

// Function Killstreak.KSTabletMeshComponent.OnOpenComplete
struct UKSTabletMeshComponent_OnOpenComplete_Params
{
};

// Function Killstreak.KSTabletMeshComponent.OnCloseComplete
struct UKSTabletMeshComponent_OnCloseComplete_Params
{
};

// Function Killstreak.KSTabletMeshComponent.CloseTablet
struct UKSTabletMeshComponent_CloseTablet_Params
{
};

// Function Killstreak.KSTeamKillTracker.StoreCombatInfo
struct UKSTeamKillTracker_StoreCombatInfo_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
};

// Function Killstreak.KSTeamKillTracker.HasEliminateVictim
struct UKSTeamKillTracker_HasEliminateVictim_Params
{
	struct FPlayerTeamTracker*                         PlayerTeamTracker;                                        // (Parm)
	int*                                               VictimPlayerId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamKillTracker.ContainsPlayer
struct UKSTeamKillTracker_ContainsPlayer_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayerTeamTracker                          PlayerTeamTracker;                                        // (Parm, OutParm)
	int                                                TrackerIndex;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamKillTracker.CheckRequirements
struct UKSTeamKillTracker_CheckRequirements_Params
{
	struct FCombatEventInfo*                           ElimEvent;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.ShouldKeepTeamAlive
struct AKSTeamState_ShouldKeepTeamAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.ResetTeamElimination
struct AKSTeamState_ResetTeamElimination_Params
{
};

// Function Killstreak.KSTeamState.OnTeamUpdated
struct AKSTeamState_OnTeamUpdated_Params
{
};

// Function Killstreak.KSTeamState.OnTeamMemberRemoved
struct AKSTeamState_OnTeamMemberRemoved_Params
{
	class AKSPlayerState**                             LostMember;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTeamState.OnTeamMemberEliminated
struct AKSTeamState_OnTeamMemberEliminated_Params
{
	class AKSPlayerState**                             Member;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTeamState.OnTeamMemberDowned
struct AKSTeamState_OnTeamMemberDowned_Params
{
	class AKSPlayerState**                             Member;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTeamState.OnTeamMemberAdded
struct AKSTeamState_OnTeamMemberAdded_Params
{
	class AKSPlayerState**                             NewMember;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTeamState.OnRep_TeamEliminatedOrDowned
struct AKSTeamState_OnRep_TeamEliminatedOrDowned_Params
{
};

// Function Killstreak.KSTeamState.OnRep_TeamEliminated
struct AKSTeamState_OnRep_TeamEliminated_Params
{
};

// Function Killstreak.KSTeamState.OnRep_Respawns
struct AKSTeamState_OnRep_Respawns_Params
{
};

// Function Killstreak.KSTeamState.OnRep_JobSelectionComponent
struct AKSTeamState_OnRep_JobSelectionComponent_Params
{
};

// Function Killstreak.KSTeamState.NewPingRequest
struct AKSTeamState_NewPingRequest_Params
{
	struct FPingInfo*                                  PingInfo;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSTeamState.NewPingRemoveRequest
struct AKSTeamState_NewPingRemoveRequest_Params
{
	int*                                               PingId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             PingingPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTeamState.IsEliminated
struct AKSTeamState_IsEliminated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.IsDefending
struct AKSTeamState_IsDefending_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.IsAttacking
struct AKSTeamState_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetTeamType
struct AKSTeamState_GetTeamType_Params
{
	EExtractionTeamType                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetRespawnConfig
struct AKSTeamState_GetRespawnConfig_Params
{
	struct FKSRespawnConfig                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetPlayersRemaining
struct AKSTeamState_GetPlayersRemaining_Params
{
	bool*                                              DownAsDead;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetNumberOfPlayers
struct AKSTeamState_GetNumberOfPlayers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetLivesRemaining
struct AKSTeamState_GetLivesRemaining_Params
{
	bool*                                              CountDowned;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSTeamState.GetAllMembers
struct AKSTeamState_GetAllMembers_Params
{
	TArray<class AKSPlayerState*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSTeamState.EliminateTeam
struct AKSTeamState_EliminateTeam_Params
{
};

// Function Killstreak.KSTeamState.AllPlayersEliminatedOrDowned
struct AKSTeamState_AllPlayersEliminatedOrDowned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSThreatComponent.DebugThreatLevels
struct UKSThreatComponent_DebugThreatLevels_Params
{
	bool*                                              Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSTimerComponent.OnRep_Active
struct UKSTimerComponent_OnRep_Active_Params
{
};

// Function Killstreak.KSTimerComponent.BroadcastTimerComplete
struct UKSTimerComponent_BroadcastTimerComplete_Params
{
};

// Function Killstreak.KSVehicle.VehicleHit
struct AKSVehicle_VehicleHit_Params
{
	class UPrimitiveComponent**                        HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSVehicle.VehicleFeatureReleased
struct AKSVehicle_VehicleFeatureReleased_Params
{
};

// Function Killstreak.KSVehicle.VehicleFeaturePressed
struct AKSVehicle_VehicleFeaturePressed_Params
{
};

// Function Killstreak.KSVehicle.VehicleFeature
struct AKSVehicle_VehicleFeature_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.UseReleased
struct AKSVehicle_UseReleased_Params
{
};

// Function Killstreak.KSVehicle.UsePressed
struct AKSVehicle_UsePressed_Params
{
};

// Function Killstreak.KSVehicle.TurnCameraY
struct AKSVehicle_TurnCameraY_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.TurnCameraX
struct AKSVehicle_TurnCameraX_Params
{
	float*                                             Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.SwapReleased
struct AKSVehicle_SwapReleased_Params
{
};

// Function Killstreak.KSVehicle.SwapPressed
struct AKSVehicle_SwapPressed_Params
{
};

// Function Killstreak.KSVehicle.StopParachute
struct AKSVehicle_StopParachute_Params
{
};

// Function Killstreak.KSVehicle.Steer
struct AKSVehicle_Steer_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.StartParachute
struct AKSVehicle_StartParachute_Params
{
};

// Function Killstreak.KSVehicle.ServerVehicleFeature
struct AKSVehicle_ServerVehicleFeature_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ServerUpdateRotation
struct AKSVehicle_ServerUpdateRotation_Params
{
	struct FReplicatedViewInfo*                        NewViewInfo;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ServerHorn
struct AKSVehicle_ServerHorn_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ServerGetOut
struct AKSVehicle_ServerGetOut_Params
{
	class AKSCharacter**                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ServerGetInNextEmptySeat
struct AKSVehicle_ServerGetInNextEmptySeat_Params
{
	class AKSCharacter**                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ServerAirSpeed
struct AKSVehicle_ServerAirSpeed_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.RiderDestroyed
struct AKSVehicle_RiderDestroyed_Params
{
	class AActor**                                     DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.ResetVehicle
struct AKSVehicle_ResetVehicle_Params
{
	struct FRoundInitState*                            RoundInitState;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSVehicle.ResetInput
struct AKSVehicle_ResetInput_Params
{
};

// Function Killstreak.KSVehicle.ResetCameraRotations
struct AKSVehicle_ResetCameraRotations_Params
{
};

// Function Killstreak.KSVehicle.PlayHealthStageChange
struct AKSVehicle_PlayHealthStageChange_Params
{
	struct FKSVehicleDestructionStage*                 Stage;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSVehicle.OnRep_Riders
struct AKSVehicle_OnRep_Riders_Params
{
};

// Function Killstreak.KSVehicle.OnRep_Driver
struct AKSVehicle_OnRep_Driver_Params
{
};

// Function Killstreak.KSVehicle.OnRep_Destroyed
struct AKSVehicle_OnRep_Destroyed_Params
{
};

// Function Killstreak.KSVehicle.OnRep_CurrentHealthStage
struct AKSVehicle_OnRep_CurrentHealthStage_Params
{
};

// Function Killstreak.KSVehicle.OnRep_CurrentHealth
struct AKSVehicle_OnRep_CurrentHealth_Params
{
};

// Function Killstreak.KSVehicle.MoveForward
struct AKSVehicle_MoveForward_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.HornReleased
struct AKSVehicle_HornReleased_Params
{
};

// Function Killstreak.KSVehicle.HornPressed
struct AKSVehicle_HornPressed_Params
{
};

// Function Killstreak.KSVehicle.Horn
struct AKSVehicle_Horn_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.HideParachute
struct AKSVehicle_HideParachute_Params
{
};

// Function Killstreak.KSVehicle.GetInHighestPriorityEmptySeat
struct AKSVehicle_GetInHighestPriorityEmptySeat_Params
{
	class AKSCharacter**                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSVehicle.GetDriver
struct AKSVehicle_GetDriver_Params
{
	class AKSCharacter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSVehicle.Explode
struct AKSVehicle_Explode_Params
{
};

// Function Killstreak.KSVehicle.ExitPressed
struct AKSVehicle_ExitPressed_Params
{
};

// Function Killstreak.KSVehicle.Deteriorate
struct AKSVehicle_Deteriorate_Params
{
};

// Function Killstreak.KSVehicle.BroadcastVehicleFeature
struct AKSVehicle_BroadcastVehicleFeature_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.BroadcastHorn
struct AKSVehicle_BroadcastHorn_Params
{
	bool*                                              Pressed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.Brake
struct AKSVehicle_Brake_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle.AirSpeed
struct AKSVehicle_AirSpeed_Params
{
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle_Remote.SetOwningCharacter
struct AKSVehicle_Remote_SetOwningCharacter_Params
{
	class AKSCharacter**                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle_Remote.OnRep_OwningCharacter
struct AKSVehicle_Remote_OnRep_OwningCharacter_Params
{
};

// Function Killstreak.KSVehicle_Remote.Jump
struct AKSVehicle_Remote_Jump_Params
{
};

// Function Killstreak.KSVehicle_Remote.GetRemainingBattery
struct AKSVehicle_Remote_GetRemainingBattery_Params
{
	float                                              RemainingTime;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVehicle_Remote.ExecuteReveal
struct AKSVehicle_Remote_ExecuteReveal_Params
{
};

// Function Killstreak.KSVehicleMovementComponent4W.StopParachute
struct UKSVehicleMovementComponent4W_StopParachute_Params
{
};

// Function Killstreak.KSVehicleMovementComponent4W.StartParachute
struct UKSVehicleMovementComponent4W_StartParachute_Params
{
};

// Function Killstreak.KSVehicleMovementComponent4W.OnRep_ParachuteDeployed
struct UKSVehicleMovementComponent4W_OnRep_ParachuteDeployed_Params
{
};

// Function Killstreak.KSVehicleMovementComponent4W.OnRep_ManualDetachmentAllowed
struct UKSVehicleMovementComponent4W_OnRep_ManualDetachmentAllowed_Params
{
};

// Function Killstreak.KSVehicleMovementComponent4W.AttemptManualDetachment
struct UKSVehicleMovementComponent4W_AttemptManualDetachment_Params
{
};

// Function Killstreak.KSVehicleSeatComponent.GetSeatSpringArm
struct UKSVehicleSeatComponent_GetSeatSpringArm_Params
{
	class USpringArmComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSViewModel.BeginRotationReset
struct AKSViewModel_BeginRotationReset_Params
{
};

// Function Killstreak.KSViewModelInterface.GetViewModelName
struct UKSViewModelInterface_GetViewModelName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.TeamStateChanged
struct UKSVOComponent_TeamStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.ServerPostVO
struct UKSVOComponent_ServerPostVO_Params
{
	struct FKSVoicelineEvent*                          VoicelineEvent;                                           // (Parm)
};

// Function Killstreak.KSVOComponent.PostVOToServer
struct UKSVOComponent_PostVOToServer_Params
{
	struct FKSVoicelineEvent*                          VoicelineEvent;                                           // (Parm)
};

// Function Killstreak.KSVOComponent.PostVO
struct UKSVOComponent_PostVO_Params
{
	struct FKSVoicelineEvent*                          VoicelineEvent;                                           // (Parm)
};

// Function Killstreak.KSVOComponent.PlayVO
struct UKSVOComponent_PlayVO_Params
{
	struct FKSVoicelineEvent*                          VoicelineEvent;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSVOComponent.PlayerStateChanged
struct UKSVOComponent_PlayerStateChanged_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.OwnerPossessedBy
struct UKSVOComponent_OwnerPossessedBy_Params
{
	class AController**                                Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.OnReadyToPlay
struct UKSVOComponent_OnReadyToPlay_Params
{
};

// Function Killstreak.KSVOComponent.BindToTeamStateEvents
struct UKSVOComponent_BindToTeamStateEvents_Params
{
	class AKSTeamState**                               TeamState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToPlayerStateEvents
struct UKSVOComponent_BindToPlayerStateEvents_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToPlayerControllerEvents
struct UKSVOComponent_BindToPlayerControllerEvents_Params
{
	class AKSPlayerController**                        PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToPingManagerEvents
struct UKSVOComponent_BindToPingManagerEvents_Params
{
	class UKSPingManager**                             PingManager;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToGameStateEvents
struct UKSVOComponent_BindToGameStateEvents_Params
{
	class AKSGameState**                               GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToEvents
struct UKSVOComponent_BindToEvents_Params
{
};

// Function Killstreak.KSVOComponent.BindToCharacterEvents
struct UKSVOComponent_BindToCharacterEvents_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSVOComponent.BindToActivatableModEvents
struct UKSVOComponent_BindToActivatableModEvents_Params
{
	class UKSModInst_Activated**                       ActivatableMod;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWaterFXVolume.OnWaterFXTriggered
struct AKSWaterFXVolume_OnWaterFXTriggered_Params
{
	class AActor**                                     TriggeringActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SurfaceRelevantLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFullySubmerged;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWaterFXVolume.OnWaterExited
struct AKSWaterFXVolume_OnWaterExited_Params
{
	class AActor**                                     TriggeringActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SurfaceRelevantLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFullySubmerged;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWaterFXVolume.OnWaterEntered
struct AKSWaterFXVolume_OnWaterEntered_Params
{
	class AActor**                                     TriggeringActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    SurfaceRelevantLocation;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsFullySubmerged;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_ParentEquipmentId
struct UKSWeaponAttachmentCosmeticInst_OnRep_ParentEquipmentId_Params
{
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_AttachPoint
struct UKSWeaponAttachmentCosmeticInst_OnRep_AttachPoint_Params
{
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.OnRep_AttachmentAsset
struct UKSWeaponAttachmentCosmeticInst_OnRep_AttachmentAsset_Params
{
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.IsInitialized
struct UKSWeaponAttachmentCosmeticInst_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.GetParentComponent
struct UKSWeaponAttachmentCosmeticInst_GetParentComponent_Params
{
	class UKSWeaponComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.GetLoadedMeshAnimAnimOverrideData
struct UKSWeaponAttachmentCosmeticInst_GetLoadedMeshAnimAnimOverrideData_Params
{
	struct FLoadedWeaponAttachmentAnimationData        OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAttachPoint
struct UKSWeaponAttachmentCosmeticInst_GetAttachPoint_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAttachmentAsset
struct UKSWeaponAttachmentCosmeticInst_GetAttachmentAsset_Params
{
	class UKSWeaponAttachment*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentCosmeticInst.GetAccumulatedMeshAndAnimOverrideData
struct UKSWeaponAttachmentCosmeticInst_GetAccumulatedMeshAndAnimOverrideData_Params
{
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponAttachmentAnimationData              OutData;                                                  // (Parm, OutParm)
};

// Function Killstreak.KSWAttachmentCosmetic_VarScope.OnRep_ScopeZoomIndex
struct UKSWAttachmentCosmetic_VarScope_OnRep_ScopeZoomIndex_Params
{
};

// Function Killstreak.KSWayPoint.GetNextWayPoints
struct AKSWayPoint_GetNextWayPoints_Params
{
	class AKSWayPointSet**                             WayPointSet;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AKSWayPoint*>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWayPointSet.UpdateWayPointVisuals
struct AKSWayPointSet_UpdateWayPointVisuals_Params
{
};

// Function Killstreak.KSWayPointSet.LinkWayPoints
struct AKSWayPointSet_LinkWayPoints_Params
{
};

// Function Killstreak.KSWeapon_Aimed.StaticDefaultGetAim
struct AKSWeapon_Aimed_StaticDefaultGetAim_Params
{
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InWeaponOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EKSCharacterAimMode*                               InAimMode;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeapon_Aimed.ServerSetAimOverShoulder
struct AKSWeapon_Aimed_ServerSetAimOverShoulder_Params
{
	bool*                                              bNewAimDownSights;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.ServerProcessHits
struct AKSWeapon_Aimed_ServerProcessHits_Params
{
	struct FAimData*                                   ReceivedAim;                                              // (ConstParm, Parm, ReferenceParm)
	TArray<struct FHitResult>*                         Hits;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Killstreak.KSWeapon_Aimed.ServerFireWeaponAimed
struct AKSWeapon_Aimed_ServerFireWeaponAimed_Params
{
	struct FWeaponStateChangeRequest*                  request;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FAimData*                                   ReceivedAim;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToAOS
struct AKSWeapon_Aimed_IsInOrTransitioningToAOS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToAlternate
struct AKSWeapon_Aimed_IsInOrTransitioningToAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsInOrTransitioningToADS
struct AKSWeapon_Aimed_IsInOrTransitioningToADS_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsAimingOverShoulder
struct AKSWeapon_Aimed_IsAimingOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsAimingDownSights
struct AKSWeapon_Aimed_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsAimingAlternate
struct AKSWeapon_Aimed_IsAimingAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.IsAiming
struct AKSWeapon_Aimed_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.InternalGetActorsToIgnore
struct AKSWeapon_Aimed_InternalGetActorsToIgnore_Params
{
	TArray<class AActor*>                              ActorsToIgnore;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon_Aimed.GetRange
struct AKSWeapon_Aimed_GetRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.GetOwnerAimMode
struct AKSWeapon_Aimed_GetOwnerAimMode_Params
{
	EKSCharacterAimMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.GetHeadAimCorrectionRange
struct AKSWeapon_Aimed_GetHeadAimCorrectionRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.GetHeadAimCorrectionOffset
struct AKSWeapon_Aimed_GetHeadAimCorrectionOffset_Params
{
	bool*                                              bMouse;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.GetFullFireRepData
struct AKSWeapon_Aimed_GetFullFireRepData_Params
{
	struct FFullFireRepData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeapon_Aimed.GetCurrentAccuracy
struct AKSWeapon_Aimed_GetCurrentAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.GetCachedAim
struct AKSWeapon_Aimed_GetCachedAim_Params
{
	struct FAimData                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeapon_Aimed.GetAim
struct AKSWeapon_Aimed_GetAim_Params
{
	struct FAimData                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeapon_Aimed.GetActorsToIgnore
struct AKSWeapon_Aimed_GetActorsToIgnore_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeapon_Aimed.ApplyView
struct AKSWeapon_Aimed_ApplyView_Params
{
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAimData                                    OutAim;                                                   // (Parm, OutParm)
};

// Function Killstreak.KSWeapon_Aimed.ApplyAimAssist
struct AKSWeapon_Aimed_ApplyAimAssist_Params
{
	struct FAimData                                    InOutAim;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Aimed.ApplyAccuracy
struct AKSWeapon_Aimed_ApplyAccuracy_Params
{
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FAimData                                    OutAim;                                                   // (Parm, OutParm)
};

// Function Killstreak.KSWeapon_Aimed.AllowAimCorrection
struct AKSWeapon_Aimed_AllowAimCorrection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Build.OnRep_BuildState
struct AKSWeapon_Build_OnRep_BuildState_Params
{
};

// Function Killstreak.KSWeapon_Build.GetDesiredBuildLocationAndRotation
struct AKSWeapon_Build_GetDesiredBuildLocationAndRotation_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Build.GetBuildPreviewActorClass
struct AKSWeapon_Build_GetBuildPreviewActorClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Build.GetBuildActorClass
struct AKSWeapon_Build_GetBuildActorClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_DirectTarget.SubmitTargetSelection
struct AKSWeapon_DirectTarget_SubmitTargetSelection_Params
{
	class AActor**                                     TargetCandidate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_DirectTarget.PopulateValidTargets
struct AKSWeapon_DirectTarget_PopulateValidTargets_Params
{
	TArray<class AActor*>                              ValidTargetArray;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon_DirectTarget.IsTargetValid
struct AKSWeapon_DirectTarget_IsTargetValid_Params
{
	class AActor**                                     TestActor;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_DirectTarget.EvaluateActiveTarget
struct AKSWeapon_DirectTarget_EvaluateActiveTarget_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_DirectTarget.ChooseBestTarget
struct AKSWeapon_DirectTarget_ChooseBestTarget_Params
{
	TArray<class AActor*>*                             ValidTargetArray;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_GrenadeThrow.OnFuseTimerExpired
struct AKSWeapon_GrenadeThrow_OnFuseTimerExpired_Params
{
	float*                                             MinHandRemainingFuse;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Melee.OnRep_Projectile
struct AKSWeapon_Melee_OnRep_Projectile_Params
{
};

// Function Killstreak.KSWeapon_Melee.OnOwnerAimStateChanged
struct AKSWeapon_Melee_OnOwnerAimStateChanged_Params
{
	EKSCharacterAimMode*                               WeaponStateChange;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Melee.OnLungingChanged
struct AKSWeapon_Melee_OnLungingChanged_Params
{
	bool*                                              Lunging;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Melee.JumpToFire
struct AKSWeapon_Melee_JumpToFire_Params
{
	EWeaponStateNew*                                   PreviousState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Melee.IncPrefireSkipWindow
struct AKSWeapon_Melee_IncPrefireSkipWindow_Params
{
};

// Function Killstreak.KSWeapon_Melee.GetProjectile
struct AKSWeapon_Melee_GetProjectile_Params
{
	class AKSProjectile*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Proximity.ProximityActorUpdated
struct AKSWeapon_Proximity_ProximityActorUpdated_Params
{
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FKSActorProximityInfo*                      ProximityInfo;                                            // (Parm)
};

// Function Killstreak.KSWeapon_Proximity.OnCachedProximityActorsUpdated
struct AKSWeapon_Proximity_OnCachedProximityActorsUpdated_Params
{
};

// Function Killstreak.KSWeapon_Proximity.GetProximityTraceRelativeLocation
struct AKSWeapon_Proximity_GetProximityTraceRelativeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Proximity.GetProximityComponent
struct AKSWeapon_Proximity_GetProximityComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Proximity.GetCachedProximityActors
struct AKSWeapon_Proximity_GetCachedProximityActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function Killstreak.KSWeapon_RemoteRocket.OnRocketDestroyed
struct AKSWeapon_RemoteRocket_OnRocketDestroyed_Params
{
	class AActor**                                     RocketActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_RemoteRocket.OnPostDestroyDelayComplete
struct AKSWeapon_RemoteRocket_OnPostDestroyDelayComplete_Params
{
};

// Function Killstreak.KSWeapon_RemoteRocket.GetSpawnedRocket
struct AKSWeapon_RemoteRocket_GetSpawnedRocket_Params
{
	class AKSRocket*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_RemoteRocket.GetRocketSpawnWorldTransform
struct AKSWeapon_RemoteRocket_GetRocketSpawnWorldTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_RemoteThrow.SwapToDetonator
struct AKSWeapon_RemoteThrow_SwapToDetonator_Params
{
};

// Function Killstreak.KSWeapon_RemoteThrow.OnProjectileReleased
struct AKSWeapon_RemoteThrow_OnProjectileReleased_Params
{
};

// Function Killstreak.KSWeapon_RemoteThrow.OnAttachedChargeDestroyed
struct AKSWeapon_RemoteThrow_OnAttachedChargeDestroyed_Params
{
	class AActor**                                     DestroyedCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_RemoteThrow.GetAttachedCharges
struct AKSWeapon_RemoteThrow_GetAttachedCharges_Params
{
	TArray<class AKSProjectile_RemoteTrigger*>         OutCharges;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon_RemoteTrigger.SwapOffDetonator
struct AKSWeapon_RemoteTrigger_SwapOffDetonator_Params
{
};

// Function Killstreak.KSWeapon_RemoteTrigger.OnAttachedChargeDestroyed
struct AKSWeapon_RemoteTrigger_OnAttachedChargeDestroyed_Params
{
	class AActor**                                     DestroyedCharge;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_RemoteTrigger.GetAttachedCharges
struct AKSWeapon_RemoteTrigger_GetAttachedCharges_Params
{
	TArray<class AKSProjectile_RemoteTrigger*>         OutCharges;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeapon_RemoteTrigger.Detonate
struct AKSWeapon_RemoteTrigger_Detonate_Params
{
};

// Function Killstreak.KSWeapon_RemoteVehicle.VehicleDestroyed
struct AKSWeapon_RemoteVehicle_VehicleDestroyed_Params
{
};

// Function Killstreak.KSWeapon_ReviveDartDirect.OnReviveSucceed
struct AKSWeapon_ReviveDartDirect_OnReviveSucceed_Params
{
};

// Function Killstreak.KSWeapon_ReviveDartDirect.OnReviveFailed
struct AKSWeapon_ReviveDartDirect_OnReviveFailed_Params
{
};

// Function Killstreak.KSWeapon_Targeted.TargetCurrentlyValid
struct AKSWeapon_Targeted_TargetCurrentlyValid_Params
{
	class AActor**                                     TestTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Targeted.SubmitTargetedActor
struct AKSWeapon_Targeted_SubmitTargetedActor_Params
{
	class AActor**                                     TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Targeted.ConfirmTargetSelection
struct AKSWeapon_Targeted_ConfirmTargetSelection_Params
{
	class AActor**                                     TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_Targeted.CancelTargetSelection
struct AKSWeapon_Targeted_CancelTargetSelection_Params
{
};

// Function Killstreak.KSWeapon_ReviveDroneDirect.OnRep_DroneActor
struct AKSWeapon_ReviveDroneDirect_OnRep_DroneActor_Params
{
};

// Function Killstreak.KSWeapon_ReviveDroneDirect.OnDroneDestroy
struct AKSWeapon_ReviveDroneDirect_OnDroneDestroy_Params
{
	class AActor**                                     SupposedDroneActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeapon_ReviveDroneDirect.OnDroneAborted
struct AKSWeapon_ReviveDroneDirect_OnDroneAborted_Params
{
};

// Function Killstreak.KSWeapon_ReviveDroneDirect.GetDesiredSpawnLocationAndRotation
struct AKSWeapon_ReviveDroneDirect_GetDesiredSpawnLocationAndRotation_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponAnimInstance.PlayFireAnimationBP
struct UKSWeaponAnimInstance_PlayFireAnimationBP_Params
{
};

// Function Killstreak.KSWeaponAsset_Build.GetSoftBuildPreviewActorClass
struct UKSWeaponAsset_Build_GetSoftBuildPreviewActorClass_Params
{
};

// Function Killstreak.KSWeaponAsset_Build.GetSoftBuildActorClass
struct UKSWeaponAsset_Build_GetSoftBuildActorClass_Params
{
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetRadialDamageOriginOffsetDistance
struct UKSWeaponAsset_WithProjectile_GetRadialDamageOriginOffsetDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileWeaponAsset
struct UKSWeaponAsset_WithProjectile_GetProjectileWeaponAsset_Params
{
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileRadius
struct UKSWeaponAsset_WithProjectile_GetProjectileRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileMaxSimulationTimeStep
struct UKSWeaponAsset_WithProjectile_GetProjectileMaxSimulationTimeStep_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileMaxSimulationIterations
struct UKSWeaponAsset_WithProjectile_GetProjectileMaxSimulationIterations_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileInitialSpeed
struct UKSWeaponAsset_WithProjectile_GetProjectileInitialSpeed_Params
{
	float*                                             PitchAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileGravityScale
struct UKSWeaponAsset_WithProjectile_GetProjectileGravityScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_WithProjectile.GetProjectileClass
struct UKSWeaponAsset_WithProjectile_GetProjectileClass_Params
{
};

// Function Killstreak.KSWeaponAsset_Grenade.GetMinimumCookTime
struct UKSWeaponAsset_Grenade_GetMinimumCookTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Grenade.GetMinHandRemainingFuse
struct UKSWeaponAsset_Grenade_GetMinHandRemainingFuse_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Grenade.GetFuseTime
struct UKSWeaponAsset_Grenade_GetFuseTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Grenade.GetFuseTicksInHand
struct UKSWeaponAsset_Grenade_GetFuseTicksInHand_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Grenade.AllowCooking
struct UKSWeaponAsset_Grenade_AllowCooking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetMeleeTraceChannel
struct UKSWeaponAsset_Melee_GetMeleeTraceChannel_Params
{
	TEnumAsByte<ETraceTypeQuery>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetMeleeBoxOffset
struct UKSWeaponAsset_Melee_GetMeleeBoxOffset_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetMeleeBoxExtent
struct UKSWeaponAsset_Melee_GetMeleeBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetMaxLungeDuration
struct UKSWeaponAsset_Melee_GetMaxLungeDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetMaxLungeDistance
struct UKSWeaponAsset_Melee_GetMaxLungeDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetLungeConeHalfAngle
struct UKSWeaponAsset_Melee_GetLungeConeHalfAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Melee.GetBoxObjectTypes
struct UKSWeaponAsset_Melee_GetBoxObjectTypes_Params
{
	TArray<TEnumAsByte<EObjectTypeQuery>>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponAsset_Pierce.GetDamageScalarAfterWalls
struct UKSWeaponAsset_Pierce_GetDamageScalarAfterWalls_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Shotgun.GetSpreadPattern
struct UKSWeaponAsset_Shotgun_GetSpreadPattern_Params
{
	TArray<struct FVector2D>                           OutPattern;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponAsset_Shotgun.GetPelletsPerShot
struct UKSWeaponAsset_Shotgun_GetPelletsPerShot_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Shotgun.GetHitPercentageForHeadshot
struct UKSWeaponAsset_Shotgun_GetHitPercentageForHeadshot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Shotgun.GetAimDownSightsAccuracy
struct UKSWeaponAsset_Shotgun_GetAimDownSightsAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAsset_Shotgun.DoesUseSpreadPattern
struct UKSWeaponAsset_Shotgun_DoesUseSpreadPattern_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment.GetValidAttachPoints
struct UKSWeaponAttachment_GetValidAttachPoints_Params
{
	struct FGameplayTagContainer                       OutAttachPoints;                                          // (Parm, OutParm)
};

// Function Killstreak.KSWeaponAttachment.GetFunctionalClass
struct UKSWeaponAttachment_GetFunctionalClass_Params
{
};

// Function Killstreak.KSWeaponAttachment.GetCosmeticClass
struct UKSWeaponAttachment_GetCosmeticClass_Params
{
};

// Function Killstreak.KSWeaponAttachment.CanAttachToWeaponType
struct UKSWeaponAttachment_CanAttachToWeaponType_Params
{
	struct FGameplayTag*                               InWeaponType;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment.CanAttachTo
struct UKSWeaponAttachment_CanAttachTo_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AvailableAttachPoints;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_ExtMagazine.GetClipSize
struct UKSWeaponAttachment_ExtMagazine_GetClipSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_QuickMag.GetReloadPeriodMultiplier
struct UKSWeaponAttachment_QuickMag_GetReloadPeriodMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_ScopeFixedFOV.GetAimDownSightsFieldOfView
struct UKSWeaponAttachment_ScopeFixedFOV_GetAimDownSightsFieldOfView_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_ScopeMultiply.GetScopeMultiplier
struct UKSWeaponAttachment_ScopeMultiply_GetScopeMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_Silencer.GetAudibleRange
struct UKSWeaponAttachment_Silencer_GetAudibleRange_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_VarScope.GetScopeFOVOptions
struct UKSWeaponAttachment_VarScope_GetScopeFOVOptions_Params
{
	class UKSWeaponAsset**                             InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponAttachment_VarScope.GetScopeFOV
struct UKSWeaponAttachment_VarScope_GetScopeFOV_Params
{
	class UKSWeaponAsset**                             InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               nIndex;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachment_VarScope.GetNumScopeOptions
struct UKSWeaponAttachment_VarScope_GetNumScopeOptions_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInstance.SetPersistsOnWeaponDrop
struct UKSWeaponAttachmentInstance_SetPersistsOnWeaponDrop_Params
{
	bool*                                              bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInstance.OnUnattached
struct UKSWeaponAttachmentInstance_OnUnattached_Params
{
};

// Function Killstreak.KSWeaponAttachmentInstance.OnRep_AttachPoint
struct UKSWeaponAttachmentInstance_OnRep_AttachPoint_Params
{
};

// Function Killstreak.KSWeaponAttachmentInstance.OnRep_AttachmentAsset
struct UKSWeaponAttachmentInstance_OnRep_AttachmentAsset_Params
{
};

// Function Killstreak.KSWeaponAttachmentInstance.OnAttached
struct UKSWeaponAttachmentInstance_OnAttached_Params
{
};

// Function Killstreak.KSWeaponAttachmentInstance.IsAttached
struct UKSWeaponAttachmentInstance_IsAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInstance.GetPersistsOnWeaponDrop
struct UKSWeaponAttachmentInstance_GetPersistsOnWeaponDrop_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInstance.GetOwningWeapon
struct UKSWeaponAttachmentInstance_GetOwningWeapon_Params
{
	class AKSWeapon*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInstance.GetAttachPoint
struct UKSWeaponAttachmentInstance_GetAttachPoint_Params
{
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Killstreak.KSWeaponAttachmentInstance.GetAttachmentAsset
struct UKSWeaponAttachmentInstance_GetAttachmentAsset_Params
{
	class UKSWeaponAttachment*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponAttachmentInst_VarScope.ServerSetScopeZoomIndex
struct UKSWeaponAttachmentInst_VarScope_ServerSetScopeZoomIndex_Params
{
	unsigned char*                                     NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.UpdateOwnerLocallyViewed
struct UKSWeaponComponent_UpdateOwnerLocallyViewed_Params
{
	bool*                                              bIsLocallyViewed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.TriggerEngagement
struct UKSWeaponComponent_TriggerEngagement_Params
{
};

// Function Killstreak.KSWeaponComponent.TriggerCombat
struct UKSWeaponComponent_TriggerCombat_Params
{
};

// Function Killstreak.KSWeaponComponent.TickViewerAim
struct UKSWeaponComponent_TickViewerAim_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.TickNonViewerAim
struct UKSWeaponComponent_TickNonViewerAim_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.StopDefaultAim
struct UKSWeaponComponent_StopDefaultAim_Params
{
};

// Function Killstreak.KSWeaponComponent.StopAimOverShoulder
struct UKSWeaponComponent_StopAimOverShoulder_Params
{
};

// Function Killstreak.KSWeaponComponent.StopAimDownSights
struct UKSWeaponComponent_StopAimDownSights_Params
{
};

// Function Killstreak.KSWeaponComponent.StopAimAlternate
struct UKSWeaponComponent_StopAimAlternate_Params
{
};

// Function Killstreak.KSWeaponComponent.StartDefaultAim
struct UKSWeaponComponent_StartDefaultAim_Params
{
};

// Function Killstreak.KSWeaponComponent.StartAimOverShoulder
struct UKSWeaponComponent_StartAimOverShoulder_Params
{
};

// Function Killstreak.KSWeaponComponent.StartAimDownSights
struct UKSWeaponComponent_StartAimDownSights_Params
{
};

// Function Killstreak.KSWeaponComponent.StartAimAlternate
struct UKSWeaponComponent_StartAimAlternate_Params
{
};

// Function Killstreak.KSWeaponComponent.ShouldBroadcastWeaponStateChange
struct UKSWeaponComponent_ShouldBroadcastWeaponStateChange_Params
{
	struct FKSWeaponDataUpdateContainer*               OldState;                                                 // (Parm)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (Parm)
	bool                                               bReliable;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.SetWeaponVisibility
struct UKSWeaponComponent_SetWeaponVisibility_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.ReportNewWeaponLowerAlpha
struct UKSWeaponComponent_ReportNewWeaponLowerAlpha_Params
{
	float*                                             NewAlpha;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceReset;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.OnWeaponStateChanged
struct UKSWeaponComponent_OnWeaponStateChanged_Params
{
	EWeaponStateNew*                                   OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EWeaponStateNew*                                   NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.OnUnsetAsActivePrimaryWeapon
struct UKSWeaponComponent_OnUnsetAsActivePrimaryWeapon_Params
{
};

// Function Killstreak.KSWeaponComponent.OnSetAsActivePrimaryWeapon
struct UKSWeaponComponent_OnSetAsActivePrimaryWeapon_Params
{
};

// Function Killstreak.KSWeaponComponent.OnRep_WeaponState
struct UKSWeaponComponent_OnRep_WeaponState_Params
{
};

// Function Killstreak.KSWeaponComponent.OnRep_WeaponAsset
struct UKSWeaponComponent_OnRep_WeaponAsset_Params
{
};

// Function Killstreak.KSWeaponComponent.OnRep_InitialState
struct UKSWeaponComponent_OnRep_InitialState_Params
{
};

// Function Killstreak.KSWeaponComponent.OnRep_AmmoInClip
struct UKSWeaponComponent_OnRep_AmmoInClip_Params
{
};

// Function Killstreak.KSWeaponComponent.OnInvalidFire
struct UKSWeaponComponent_OnInvalidFire_Params
{
};

// Function Killstreak.KSWeaponComponent.OnInitialize
struct UKSWeaponComponent_OnInitialize_Params
{
};

// Function Killstreak.KSWeaponComponent.OnFireWeaponFull
struct UKSWeaponComponent_OnFireWeaponFull_Params
{
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.OnFireWeapon
struct UKSWeaponComponent_OnFireWeapon_Params
{
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.OnEmptyFire
struct UKSWeaponComponent_OnEmptyFire_Params
{
};

// Function Killstreak.KSWeaponComponent.OnActiveMaterialsApplied
struct UKSWeaponComponent_OnActiveMaterialsApplied_Params
{
	class USkinnableSkeletalMeshComponent**            SkinnableSkelComp;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.NotifyStopFireReceived
struct UKSWeaponComponent_NotifyStopFireReceived_Params
{
};

// Function Killstreak.KSWeaponComponent.IsWeaponSilenced
struct UKSWeaponComponent_IsWeaponSilenced_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsWeaponPendingFireWithValidAmmo
struct UKSWeaponComponent_IsWeaponPendingFireWithValidAmmo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsReloading
struct UKSWeaponComponent_IsReloading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsPrimaryAciveWeapon
struct UKSWeaponComponent_IsPrimaryAciveWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsModelViewer
struct UKSWeaponComponent_IsModelViewer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsClipEmpty
struct UKSWeaponComponent_IsClipEmpty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsAimingOverShoulder
struct UKSWeaponComponent_IsAimingOverShoulder_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsAimingDownSights
struct UKSWeaponComponent_IsAimingDownSights_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsAimingAlternate
struct UKSWeaponComponent_IsAimingAlternate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsAiming
struct UKSWeaponComponent_IsAiming_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsAimedAtEnemy
struct UKSWeaponComponent_IsAimedAtEnemy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.IsActiveWeapon
struct UKSWeaponComponent_IsActiveWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWeaponState
struct UKSWeaponComponent_GetWeaponState_Params
{
	EWeaponStateNew                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWeaponSkeletalMeshComponentNew
struct UKSWeaponComponent_GetWeaponSkeletalMeshComponentNew_Params
{
	class UKSWeaponSkeletalMeshComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWeaponSkeletalMeshComponent
struct UKSWeaponComponent_GetWeaponSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWeaponAsset
struct UKSWeaponComponent_GetWeaponAsset_Params
{
	class UKSWeaponAsset*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWeaponAnimInstance
struct UKSWeaponComponent_GetWeaponAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetWalkSpeedModifier
struct UKSWeaponComponent_GetWalkSpeedModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetViewModelScale
struct UKSWeaponComponent_GetViewModelScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetViewModelRotation
struct UKSWeaponComponent_GetViewModelRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetVibrationEffect
struct UKSWeaponComponent_GetVibrationEffect_Params
{
	class UForceFeedbackEffect*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetTargetingModuleInstance
struct UKSWeaponComponent_GetTargetingModuleInstance_Params
{
	class UKSWeaponTargetingModule*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetScopeSocketName
struct UKSWeaponComponent_GetScopeSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetRetrieveTime
struct UKSWeaponComponent_GetRetrieveTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetReloadTime
struct UKSWeaponComponent_GetReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetMuzzleSocketName
struct UKSWeaponComponent_GetMuzzleSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetMovementAccuracyPenalty
struct UKSWeaponComponent_GetMovementAccuracyPenalty_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetMaxFiringAccuracyLoss
struct UKSWeaponComponent_GetMaxFiringAccuracyLoss_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetMagnifierValue
struct UKSWeaponComponent_GetMagnifierValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetLoadedAccumulatedAttachmentOverrideData
struct UKSWeaponComponent_GetLoadedAccumulatedAttachmentOverrideData_Params
{
	struct FLoadedWeaponAttachmentAnimationData        OutData;                                                  // (Parm, OutParm)
};

// Function Killstreak.KSWeaponComponent.GetInAirAccuracyModifier
struct UKSWeaponComponent_GetInAirAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetGrenadeTargetingModuleInstance
struct UKSWeaponComponent_GetGrenadeTargetingModuleInstance_Params
{
	class UKSGrenadeTargetingModule*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetFiringTime
struct UKSWeaponComponent_GetFiringTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetDuplicateSkeletalMeshComponentNew
struct UKSWeaponComponent_GetDuplicateSkeletalMeshComponentNew_Params
{
	class UKSWeaponSkeletalMeshComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetDuplicateSkeletalMeshComponent
struct UKSWeaponComponent_GetDuplicateSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetCurrentAccuracy
struct UKSWeaponComponent_GetCurrentAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetCrouchAccuracyModifier
struct UKSWeaponComponent_GetCrouchAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetClipSize
struct UKSWeaponComponent_GetClipSize_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetBaseRetrieveTime
struct UKSWeaponComponent_GetBaseRetrieveTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetBaseReloadTime
struct UKSWeaponComponent_GetBaseReloadTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetBaseFiringTime
struct UKSWeaponComponent_GetBaseFiringTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetBaseAccuracy
struct UKSWeaponComponent_GetBaseAccuracy_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAttachments
struct UKSWeaponComponent_GetAttachments_Params
{
	TArray<class UKSWeaponAttachment*>                 OutWeaponAttachments;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponComponent.GetAttachmentCosmeticInstances
struct UKSWeaponComponent_GetAttachmentCosmeticInstances_Params
{
	TArray<class UKSWeaponAttachmentCosmeticInst*>     OutWeaponAttachmentCosmetics;                             // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponComponent.GetAncillaryMeshes
struct UKSWeaponComponent_GetAncillaryMeshes_Params
{
	TArray<class USkeletalMeshComponent*>              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Killstreak.KSWeaponComponent.GetAmmoInOwnerInventory
struct UKSWeaponComponent_GetAmmoInOwnerInventory_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAmmoInClip
struct UKSWeaponComponent_GetAmmoInClip_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAlternativeVibrationEffect
struct UKSWeaponComponent_GetAlternativeVibrationEffect_Params
{
	class UForceFeedbackEffect*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAlternativeVibrationAttenuation
struct UKSWeaponComponent_GetAlternativeVibrationAttenuation_Params
{
	class UForceFeedbackAttenuation*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAimOverShoulderAccuracyModifier
struct UKSWeaponComponent_GetAimOverShoulderAccuracyModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAimMode
struct UKSWeaponComponent_GetAimMode_Params
{
	EKSCharacterAimMode                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAdjustedRetrieveRate
struct UKSWeaponComponent_GetAdjustedRetrieveRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAdjustedReloadRate
struct UKSWeaponComponent_GetAdjustedReloadRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAdjustedFiringRate
struct UKSWeaponComponent_GetAdjustedFiringRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetActiveIndex
struct UKSWeaponComponent_GetActiveIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAccuracyReturnRate
struct UKSWeaponComponent_GetAccuracyReturnRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAccuracyReturnDelay
struct UKSWeaponComponent_GetAccuracyReturnDelay_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.GetAccuracyLossPerShot
struct UKSWeaponComponent_GetAccuracyLossPerShot_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.ForceRetrieveWeapon
struct UKSWeaponComponent_ForceRetrieveWeapon_Params
{
};

// Function Killstreak.KSWeaponComponent.ForceHolsterWeapon
struct UKSWeaponComponent_ForceHolsterWeapon_Params
{
};

// Function Killstreak.KSWeaponComponent.ForceAimUpdate
struct UKSWeaponComponent_ForceAimUpdate_Params
{
};

// Function Killstreak.KSWeaponComponent.EventUpdateOwnerLocallyViewed
struct UKSWeaponComponent_EventUpdateOwnerLocallyViewed_Params
{
	bool*                                              bIsLocallyViewed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.EvaluateWeaponLowering
struct UKSWeaponComponent_EvaluateWeaponLowering_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.DropMagazine
struct UKSWeaponComponent_DropMagazine_Params
{
};

// Function Killstreak.KSWeaponComponent.CreateWeaponSkeletalMeshComponent
struct UKSWeaponComponent_CreateWeaponSkeletalMeshComponent_Params
{
	class UKSWeaponSkeletalMeshComponent*              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.CanUseCombatState
struct UKSWeaponComponent_CanUseCombatState_Params
{
	ECombatState*                                      TestState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.CanReceiveAttachment
struct UKSWeaponComponent_CanReceiveAttachment_Params
{
	class UKSWeaponAttachment**                        InAttachment;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       AvailableAttachPoints;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.CanLowerWeaponNow
struct UKSWeaponComponent_CanLowerWeaponNow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.CancelReloadCosmetic
struct UKSWeaponComponent_CancelReloadCosmetic_Params
{
};

// Function Killstreak.KSWeaponComponent.BroadcastWeaponStateChange
struct UKSWeaponComponent_BroadcastWeaponStateChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (Parm)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableWeaponStateChange
struct UKSWeaponComponent_BroadcastReliableWeaponStateChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKSWeaponDataUpdateContainer*               NewState;                                                 // (Parm)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliablePostReload
struct UKSWeaponComponent_BroadcastReliablePostReload_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliablePostFireWithAmmo
struct UKSWeaponComponent_BroadcastReliablePostFireWithAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableEmptyFire
struct UKSWeaponComponent_BroadcastReliableEmptyFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableAmmoChange
struct UKSWeaponComponent_BroadcastReliableAmmoChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFireWithAmmo
struct UKSWeaponComponent_BroadcastReliableAimedPostFireWithAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFireFull
struct UKSWeaponComponent_BroadcastReliableAimedPostFireFull_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.BroadcastReliableAimedPostFire
struct UKSWeaponComponent_BroadcastReliableAimedPostFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.BroadcastPostReload
struct UKSWeaponComponent_BroadcastPostReload_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastPostFireWithAmmo
struct UKSWeaponComponent_BroadcastPostFireWithAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastEmptyFire
struct UKSWeaponComponent_BroadcastEmptyFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastAmmoChange
struct UKSWeaponComponent_BroadcastAmmoChange_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastAimedPostFireWithAmmo
struct UKSWeaponComponent_BroadcastAimedPostFireWithAmmo_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
	unsigned char*                                     InAmmoInClip;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.BroadcastAimedPostFireFull
struct UKSWeaponComponent_BroadcastAimedPostFireFull_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFullFireRepData*                           Data;                                                     // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.BroadcastAimedPostFire
struct UKSWeaponComponent_BroadcastAimedPostFire_Params
{
	uint32_t*                                          BroadcastId;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Killstreak.KSWeaponComponent.BlueprintPrepareKillCamPlayback
struct UKSWeaponComponent_BlueprintPrepareKillCamPlayback_Params
{
};

// Function Killstreak.KSWeaponComponent.BlueprintPersistentCosmeticsUpdate
struct UKSWeaponComponent_BlueprintPersistentCosmeticsUpdate_Params
{
};

// Function Killstreak.KSWeaponComponent.BlueprintFinishKillCamPlayback
struct UKSWeaponComponent_BlueprintFinishKillCamPlayback_Params
{
};

// Function Killstreak.KSWeaponComponent.BlueprintFillLegacyDataTable
struct UKSWeaponComponent_BlueprintFillLegacyDataTable_Params
{
	class UDataTable**                                 LegacyDataTable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponComponent.AimDownSightsCheckpoint
struct UKSWeaponComponent_AimDownSightsCheckpoint_Params
{
};

// DelegateFunction Killstreak.KSWeaponFunctionLibrary.OnTraceReactionDelay__DelegateSignature
struct UKSWeaponFunctionLibrary_OnTraceReactionDelay__DelegateSignature_Params
{
	bool*                                              bBlockingHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         OutHits;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.MultiLineWeaponTraceByObjectType
struct UKSWeaponFunctionLibrary_MultiLineWeaponTraceByObjectType_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.MultiLineWeaponTraceByChannel
struct UKSWeaponFunctionLibrary_MultiLineWeaponTraceByChannel_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.MeleeBoxOverlapComponents
struct UKSWeaponFunctionLibrary_MeleeBoxOverlapComponents_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   BoxRot;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Extent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass**                                     ComponentClassFilter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UPrimitiveComponent*>                 OutComponents;                                            // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.MeleeBoxOverlapActors
struct UKSWeaponFunctionLibrary_MeleeBoxOverlapActors_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BoxPos;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator*                                   BoxRot;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    BoxExtent;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>*             ObjectTypes;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass**                                     ActorClassFilter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Thickness;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.GetGadgetThrowSpeedMultiplier
struct UKSWeaponFunctionLibrary_GetGadgetThrowSpeedMultiplier_Params
{
	class APawn**                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.GetGadgetOuterRadiusMultiplier
struct UKSWeaponFunctionLibrary_GetGadgetOuterRadiusMultiplier_Params
{
	class APawn**                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.GetGadgetInnerRadiusMultiplier
struct UKSWeaponFunctionLibrary_GetGadgetInnerRadiusMultiplier_Params
{
	class APawn**                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.GetGadgetFXSizeMultiplier
struct UKSWeaponFunctionLibrary_GetGadgetFXSizeMultiplier_Params
{
	class APawn**                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.GenerateShotgunSpreadAimDataV2Exact
struct UKSWeaponFunctionLibrary_GenerateShotgunSpreadAimDataV2Exact_Params
{
	int*                                               PelletCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InWeaponOwner;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             InRange;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData                                    OutAim;                                                   // (Parm, OutParm)
};

// Function Killstreak.KSWeaponFunctionLibrary.GenerateShotgunSpreadAimDataV2
struct UKSWeaponFunctionLibrary_GenerateShotgunSpreadAimDataV2_Params
{
	int*                                               PelletCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UKSWeaponAsset**                             InWeaponAsset;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData                                    OutAim;                                                   // (Parm, OutParm)
};

// Function Killstreak.KSWeaponFunctionLibrary.GenerateShotgunSpreadAimData
struct UKSWeaponFunctionLibrary_GenerateShotgunSpreadAimData_Params
{
	int*                                               PelletCount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Accuracy;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   Aim;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FRandomStream                               RandomStream;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAimData>                            OutSpread;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponFunctionLibrary.FrameDelayForTrace
struct UKSWeaponFunctionLibrary_FrameDelayForTrace_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               NumFramesToDelay;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBlockingHit;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         Hits;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector*                                    start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    end;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate*                            OnDelayComplete;                                          // (Parm, ZeroConstructor)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
};

// Function Killstreak.KSWeaponFunctionLibrary.FindShotgunPelletHitData
struct UKSWeaponFunctionLibrary_FindShotgunPelletHitData_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         ShotgunHits;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FShotgunHitData                             PelletHitData;                                            // (Parm, OutParm)
};

// Function Killstreak.KSWeaponFunctionLibrary.EventSingleShotgunLineTraceByChannelV2
struct UKSWeaponFunctionLibrary_EventSingleShotgunLineTraceByChannelV2_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             PelletRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.EventSingleShotgunLineTraceByChannel
struct UKSWeaponFunctionLibrary_EventSingleShotgunLineTraceByChannel_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAimData>*                           Spread;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             PelletRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.EventMultiShotgunLineTraceByChannelV3
struct UKSWeaponFunctionLibrary_EventMultiShotgunLineTraceByChannelV3_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShotPenetrationCount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             PelletRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo*                          LatentInfo;                                               // (Parm)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.EventMultiShotgunLineTraceByChannelV2
struct UKSWeaponFunctionLibrary_EventMultiShotgunLineTraceByChannelV2_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShotPenetrationCount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAimData*                                   InAim;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             PelletRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.EventMultiShotgunLineTraceByChannel
struct UKSWeaponFunctionLibrary_EventMultiShotgunLineTraceByChannel_Params
{
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ShotPenetrationCount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAimData>*                           Spread;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float*                                             PelletRange;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>*                      TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             ActorsToIgnore;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EDrawDebugTrace>*                      DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>                          OutHits;                                                  // (Parm, OutParm, ZeroConstructor)
	bool*                                              bIgnoreSelf;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceColor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               TraceHitColor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.DoRadialDamageWithPreventionChannel
struct UKSWeaponFunctionLibrary_DoRadialDamageWithPreventionChannel_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>*                    DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.DoRadialDamage
struct UKSWeaponFunctionLibrary_DoRadialDamage_Params
{
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponAsset**                             InAsset;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>*                             AdditionalIgnoreActors;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController**                                DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.DoPointDamage
struct UKSWeaponFunctionLibrary_DoPointDamage_Params
{
	class AActor**                                     DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitFromDirection;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponFunctionLibrary.CongregateShotgunHits
struct UKSWeaponFunctionLibrary_CongregateShotgunHits_Params
{
	class AKSWeapon**                                  InWeapon;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHitResult>*                         ShotgunHits;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCongregatedShotgunHit>              CongregatedResults;                                       // (Parm, OutParm, ZeroConstructor)
};

// Function Killstreak.KSWeaponMasteryManager.GetKDAForWeapon
struct UKSWeaponMasteryManager_GetKDAForWeapon_Params
{
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponMasteryManager.GetActivityInstancesWithWeapon
struct UKSWeaponMasteryManager_GetActivityInstancesWithWeapon_Params
{
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSActivityInstance*>                 OutActivityInstances;                                     // (Parm, OutParm, ZeroConstructor)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponMasteryManager.GetActivityInstancesWithType
struct UKSWeaponMasteryManager_GetActivityInstancesWithType_Params
{
	EKSWeaponMasteryActivityType*                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSActivityInstance*>                 OutActivityInstances;                                     // (Parm, OutParm, ZeroConstructor)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponMasteryManager.GetAccuracyForWeapon
struct UKSWeaponMasteryManager_GetAccuracyForWeapon_Params
{
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWeaponMasteryManager.FindActivityByWeaponAndType
struct UKSWeaponMasteryManager_FindActivityByWeaponAndType_Params
{
	class UKSWeaponAsset**                             Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EKSWeaponMasteryActivityType*                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponMasteryActivity*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSWorldSettings.LevelActorDestroyed
struct AKSWorldSettings_LevelActorDestroyed_Params
{
	class AActor**                                     TheActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSZipLine.SetReadyToRide
struct AKSZipLine_SetReadyToRide_Params
{
	bool*                                              bIsReadyToRide;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSZipLine.OnPlayerZiplineCooldownEnd
struct AKSZipLine_OnPlayerZiplineCooldownEnd_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSZipLine.OnPlayerStopZiplining
struct AKSZipLine_OnPlayerStopZiplining_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSZipLine.OnPlayerStartZiplining
struct AKSZipLine_OnPlayerStartZiplining_Params
{
	class AKSCharacter**                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.KSZipLine.IsUpline
struct AKSZipLine_IsUpline_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSZipLine.GetAutoReleaseDistance
struct AKSZipLine_GetAutoReleaseDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSZipLine.ComputeAutoReleaseVelocity
struct AKSZipLine_ComputeAutoReleaseVelocity_Params
{
	struct FRotator*                                   CharRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.KSZipLine_Dynamic.SetDynamicAnchors
struct AKSZipLine_Dynamic_SetDynamicAnchors_Params
{
	struct FVector*                                    StartAnchor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    EndAnchor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.LobbyPlayerController.LoadRoute
struct ALobbyPlayerController_LoadRoute_Params
{
	struct FName*                                      RouteName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.ParticleSystemChannelComponent.UpdateChannels
struct UParticleSystemChannelComponent_UpdateChannels_Params
{
};

// Function Killstreak.PerkCategory.GetSoftCategoryIcon
struct UPerkCategory_GetSoftCategoryIcon_Params
{
};

// Function Killstreak.SmoothRepTimelineActor.SetTimelineComponentToSimulate
struct ASmoothRepTimelineActor_SetTimelineComponentToSimulate_Params
{
	class UTimelineComponent**                         InTimelineComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.SmoothRepTimelineActor.OnRep_SmoothTimeline
struct ASmoothRepTimelineActor_OnRep_SmoothTimeline_Params
{
};

// Function Killstreak.SplineMovementComponent.StopSimulating
struct USplineMovementComponent_StopSimulating_Params
{
	struct FHitResult*                                 HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Killstreak.SplineMovementComponent.SetInitialOffsetOnSpline
struct USplineMovementComponent_SetInitialOffsetOnSpline_Params
{
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.SplineMovementComponent.RestartMovement
struct USplineMovementComponent_RestartMovement_Params
{
	float*                                             InitialDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Killstreak.SplineMovementComponent.OnSplineWaitEndDelegate__DelegateSignature
struct USplineMovementComponent_OnSplineWaitEndDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Killstreak.SplineMovementComponent.OnSplineWaitBeginDelegate__DelegateSignature
struct USplineMovementComponent_OnSplineWaitBeginDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Killstreak.SplineMovementComponent.OnSplineStopDelegate__DelegateSignature
struct USplineMovementComponent_OnSplineStopDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Killstreak.SplineMovementComponent.OnSplineReverseDelegate__DelegateSignature
struct USplineMovementComponent_OnSplineReverseDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Killstreak.SplineMovementComponent.OnSplineResetDelegate__DelegateSignature
struct USplineMovementComponent_OnSplineResetDelegate__DelegateSignature_Params
{
	struct FHitResult*                                 ImpactResult;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.SplineMovementComponent.GoToTime
struct USplineMovementComponent_GoToTime_Params
{
	float*                                             Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Killstreak.SplineMovementComponent.GetAlpha
struct USplineMovementComponent_GetAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Killstreak.ThermalScopeManagerComponent.CreateThermalManagerComponent
struct UThermalScopeManagerComponent_CreateThermalManagerComponent_Params
{
	class AKSCharacter**                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponent**                         InWeaponComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass**                                     ThermalPostProcessClass;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UThermalScopeManagerComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Killstreak.TracerParticlePoolComponent.OnTracerDestinationReached
struct UTracerParticlePoolComponent_OnTracerDestinationReached_Params
{
	class USceneComponent**                            TracerComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Killstreak.TracerStaticMeshPoolComponent.OnTracerDestinationReached
struct UTracerStaticMeshPoolComponent_OnTracerDestinationReached_Params
{
	class USceneComponent**                            TracerComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
