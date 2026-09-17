#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:21 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C
// 0x0010 (0x0038 - 0x0028)
class UGlobalUIEventDispatcher_BP_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    WardrobePutDownEvent;                                     // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIEventDispatcher_BP.GlobalUIEventDispatcher_BP_C");
		return pStaticClass;
	}


	void WardrobePutDownEvent__DelegateSignature(int PutonID, int resID);
};


}

