#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AbilityActor_HyperCube

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AJaxShieldState_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "AJaxShieldResourceType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AbilityActor_HyperCube.AbilityActor_HyperCube_C
// 0x0110 (0x0860 - 0x0750)
class AAbilityActor_HyperCube_C final : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       BuffTriggerCollision;                              // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1StatComponent*                       M1Stat;                                            // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      LoopFX;                                            // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AllyBuffTimerHandle;                               // 0x0778(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           LifeTimerHandle;                                   // 0x0780(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FAJaxShieldState                       ShieldState;                                       // 0x0788(0x0002)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78A[0x6];                                      // 0x078A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        AOE_ShieldRadiusScale;                             // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, struct FM1AbilityId>      InvokedATKStatusEffectList;                        // 0x0798(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          bBroken;                                           // 0x07E8(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E9[0x7];                                      // 0x07E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        BrokenHpRatio;                                     // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, struct FM1AbilityId>      StatusEffectIdMap;                                 // 0x07F8(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        ShieldLifeTime;                                    // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CommonGaugeIncreaseDmgRatio;                       // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SphereRadius;                                      // 0x0858(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SpawnReflectDamageEffect(class AActor* TargetActor);
	void SpawnDamageEffect(const struct FHitResult& HitResult);
	void ReceiveDestroyed();
	void PlayHitReactFx(class AActor* InInstigator, const struct FHitResult& InHitResult);
	void OnRep_ShieldState();
	void OnRep_bBroken();
	void OnLoopState();
	void OnEndOverlap_49048CC144D953A717968BA3D878FCFE(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnDestroyState();
	void OnDeployState();
	void OnChangedHp(EM1StatType NewParam);
	void OnBeginOverlap_49048CC144D953A717968BA3D878FCFE(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnActivatedCollision();
	void LoopShield();
	void GetFxKey(EAJaxShieldResourceType Input, class FName* Return);
	void ExecuteUbergraph_AbilityActor_HyperCube(int32 EntryPoint);
	void DestroyShield();
	void DeployShield(bool bStrengthened);
	void BP_OnPostSpawnAbilityActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AbilityActor_HyperCube_C">();
	}
	static class AAbilityActor_HyperCube_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAbilityActor_HyperCube_C>();
	}
};

}
