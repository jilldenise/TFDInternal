#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton01

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "M1_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UI_KeyButton01.UI_KeyButton01_C.SetTextureAndOpacity
// 0x00F0 (0x00F0 - 0x0000)
struct UI_KeyButton01_C_SetTextureAndOpacity final
{
public:
	class UImage*                                 Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               PaperTexture;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        Opacity;                                           // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0020(0x00C0)()
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton01.UI_KeyButton01_C.SetTextColor
// 0x0028 (0x0028 - 0x0000)
struct UI_KeyButton01_C_SetTextColor final
{
public:
	struct FSlateColor                            KeyText;                                           // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                            ButtonText;                                        // 0x0014(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_KeyButton01.UI_KeyButton01_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton01_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton01.UI_KeyButton01_C.ExecuteUbergraph_UI_KeyButton01
// 0x0050 (0x0050 - 0x0000)
struct UI_KeyButton01_C_ExecuteUbergraph_UI_KeyButton01 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0014)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x001C(0x0014)()
	EM1ButtonUIType                               K2Node_Event_InType;                               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_InDimmed;                             // 0x0031(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AM1PlayerController*                    K2Node_DynamicCast_AsM1Player_Controller;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton01.UI_KeyButton01_C.BP_ChangeDimmedUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton01_C_BP_ChangeDimmedUI final
{
public:
	bool                                          InDimmed;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_KeyButton01.UI_KeyButton01_C.BP_ChangeButtonUI
// 0x0001 (0x0001 - 0x0000)
struct UI_KeyButton01_C_BP_ChangeButtonUI final
{
public:
	EM1ButtonUIType                               InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
