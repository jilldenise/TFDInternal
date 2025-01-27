#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SimpleMissionItem

#include "Basic.hpp"

#include "UI_SimpleMissionItem_classes.hpp"
#include "UI_SimpleMissionItem_parameters.hpp"


namespace SDK
{

// Function UI_SimpleMissionItem.UI_SimpleMissionItem_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_SimpleMissionItem_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleMissionItem_C", "SetDataImpl");

	Params::UI_SimpleMissionItem_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_SimpleMissionItem.UI_SimpleMissionItem_C.ExecuteUbergraph_UI_SimpleMissionItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SimpleMissionItem_C::ExecuteUbergraph_UI_SimpleMissionItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_SimpleMissionItem_C", "ExecuteUbergraph_UI_SimpleMissionItem");

	Params::UI_SimpleMissionItem_C_ExecuteUbergraph_UI_SimpleMissionItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

