#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_009_Jeffer_Barricade01A

#include "Basic.hpp"

#include "NPC_009_Jeffer_Barricade01A_classes.hpp"
#include "NPC_009_Jeffer_Barricade01A_parameters.hpp"


namespace SDK
{

// Function NPC_009_Jeffer_Barricade01A.NPC_009_Jeffer_Barricade01A_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_009_Jeffer_Barricade01A_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_009_Jeffer_Barricade01A_C", "ReceiveTick");

	Params::NPC_009_Jeffer_Barricade01A_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_009_Jeffer_Barricade01A.NPC_009_Jeffer_Barricade01A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_009_Jeffer_Barricade01A_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_009_Jeffer_Barricade01A_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_009_Jeffer_Barricade01A.NPC_009_Jeffer_Barricade01A_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ANPC_009_Jeffer_Barricade01A_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_009_Jeffer_Barricade01A_C", "ReceiveActorBeginOverlap");

	Params::NPC_009_Jeffer_Barricade01A_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_009_Jeffer_Barricade01A.NPC_009_Jeffer_Barricade01A_C.ExecuteUbergraph_NPC_009_Jeffer_Barricade01A
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_009_Jeffer_Barricade01A_C::ExecuteUbergraph_NPC_009_Jeffer_Barricade01A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_009_Jeffer_Barricade01A_C", "ExecuteUbergraph_NPC_009_Jeffer_Barricade01A");

	Params::NPC_009_Jeffer_Barricade01A_C_ExecuteUbergraph_NPC_009_Jeffer_Barricade01A Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
