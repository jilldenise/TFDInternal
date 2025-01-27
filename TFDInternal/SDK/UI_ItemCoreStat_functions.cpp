#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemCoreStat

#include "Basic.hpp"

#include "UI_ItemCoreStat_classes.hpp"
#include "UI_ItemCoreStat_parameters.hpp"


namespace SDK
{

// Function UI_ItemCoreStat.UI_ItemCoreStat_C.SetUILayout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Vertical                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemCoreStat_C::SetUILayout(bool Vertical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemCoreStat_C", "SetUILayout");

	Params::UI_ItemCoreStat_C_SetUILayout Parms{};

	Parms.Vertical = Vertical;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemCoreStat.UI_ItemCoreStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemCoreStat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemCoreStat_C", "PreConstruct");

	Params::UI_ItemCoreStat_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemCoreStat.UI_ItemCoreStat_C.ExecuteUbergraph_UI_ItemCoreStat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemCoreStat_C::ExecuteUbergraph_UI_ItemCoreStat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemCoreStat_C", "ExecuteUbergraph_UI_ItemCoreStat");

	Params::UI_ItemCoreStat_C_ExecuteUbergraph_UI_ItemCoreStat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemCoreStat.UI_ItemCoreStat_C.BP_SetDiffStatValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsZero                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPositiveNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemCoreStat_C::BP_SetDiffStatValue(bool bIsZero, bool bPositiveNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemCoreStat_C", "BP_SetDiffStatValue");

	Params::UI_ItemCoreStat_C_BP_SetDiffStatValue Parms{};

	Parms.bIsZero = bIsZero;
	Parms.bPositiveNum = bPositiveNum;

	UObject::ProcessEvent(Func, &Parms);
}

}

