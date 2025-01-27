#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InstanceDungeon_ScoreBar

#include "Basic.hpp"

#include "UI_InstanceDungeon_ScoreBar_classes.hpp"
#include "UI_InstanceDungeon_ScoreBar_parameters.hpp"


namespace SDK
{

// Function UI_InstanceDungeon_ScoreBar.UI_InstanceDungeon_ScoreBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InstanceDungeon_ScoreBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_ScoreBar_C", "PreConstruct");

	Params::UI_InstanceDungeon_ScoreBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InstanceDungeon_ScoreBar.UI_InstanceDungeon_ScoreBar_C.ExecuteUbergraph_UI_InstanceDungeon_ScoreBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_InstanceDungeon_ScoreBar_C::ExecuteUbergraph_UI_InstanceDungeon_ScoreBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_ScoreBar_C", "ExecuteUbergraph_UI_InstanceDungeon_ScoreBar");

	Params::UI_InstanceDungeon_ScoreBar_C_ExecuteUbergraph_UI_InstanceDungeon_ScoreBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_InstanceDungeon_ScoreBar.UI_InstanceDungeon_ScoreBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InstanceDungeon_ScoreBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_ScoreBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_InstanceDungeon_ScoreBar.UI_InstanceDungeon_ScoreBar_C.BP_PlayMyScorePositionAnim
// (Event, Protected, BlueprintEvent)

void UUI_InstanceDungeon_ScoreBar_C::BP_PlayMyScorePositionAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_InstanceDungeon_ScoreBar_C", "BP_PlayMyScorePositionAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}

