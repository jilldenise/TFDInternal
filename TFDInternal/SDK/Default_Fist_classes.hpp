#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Default_Fist

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "Engine_structs.hpp"
#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SubSkillAnimSetting_structs.hpp"
#include "SubSkillSetting_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Default_Fist.Default_Fist_C
// 0x01B8 (0x04F0 - 0x0338)
class UDefault_Fist_C final : public UM1SkillAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        MaxDashDistance;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDashHeight;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxDashTime;                                       // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinDashDistance;                                   // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSprinting;                                      // 0x0360(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWireAttack;                                       // 0x0361(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bNeedDash;                                         // 0x0362(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bCoolTime;                                         // 0x0363(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DashLocation;                                      // 0x0364(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WireAttackLaunchVelocity;                          // 0x0370(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WireMoveVelocity;                                  // 0x037C(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                AttackDirection;                                   // 0x0388(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AttackTypeTag;                                     // 0x0394(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsLanded;                                         // 0x039C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39D[0x3];                                      // 0x039D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DashLocationOffset;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        JumpAttackZVelocity;                               // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM1DataSoundEffects*                    HitSoundEffects;                                   // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UM1DataSoundEffects*                    HitSoundEffects_NonCharge;                         // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AM1SkeletalMeshActor*                   SpawnedSkelMeshActor;                              // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, class AM1SkeletalMeshActor*> SpawnedSkelMeshActors;                             // 0x03C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FSubSkillSetting> SubSkillSet;                                       // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<EM1PlayerAnimType, struct FSubSkillSetting> NonChargeSubSkillSet;                              // 0x0468(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UM1AbilityTask_WaitTick*                WireVelocityUpdateTask;                            // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	ECollisionResponse                            PrevPawnResponse;                                  // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAppliedOverlapPawn;                               // 0x04C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C2[0x6];                                      // 0x04C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1AbilityTask_WaitDamageEvent*         WaitDamageTask;                                    // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ValidateTolerance;                                 // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSubSkillAnimSetting                   DashAnims;                                         // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CurrentDashAnim;                                   // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void WaitLand();
	void WaitDamageToEvent();
	void SendRuneEvent(class UObject* Object);
	void StartUpdateWireVelocity();
	void SendPrevRuneEvent();
	void ServerDamageToEnemy(const TArray<class AActor*>& InEnemies);
	void RotateToAttackDirectionIfNeed();
	void OnFinished_FA896AD34AED6B31532A3BB7F0DD5EC9(bool DestinationReached, bool TimedOut, const struct FVector& FinalTargetLocation);
	void OnUpdate_1C9BEB0A42DB15447A2DAA9BAFDF1BEE(float DeltaTime);
	void OnEventReceived_D54F2B39422DA08EA130338C89FA1FCE(const struct FM1AbilityEvent& Event);
	void OnRep_bIsLanded();
	void OnEventReceived_07EC16C846839553D378A2A49AB9C354(const struct FM1AbilityEvent& Event);
	void OnEventReceived_5E573E1E46AA8A55B901328E15DB16D6(const struct FM1AbilityEvent& Event);
	void OnEvent_726A9F1347453B65ABB65DAE8EEB8F6E(const struct FM1CalcDamageInfo& DamageInfo);
	void OnCompleted_5E573E1E46AA8A55B901328E15DB16D6(const struct FM1AbilityEvent& Event);
	void OnCompleted_07EC16C846839553D378A2A49AB9C354(const struct FM1AbilityEvent& Event);
	void OnBlendOut_D54F2B39422DA08EA130338C89FA1FCE(const struct FM1AbilityEvent& Event);
	void OnBlendOut_5E573E1E46AA8A55B901328E15DB16D6(const struct FM1AbilityEvent& Event);
	void OnBlendOut_07EC16C846839553D378A2A49AB9C354(const struct FM1AbilityEvent& Event);
	void OnCompleted_D54F2B39422DA08EA130338C89FA1FCE(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_283F594C46065D7C2BA6929F6639E384(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_09DFF00F4B92C4EE431B928C804677D1(const struct FM1AbilityEvent& Event);
	void LaunchForWireLand();
	void HandleAbilityEvent(const struct FM1AbilityEvent& AbilityEvent);
	class UAnimMontage* GetNonChargeAnimMontage();
	class UAnimMontage* GetAnimMontage(const struct FGameplayTag& Key);
	void GetAttackTag(struct FGameplayTag* Tag);
	void DamageToEnemy(int32 AttackCount, const struct FSubSkillSetting& InSetting);
	bool CheckValidateRadius(class AActor* InTarget);
	void Get_Target_Actors(const struct FSubSkillCollision& DamageCollision, TArray<class AActor*>* OutActors);
	void ExecuteUbergraph_Default_Fist(int32 EntryPoint);
	void CalcValidateTolerance(double* OutValidateRadius);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

	TArray<struct FM1AbilityParamData> MakeSkillActivateParams(const class AActor* InOwner) const;
	void GetDashLocation(class AActor* TargetActor, struct FVector* TargetLocation) const;
	void GetAimedTarget(class AActor** AimedActor) const;
	bool CheckCoolTimeInAbility() const;
	struct FVector CalcAttackDirection(class AActor* InOwner, class AActor* InTarget) const;
	void BP_MakePreloadAssetList(struct FM1AbilityAssetPreload* OutAbilityAssetPreload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Default_Fist_C">();
	}
	static class UDefault_Fist_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefault_Fist_C>();
	}
};

}
