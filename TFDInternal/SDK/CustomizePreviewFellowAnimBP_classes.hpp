#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomizePreviewFellowAnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass CustomizePreviewFellowAnimBP.CustomizePreviewFellowAnimBP_C
// 0x00D0 (0x03F0 - 0x0320)
class UCustomizePreviewFellowAnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_318[0x8];                                      // 0x0318(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0328(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0330(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0338(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0358(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x03A0(0x0048)()

public:
	void ExecuteUbergraph_CustomizePreviewFellowAnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* AnimGraph_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomizePreviewFellowAnimBP_C">();
	}
	static class UCustomizePreviewFellowAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomizePreviewFellowAnimBP_C>();
	}
};

}
