#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_AOE_Spawner

#include "Basic.hpp"

#include "NormalMonster_AOE_Spawner_classes.hpp"
#include "NormalMonster_AOE_Spawner_parameters.hpp"


namespace SDK
{

// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.SpawnHitArea
// (BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Spawner_C::SpawnHitArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "SpawnHitArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.Spawn AOE
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANormalMonster_AOE_Spawner_C::Spawn_AOE()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "Spawn AOE");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.FindRandomLocation2D
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          OutLocation2D                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Spawner_C::FindRandomLocation2D(struct FVector* OutLocation2D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "FindRandomLocation2D");

	Params::NormalMonster_AOE_Spawner_C_FindRandomLocation2D Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation2D != nullptr)
		*OutLocation2D = std::move(Parms.OutLocation2D);
}


// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.FindFloorAtLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          InLocation2D                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OutLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Spawner_C::FindFloorAtLocation(const struct FVector& InLocation2D, struct FVector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "FindFloorAtLocation");

	Params::NormalMonster_AOE_Spawner_C_FindFloorAtLocation Parms{};

	Parms.InLocation2D = std::move(InLocation2D);

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);
}


// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.ExecuteUbergraph_NormalMonster_AOE_Spawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANormalMonster_AOE_Spawner_C::ExecuteUbergraph_NormalMonster_AOE_Spawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "ExecuteUbergraph_NormalMonster_AOE_Spawner");

	Params::NormalMonster_AOE_Spawner_C_ExecuteUbergraph_NormalMonster_AOE_Spawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NormalMonster_AOE_Spawner.NormalMonster_AOE_Spawner_C.BP_OnPostSpawnAbilityActor
// (Event, Protected, BlueprintEvent)

void ANormalMonster_AOE_Spawner_C::BP_OnPostSpawnAbilityActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NormalMonster_AOE_Spawner_C", "BP_OnPostSpawnAbilityActor");

	UObject::ProcessEvent(Func, nullptr);
}

}
