#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MIS_VulgusTransceiverAntennaCenter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MIS_VulgusTransceiverAntennaCenter.BP_MIS_VulgusTransceiverAntennaCenter_C
// 0x0030 (0x03E0 - 0x03B0)
class ABP_MIS_VulgusTransceiverAntennaCenter_C final : public AM1MissionDependantActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentFadeInOutValue;                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TargetFadeInOutValue;                              // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_UpdateFadeInOut;                             // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        ElapsedTime;                                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStateUpdated(EM1TaskDependantState InState);
	void OnCurrentStateUpdatedOnClient_Event(const EM1TaskDependantState& InState);
	void FadeInOrOutVulgusPostAreaFx();
	void ExecuteUbergraph_BP_MIS_VulgusTransceiverAntennaCenter(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MIS_VulgusTransceiverAntennaCenter_C">();
	}
	static class ABP_MIS_VulgusTransceiverAntennaCenter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MIS_VulgusTransceiverAntennaCenter_C>();
	}
};

}

