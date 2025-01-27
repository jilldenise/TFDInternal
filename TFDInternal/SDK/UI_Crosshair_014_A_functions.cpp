#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Crosshair_014_A

#include "Basic.hpp"

#include "UI_Crosshair_014_A_classes.hpp"
#include "UI_Crosshair_014_A_parameters.hpp"


namespace SDK
{

// Function UI_Crosshair_014_A.UI_Crosshair_014_A_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Crosshair_014_A_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Crosshair_014_A_C", "PreConstruct");

	Params::UI_Crosshair_014_A_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Crosshair_014_A.UI_Crosshair_014_A_C.ExecuteUbergraph_UI_Crosshair_014_A
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Crosshair_014_A_C::ExecuteUbergraph_UI_Crosshair_014_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Crosshair_014_A_C", "ExecuteUbergraph_UI_Crosshair_014_A");

	Params::UI_Crosshair_014_A_C_ExecuteUbergraph_UI_Crosshair_014_A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_Crosshair_014_A.UI_Crosshair_014_A_C.EnemyInWeaponRange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnemyInWeaponRange                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                           AimingNoticeCrosshairColor                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Crosshair_014_A_C::EnemyInWeaponRange(bool bEnemyInWeaponRange, const struct FColor& AimingNoticeCrosshairColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_Crosshair_014_A_C", "EnemyInWeaponRange");

	Params::UI_Crosshair_014_A_C_EnemyInWeaponRange Parms{};

	Parms.bEnemyInWeaponRange = bEnemyInWeaponRange;
	Parms.AimingNoticeCrosshairColor = std::move(AimingNoticeCrosshairColor);

	UObject::ProcessEvent(Func, &Parms);
}

}

