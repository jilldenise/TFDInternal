#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_InvasionDungeon_TimeAttackIcon_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_InvasionDungeon_TimeAttackIcon_Item.UI_InvasionDungeon_TimeAttackIcon_Item_C
// 0x00F0 (0x0800 - 0x0710)
class UUI_InvasionDungeon_TimeAttackIcon_Item_C final : public UM1UIInvasionDungeonScoreItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0710(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Fail;                                       // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Active;                                     // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_None;                                       // 0x0728(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0730(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Timer_TextOnly_C*                   UI_Timer;                                          // 0x0738(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            UISet_Icon;                                        // 0x0740(0x00C0)(Edit, BlueprintVisible)

public:
	void SetDataImpl(class UM1UIData* InData);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_InvasionDungeon_TimeAttackIcon_Item(int32 EntryPoint);
	void BP_SetState(EM1InvasionDungeonScoreState InState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_InvasionDungeon_TimeAttackIcon_Item_C">();
	}
	static class UUI_InvasionDungeon_TimeAttackIcon_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_InvasionDungeon_TimeAttackIcon_Item_C>();
	}
};

}

