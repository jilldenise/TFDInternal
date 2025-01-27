#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LNCFireProjectile

#include "Basic.hpp"

#include "LNCFireProjectile_classes.hpp"
#include "LNCFireProjectile_parameters.hpp"


namespace SDK
{

// Function LNCFireProjectile.LNCFireProjectile_C.ExecuteUbergraph_LNCFireProjectile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULNCFireProjectile_C::ExecuteUbergraph_LNCFireProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LNCFireProjectile_C", "ExecuteUbergraph_LNCFireProjectile");

	Params::LNCFireProjectile_C_ExecuteUbergraph_LNCFireProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LNCFireProjectile.LNCFireProjectile_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void ULNCFireProjectile_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LNCFireProjectile_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}

}

