#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_SkillIconCustom_AJaxActive4

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UI_SkillIconCustom_AJaxActiveBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_SkillIconCustom_AJaxActive4.UI_SkillIconCustom_AJaxActive4_C
// 0x0010 (0x0820 - 0x0810)
class UUI_SkillIconCustom_AJaxActive4_C final : public UUI_SkillIconCustom_AJaxActiveBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UI_SkillIconCustom_AJaxActive4_C;   // 0x0810(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_SkillIconCustom_AJaxActive4(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_SkillIconCustom_AJaxActive4_C">();
	}
	static class UUI_SkillIconCustom_AJaxActive4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_SkillIconCustom_AJaxActive4_C>();
	}
};

}
