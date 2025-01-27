#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionTaskVoidBattleBoss

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionTaskVoidBattleBoss.BP_MissionTaskVoidBattleBoss_C
// 0x0010 (0x0728 - 0x0718)
class ABP_MissionTaskVoidBattleBoss_C final : public AM1MissionTaskActorVoidBattleEpicMonster
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0718(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_ShouldBeVisibleOnLocal(bool InVisible);
	void ExecuteUbergraph_BP_MissionTaskVoidBattleBoss(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionTaskVoidBattleBoss_C">();
	}
	static class ABP_MissionTaskVoidBattleBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionTaskVoidBattleBoss_C>();
	}
};

}

