#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraModifier_DeboneArrived

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.UpdateAfterViews
// 0x0030 (0x0030 - 0x0000)
struct CameraModifier_DeboneArrived_C_UpdateAfterViews final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InRotation;                                        // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutLocation;                                       // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutRotation;                                       // 0x0024(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.StopCameraClamp
// 0x0024 (0x0024 - 0x0000)
struct CameraModifier_DeboneArrived_C_StopCameraClamp final
{
public:
	bool                                          bStop;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatRangeBound                       K2Node_MakeStruct_FloatRangeBound;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                       K2Node_MakeStruct_FloatRangeBound_1;               // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            K2Node_MakeStruct_FloatRange;                      // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessZero
// 0x0034 (0x0034 - 0x0000)
struct CameraModifier_DeboneArrived_C_ProcessZero final
{
public:
	struct FVector                                InViewLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InViewRotation;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutViewLocation;                                   // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutViewRotation;                                   // 0x0024(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFullyOrNone;                                      // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFully
// 0x00B0 (0x00B0 - 0x0000)
struct CameraModifier_DeboneArrived_C_ProcessFully final
{
public:
	struct FVector                                InViewLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InViewRotation;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        DeltaSeconds;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutViewLocation;                                   // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutViewRotation;                                   // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bFullyOrNone;                                      // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_FullyCameraLocation_OutLocation;          // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_UpdateAfterViews_OutLocation;             // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_UpdateAfterViews_OutRotation;             // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FullyCameraRotation_OutRotation;          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FullyCameraRotationClamp_OutBegin;        // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_FullyCameraRotationClamp_OutGoal;         // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_InitFully_OutLocation;                    // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_InitFully_OutRotation;                    // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_RInterpTo_Constant_ReturnValue;           // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RInterpTo_Constant_DeltaTime_ImplicitCast; // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RInterpTo_Constant_InterpSpeed_ImplicitCast; // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeOut
// 0x0068 (0x0068 - 0x0000)
struct CameraModifier_DeboneArrived_C_ProcessFadeOut final
{
public:
	struct FVector                                InViewLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InViewRotation;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutViewLocation;                                   // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutViewRotation;                                   // 0x0024(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetCurvedAlpha_float;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetCurvedAlpha_float_1;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.ProcessFadeIn
// 0x0090 (0x0090 - 0x0000)
struct CameraModifier_DeboneArrived_C_ProcessFadeIn final
{
public:
	struct FVector                                InViewLocation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InViewRotation;                                    // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutViewLocation;                                   // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutViewRotation;                                   // 0x0024(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_GetCurvedAlpha_float;                     // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_GetCurvedAlpha_float_1;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FadeCameraRotation_OutRotation;           // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_FadeCameraLocation_OutLocation;           // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RLerp_ReturnValue;                        // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_UpdateAfterViews_OutLocation;             // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_UpdateAfterViews_OutRotation;             // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RLerp_Alpha_ImplicitCast;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFully
// 0x0020 (0x0020 - 0x0000)
struct CameraModifier_DeboneArrived_C_InitFully final
{
public:
	struct FVector                                OutLocation;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutRotation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeOut
// 0x0001 (0x0001 - 0x0000)
struct CameraModifier_DeboneArrived_C_InitFadeOut final
{
public:
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.InitFadeIn
// 0x0030 (0x0030 - 0x0000)
struct CameraModifier_DeboneArrived_C_InitFadeIn final
{
public:
	struct FVector                                InLocation;                                        // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               InRotation;                                        // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FadeCameraRotation_OutRotation;           // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.GetCurvedAlpha
// 0x0030 (0x0030 - 0x0000)
struct CameraModifier_DeboneArrived_C_GetCurvedAlpha final
{
public:
	double                                        Float;                                             // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue; // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFadeIn_ReturnValue;                     // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_1; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValueFromRuntimeCurve_ReturnValue_2; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_float_ImplicitCast;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_float_ImplicitCast_1;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_FunctionResult_float_ImplicitCast_2;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotationClamp
// 0x0120 (0x0120 - 0x0000)
struct CameraModifier_DeboneArrived_C_FullyCameraRotationClamp final
{
public:
	struct FRotator                               Begin;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Goal;                                              // 0x000C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        DeltaSeconds;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OutBegin;                                          // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               OutGoal;                                           // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue;       // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_ReturnValue_1;                 // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_NegateRotator_ReturnValue;                // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_FInterpTo_Constant_ReturnValue;           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                       K2Node_MakeStruct_FloatRangeBound;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Constant_ReturnValue_1;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRangeBound                       K2Node_MakeStruct_FloatRangeBound_1;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            K2Node_MakeStruct_FloatRange;                      // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_NormalizedDeltaRotator_ReturnValue_1;     // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_ClampAngle_AngleDegrees_ImplicitCast;     // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_AngleDegrees_ImplicitCast_1;   // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_MaxAngleDegrees_ImplicitCast;  // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_MaxAngleDegrees_ImplicitCast_1; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast;  // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast_1; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Constant_Target_ImplicitCast;   // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Constant_Target_ImplicitCast_1; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FInterpTo_Constant_Current_ImplicitCast;  // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Value_ImplicitCast;              // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_FInterpTo_Constant_Current_ImplicitCast_1; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Value_ImplicitCast_1;            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraRotation
// 0x0058 (0x0058 - 0x0000)
struct CameraModifier_DeboneArrived_C_FullyCameraRotation final
{
public:
	struct FRotator                               OutRotation;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FullyCameraLocation
// 0x0060 (0x0060 - 0x0000)
struct CameraModifier_DeboneArrived_C_FullyCameraLocation final
{
public:
	struct FRotator                               InViewRotation;                                    // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                OutLocation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraRotation
// 0x0058 (0x0058 - 0x0000)
struct CameraModifier_DeboneArrived_C_FadeCameraRotation final
{
public:
	struct FRotator                               OutRotation;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.FadeCameraLocation
// 0x0060 (0x0060 - 0x0000)
struct CameraModifier_DeboneArrived_C_FadeCameraLocation final
{
public:
	struct FVector                                OutLocation;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FadeCameraRotation_OutRotation;           // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetViewTarget_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CameraModifier_DeboneArrived.CameraModifier_DeboneArrived_C.BlueprintModifyCamera
// 0x00B0 (0x00B0 - 0x0000)
struct CameraModifier_DeboneArrived_C_BlueprintModifyCamera final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FOV;                                               // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewViewLocation;                                   // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewViewRotation;                                   // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewFOV;                                            // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ProcessZero_OutViewLocation;              // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ProcessZero_OutViewRotation;              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_ProcessFully_OutViewLocation;             // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ProcessFully_OutViewRotation;             // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_ProcessFadeOut_OutViewLocation;           // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ProcessFadeOut_OutViewRotation;           // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_ProcessFadeIn_OutViewLocation;            // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_ProcessFadeIn_OutViewRotation;            // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFadeOut_ReturnValue;                    // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFadeIn_ReturnValue;                     // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F[0x1];                                       // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_ProcessFully_DeltaSeconds_ImplicitCast;   // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

