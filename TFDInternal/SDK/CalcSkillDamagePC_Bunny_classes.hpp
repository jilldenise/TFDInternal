#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcSkillDamagePC_Bunny

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "CalcDamageBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcSkillDamagePC_Bunny.CalcSkillDamagePC_Bunny_C
// 0x0028 (0x0158 - 0x0130)
class UCalcSkillDamagePC_Bunny_C final : public UCalcDamageBase_C
{
public:
	EM1SkillArcheType                             SkillArcheType;                                    // 0x0130(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1ElementalDamageChannel                     SkillElementalType;                                // 0x0131(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   WatchStat;                                         // 0x0132(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1StatType                                   MaxStat;                                           // 0x0133(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MinValue;                                          // 0x0134(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   MaxValue;                                          // 0x013C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AddPower;                                          // 0x0144(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AddAttack;                                         // 0x014C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcSkillDamagePC_Bunny_C">();
	}
	static class UCalcSkillDamagePC_Bunny_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcSkillDamagePC_Bunny_C>();
	}
};

}

