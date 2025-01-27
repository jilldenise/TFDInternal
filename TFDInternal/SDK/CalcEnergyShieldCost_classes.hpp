#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CalcEnergyShieldCost

#include "Basic.hpp"

#include "CalcEtcBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CalcEnergyShieldCost.CalcEnergyShieldCost_C
// 0x0008 (0x0100 - 0x00F8)
class UCalcEnergyShieldCost_C final : public UCalcEtcBase_C
{
public:
	double                                        CostValue;                                         // 0x00F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void DoCalculation(struct FM1AbilityOpCalcParam& Param, struct FM1CalcDamageInfo& DamageInfo, struct FM1AbilityOpExecCalcOutput& Output) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CalcEnergyShieldCost_C">();
	}
	static class UCalcEnergyShieldCost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCalcEnergyShieldCost_C>();
	}
};

}

