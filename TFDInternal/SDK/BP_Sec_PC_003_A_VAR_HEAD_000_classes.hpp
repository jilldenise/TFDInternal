#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_003_A_VAR_HEAD_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1AnimPhys_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_PC_003_A_VAR_HEAD_000.BP_Sec_PC_003_A_VAR_HEAD_000_C
// 0x1BB0 (0x1F10 - 0x0360)
class UBP_Sec_PC_003_A_VAR_HEAD_000_C final : public UM1BaseAttachmentAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0368(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0370(0x0008)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0378(0x00C8)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_6;                        // 0x0440(0x03D0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0810(0x0020)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_5;                        // 0x0830(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_4;                        // 0x0C00(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_3;                        // 0x0FD0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_2;                        // 0x13A0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_1;                        // 0x1770(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys;                          // 0x1B40(0x03D0)()

public:
	void ExecuteUbergraph_BP_Sec_PC_003_A_VAR_HEAD_000(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_PC_003_A_VAR_HEAD_000_C">();
	}
	static class UBP_Sec_PC_003_A_VAR_HEAD_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_PC_003_A_VAR_HEAD_000_C>();
	}
};

}
