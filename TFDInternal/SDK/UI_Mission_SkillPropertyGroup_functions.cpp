#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_SkillPropertyGroup

#include "Basic.hpp"

#include "UI_Mission_SkillPropertyGroup_classes.hpp"
#include "UI_Mission_SkillPropertyGroup_parameters.hpp"


namespace SDK
{

// Function UI_Mission_SkillPropertyGroup.UI_Mission_SkillPropertyGroup_C.SetElementalType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ElementalDamageChannel               InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_SkillPropertyGroup_C::SetElementalType(EM1ElementalDamageChannel InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_SkillPropertyGroup_C", "SetElementalType");

	Params::UI_Mission_SkillPropertyGroup_C_SetElementalType Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}

}

