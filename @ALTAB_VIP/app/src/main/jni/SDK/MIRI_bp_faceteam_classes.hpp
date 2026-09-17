#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:26 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_faceteam.bp_faceteam_C
// 0x0020 (0x0418 - 0x03F8)
class Abp_faceteam_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Bp_FaceTeam_Code;                                         // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_faceteam.bp_faceteam_C");
		return pStaticClass;
	}


	void EventCreateFaceTeamCode_NoFetch();
	void EventCreateFaceTeamCode();
	void EventOpenAddFaceTeamCodePanel_NoFetch();
	void EventOpenAddFaceTeamCodePanel();
	void EventEnsureAddCodeTeam_NoFetch();
	void EventEnsureAddCodeTeam();
	void EventFaceteamUIRelease_NoFetch();
	void EventFaceteamUIRelease();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

