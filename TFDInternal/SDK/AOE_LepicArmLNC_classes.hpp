#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_LepicArmLNC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AOE_LepicArmLNC.AOE_LepicArmLNC_C
// 0x0030 (0x0780 - 0x0750)
class AAOE_LepicArmLNC_C final : public AM1AbilityActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0750(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0758(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        AOE_Radius;                                        // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Dur_LifeTime;                                      // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Period;                                            // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                         EndFX;                                             // 0x0778(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveDestroyed();
	void OnPeriod();
	void ExecuteUbergraph_AOE_LepicArmLNC(int32 EntryPoint);
	void BP_OnPostSpawnAbilityActor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AOE_LepicArmLNC_C">();
	}
	static class AAOE_LepicArmLNC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAOE_LepicArmLNC_C>();
	}
};

}
