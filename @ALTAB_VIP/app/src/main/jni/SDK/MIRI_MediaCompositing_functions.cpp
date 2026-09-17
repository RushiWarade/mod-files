// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:18 2024
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaPlaneParameters   Plane                          (Parm)

void UMediaPlaneComponent::SetMediaPlane(const struct FMediaPlaneParameters& Plane)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.SetMediaPlane");

	UMediaPlaneComponent_SetMediaPlane_Params params;
	params.Plane = Plane;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
// (Final, Native, Public)

void UMediaPlaneComponent::OnRenderTextureChanged()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged");

	UMediaPlaneComponent_OnRenderTextureChanged_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MediaCompositing.MediaPlaneComponent.GetPlane
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMediaPlaneParameters   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FMediaPlaneParameters UMediaPlaneComponent::GetPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MediaCompositing.MediaPlaneComponent.GetPlane");

	UMediaPlaneComponent_GetPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

