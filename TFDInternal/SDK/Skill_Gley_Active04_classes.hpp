#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_Gley_Active04

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "Skill_EquipAltWeapon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Gley_Active04.Skill_Gley_Active04_C
// 0x0078 (0x03D8 - 0x0360)
class USkill_Gley_Active04_C final : public USkill_EquipAltWeapon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Skill_Gley_Active04_C;              // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         RoundsToLoad;                                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36C[0x4];                                      // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AbilityId                           BuffStatusId;                                      // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        NormalHitEffects;                                  // 0x0380(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                        BerserkHitEffects;                                 // 0x03A0(0x0020)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UM1DataSoundEffects*                    NormalHitSoundsEffects;                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UM1DataSoundEffects*                    BerserkHitSoundsEffects;                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         RoundsMultiplier;                                  // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFunctionalTest();
	void OnBerserkModeChanged(bool bBerserk);
	void OnActivatedAltWeapon();
	void OnAbilityEvent_9F2B6F0A47E9B379357AB4B9C8B4C238(const struct FM1AbilityEvent& Event);
	void OnAbilityEvent_6FA8322B4B72EF31EAE830A71DC266DB(const struct FM1AbilityEvent& Event);
	void InitializeRounds();
	void ExecuteUbergraph_Skill_Gley_Active04(int32 EntryPoint);
	void BP_OnDeactivated(bool bCancelled);
	void BP_OnActivated();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Gley_Active04_C">();
	}
	static class USkill_Gley_Active04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Gley_Active04_C>();
	}
};

}

