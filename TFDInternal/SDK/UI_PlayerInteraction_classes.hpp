#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_PlayerInteraction

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "M1Data_structs.hpp"
#include "M1_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PlayerInteraction.UI_PlayerInteraction_C
// 0x0020 (0x0790 - 0x0770)
class UUI_PlayerInteraction_C final : public UM1UIPlayerInteraction
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0770(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x0778(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Player_Overhaul_C*                  UI_Player_Overhaul;                                // 0x0780(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Social_Platform_Icon_C*             UI_Social_Platform_Icon;                           // 0x0788(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_PlayerInteraction(int32 EntryPoint);
	void Construct();
	void BP_UpdateAwayFromGameplay(bool bAway);
	void BP_SetPlatformIcon(EM1LoginPlatformTypes InLocalPlatformType, EM1LoginPlatformTypes InPlayerPlatformType);
	void BP_ChangedPartyState(bool bPartyMember);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PlayerInteraction_C">();
	}
	static class UUI_PlayerInteraction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PlayerInteraction_C>();
	}
};

}
