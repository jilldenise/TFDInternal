#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NXPWebBrowserWidget

#include "Basic.hpp"

#include "NXPWebBrowserWidget_classes.hpp"
#include "NXPWebBrowserWidget_parameters.hpp"


namespace SDK
{

// Function NXPWebBrowserWidget.NXPWebBrowser.BindUObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsPermanent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::BindUObject(const class FString& Name_0, class UObject* Object, bool bIsPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "BindUObject");

	Params::NXPWebBrowser_BindUObject Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Object = Object;
	Parms.bIsPermanent = bIsPermanent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NXPWebBrowserWidget.NXPWebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           ScriptText                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::ExecuteJavascript(const class FString& ScriptText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "ExecuteJavascript");

	Params::NXPWebBrowser_ExecuteJavascript Parms{};

	Parms.ScriptText = std::move(ScriptText);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NXPWebBrowserWidget.NXPWebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Contents                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           DummyURL                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::LoadString(const class FString& Contents, const class FString& DummyURL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "LoadString");

	Params::NXPWebBrowser_LoadString Parms{};

	Parms.Contents = std::move(Contents);
	Parms.DummyURL = std::move(DummyURL);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NXPWebBrowserWidget.NXPWebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           NewUrl                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::LoadURL(const class FString& NewUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "LoadURL");

	Params::NXPWebBrowser_LoadURL Parms{};

	Parms.NewUrl = std::move(NewUrl);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnBeforePopup__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           URL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Frame                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "OnBeforePopup__DelegateSignature");

	Params::NXPWebBrowser_OnBeforePopup__DelegateSignature Parms{};

	Parms.URL = std::move(URL);
	Parms.Frame = std::move(Frame);

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnConsoleMessage__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                           Message                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Source                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Line                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::OnConsoleMessage__DelegateSignature(const class FString& Message, const class FString& Source, int32 Line)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "OnConsoleMessage__DelegateSignature");

	Params::NXPWebBrowser_OnConsoleMessage__DelegateSignature Parms{};

	Parms.Message = std::move(Message);
	Parms.Source = std::move(Source);
	Parms.Line = Line;

	UObject::ProcessEvent(Func, &Parms);
}


// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnLoadCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UNXPWebBrowser::OnLoadCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "OnLoadCompleted__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                             Text                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UNXPWebBrowser::OnUrlChanged__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "OnUrlChanged__DelegateSignature");

	Params::NXPWebBrowser_OnUrlChanged__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NXPWebBrowserWidget.NXPWebBrowser.UnbindUObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Name_0                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          Object                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsPermanent                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNXPWebBrowser::UnbindUObject(const class FString& Name_0, class UObject* Object, bool bIsPermanent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "UnbindUObject");

	Params::NXPWebBrowser_UnbindUObject Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Object = Object;
	Parms.bIsPermanent = bIsPermanent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function NXPWebBrowserWidget.NXPWebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UNXPWebBrowser::GetTitleText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "GetTitleText");

	Params::NXPWebBrowser_GetTitleText Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function NXPWebBrowserWidget.NXPWebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UNXPWebBrowser::GetUrl() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NXPWebBrowser", "GetUrl");

	Params::NXPWebBrowser_GetUrl Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
