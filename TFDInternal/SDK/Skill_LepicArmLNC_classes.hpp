#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_LepicArmLNC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Skill_EquipAltWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LepicArmLNC.Skill_LepicArmLNC_C
// 0x0008 (0x0368 - 0x0360)
class USkill_LepicArmLNC_C final : public USkill_EquipAltWeapon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Skill_LepicArmLNC_C;                // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void OnAbilityEvent_3A13A6C94180B2DA4F4077885B102387(const struct FM1AbilityEvent& Event);
	void ExecuteUbergraph_Skill_LepicArmLNC(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void OnFunctionalTest();
	void OnActivatedAltWeapon();
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LepicArmLNC_C">();
	}
	static class USkill_LepicArmLNC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LepicArmLNC_C>();
	}
};

}
