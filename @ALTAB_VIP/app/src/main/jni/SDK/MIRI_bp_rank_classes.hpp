#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:27 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_rank.bp_rank_C
// 0x03E8 (0x07E0 - 0x03F8)
class Abp_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_RankPeriodType;                                        // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankRegionType;                                        // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankSelectType;                                        // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankUpdateItemInfo               BP_STRUCT_RankUpdateItemInfo;                             // 0x0430(0x00F0) (Edit, BlueprintVisible)
	int                                                BP_RankScrollPos;                                         // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	struct FString                                     BP_RankShowRoleUid;                                       // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Rank_Alias_Info                  BP_STRUCT_Rank_Alias_Info;                                // 0x0538(0x0050) (Edit, BlueprintVisible)
	bool                                               BP_Is_RankList_Close;                                     // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	struct FString                                     BP_RankSelectMemberType;                                  // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankInfo                         BP_STRUCT_RankInfo;                                       // 0x05A0(0x00F0) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RankInfoMe                       BP_STRUCT_RankInfoMe;                                     // 0x0690(0x00F0) (Edit, BlueprintVisible)
	struct FString                                     BP_RankInfoSelfBelow1wDisplay;                            // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Back_ShowRankZoneId;                                   // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_RankInfo>                 BP_ARRAY_RankList;                                        // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RankUpdateIdx;                                         // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	struct FString                                     BP_RankShowHelpContent;                                   // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Rank_IsUPassOpened;                                    // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_RankZoneList;                                    // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_rank.bp_rank_C");
		return pStaticClass;
	}


	void EventRankShowRole_NoFetch();
	void EventRankShowRole();
	void EventTestRank_NoFetch();
	void EventTestRank();
	void EventIsUPassRankOpened_NoFetch();
	void EventIsUPassRankOpened();
	void EventRankGetZoneList_NoFetch();
	void EventRankGetZoneList();
	void EventRankShowHelp_NoFetch();
	void EventRankShowHelp();
	void EventRank_Push_NoFetch();
	void EventRank_Push();
	void EventQueryRank_NoFetch();
	void EventQueryRank();
	void EventRankScrollPos_NoFetch();
	void EventRankScrollPos();
	void EventRankFetchInfo_NoFetch();
	void EventRankFetchInfo();
	void EventRankClose_NoFetch();
	void EventRankClose();
	void UserConstructionScript();
};


}

