#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Fellow_Skill_Noti

#include "Basic.hpp"

#include "UI_Game_Fellow_Skill_Noti_classes.hpp"
#include "UI_Game_Fellow_Skill_Noti_parameters.hpp"


namespace SDK
{

// Function UI_Game_Fellow_Skill_Noti.UI_Game_Fellow_Skill_Noti_C.OnEventWidgetOpen
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1WidgetAnimDirection                  InDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Fellow_Skill_Noti_C::OnEventWidgetOpen(EM1WidgetAnimDirection InDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Fellow_Skill_Noti_C", "OnEventWidgetOpen");

	Params::UI_Game_Fellow_Skill_Noti_C_OnEventWidgetOpen Parms{};

	Parms.InDirection = InDirection;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Fellow_Skill_Noti.UI_Game_Fellow_Skill_Noti_C.ExecuteUbergraph_UI_Game_Fellow_Skill_Noti
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Fellow_Skill_Noti_C::ExecuteUbergraph_UI_Game_Fellow_Skill_Noti(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Fellow_Skill_Noti_C", "ExecuteUbergraph_UI_Game_Fellow_Skill_Noti");

	Params::UI_Game_Fellow_Skill_Noti_C_ExecuteUbergraph_UI_Game_Fellow_Skill_Noti Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Fellow_Skill_Noti.UI_Game_Fellow_Skill_Noti_C.BP_SetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EM1FellowAutoDecomposeSkillState        InState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Fellow_Skill_Noti_C::BP_SetState(EM1FellowAutoDecomposeSkillState InState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Fellow_Skill_Noti_C", "BP_SetState");

	Params::UI_Game_Fellow_Skill_Noti_C_BP_SetState Parms{};

	Parms.InState = InState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Fellow_Skill_Noti.UI_Game_Fellow_Skill_Noti_C.BP_OnInvokedAutoDecompose
// (Event, Protected, BlueprintEvent)

void UUI_Game_Fellow_Skill_Noti_C::BP_OnInvokedAutoDecompose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Fellow_Skill_Noti_C", "BP_OnInvokedAutoDecompose");

	UObject::ProcessEvent(Func, nullptr);
}

}

