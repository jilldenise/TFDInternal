#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skill_AJaxActiveBase

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_AJaxActiveBase.Skill_AJaxActiveBase_C
// 0x0008 (0x0340 - 0x0338)
class USkill_AJaxActiveBase_C : public UM1SkillAbility
{
public:
	double                                        CommonGaugeIncreaseSkillRatio;                     // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RefreshCommonGaugeByUsingSkill();

	TArray<struct FM1AbilityParamData> MakeSkillActivateParams(const class AActor* InOwner) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_AJaxActiveBase_C">();
	}
	static class USkill_AJaxActiveBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_AJaxActiveBase_C>();
	}
};

}

