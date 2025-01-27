#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlayerControllerInGame

#include "Basic.hpp"

#include "BP_PlayerControllerInGame_classes.hpp"
#include "BP_PlayerControllerInGame_parameters.hpp"


namespace SDK
{

// Function BP_PlayerControllerInGame.BP_PlayerControllerInGame_C.SendLargeArray
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PlayerControllerInGame_C::SendLargeArray(const TArray<class FString>& InArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerInGame_C", "SendLargeArray");

	Params::BP_PlayerControllerInGame_C_SendLargeArray Parms{};

	Parms.InArray = std::move(InArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerControllerInGame.BP_PlayerControllerInGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerControllerInGame_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerInGame_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerControllerInGame.BP_PlayerControllerInGame_C.ExecuteUbergraph_BP_PlayerControllerInGame
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerControllerInGame_C::ExecuteUbergraph_BP_PlayerControllerInGame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerControllerInGame_C", "ExecuteUbergraph_BP_PlayerControllerInGame");

	Params::BP_PlayerControllerInGame_C_ExecuteUbergraph_BP_PlayerControllerInGame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

