#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Common_Fx_Immune

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Common_Fx_Immune.UI_Common_Fx_Immune_C
// 0x0020 (0x0270 - 0x0250)
class UUI_Common_Fx_Immune_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       UIAnim_Immune_End;                                 // 0x0258(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Loop;                                // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       UIAnim_Immune_Start;                               // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void SequenceEvent__ENTRYPOINTUI_Common_Fx_Immune();
	void SequenceEvent();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_Common_Fx_Immune(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Common_Fx_Immune_C">();
	}
	static class UUI_Common_Fx_Immune_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Common_Fx_Immune_C>();
	}
};

}
