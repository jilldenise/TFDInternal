#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Mission_Result_ExpValueNotice

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Mission_Result_ExpValueNotice.UI_Mission_Result_ExpValueNotice_C
// 0x0028 (0x0730 - 0x0708)
class UUI_Mission_Result_ExpValueNotice_C final : public UM1UIWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0708(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Open_MasteryRank;                           // 0x0710(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Stack;                                      // 0x0718(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Open;                                       // 0x0720(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UM1TextBlock*                           Text_Exp;                                          // 0x0728(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTextColor(int32 Index_0);
	void SetExpText(EM1UIMissionResultExpType InType, int64 InExp, EM1UIMissionResultExpOwnerType InOwnerType);
	void ExecuteUbergraph_UI_Mission_Result_ExpValueNotice(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Mission_Result_ExpValueNotice_C">();
	}
	static class UUI_Mission_Result_ExpValueNotice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Mission_Result_ExpValueNotice_C>();
	}
};

}

