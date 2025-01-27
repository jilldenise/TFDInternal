#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_DynamicDialogue

#include "Basic.hpp"

#include "M1_structs.hpp"
#include "M1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_DynamicDialogue.AnimNotify_DynamicDialogue_C
// 0x0000 (0x0048 - 0x0048)
class UAnimNotify_DynamicDialogue_C final : public UM1AnimNotify_DynamicDialogue
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference) const;
	class FString GetNotifyName() const;
	void Get_M1Player_String_ID(class AM1Character* M1Player, class FString* StringId) const;
	void GenerateArgPathes(class AM1Player* InputPin, const TArray<class FString>* Array) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_DynamicDialogue_C">();
	}
	static class UAnimNotify_DynamicDialogue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_DynamicDialogue_C>();
	}
};

}

