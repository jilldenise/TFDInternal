#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPFL_Crosshair

#include "Basic.hpp"

#include "BPFL_Crosshair_classes.hpp"
#include "BPFL_Crosshair_parameters.hpp"


namespace SDK
{

// Function BPFL_Crosshair.BPFL_Crosshair_C.Truncate (Vector2D)
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crosshair_C::Truncate__Vector2D_(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_Crosshair_C", "Truncate (Vector2D)");

	Params::BPFL_Crosshair_C_Truncate__Vector2D_ Parms{};

	Parms.In = std::move(In);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}


// Function BPFL_Crosshair.BPFL_Crosshair_C.SafeHypotenus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        In_vector2d                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Return_value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crosshair_C::SafeHypotenus(const struct FVector2D& In_vector2d, class UObject* __WorldContext, double* Return_value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_Crosshair_C", "SafeHypotenus");

	Params::BPFL_Crosshair_C_SafeHypotenus Parms{};

	Parms.In_vector2d = std::move(In_vector2d);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Return_value != nullptr)
		*Return_value = Parms.Return_value;
}


// Function BPFL_Crosshair.BPFL_Crosshair_C.LinearColorToSRGB
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     LinearColor_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     SRGB_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crosshair_C::LinearColorToSRGB(const struct FLinearColor& LinearColor_, class UObject* __WorldContext, struct FLinearColor* SRGB_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_Crosshair_C", "LinearColorToSRGB");

	Params::BPFL_Crosshair_C_LinearColorToSRGB Parms{};

	Parms.LinearColor_ = std::move(LinearColor_);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (SRGB_ != nullptr)
		*SRGB_ = std::move(Parms.SRGB_);
}


// Function BPFL_Crosshair.BPFL_Crosshair_C.Abs (Vector2D)
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        In                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Crosshair_C::Abs__Vector2D_(const struct FVector2D& In, class UObject* __WorldContext, struct FVector2D* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPFL_Crosshair_C", "Abs (Vector2D)");

	Params::BPFL_Crosshair_C_Abs__Vector2D_ Parms{};

	Parms.In = std::move(In);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);
}

}

