#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PerkList

#include "Basic.hpp"

#include "UI_PerkList_classes.hpp"
#include "UI_PerkList_parameters.hpp"


namespace SDK
{

// Function UI_PerkList.UI_PerkList_C.SetPerkItemSize
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PerkList_C::SetPerkItemSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "SetPerkItemSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PerkList.UI_PerkList_C.SetPanelAlign
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PerkList_C::SetPanelAlign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "SetPanelAlign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_PerkList.UI_PerkList_C.SetDataImpl
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_PerkList_C::SetDataImpl(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "SetDataImpl");

	Params::UI_PerkList_C_SetDataImpl Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PerkList.UI_PerkList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PerkList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "PreConstruct");

	Params::UI_PerkList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PerkList.UI_PerkList_C.PerkWidgetOffIfHasNoPerk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM1UIData*                        InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_PerkList_C::PerkWidgetOffIfHasNoPerk(class UM1UIData* InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "PerkWidgetOffIfHasNoPerk");

	Params::UI_PerkList_C_PerkWidgetOffIfHasNoPerk Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_PerkList.UI_PerkList_C.ExecuteUbergraph_UI_PerkList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_PerkList_C::ExecuteUbergraph_UI_PerkList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_PerkList_C", "ExecuteUbergraph_UI_PerkList");

	Params::UI_PerkList_C_ExecuteUbergraph_UI_PerkList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

