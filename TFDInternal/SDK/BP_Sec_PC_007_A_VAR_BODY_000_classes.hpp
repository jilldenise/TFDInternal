#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_007_A_VAR_BODY_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "M1AnimPhys_structs.hpp"
#include "M1_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_PC_007_A_VAR_BODY_000.BP_Sec_PC_007_A_VAR_BODY_000_C
// 0x1630 (0x1950 - 0x0320)
class UBP_Sec_PC_007_A_VAR_BODY_000_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0338(0x00C8)()
	struct FM1AnimNode_ModifyBone_Expression      M1AnimGraphNode_ModifyBone_Expression;             // 0x0400(0x0170)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0570(0x0020)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_4;                        // 0x0590(0x03D0)()
	struct FM1AnimNode_ApplyFacialAdditive        M1AnimGraphNode_ApplyFacialAdditive;               // 0x0960(0x0098)()
	uint8                                         Pad_9F8[0x8];                                      // 0x09F8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_3;                        // 0x0A00(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_2;                        // 0x0DD0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_1;                        // 0x11A0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys;                          // 0x1570(0x03D0)()
	double                                        KawaiiAlpha;                                       // 0x1940(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Sec_PC_007_A_VAR_BODY_000(int32 EntryPoint);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_PC_007_A_VAR_BODY_000_C">();
	}
	static class UBP_Sec_PC_007_A_VAR_BODY_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_PC_007_A_VAR_BODY_000_C>();
	}
};

}
