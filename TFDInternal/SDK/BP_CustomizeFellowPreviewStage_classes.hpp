#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomizeFellowPreviewStage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CustomizeFellowPreviewStage.BP_CustomizeFellowPreviewStage_C
// 0x0068 (0x06A0 - 0x0638)
class ABP_CustomizeFellowPreviewStage_C final : public AM1CustomizeFellowPreviewStage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0638(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor_Cam_Spawn;                              // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Pattern;                            // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_BodyAttachment;                     // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_MakeUp;                             // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Motion_Group;                       // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Right_Head_F;                       // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Right_Head_M;                       // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Right_Body_M;                       // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Right_Body_F;                       // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_Body;                               // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_Cam_HeadAttachment;                     // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_BlackBox;                               // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomizeFellowPreviewStage(int32 EntryPoint);

	TArray<class AActor*> GetViewTargets() const;
	class UCineCameraComponent* BP_GetCameraComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomizeFellowPreviewStage_C">();
	}
	static class ABP_CustomizeFellowPreviewStage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CustomizeFellowPreviewStage_C>();
	}
};

}
