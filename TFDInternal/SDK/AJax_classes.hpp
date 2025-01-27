#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AJax

#include "Basic.hpp"

#include "M1Data_structs.hpp"
#include "PlayerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AJax.AJax_C
// 0x0010 (0x1220 - 0x1210)
class AAJax_C final : public APlayerBase_C
{
public:
	struct FM1ScaledInteger                       SavedCurrentEnergyShield;                          // 0x1208(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FM1ScaledInteger                       SavedCurrentHp;                                    // 0x1210(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AJax_C">();
	}
	static class AAJax_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAJax_C>();
	}
};

}

