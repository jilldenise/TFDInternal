#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpperBody

#include "Basic.hpp"

#include "UpperBody_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass UpperBody.UpperBody_C
// 0x1920 (0x1CD0 - 0x03B0)
class UUpperBody_C : public UM1UpperBodyAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct UpperBody::FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                           // 0x03B8(0x004C)(HasGetValueTypeHash)
	uint8                                         Pad_404[0x4];                                      // 0x0404(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0408(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0410(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x0418(0x0020)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_12;                 // 0x0438(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_11;                 // 0x0460(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_10;                 // 0x0488(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_9;                  // 0x04B0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_8;                  // 0x04D8(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_7;                  // 0x0500(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6;                  // 0x0528(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_5;                  // 0x0550(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_4;                  // 0x0578(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_3;                  // 0x05A0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_2;                  // 0x05C8(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x05F0(0x0048)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0638(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x0680(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_7;                       // 0x06C8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x06E8(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x0730(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x0778(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_6;                       // 0x07C0(0x0020)()
	struct FM1AnimNode_Reinitialize               M1AnimGraphNode_Reinitialize_1;                    // 0x07E0(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x0808(0x0048)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x0850(0x0048)()
	struct FM1AnimNode_Reinitialize               M1AnimGraphNode_Reinitialize;                      // 0x0898(0x0028)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x08C0(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_5;                       // 0x0908(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x0928(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_4;                       // 0x0970(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x0990(0x0048)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_3;                       // 0x09D8(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x09F8(0x0048)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0A40(0x00C8)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_6;                     // 0x0B08(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_2;                       // 0x0B30(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_1;                      // 0x0B50(0x00C8)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x0C18(0x00C8)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_2;                    // 0x0CE0(0x0080)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose_1;                    // 0x0D60(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_1;                  // 0x0DE0(0x0028)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult;                    // 0x0E08(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_5;                     // 0x0E30(0x0028)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult_1;                       // 0x0E58(0x0020)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_2;                  // 0x0E78(0x0070)()
	struct FAnimNode_StateResult                  AnimGraphNode_StateResult;                         // 0x0EE8(0x0020)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine;                        // 0x0F08(0x00C8)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x0FD0(0x0020)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x0FF0(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x10B8(0x0070)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x1128(0x00C8)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_3;          // 0x11F0(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_2;          // 0x1308(0x0118)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1420(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1468(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x14B0(0x0048)()
	struct FM1AnimNode_TurnInPlace                M1AnimGraphNode_TurnInPlace;                       // 0x14F8(0x02C8)(ContainsInstancedReference)
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x17C0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1808(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x1850(0x0070)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x18C0(0x0080)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_4;                     // 0x1940(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_3;                     // 0x1968(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_2;                     // 0x1990(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x19B8(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x19E0(0x0028)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace_1;          // 0x1A08(0x0118)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x1B20(0x0118)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x1C38(0x0020)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x1C58(0x0048)()
	bool                                          bIsHighReady;                                      // 0x1CA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CA1[0x7];                                     // 0x1CA1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           SpineLeanSlotNames;                                // 0x1CA8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           SpineLeanSlotGroupNames;                           // 0x1CB8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bBareHand;                                         // 0x1CC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseOnlyUpperbodyAnim;                             // 0x1CC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpperBodyLayer(const struct FPoseLink& InputPose, struct FPoseLink* UpperBodyLayer_0);
	void ExecuteUbergraph_UpperBody(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_8724D40A458AA26A812B20980B9362F9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F9B8E4EF4B966F4B6A577980E4FCEA16();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_F18BA7DA4BDECA87617EE38DD1948ABF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_D949585342D0BA077C74DCBD58BEEA12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_C480E8464FE0C1DF7C895E8DDBA2AFB5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_AA1E39994E03E973127A3CB8FE2661CD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_A5D76D764C7B7F2F72745587E03170EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_660AA5EA4112DE416672B499C79B4C99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_5BBDCE6D4942B1EC3FBEE1BC3686208F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_38B0CA594BCA0622BE8F02A0FCD65ACF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_252EE1794D670895304D6B9BC18419B6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_2343FDC4431154CEC19FE381F9F04B71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_1986F49142BEEC963E972B845EF15F92();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_TransitionResult_16C28B4D47A0F2091512C8AC96D7D503();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_M1AnimGraphNode_Reinitialize_B0B3BA3645600B7C4B81C5BE06C3E1CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_UpperBody_AnimGraphNode_RotationOffsetBlendSpace_2B98A1F641FB474C685B479FE1C14AAD();
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void AimOffsetLayer(const struct FPoseLink& InPose, struct FPoseLink* AimOffsetLayer_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UpperBody_C">();
	}
	static class UUpperBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpperBody_C>();
	}
};

}
