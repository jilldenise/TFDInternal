#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mana_CustomGuages

#include "Basic.hpp"

#include "M1_structs.hpp"


namespace SDK::Params
{

// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.Set_Numerical
// 0x0001 (0x0001 - 0x0000)
struct UI_Mana_CustomGuages_C_Set_Numerical final
{
public:
	bool                                          InNumber;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Mana_CustomGuages_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.OnEventWidgetOpen
// 0x0001 (0x0001 - 0x0000)
struct UI_Mana_CustomGuages_C_OnEventWidgetOpen final
{
public:
	EM1WidgetAnimDirection                        InDirection;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Mana_CustomGuages.UI_Mana_CustomGuages_C.ExecuteUbergraph_UI_Mana_CustomGuages
// 0x0010 (0x0010 - 0x0000)
struct UI_Mana_CustomGuages_C_ExecuteUbergraph_UI_Mana_CustomGuages final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1WidgetAnimDirection                        K2Node_Event_InDirection;                          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayUIAnimation_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}

