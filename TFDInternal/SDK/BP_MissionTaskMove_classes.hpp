#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskMove

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskMove.BP_MissionTaskMove_C
// 0x0018 (0x06F8 - 0x06E0)
class ABP_MissionTaskMove_C : public AM1MissionTaskActorMoveTo
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MissionTaskMove(int32 EntryPoint);
	void TaskActorStateChanged(EM1EventActorState InState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskMove_C">();
	}
	static class ABP_MissionTaskMove_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskMove_C>();
	}
};

}

