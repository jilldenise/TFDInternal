#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InventoryPreviewAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.OnPrivatePreviewAnimFromWeaponChanged
// 0x0008 (0x0008 - 0x0000)
struct InventoryPreviewAnimBP_C_OnPrivatePreviewAnimFromWeaponChanged final
{
public:
	const class UAnimSequence*                    NewPrivatePreviewAnim;                             // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.LocomotionLayer
// 0x0010 (0x0010 - 0x0000)
struct InventoryPreviewAnimBP_C_LocomotionLayer final
{
public:
	struct FPoseLink                              LocomotionLayer_0;                                 // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.GetRandomAnimSequence
// 0x0050 (0x0050 - 0x0000)
struct InventoryPreviewAnimBP_C_GetRandomAnimSequence final
{
public:
	class UAnimSequence*                          NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequence>           CallFunc_GetRandomAnimSequence_ReturnValue;        // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          K2Node_DynamicCast_AsAnim_Sequence;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.GetIdleAnimSequence
// 0x0050 (0x0050 - 0x0000)
struct InventoryPreviewAnimBP_C_GetIdleAnimSequence final
{
public:
	class UAnimSequence*                          NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAnimSequence>           CallFunc_GetIdleAnimSequence_ReturnValue;          // 0x0008(0x0030)(UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          K2Node_DynamicCast_AsAnim_Sequence;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.ExecuteUbergraph_InventoryPreviewAnimBP
// 0x0098 (0x0098 - 0x0000)
struct InventoryPreviewAnimBP_C_ExecuteUbergraph_InventoryPreviewAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              Temp_class_Variable;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UAnimInstance>              Temp_class_Variable_1;                             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              Temp_class_Variable_2;                             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	EM1CharacterGender                            Temp_byte_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UAnimInstance>              K2Node_Select_Default;                             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	const class UAnimSequence*                    K2Node_Event_NewPrivatePreviewAnim;                // 0x0068(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_GetRandomAnimSequence_NewParam;           // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          CallFunc_GetIdleAnimSequence_NewParam;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast_1;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InventoryPreviewAnimBP.InventoryPreviewAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct InventoryPreviewAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};

}
