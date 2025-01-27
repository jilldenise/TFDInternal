#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemOptionStat

#include "Basic.hpp"

#include "UI_ItemOptionStat_classes.hpp"
#include "UI_ItemOptionStat_parameters.hpp"


namespace SDK
{

// Function UI_ItemOptionStat.UI_ItemOptionStat_C.UISet_StatTierColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ItemOptionTierType                   OptionTier                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemOptionStat_C::UISet_StatTierColor(EM1ItemOptionTierType OptionTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemOptionStat_C", "UISet_StatTierColor");

	Params::UI_ItemOptionStat_C_UISet_StatTierColor Parms{};

	Parms.OptionTier = OptionTier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemOptionStat.UI_ItemOptionStat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemOptionStat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemOptionStat_C", "PreConstruct");

	Params::UI_ItemOptionStat_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemOptionStat.UI_ItemOptionStat_C.ExecuteUbergraph_UI_ItemOptionStat
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemOptionStat_C::ExecuteUbergraph_UI_ItemOptionStat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemOptionStat_C", "ExecuteUbergraph_UI_ItemOptionStat");

	Params::UI_ItemOptionStat_C_ExecuteUbergraph_UI_ItemOptionStat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemOptionStat.UI_ItemOptionStat_C.BP_SetOptionTier
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ItemOptionTierType                   InOptionTier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemOptionStat_C::BP_SetOptionTier(EM1ItemOptionTierType InOptionTier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemOptionStat_C", "BP_SetOptionTier");

	Params::UI_ItemOptionStat_C_BP_SetOptionTier Parms{};

	Parms.InOptionTier = InOptionTier;

	UObject::ProcessEvent(Func, &Parms);
}

}

