#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Viessa_AbilityActor_IceSphere2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Viessa_IceSphereData_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Viessa_AbilityActor_IceSphere2.Viessa_AbilityActor_IceSphere2_C
// 0x0128 (0x0878 - 0x0750)
class AViessa_AbilityActor_IceSphere2_C final : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPlayerDroneTransformComponent_C*       IceSphereTransform;                                // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DetectSphere;                                      // 0x0760(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0768(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 IceSphere_Right;                                   // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 IceSphere_Center;                                  // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 IceSphere_Left;                                    // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FViessa_IceSphereData>          DetectedMonsters;                                  // 0x0788(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ReshotTime;                                        // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RedetectTime;                                      // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RedetectElapsedTime;                               // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AM1Monster*                             Target;                                            // 0x07B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 IceSphere;                                         // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   IceSphereName;                                     // 0x07C0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	double                                        RotationTime;                                      // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SkelRotationAlpha;                                 // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          DestroyAnim;                                       // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bShooting;                                         // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsSpawnedProjectile;                              // 0x07E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E2[0x6];                                      // 0x07E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Lifetime;                                          // 0x07E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MovementAlpha;                                     // 0x07F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           SocketNameArray;                                   // 0x07F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class USkeletalMeshComponent*> IceSphereSkelArray;                                // 0x0808(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVector                                MovementDirection;                                 // 0x0858(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastMovementDirection;                             // 0x0864(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InvisibleDelay;                                    // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TickUpdateShoot(double DeltaSeconds);
	void TickUpdateRedetection(double DeltaSeconds);
	void RotateTarget(double DeltaSeconds, bool* FinishedRotation);
	void ReceiveTick(float DeltaSeconds);
	void ProccessDestory();
	void OnRep_IceSphereName();
	void OnEndOverlap_12C639954662F9343796309174B8162C(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnEndDetect(class AActor* Target_0);
	void OnBeginOverlap_12C639954662F9343796309174B8162C(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnBeginDetect(class AActor* Target_0);
	void IsNearest(class AM1Monster* Standarad, class USkeletalMeshComponent* OriginTarget, class USkeletalMeshComponent* ComparisonTarget, bool* Result);
	void FindNearestTarget(class AM1Monster** Target_0);
	void FindNearestIceSphere(class AM1Monster* Target_0, class USkeletalMeshComponent** Result, class FName* ResultIceSphereName);
	void ExecuteUbergraph_Viessa_AbilityActor_IceSphere2(int32 EntryPoint);
	void DestroyIceSphereAfterDelay(double InDelay, class FName InIceSphereName);
	void DestroyIceSphere(class FName InIceSphereName);
	void DestroyFiredIceSphere(class FName InIceSphereName);
	void CanShoot(bool* Result);
	void BP_OnPostSpawnAbilityActor();
	void AddSkeletalMeshControl(class USkeletalMeshComponent* OwnedSkeletalMeshComp, class FName ControlTag, class FName BaseSocketName, bool bIsCosmetic);
	void AddIceSphereControls();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Viessa_AbilityActor_IceSphere2_C">();
	}
	static class AViessa_AbilityActor_IceSphere2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AViessa_AbilityActor_IceSphere2_C>();
	}
};

}
