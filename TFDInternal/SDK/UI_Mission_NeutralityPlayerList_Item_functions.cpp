#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_NeutralityPlayerList_Item

#include "Basic.hpp"

#include "UI_Mission_NeutralityPlayerList_Item_classes.hpp"
#include "UI_Mission_NeutralityPlayerList_Item_parameters.hpp"


namespace SDK
{

// Function UI_Mission_NeutralityPlayerList_Item.UI_Mission_NeutralityPlayerList_Item_C.ExecuteUbergraph_UI_Mission_NeutralityPlayerList_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_NeutralityPlayerList_Item_C::ExecuteUbergraph_UI_Mission_NeutralityPlayerList_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_NeutralityPlayerList_Item_C", "ExecuteUbergraph_UI_Mission_NeutralityPlayerList_Item");

	Params::UI_Mission_NeutralityPlayerList_Item_C_ExecuteUbergraph_UI_Mission_NeutralityPlayerList_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_NeutralityPlayerList_Item.UI_Mission_NeutralityPlayerList_Item_C.ChangeButtonUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_NeutralityPlayerList_Item_C::ChangeButtonUI(EM1ButtonUIType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_NeutralityPlayerList_Item_C", "ChangeButtonUI");

	Params::UI_Mission_NeutralityPlayerList_Item_C_ChangeButtonUI Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Mission_NeutralityPlayerList_Item.UI_Mission_NeutralityPlayerList_Item_C.BP_ChangeButtonUI
// (Event, Public, BlueprintEvent)
// Parameters:
// EM1ButtonUIType                         InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Mission_NeutralityPlayerList_Item_C::BP_ChangeButtonUI(EM1ButtonUIType InType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Mission_NeutralityPlayerList_Item_C", "BP_ChangeButtonUI");

	Params::UI_Mission_NeutralityPlayerList_Item_C_BP_ChangeButtonUI Parms{};

	Parms.InType = InType;

	UObject::ProcessEvent(Func, &Parms);
}

}

