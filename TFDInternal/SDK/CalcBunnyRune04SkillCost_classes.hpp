#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcBunnyRune04SkillCost

#include "Basic.hpp"

#include "CalcSkillCost_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcBunnyRune04SkillCost.CalcBunnyRune04SkillCost_C
// 0x0010 (0x0120 - 0x0110)
class UCalcBunnyRune04SkillCost_C final : public UCalcSkillCost_C
{
public:
	double                                        Multiply;                                          // 0x0110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxValue;                                          // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;
	void BunnyRune04Cost(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcBunnyRune04SkillCost_C">();
	}
	static class UCalcBunnyRune04SkillCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcBunnyRune04SkillCost_C>();
	}
};

}

