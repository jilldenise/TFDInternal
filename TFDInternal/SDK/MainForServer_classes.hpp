#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainForServer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass MainForServer.MainForServer_C
// 0x0A70 (0x0EE0 - 0x0470)
class UMainForServer_C final : public UM1AnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0478(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0480(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x0488(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x04A8(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x0570(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x0590(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x0658(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x0678(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x0740(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x0760(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0828(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0848(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0910(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0930(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x09F8(0x0020)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x0A18(0x0010)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_5;                   // 0x0A28(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_4;                   // 0x0AF0(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_3;                   // 0x0BB8(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_2;                   // 0x0C80(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer_1;                   // 0x0D48(0x00C8)()
	struct FAnimNode_LinkedAnimLayer              AnimGraphNode_LinkedAnimLayer;                     // 0x0E10(0x00C8)()

public:
	void UpperBody_U_R(const struct FPoseLink& InPose_UpperBody_U_R, struct FPoseLink* UpperBody_U_R_0);
	void UpperBody_U(const struct FPoseLink& InPose_UpperBody_U, struct FPoseLink* UpperBody_U_0);
	void UpperBody_L_Additive(const struct FPoseLink& InPose_UpperBody_L_Additive, struct FPoseLink* UpperBody_L_Additive_0);
	void UpperBody_L(const struct FPoseLink& InPose_UpperBody_L, struct FPoseLink* UpperBody_L_0);
	void OnAnimTypeChanged();
	void Motion_M(const struct FPoseLink& InPose_Motion_M, struct FPoseLink* Motion_M_0);
	void FullBody(const struct FPoseLink& InPose_FullBody, struct FPoseLink* FullBody_0);
	void ExecuteUbergraph_MainForServer(int32 EntryPoint);
	void BlueprintLinkedAnimationLayersInitialized();
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainForServer_C">();
	}
	static class UMainForServer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMainForServer_C>();
	}
};

}

