#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillDamageMonster_New

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSkillDamageMonster_New.CalcSkillDamageMonster_New_C
// 0x0008 (0x0138 - 0x0130)
class UCalcSkillDamageMonster_New_C : public UCalcDamageBase_C
{
public:
	bool                                          bApplyElementalDamageOnly;                         // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSkillDamageMonster_New_C">();
	}
	static class UCalcSkillDamageMonster_New_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSkillDamageMonster_New_C>();
	}
};

}

