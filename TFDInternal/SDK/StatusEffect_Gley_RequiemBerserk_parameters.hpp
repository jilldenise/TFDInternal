#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusEffect_Gley_RequiemBerserk

#include "Basic.hpp"


namespace SDK::Params
{

// Function StatusEffect_Gley_RequiemBerserk.StatusEffect_Gley_RequiemBerserk_C.ExecuteUbergraph_StatusEffect_Gley_RequiemBerserk
// 0x0018 (0x0018 - 0x0000)
struct StatusEffect_Gley_RequiemBerserk_C_ExecuteUbergraph_StatusEffect_Gley_RequiemBerserk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bCancelled;                           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UNiagaraComponent*>              CallFunc_SpawnFXsForAbility_ReturnValue;           // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
};

// Function StatusEffect_Gley_RequiemBerserk.StatusEffect_Gley_RequiemBerserk_C.BP_OnDeactivated
// 0x0001 (0x0001 - 0x0000)
struct StatusEffect_Gley_RequiemBerserk_C_BP_OnDeactivated final
{
public:
	bool                                          bCancelled;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

