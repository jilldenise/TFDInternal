#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Button_12

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Button_12.UI_Button_12_C
// 0x0030 (0x08D8 - 0x08A8)
class UUI_Button_12_C final : public UM1UIButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               SizeBoxIcon;                                       // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             IconTexture;                                       // 0x08B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x08C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           IconColor;                                         // 0x08C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetIconSize();
	void SetIconColor();
	void SetIcon(class UTexture2D* InTexture);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Button_12(int32 EntryPoint);
	void BP_Selected(bool InSelected);
	void BP_ChangeButtonUI(EM1ButtonUIType InType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Button_12_C">();
	}
	static class UUI_Button_12_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Button_12_C>();
	}
};

}

