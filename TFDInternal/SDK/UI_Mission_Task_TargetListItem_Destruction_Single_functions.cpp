#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Task_TargetListItem_Destruction_Single

#include "Basic.hpp"

#include "UI_Mission_Task_TargetListItem_Destruction_Single_classes.hpp"
#include "UI_Mission_Task_TargetListItem_Destruction_Single_parameters.hpp"


namespace SDK
{

// Function UI_Mission_Task_TargetListItem_Destruction_Single.UI_Mission_Task_TargetListItem_Destruction_Single_C.ExecuteUbergraph_UI_Mission_Task_TargetListItem_Destruction_Single
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem_Destruction_Single_C::ExecuteUbergraph_UI_Mission_Task_TargetListItem_Destruction_Single(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Destruction_Single_C", "ExecuteUbergraph_UI_Mission_Task_TargetListItem_Destruction_Single");

	Params::UI_Mission_Task_TargetListItem_Destruction_Single_C_ExecuteUbergraph_UI_Mission_Task_TargetListItem_Destruction_Single Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_Task_TargetListItem_Destruction_Single.UI_Mission_Task_TargetListItem_Destruction_Single_C.BP_SetImmune
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bImmune                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_Task_TargetListItem_Destruction_Single_C::BP_SetImmune(bool bImmune)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_Task_TargetListItem_Destruction_Single_C", "BP_SetImmune");

	Params::UI_Mission_Task_TargetListItem_Destruction_Single_C_BP_SetImmune Parms{};

	Parms.bImmune = bImmune;

	UObject::ProcessEvent(Func, &Parms);
}

}

