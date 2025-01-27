#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_MultiSupply

#include "Basic.hpp"

#include "NPC_MultiSupply_classes.hpp"
#include "NPC_MultiSupply_parameters.hpp"


namespace SDK
{

// Function NPC_MultiSupply.NPC_MultiSupply_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_MultiSupply_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_MultiSupply_C", "ReceiveTick");

	Params::NPC_MultiSupply_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_MultiSupply.NPC_MultiSupply_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_MultiSupply_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_MultiSupply_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_MultiSupply.NPC_MultiSupply_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_MultiSupply_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_MultiSupply_C", "ReceiveActorBeginOverlap");

	Params::NPC_MultiSupply_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_MultiSupply.NPC_MultiSupply_C.ExecuteUbergraph_NPC_MultiSupply
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_MultiSupply_C::ExecuteUbergraph_NPC_MultiSupply(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_MultiSupply_C", "ExecuteUbergraph_NPC_MultiSupply");

	Params::NPC_MultiSupply_C_ExecuteUbergraph_NPC_MultiSupply Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

