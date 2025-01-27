#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPL_Runes

#include "Basic.hpp"

#include "BPL_Runes_classes.hpp"
#include "BPL_Runes_parameters.hpp"


namespace SDK
{

// Function BPL_Runes.BPL_Runes_C.ShowChildrenOfParent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     InParent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   InCountToShow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPL_Runes_C::ShowChildrenOfParent(class UPanelWidget* InParent, int32 InCountToShow, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "ShowChildrenOfParent");

	Params::BPL_Runes_C_ShowChildrenOfParent Parms{};

	Parms.InParent = InParent;
	Parms.InCountToShow = InCountToShow;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Runes.BPL_Runes_C.GetTextBySocketType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneSocketType                       InSocketColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPL_Runes_C::GetTextBySocketType(EM1RuneSocketType InSocketColor, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetTextBySocketType");

	Params::BPL_Runes_C_GetTextBySocketType Parms{};

	Parms.InSocketColor = InSocketColor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.GetTextByRuneSocketType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             NewParam                                               (Parm, OutParm)

void UBPL_Runes_C::GetTextByRuneSocketType(EM1RuneClassType InClassType, class UObject* __WorldContext, class FText* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetTextByRuneSocketType");

	Params::BPL_Runes_C_GetTextByRuneSocketType Parms{};

	Parms.InClassType = InClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);
}


// Function BPL_Runes.BPL_Runes_C.GetTextByRuneClassType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnUIKey                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UBPL_Runes_C::GetTextByRuneClassType(EM1RuneClassType InClassType, class UObject* __WorldContext, class FString* ReturnUIKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetTextByRuneClassType");

	Params::BPL_Runes_C_GetTextByRuneClassType Parms{};

	Parms.InClassType = InClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ReturnUIKey != nullptr)
		*ReturnUIKey = std::move(Parms.ReturnUIKey);
}


// Function BPL_Runes.BPL_Runes_C.GetTextByItemClassType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1EquipItemClassType                   ItemClassType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UBPL_Runes_C::GetTextByItemClassType(EM1EquipItemClassType ItemClassType, class UObject* __WorldContext, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetTextByItemClassType");

	Params::BPL_Runes_C_GetTextByItemClassType Parms{};

	Parms.ItemClassType = ItemClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function BPL_Runes.BPL_Runes_C.GetRuneClassTypeBackImage
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::GetRuneClassTypeBackImage(EM1RuneClassType InRuneClassType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetRuneClassTypeBackImage");

	Params::BPL_Runes_C_GetRuneClassTypeBackImage Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.GetIconImageByItemClassType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1EquipItemClassType                   ItemClassType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Image                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPL_Runes_C::GetIconImageByItemClassType(EM1EquipItemClassType ItemClassType, class UObject* __WorldContext, class UTexture2D** Image)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "GetIconImageByItemClassType");

	Params::BPL_Runes_C_GetIconImageByItemClassType Parms{};

	Parms.ItemClassType = ItemClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Image != nullptr)
		*Image = Parms.Image;
}


// Function BPL_Runes.BPL_Runes_C.Get Tooltip Text by Rune Class
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1UITextType                           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPL_Runes_C::Get_Tooltip_Text_by_Rune_Class(EM1RuneClassType InRuneClassType, EM1UITextType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Tooltip Text by Rune Class");

	Params::BPL_Runes_C_Get_Tooltip_Text_by_Rune_Class Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Text By Supported Types By Rune Class
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1UITextType                           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPL_Runes_C::Get_Text_By_Supported_Types_By_Rune_Class(EM1RuneClassType InRuneClassType, EM1UITextType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Text By Supported Types By Rune Class");

	Params::BPL_Runes_C_Get_Text_By_Supported_Types_By_Rune_Class Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Text by Rune Class Type Capacity
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPL_Runes_C::Get_Text_by_Rune_Class_Type_Capacity(EM1RuneClassType InRuneClassType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Text by Rune Class Type Capacity");

	Params::BPL_Runes_C_Get_Text_by_Rune_Class_Type_Capacity Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Tab Text By Supported Types By Rune Class
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EM1UITextType                           InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBPL_Runes_C::Get_Tab_Text_By_Supported_Types_By_Rune_Class(EM1RuneClassType InRuneClassType, EM1UITextType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Tab Text By Supported Types By Rune Class");

	Params::BPL_Runes_C_Get_Tab_Text_By_Supported_Types_By_Rune_Class Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Socket Type Mini Image
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneSocketType                       InRuneSocketType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Socket_Type_Mini_Image(EM1RuneSocketType InRuneSocketType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Socket Type Mini Image");

	Params::BPL_Runes_C_Get_Rune_Socket_Type_Mini_Image Parms{};

	Parms.InRuneSocketType = InRuneSocketType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Socket Image
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneSocketType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Socket_Image(EM1RuneSocketType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Socket Image");

	Params::BPL_Runes_C_Get_Rune_Socket_Image Parms{};

	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Class Type Mini Image_Color
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Class_Type_Mini_Image_Color(EM1RuneClassType InRuneClassType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Class Type Mini Image_Color");

	Params::BPL_Runes_C_Get_Rune_Class_Type_Mini_Image_Color Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Class Type Mini Image
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Class_Type_Mini_Image(EM1RuneClassType InRuneClassType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Class Type Mini Image");

	Params::BPL_Runes_C_Get_Rune_Class_Type_Mini_Image Parms{};

	Parms.InRuneClassType = InRuneClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Class Color Type
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           SetImage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EM1RuneClassType                        InRuneClassType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPL_Runes_C::Get_Rune_Class_Color_Type(class UImage* SetImage, EM1RuneClassType InRuneClassType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Class Color Type");

	Params::BPL_Runes_C_Get_Rune_Class_Color_Type Parms{};

	Parms.SetImage = SetImage;
	Parms.InRuneClassType = InRuneClassType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Board Slot Soket Icon in Empty Bg
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneSocketType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Board_Slot_Soket_Icon_in_Empty_Bg(EM1RuneSocketType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Board Slot Soket Icon in Empty Bg");

	Params::BPL_Runes_C_Get_Rune_Board_Slot_Soket_Icon_in_Empty_Bg Parms{};

	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.Get Rune Board Slot Socket Icon in SocketMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EM1RuneSocketType                       InType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UBPL_Runes_C::Get_Rune_Board_Slot_Socket_Icon_in_SocketMode(EM1RuneSocketType InType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPL_Runes_C", "Get Rune Board Slot Socket Icon in SocketMode");

	Params::BPL_Runes_C_Get_Rune_Board_Slot_Socket_Icon_in_SocketMode Parms{};

	Parms.InType = InType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BPL_Runes.BPL_Runes_C.SetEnchantLevelIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RuneEnchant_Icon_C*           InEnchantLevelIcon                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPL_Runes_C::SetEnchantLevelIcon(class UUI_RuneEnchant_Icon_C* InEnchantLevelIcon, int32 InLevel, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPL_Runes_C", "SetEnchantLevelIcon");

	Params::BPL_Runes_C_SetEnchantLevelIcon Parms{};

	Parms.InEnchantLevelIcon = InEnchantLevelIcon;
	Parms.InLevel = InLevel;
	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);
}

}

