#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_001_Specification_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function M_001_Specification_BP.M_001_Specification_BP_C.SpecificationLayer
// 0x0020 (0x0020 - 0x0000)
struct M_001_Specification_BP_C_SpecificationLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              SpecificationLayer_0;                              // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};

// Function M_001_Specification_BP.M_001_Specification_BP_C.ExecuteUbergraph_M_001_Specification_BP
// 0x0004 (0x0004 - 0x0000)
struct M_001_Specification_BP_C_ExecuteUbergraph_M_001_Specification_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function M_001_Specification_BP.M_001_Specification_BP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct M_001_Specification_BP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

}
