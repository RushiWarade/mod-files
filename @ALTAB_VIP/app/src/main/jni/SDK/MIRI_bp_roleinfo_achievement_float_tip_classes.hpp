#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:33 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_roleinfo_achievement_float_tip.bp_roleinfo_achievement_float_tip_C
// 0x0058 (0x0450 - 0x03F8)
class Abp_roleinfo_achievement_float_tip_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Achievement_FloatTip_ID;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Achievement_FloatTip_GroupNum;                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Achievement_FloatTip_ImgUrl;                           // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Achievement_FloatTip_Awards      BP_STRUCT_Achievement_FloatTip_Awards;                    // 0x0418(0x0014) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FString                                     BP_Achievement_FloatTip_Title;                            // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Achievement_FloatTip_QuickHide;                        // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                BP_Achievement_FloatTip_Group;                            // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_achievement_float_tip.bp_roleinfo_achievement_float_tip_C");
		return pStaticClass;
	}


	void EventAchievementClickIgnore_NoFetch();
	void EventAchievementClickIgnore();
	void EventAchievementFloatTipPeekNext_NoFetch();
	void EventAchievementFloatTipPeekNext();
	void EventAchievementFloatTipClear_NoFetch();
	void EventAchievementFloatTipClear();
	void EventAchievementInitialize_NoFetch();
	void EventAchievementInitialize();
	void EventAchievementFloatTipGo_NoFetch();
	void EventAchievementFloatTipGo();
	void EventAchievementFloatTipNext_NoFetch();
	void EventAchievementFloatTipNext();
	void UserConstructionScript();
};


}

