// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:17 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function slua_unreal.LatentDelegate.OnLatentCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            threadRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ULatentDelegate::OnLatentCallback(int threadRef)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LatentDelegate.OnLatentCallback");

	ULatentDelegate_OnLatentCallback_Params params;
	params.threadRef = threadRef;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaDelegate.EventTrigger
// (Final, Native, Public, BlueprintCallable)

void ULuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaDelegate.EventTrigger");

	ULuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function slua_unreal.LuaOverriderInterface.GetLuaFilePath
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULuaOverriderInterface::GetLuaFilePath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function slua_unreal.LuaOverriderInterface.GetLuaFilePath");

	ULuaOverriderInterface_GetLuaFilePath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

