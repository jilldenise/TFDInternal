#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MissionNpcForOverlap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MissionNpcForOverlap.BP_MissionNpcForOverlap_C
// 0x0030 (0x07A0 - 0x0770)
class ABP_MissionNpcForOverlap_C final : public AM1Npc
{
public:
	uint8                                         Pad_768[0x8];                                      // 0x0768(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1IndicatorComponent*                  M1Indicator;                                       // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1CoolTimeComponent*                   CoolTimeComponent;                                 // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UM1InteractionInvokerComponent*         M1InteractionInvoker;                              // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        IndicatorOffSet__cm_;                              // 0x0790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MissionNpcForOverlap(int32 EntryPoint);

	class UM1InteractionInvokerComponent* BP_GetInteractionComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MissionNpcForOverlap_C">();
	}
	static class ABP_MissionNpcForOverlap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MissionNpcForOverlap_C>();
	}
};

}

