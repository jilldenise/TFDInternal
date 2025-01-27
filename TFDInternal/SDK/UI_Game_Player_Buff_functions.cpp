#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Game_Player_Buff

#include "Basic.hpp"

#include "UI_Game_Player_Buff_classes.hpp"
#include "UI_Game_Player_Buff_parameters.hpp"


namespace SDK
{

// Function UI_Game_Player_Buff.UI_Game_Player_Buff_C.SetZoomAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InZoomed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Player_Buff_C::SetZoomAnimation(bool InZoomed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Player_Buff_C", "SetZoomAnimation");

	Params::UI_Game_Player_Buff_C_SetZoomAnimation Parms{};

	Parms.InZoomed = InZoomed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Player_Buff.UI_Game_Player_Buff_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Player_Buff_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Player_Buff_C", "PreConstruct");

	Params::UI_Game_Player_Buff_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Player_Buff.UI_Game_Player_Buff_C.ExecuteUbergraph_UI_Game_Player_Buff
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Player_Buff_C::ExecuteUbergraph_UI_Game_Player_Buff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Player_Buff_C", "ExecuteUbergraph_UI_Game_Player_Buff");

	Params::UI_Game_Player_Buff_C_ExecuteUbergraph_UI_Game_Player_Buff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Player_Buff.UI_Game_Player_Buff_C.BP_OnChangeWeaponZoom
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bInZoomed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Player_Buff_C::BP_OnChangeWeaponZoom(bool bInZoomed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Player_Buff_C", "BP_OnChangeWeaponZoom");

	Params::UI_Game_Player_Buff_C_BP_OnChangeWeaponZoom Parms{};

	Parms.bInZoomed = bInZoomed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Game_Player_Buff.UI_Game_Player_Buff_C.BP_OnChangeStatusEffectCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Game_Player_Buff_C::BP_OnChangeStatusEffectCount(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Game_Player_Buff_C", "BP_OnChangeStatusEffectCount");

	Params::UI_Game_Player_Buff_C_BP_OnChangeStatusEffectCount Parms{};

	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

