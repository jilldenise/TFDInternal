#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ToastMessageLayer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ToastMessageLayer.UI_ToastMessageLayer_C
// 0x0058 (0x07E8 - 0x0790)
class UUI_ToastMessageLayer_C final : public UM1UIToastMessageLayer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0790(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_ContextButtons_C*                   UI_ContextButtons;                                 // 0x0798(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_B_Crosshair_C*         UI_ToastMessage_B_Crosshair;                       // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_BottomLine_C*          UI_ToastMessage_BottomLine;                        // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_BottomLineButton_C*    UI_ToastMessage_BottomLineButton;                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_CBot_SideItem_C*       UI_ToastMessage_CBot_SideItem;                     // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_CBot_SideItem_C*       UI_ToastMessage_CBot_SideItem_1;                   // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_CBot_SideItem_C*       UI_ToastMessage_CBot_SideItem_2;                   // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_MidLine_C*             UI_ToastMessage_MidLine;                           // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ToastMessage_RTop_Side_C*           UI_ToastMessage_RTop_Side;                         // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bUp;                                               // 0x07E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UI_ToastMessageLayer(int32 EntryPoint);
	void BP_UpdateLayerPosition(bool InVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ToastMessageLayer_C">();
	}
	static class UUI_ToastMessageLayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ToastMessageLayer_C>();
	}
};

}
