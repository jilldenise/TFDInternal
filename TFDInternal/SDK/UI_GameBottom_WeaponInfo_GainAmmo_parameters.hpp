#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_GameBottom_WeaponInfo_GainAmmo

#include "Basic.hpp"

#include "M1Data_structs.hpp"


namespace SDK::Params
{

// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_GameBottom_WeaponInfo_GainAmmo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.playAkAudio
// 0x0008 (0x0008 - 0x0000)
struct UI_GameBottom_WeaponInfo_GainAmmo_C_PlayAkAudio final
{
public:
	class UAkAudioEvent*                          AkEvent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo
// 0x0050 (0x0050 - 0x0000)
struct UI_GameBottom_WeaponInfo_GainAmmo_C_ExecuteUbergraph_UI_GameBottom_WeaponInfo_GainAmmo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RoundsType                                 K2Node_Event_InRoundType;                          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_4;                            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_AkEvent;                        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EM1RoundsType                                 Temp_byte_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function UI_GameBottom_WeaponInfo_GainAmmo.UI_GameBottom_WeaponInfo_GainAmmo_C.BP_SetGainRoundsIcon
// 0x0001 (0x0001 - 0x0000)
struct UI_GameBottom_WeaponInfo_GainAmmo_C_BP_SetGainRoundsIcon final
{
public:
	EM1RoundsType                                 InRoundType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

