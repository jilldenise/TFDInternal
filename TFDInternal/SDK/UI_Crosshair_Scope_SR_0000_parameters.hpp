#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Crosshair_Scope_SR_0000

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UI_Crosshair_Scope_SR_0000.UI_Crosshair_Scope_SR_0000_C.SetUI
// 0x0028 (0x0028 - 0x0000)
struct UI_Crosshair_Scope_SR_0000_C_SetUI final
{
public:
	class USizeBoxSlot*                           CallFunc_SlotAsSizeBoxSlot_ReturnValue;            // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast;   // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D                K2Node_SetFieldsInStruct_ImageSize_ImplicitCast_1; // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetOpacity_InOpacity_ImplicitCast;        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Crosshair_Scope_SR_0000.UI_Crosshair_Scope_SR_0000_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_Crosshair_Scope_SR_0000_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Crosshair_Scope_SR_0000.UI_Crosshair_Scope_SR_0000_C.ExecuteUbergraph_UI_Crosshair_Scope_SR_0000
// 0x0008 (0x0008 - 0x0000)
struct UI_Crosshair_Scope_SR_0000_C_ExecuteUbergraph_UI_Crosshair_Scope_SR_0000 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Crosshair_Scope_SR_0000.UI_Crosshair_Scope_SR_0000_C.ApplyCrosshairGridOpacity
// 0x0010 (0x0010 - 0x0000)
struct UI_Crosshair_Scope_SR_0000_C_ApplyCrosshairGridOpacity final
{
public:
	double                                        Opacity;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
