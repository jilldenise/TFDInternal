#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Rune_Exclusive_Character

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_Rune_Exclusive_Character.UI_Rune_Exclusive_Character_C.SetDataImpl
// 0x0008 (0x0008 - 0x0000)
struct UI_Rune_Exclusive_Character_C_SetDataImpl final
{
public:
	class UM1UIData*                              InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Rune_Exclusive_Character.UI_Rune_Exclusive_Character_C.ExecuteUbergraph_UI_Rune_Exclusive_Character
// 0x0068 (0x0068 - 0x0000)
struct UI_Rune_Exclusive_Character_C_ExecuteUbergraph_UI_Rune_Exclusive_Character final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UM1UIData*                              K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UM1UIDataCharacterInfo*                 K2Node_DynamicCast_AsM1UIData_Character_Info;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetCharacterText_ReturnValue;             // 0x0020(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFormat_OneParam_ReturnValue; // 0x0050(0x0018)()
};

}

