#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_MeleeAttackBox

#include "Basic.hpp"

#include "NormalMonster_MeleeAttackBox_classes.hpp"
#include "NormalMonster_MeleeAttackBox_parameters.hpp"


namespace SDK
{

// Function NormalMonster_MeleeAttackBox.NormalMonster_MeleeAttackBox_C.CheckOverlapHitDetection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (Parm, OutParm)

void UNormalMonster_MeleeAttackBox_C::CheckOverlapHitDetection(TArray<class AActor*>* HitActors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_MeleeAttackBox_C", "CheckOverlapHitDetection");

	Params::NormalMonster_MeleeAttackBox_C_CheckOverlapHitDetection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (HitActors != nullptr)
		*HitActors = std::move(Parms.HitActors);
}

}
