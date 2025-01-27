#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_KeyButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_KeyButton.UI_KeyButton_C
// 0x0028 (0x0918 - 0x08F0)
class UUI_KeyButton_C final : public UM1UIKeyButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ANIM_Focus;                                        // 0x08F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_1;                                   // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bShowText;                                         // 0x0910(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Focused;                                           // 0x0911(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetTextureAndOpacity(class UImage* Target, class UTexture* PaperTexture, double Opacity);
	void SetTextColor(const struct FSlateColor& KeyText, const struct FSlateColor& ButtonText);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_KeyButton(int32 EntryPoint);
	void BP_ChangeDimmedUI(const bool InDimmed);
	void BP_ChangeButtonUI(EM1ButtonUIType InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_KeyButton_C">();
	}
	static class UUI_KeyButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_KeyButton_C>();
	}
};

}

