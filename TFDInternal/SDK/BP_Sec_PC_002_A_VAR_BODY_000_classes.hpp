#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Sec_PC_002_A_VAR_BODY_000

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "M1AnimPhys_structs.hpp"
#include "M1_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass BP_Sec_PC_002_A_VAR_BODY_000.BP_Sec_PC_002_A_VAR_BODY_000_C
// 0x4660 (0x4980 - 0x0320)
class UBP_Sec_PC_002_A_VAR_BODY_000_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	uint8                                         Pad_338[0x8];                                      // 0x0338(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_17;                       // 0x0340(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_16;                       // 0x0710(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_15;                       // 0x0AE0(0x03D0)()
	struct FM1AnimNode_ApplyFacialAdditive        M1AnimGraphNode_ApplyFacialAdditive;               // 0x0EB0(0x0098)()
	uint8                                         Pad_F48[0x8];                                      // 0x0F48(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_14;                       // 0x0F50(0x03D0)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1320(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x1340(0x00C8)()
	uint8                                         Pad_1408[0x8];                                     // 0x1408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_13;                       // 0x1410(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_12;                       // 0x17E0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_11;                       // 0x1BB0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_10;                       // 0x1F80(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_9;                        // 0x2350(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_8;                        // 0x2720(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_7;                        // 0x2AF0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_6;                        // 0x2EC0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_5;                        // 0x3290(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_4;                        // 0x3660(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_3;                        // 0x3A30(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_2;                        // 0x3E00(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys_1;                        // 0x41D0(0x03D0)()
	struct FM1AnimNode_AnimPhys                   M1AnimGraphNode_AnimPhys;                          // 0x45A0(0x03D0)()
	double                                        KawaiiAlpha;                                       // 0x4970(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Sec_PC_002_A_VAR_BODY_000(int32 EntryPoint);
	void BlueprintThreadSafeUpdateAnimation(float DeltaTime);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Sec_PC_002_A_VAR_BODY_000_C">();
	}
	static class UBP_Sec_PC_002_A_VAR_BODY_000_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Sec_PC_002_A_VAR_BODY_000_C>();
	}
};

}

