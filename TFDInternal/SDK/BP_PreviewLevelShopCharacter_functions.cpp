#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PreviewLevelShopCharacter

#include "Basic.hpp"

#include "BP_PreviewLevelShopCharacter_classes.hpp"
#include "BP_PreviewLevelShopCharacter_parameters.hpp"


namespace SDK
{

// Function BP_PreviewLevelShopCharacter.BP_PreviewLevelShopCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PreviewLevelShopCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelShopCharacter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PreviewLevelShopCharacter.BP_PreviewLevelShopCharacter_C.ExecuteUbergraph_BP_PreviewLevelShopCharacter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PreviewLevelShopCharacter_C::ExecuteUbergraph_BP_PreviewLevelShopCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PreviewLevelShopCharacter_C", "ExecuteUbergraph_BP_PreviewLevelShopCharacter");

	Params::BP_PreviewLevelShopCharacter_C_ExecuteUbergraph_BP_PreviewLevelShopCharacter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
