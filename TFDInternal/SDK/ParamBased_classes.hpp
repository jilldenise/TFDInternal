#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ParamBased

#include "Basic.hpp"

#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ParamBased.ParamBased_C
// 0x0008 (0x00F0 - 0x00E8)
class UParamBased_C : public UM1AbilityOpModValueCalc
{
public:
	double                                        ParamValue;                                        // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FM1ScaledInteger CalculateValue(const struct FM1AbilityOpCalcParam& Param) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ParamBased_C">();
	}
	static class UParamBased_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UParamBased_C>();
	}
};

}

