#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SE_LepicPowerstream

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SE_LepicPowerstream.SE_LepicPowerstream_C
// 0x0020 (0x0358 - 0x0338)
class USE_LepicPowerstream_C final : public UM1StatusEffect
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        BuffEndFXLength;                                   // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UNiagaraComponent*>              LoopFXs;                                           // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void OnFinish_20D0B3334B8BB17FB82F3B97F0C1EC27();
	void OnAbilityEvent_2D5086D5473DC714F5E37BADE24BE05C(const struct FM1AbilityEvent& Event);
	void ExecuteUbergraph_SE_LepicPowerstream(int32 EntryPoint);
	void DeactivateLoopFXs();
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SE_LepicPowerstream_C">();
	}
	static class USE_LepicPowerstream_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USE_LepicPowerstream_C>();
	}
};

}

