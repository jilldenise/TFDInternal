#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcShieldBaseDamage

#include "Basic.hpp"

#include "CalcDamageBase_classes.hpp"
#include "M1Data_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcShieldBaseDamage.CalcShieldBaseDamage_C
// 0x0020 (0x0150 - 0x0130)
class UCalcShieldBaseDamage_C final : public UCalcDamageBase_C
{
public:
	double                                        NormalDamageRatio;                                 // 0x0130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChampionDamageRatio;                               // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NamedDamageRatio;                                  // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        BossDamageRatio;                                   // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetDamageRatio(struct FM1AbilityOpCalcParam& Param, double* Ratio) const;
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcShieldBaseDamage_C">();
	}
	static class UCalcShieldBaseDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcShieldBaseDamage_C>();
	}
};

}

