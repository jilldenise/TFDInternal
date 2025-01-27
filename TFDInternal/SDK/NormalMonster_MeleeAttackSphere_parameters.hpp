#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NormalMonster_MeleeAttackSphere

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NormalMonster_MeleeAttackSphere.NormalMonster_MeleeAttackSphere_C.DrawDebugSphere
// 0x0010 (0x0010 - 0x0000)
struct NormalMonster_MeleeAttackSphere_C_DrawDebugSphere final
{
public:
	struct FVector                                SphereCenterLoc;                                   // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_DrawDebugSphere_Radius_ImplicitCast;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function NormalMonster_MeleeAttackSphere.NormalMonster_MeleeAttackSphere_C.CheckOverlapHitDetection
// 0x0028 (0x0028 - 0x0000)
struct NormalMonster_MeleeAttackSphere_C_CheckOverlapHitDetection final
{
public:
	TArray<class AActor*>                         HitActors;                                         // 0x0000(0x0010)(Parm, OutParm)
	TArray<class AActor*>                         CallFunc_FindSphereOverlapActors_OutActors;        // 0x0010(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindSphereOverlapActors_ReturnValue;      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FindSphereOverlapActors_SphereRadius_ImplicitCast; // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

