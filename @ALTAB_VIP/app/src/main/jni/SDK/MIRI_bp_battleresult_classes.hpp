#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:26 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C
// 0x0930 (0x0D28 - 0x03F8)
class Abp_battleresult_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_TeammateProfile>          BP_ARRAY_TeammateProfile;                                 // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsShowOBGender;                                        // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	struct FString                                     Ingame_PlayerData_MatchMode_PlayerNum;                    // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RecordUpvoteTeammateUID;                               // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_myname;                                                // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               testResult;                                               // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                BattleDataMatchMode;                                      // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsClickReplay;                             // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShareAwardGold;                                      // 0x0451(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0452(0x0002) MISSED OFFSET
	int                                                Ingame_CurItemId;                                         // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_mystate;                                               // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ShouldDelayShowBattleResult;                           // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	struct FString                                     BP_BattleResultRankTopDisplay;                            // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsDelayShowBattleRankingUI;                            // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	struct FBP_STRUCT_SegmentProtect                   BP_STRUCT_SegmentProtect;                                 // 0x0484(0x0010) (Edit, BlueprintVisible)
	int                                                BP_MyTotalPVE_EXP;                                        // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultNeedShowAd;                                // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FBP_STRUCT_BattleResult_Pass_Mission_Info   BP_STRUCT_BattleResult_Pass_Mission_Info;                 // 0x04A0(0x0030) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_OBTeamResult>             BP_ARRAY_OBBattleResult;                                  // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPVE_DEGREE;                                          // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsReceiveResult;                                       // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	struct FString                                     BP_TeamModeName;                                          // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPetAddExp;                                           // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EXP_DETAIL                       BP_STRUCT_EXP_DETAIL;                                     // 0x04FC(0x003C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_PVETeamData                      BP_STRUCT_PVETeamData;                                    // 0x0538(0x0018) (Edit, BlueprintVisible)
	bool                                               Ingame_IsCurItemCollected;                                // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0551(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_PVETeamData>              BP_ARRAY_PVEVictoryRankingList;                           // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ingame_CurSeasonName;                                     // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_EnterSpectateMode;                                     // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Retry;                                                    // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x057A(0x0002) MISSED OFFSET
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x057C(0x000C) (Edit, BlueprintVisible)
	int                                                BP_MyKillTyrantNum;                                       // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BattleResultPVEWinnerFreeMoveTime;                     // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TeammateProfile                  BP_STRUCT_TeammateProfile;                                // 0x0590(0x0028) (Edit, BlueprintVisible)
	int                                                BP_mykill;                                                // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WatchGame_ReplyState;                                  // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BattleResultCakePlacementDelayTime;                    // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BATTLETYPE_MODE;                                          // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultCanShowStrategyBtn;                        // 0x05C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x05C9(0x0003) MISSED OFFSET
	float                                              BP_MySurviveTime_f;                                       // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_PVE_INFO                         BP_STRUCT_PVE_INFO;                                       // 0x05D0(0x001C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_GOLD_DETAIL                      BP_STRUCT_GOLD_DETAIL;                                    // 0x05EC(0x0034) (Edit, BlueprintVisible)
	struct FBP_STRUCT_PVEMemberData                    BP_STRUCT_PVEMemberData;                                  // 0x0620(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_OBTeamResult                     BP_STRUCT_OBTeamResult;                                   // 0x0638(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_PVE_SCORE                        BP_STRUCT_PVE_SCORE;                                      // 0x0648(0x0024) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData10[0x4];                                       // 0x066C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_OBPersonalResult                 BP_STRUCT_OBPersonalResult;                               // 0x0670(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SpawnPlayerRoleInfo              BP_STRUCT_SpawnPlayerRoleInfo;                            // 0x06A0(0x0058) (Edit, BlueprintVisible)
	struct FString                                     BP_UpvotePlayerName;                                      // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RADAR                            BP_STRUCT_RADAR;                                          // 0x0708(0x00D0) (Edit, BlueprintVisible)
	struct FString                                     BP_BattleResultMurderName;                                // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RecordDataTLogUpload             BP_STRUCT_RecordDataTLogUpload;                           // 0x07E8(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BTRating                         BP_STRUCT_BTRating;                                       // 0x0808(0x0020) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_BattleResultForbidWinnerTimeSubMode;             // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BattleResultWinnerFreeMoveTime;                        // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShowResultPanel;                                     // 0x083C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x083D(0x0003) MISSED OFFSET
	int                                                BP_ServerTimeSecNow;                                      // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_WatchGame_AcceptReservation;                           // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsDroiyanMode;                                         // 0x0845(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	int                                                BP_RecordUpvoteTeammateIndex;                             // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CHAR_EXP_DETAIL                  BP_STRUCT_CHAR_EXP_DETAIL;                                // 0x084C(0x0010) (Edit, BlueprintVisible)
	bool                                               BP_BattleResultShouldShowMVPScene;                        // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	struct FString                                     BP_Terminator;                                            // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyKillMonsterNum;                                      // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0874(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_PVEMemberData>            BP_ARRAY_PVEMembersList;                                  // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RecordingUpload                  BP_STRUCT_RecordingUpload;                                // 0x0898(0x0050) (Edit, BlueprintVisible)
	bool                                               BP_IsReportComplaintShow;                                 // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FString                                     BP_WatchGame_ReplyTip;                                    // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BPRecordAddFriendIndex;                                   // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	struct FString                                     Ingame_OBPlayer_BattleData_UID;                           // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_DirectShow;                                            // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	int                                                BP_MyKillLickerNum;                                       // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MyKillGNum;                                            // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsEnableWinnerTime;                        // 0x0924(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InGame_IsMyFriend;                                        // 0x0925(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_HasInWatchGame;                                        // 0x0926(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x1];                                       // 0x0927(0x0001) MISSED OFFSET
	int                                                BP_LoginChannel;                                          // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x092C(0x0004) MISSED OFFSET
	struct FString                                     BP_TITLE;                                                 // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPVETotalScore;                                       // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0944(0x0004) MISSED OFFSET
	struct FBP_STRUCT_BTRatingProtect                  BP_STRUCT_BTRatingProtect;                                // 0x0948(0x0018) (Edit, BlueprintVisible)
	struct FString                                     Ingame_PlayerTitle;                                       // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_BattleResultIsIOSCheck;                                // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0971(0x0003) MISSED OFFSET
	int                                                BP_MyCurPVE_EXP;                                          // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ingame_PlayerData_MatchMode;                              // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BattleResultSecondWatchPlusTime;                       // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_BattleResultData                 BP_STRUCT_BattleResultData;                               // 0x0990(0x0260) (Edit, BlueprintVisible)
	bool                                               BP_BattleResultIsAI;                                      // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0BF1(0x0003) MISSED OFFSET
	int                                                Ingame_OBPlayer_BattleData_Mode;                          // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsTodayShareDone;                                      // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0BF9(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_SpawnPlayerRoleInfo>      BP_ARRAY_TeammateRoleInfo;                                // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WatchExitReason;                                       // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WatchGame_TargetName;                                  // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MemBTResultData                  BP_STRUCT_MemBTResultData;                                // 0x0C30(0x00B0) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BattleResultMyInfo               BP_STRUCT_BattleResultMyInfo;                             // 0x0CE0(0x0038) (Edit, BlueprintVisible)
	bool                                               BP_WatchGame_CanReservation;                              // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0D19(0x0003) MISSED OFFSET
	int                                                BP_BattleResultHeavyWeaponWinnerFreeMoveTime;             // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0D20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C");
		return pStaticClass;
	}


	void EventBattleResult_BackToLobby_NoFetch();
	void EventBattleResult_BackToLobby();
	void EventEnterAnchorObserve_NoFetch();
	void EventEnterAnchorObserve();
	void EventReviveStateReturnToLobbyConfirm_NoFetch();
	void EventReviveStateReturnToLobbyConfirm();
	void EventOnClickInGameCollect_NoFetch();
	void EventOnClickInGameCollect();
	void EventCloseBattleResult_NoFetch();
	void EventCloseBattleResult();
	void EventDoIgnoreDSError_Push_NoFetch();
	void EventDoIgnoreDSError_Push();
	void EventAddFriendRequest_Push_NoFetch();
	void EventAddFriendRequest_Push();
	void EventUpvoteTeammateRequest_Push_NoFetch();
	void EventUpvoteTeammateRequest_Push();
	void EventShowSingleResult_NoFetch();
	void EventShowSingleResult();
	void EventEnterSpectating_NoFetch();
	void EventEnterSpectating();
	void EventDelayCall_NoFetch();
	void EventDelayCall();
	void EventClientExitGame_NoFetch();
	void EventClientExitGame();
	void EventClientFreshToComplaint_NoFetch();
	void EventClientFreshToComplaint();
	void EventClientExitTraining_NoFetch();
	void EventClientExitTraining();
	void EventShowGameJoyNoRecordsNotice_NoFetch();
	void EventShowGameJoyNoRecordsNotice();
	void EventGameJoyVideoShareSuccess_NoFetch();
	void EventGameJoyVideoShareSuccess();
	void EventWatchGameOnSelect_NoFetch();
	void EventWatchGameOnSelect();
	void EventResultUIGiveUpObserver_NoFetch();
	void EventResultUIGiveUpObserver();
	void EventWatchGameUpdateReservationState_NoFetch();
	void EventWatchGameUpdateReservationState();
	void EventOnClickAdvertiseButton_NoFetch();
	void EventOnClickAdvertiseButton();
	void EventBattleResultGenerateMyHeadInfo_NoFetch();
	void EventBattleResultGenerateMyHeadInfo();
	void EventReturnLocalResResultTitleCofig_NoFetch();
	void EventReturnLocalResResultTitleCofig();
	void EventReturnFromLeagueBattle_NoFetch();
	void EventReturnFromLeagueBattle();
	void EventWatchGameClickReserveFriend_NoFetch();
	void EventWatchGameClickReserveFriend();
	void EventOBViewGetCurSeasonName_NoFetch();
	void EventOBViewGetCurSeasonName();
	void EventShowGameJoyRecordFailNotice_NoFetch();
	void EventShowGameJoyRecordFailNotice();
	void EventGetItemIsCollected_NoFetch();
	void EventGetItemIsCollected();
	void EventGetIsMyFriend_NoFetch();
	void EventGetIsMyFriend();
	void EventShowResultMVPView_NoFetch();
	void EventShowResultMVPView();
	void EventClientGetIsClickReply_NoFetch();
	void EventClientGetIsClickReply();
	void EventClientFreshData_NoFetch();
	void EventClientFreshData();
	void EventGetPlayerMatchMode_NoFetch();
	void EventGetPlayerMatchMode();
	void EventOBViewAddFriendRequest_NoFetch();
	void EventOBViewAddFriendRequest();
	void UserConstructionScript();
};


}

