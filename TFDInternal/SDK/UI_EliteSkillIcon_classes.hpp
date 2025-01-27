#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_EliteSkillIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_EliteSkillIcon.UI_EliteSkillIcon_C
// 0x0010 (0x08B8 - 0x08A8)
class UUI_EliteSkillIcon_C final : public UM1UIButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x08A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UM1SpriteImage*                         Icon;                                              // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIcon(class UTexture2D* Texture);
	void SetDataImpl(class UM1UIData* InData);
	void ExecuteUbergraph_UI_EliteSkillIcon(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_EliteSkillIcon_C">();
	}
	static class UUI_EliteSkillIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_EliteSkillIcon_C>();
	}
};

}

