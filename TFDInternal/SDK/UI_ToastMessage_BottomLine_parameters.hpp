#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessage_BottomLine

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.UIplayakevent
// 0x0008 (0x0008 - 0x0000)
struct UI_ToastMessage_BottomLine_C_UIplayakevent final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ToastMessage_BottomLine.UI_ToastMessage_BottomLine_C.ExecuteUbergraph_UI_ToastMessage_BottomLine
// 0x0010 (0x0010 - 0x0000)
struct UI_ToastMessage_BottomLine_C_ExecuteUbergraph_UI_ToastMessage_BottomLine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

