#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ItemIcon_RandomOption_Node

#include "Basic.hpp"

#include "UI_ItemIcon_RandomOption_Node_classes.hpp"
#include "UI_ItemIcon_RandomOption_Node_parameters.hpp"


namespace SDK
{

// Function UI_ItemIcon_RandomOption_Node.UI_ItemIcon_RandomOption_Node_C.SetRandomOptionTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EM1ItemOptionTierType                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_RandomOption_Node_C::SetRandomOptionTier(EM1ItemOptionTierType Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_RandomOption_Node_C", "SetRandomOptionTier");

	Params::UI_ItemIcon_RandomOption_Node_C_SetRandomOptionTier Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_RandomOption_Node.UI_ItemIcon_RandomOption_Node_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_RandomOption_Node_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_RandomOption_Node_C", "PreConstruct");

	Params::UI_ItemIcon_RandomOption_Node_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_RandomOption_Node.UI_ItemIcon_RandomOption_Node_C.ExecuteUbergraph_UI_ItemIcon_RandomOption_Node
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ItemIcon_RandomOption_Node_C::ExecuteUbergraph_UI_ItemIcon_RandomOption_Node(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_RandomOption_Node_C", "ExecuteUbergraph_UI_ItemIcon_RandomOption_Node");

	Params::UI_ItemIcon_RandomOption_Node_C_ExecuteUbergraph_UI_ItemIcon_RandomOption_Node Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ItemIcon_RandomOption_Node.UI_ItemIcon_RandomOption_Node_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ItemIcon_RandomOption_Node_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ItemIcon_RandomOption_Node_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

