#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:25 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x0448 (0x0840 - 0x03F8)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_Exciting_Party_Open;                                   // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FString                                     BP_PlayerIconUrl;                                         // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_FriendApplyMessageCount;                               // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SystemTargetCameraIndex;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_COLLECT_EQUIPMENT_Open;                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_XinyueRedPointSvrOpen;                                 // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LobbyModeSwitched;                                        // 0x0432(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NATION_BATTLE_SWITCH;                                  // 0x0433(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x0434(0x0008) (Edit, BlueprintVisible)
	int                                                BP_PlayerLevel;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PutOnWeaponResId;                                      // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AvatarInfo                       BP_STRUCT_AvatarInfo;                                     // 0x0444(0x000C) (Edit, BlueprintVisible)
	int                                                BP_PlayerExp;                                             // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LobbyNetworkStatus;                                    // 0x0454(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NATION_RANK_SWITCH;                                    // 0x0455(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0456(0x0002) MISSED OFFSET
	int                                                BP_Lobby_Play_Sound_FromWhereType;                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerAliasID;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGender;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PutOnResId;                                            // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentMenuId;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerGoldChip;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_WeaponStatusChange_WeaponResId;                  // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Lobby_CurrentDownloadFileName;                         // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_Supply_RedDot;                                   // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelChange;                                           // 0x0499(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MallPlayerShow;                                        // 0x049A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x049B(0x0001) MISSED OFFSET
	int                                                G_Index_In_Login;                                         // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_LobbyAdvertiseSpecialTaskInfo    BP_STRUCT_LobbyAdvertiseSpecialTaskInfo;                  // 0x04A0(0x0028) (Edit, BlueprintVisible)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Mall_Cur_ServerTime;                             // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AvatarInfo>               BP_ARRAY_AvatarList;                                      // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_UNKNOWPASS_IS_IN_CURRENT_SESSION;                      // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_CanOpenUrl;                                      // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04E2(0x0002) MISSED OFFSET
	int                                                BP_LobbyPlayerNum;                                        // 0x04E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LobbyPlayerShow;                                       // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	int                                                BP_PlayerTicket;                                          // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_UnknowPass_ShowReddot;                                 // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_LobbyStoreBoxHotPoint;                           // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_PlayerAliasNation;                                     // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x0528(0x0068) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SpawnPlayerData>          BP_ARRAY_LobbyPlayerDataList;                             // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_PutOnRes_Isolated;                                     // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShowHeadportraitReddot;                                // 0x05A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x05A2(0x0002) MISSED OFFSET
	int                                                BP_LuckAirDropTimeLeft;                                   // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_AllDownloadTotal;                                // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentDay;                                            // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerQQVip;                                           // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerUid;                                             // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyNetworkDelay;                                     // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentMaxExp;                                         // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SpawnPlayerData                  BP_STRUCT_SpawnPlayerData;                                // 0x05D0(0x0040) (Edit, BlueprintVisible)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_NeedShowAdvertise;                               // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x0612(0x0006) MISSED OFFSET
	struct FString                                     BP_Activity_Icon_Path;                                    // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LobbyCameraSwitchLock;                                 // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Has_Exp_Rate;                                    // 0x0629(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x6];                                       // 0x062A(0x0006) MISSED OFFSET
	struct FString                                     BP_PlayerAliasTitle;                                      // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TheFirstCharge_RedDot;                                 // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DataMgrInit;                                              // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CurrentRedPointStatus;                                 // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x0643(0x0001) MISSED OFFSET
	int                                                BP_PlayerDiamond;                                         // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Activity_Jump_Url;                                     // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfoSavedChoosingZoneId;                           // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo           BP_STRUCT_LOBBY_GoldExp_BuffInfo;                         // 0x0660(0x0020) (Edit, BlueprintVisible)
	int                                                BP_Lobby_Exp_Rate;                                        // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_ExpBuffInfo;                               // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_LobbyStoreBoxList;                               // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TheFirstCharge_IconFlag;                               // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_RankChange;                                      // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x06AD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_TeamUpRingsChange                BP_STRUCT_TeamUpRingsChange;                              // 0x06B0(0x0018) (Edit, BlueprintVisible)
	int                                                BP_RankSavedChoosingZoneId;                               // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_OpenShoporWardrobe;                              // 0x06CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x06CD(0x0003) MISSED OFFSET
	int                                                BP_LOBBY_SPAWNPOS;                                        // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FString                                     BP_Lobby_Play_Sound_Uid;                                  // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_NATION_SWITCH_UPDATED;                                 // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x06E9(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_GoldBuffInfo;                              // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_Struct_LobbyShowDownloadingMapInfo      BP_Struct_LobbyShowDownloadingMapInfo;                    // 0x0700(0x0050) (Edit, BlueprintVisible)
	struct FBP_STRUCT_AvatarChange                     BP_STRUCT_AvatarChange;                                   // 0x0750(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_UNKNOWPASS_PANEL_IS_ENABLE;                            // 0x0768(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShowPersonSpaceReddot;                                 // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NATION_ALL_SWITCH;                                     // 0x0778(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0779(0x0003) MISSED OFFSET
	int                                                BP_Lobby_AdvertiseLastTime;                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Free_Data_Open;                                        // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_IsDownloadingMap;                                // 0x0781(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0782(0x0006) MISSED OFFSET
	struct FString                                     BP_Lobby_WeaponStatusChange_UID;                          // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LobbyLogic_ClassPath;                                  // 0x0798(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyBubble_CurItemID;                                 // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LuckAirDropTime;                                       // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraIndex;                                // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_Struct_LobbyShowDownloadingMapInfo> BP_Array_LobbyShowDownloadingMapInfoList;                 // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LOBBY_ClickedActivityState;                            // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_Gold_Rate;                                       // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Lobby_AllDownloadCurrent;                              // 0x07D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PlayerGold;                                            // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShopLimit                        BP_STRUCT_ShopLimit;                                      // 0x07E8(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_Lobby_Has_Gold_Rate;                                   // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Mall_Hot_Point_IsShow;                           // 0x0809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x080A(0x0006) MISSED OFFSET
	struct FString                                     BP_Lobby_Play_Sound_Path;                                 // 0x0810(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ClickTimeNotBind;                                      // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Activity_Type;                                         // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ClickTimeBind;                                         // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Activity_IconShowTimes;                                // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_IsActivityOpened;                                // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventGetCollectEquipOpenState_NoFetch();
	void EventGetCollectEquipOpenState();
	void EventLobbyUpdateDoubleCardButton_NoFetch();
	void EventLobbyUpdateDoubleCardButton();
	void EventOpenLobbyWeapon_NoFetch();
	void EventOpenLobbyWeapon();
	void EventLobbyLeaveChatWnd_NoFetch();
	void EventLobbyLeaveChatWnd();
	void EventEnterFriendList_NoFetch();
	void EventEnterFriendList();
	void EventOpenWorldView_NoFetch();
	void EventOpenWorldView();
	void EventHandleActivityBtn_NoFetch();
	void EventHandleActivityBtn();
	void EventPutOnEquipment_NoFetch();
	void EventPutOnEquipment();
	void EventEnterRank_NoFetch();
	void EventEnterRank();
	void EventOpenActivityGroupUI_NoFetch();
	void EventOpenActivityGroupUI();
	void EventHaveNewHeadportraitInLobby_NoFetch();
	void EventHaveNewHeadportraitInLobby();
	void EventSetAchievementInitialFlag_NoFetch();
	void EventSetAchievementInitialFlag();
	void EventIsActivityOpened_NoFetch();
	void EventIsActivityOpened();
	void EventOpenMallSystem_NoFetch();
	void EventOpenMallSystem();
	void EventLobbyLeaveWorldView_NoFetch();
	void EventLobbyLeaveWorldView();
	void EventEnterMail_NoFetch();
	void EventEnterMail();
	void EventEnterSeason_NoFetch();
	void EventEnterSeason();
	void EventLobbyLeaveRoleInfo_NoFetch();
	void EventLobbyLeaveRoleInfo();
	void EventLobbyLeaveItemGet_NoFetch();
	void EventLobbyLeaveItemGet();
	void EventOpenActivityPanel_NoFetch();
	void EventOpenActivityPanel();
	void EventEnterSigninSystem_NoFetch();
	void EventEnterSigninSystem();
	void EventSimulateTestReConnect_NoFetch();
	void EventSimulateTestReConnect();
	void EventOpenShopLimitUI_NoFetch();
	void EventOpenShopLimitUI();
	void EventOpenUnknowPass_NoFetch();
	void EventOpenUnknowPass();
	void EventLobbyEnterAlliance_NoFetch();
	void EventLobbyEnterAlliance();
	void EventLobby_DownloadOnHide_NoFetch();
	void EventLobby_DownloadOnHide();
	void EventLeaveWardrobe_NoFetch();
	void EventLeaveWardrobe();
	void EventShowUnknowPassIsNotInSession_NoFetch();
	void EventShowUnknowPassIsNotInSession();
	void EventLobbyLeaveFriend_NoFetch();
	void EventLobbyLeaveFriend();
	void EventClickDailyShareBtn_NoFetch();
	void EventClickDailyShareBtn();
	void EventLobbyAndroidBack_NoFetch();
	void EventLobbyAndroidBack();
	void EventLeaveWeekSignUp_NoFetch();
	void EventLeaveWeekSignUp();
	void EventEnterShop_NoFetch();
	void EventEnterShop();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventLobbyLeaveTask_NoFetch();
	void EventLobbyLeaveTask();
	void EventOpenXinyue_NoFetch();
	void EventOpenXinyue();
	void EventTestRemovePlayer2_NoFetch();
	void EventTestRemovePlayer2();
	void EventLobbyLuckAirDropShow_NoFetch();
	void EventLobbyLuckAirDropShow();
	void EventAvatarChange_NoFetch();
	void EventAvatarChange();
	void EventTeamUpRings_NoFetch();
	void EventTeamUpRings();
	void EventOpenESportTV_NoFetch();
	void EventOpenESportTV();
	void EventOpenChatUI_NoFetch();
	void EventOpenChatUI();
	void EventOpenCollectEquipment_NoFetch();
	void EventOpenCollectEquipment();
	void EventRankSavedChoosingZoneId_Push_NoFetch();
	void EventRankSavedChoosingZoneId_Push();
	void EventOnClickCorpsButton_NoFetch();
	void EventOnClickCorpsButton();
	void EventInitActivityListComplete_NoFetch();
	void EventInitActivityListComplete();
	void EventLobbyOpenArmory_NoFetch();
	void EventLobbyOpenArmory();
	void EventHideScrollMsg_NoFetch();
	void EventHideScrollMsg();
	void EventRerollAllScrollMsg_NoFetch();
	void EventRerollAllScrollMsg();
	void EventOpenMissionUI_NoFetch();
	void EventOpenMissionUI();
	void EventLobbyLeaveGuidePanel_NoFetch();
	void EventLobbyLeaveGuidePanel();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void EventEnterWardrobe_NoFetch();
	void EventEnterWardrobe();
	void EventGetExcitingPartyOpenState_NoFetch();
	void EventGetExcitingPartyOpenState();
	void EventOpenGuidePanel_NoFetch();
	void EventOpenGuidePanel();
	void EventCanOpenUrl_NoFetch();
	void EventCanOpenUrl();
	void EventGetShopLimitTitle_NoFetch();
	void EventGetShopLimitTitle();
	void EventOnClickCorps_NoFetch();
	void EventOnClickCorps();
	void EventTestRemovePlayer_NoFetch();
	void EventTestRemovePlayer();
	void EventEnterTeamUp_NoFetch();
	void EventEnterTeamUp();
	void EventclickDecompose_NoFetch();
	void EventclickDecompose();
	void EventOpenFreeDataUrl_NoFetch();
	void EventOpenFreeDataUrl();
	void EventOpenQQVip_NoFetch();
	void EventOpenQQVip();
	void EventOpenQQlibao_NoFetch();
	void EventOpenQQlibao();
	void EventMallHotPointUpdateByMonthCord_NoFetch();
	void EventMallHotPointUpdateByMonthCord();
	void EventOpenHuati_NoFetch();
	void EventOpenHuati();
	void EventOpenGetExcitingPartyUI_NoFetch();
	void EventOpenGetExcitingPartyUI();
	void EventQuestionDone_NoFetch();
	void EventQuestionDone();
	void EventTestSpawnPlayer3_NoFetch();
	void EventTestSpawnPlayer3();
	void EventLobbyLeaveMail_NoFetch();
	void EventLobbyLeaveMail();
	void EventLobbyLeaveSetting_NoFetch();
	void EventLobbyLeaveSetting();
	void EventEnterRoleInfo_NoFetch();
	void EventEnterRoleInfo();
	void EventLobby_ClickSupply_NoFetch();
	void EventLobby_ClickSupply();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTestRedpoint_NoFetch();
	void EventTestRedpoint();
	void EventRoleInfoSavedChoosingZoneId_Push_NoFetch();
	void EventRoleInfoSavedChoosingZoneId_Push();
	void EventEnterConfig_NoFetch();
	void EventEnterConfig();
	void EventLobbyMallSetCurTime_NoFetch();
	void EventLobbyMallSetCurTime();
	void EventOpenCommunityInLobby_NoFetch();
	void EventOpenCommunityInLobby();
	void EventLobbyMallGetHotPointState_NoFetch();
	void EventLobbyMallGetHotPointState();
	void EventPutOnWeapon_NoFetch();
	void EventPutOnWeapon();
	void EventLobbyLeaveRankList_NoFetch();
	void EventLobbyLeaveRankList();
	void EventTestLevelUp_NoFetch();
	void EventTestLevelUp();
	void EventTestRemovePlayer3_NoFetch();
	void EventTestRemovePlayer3();
	void EventLobbyActivityEnd_NoFetch();
	void EventLobbyActivityEnd();
	void EventTestScrollMsg_NoFetch();
	void EventTestScrollMsg();
	void EventLobbyShowDoubleCard_NoFetch();
	void EventLobbyShowDoubleCard();
	void EventInitActivityRedPoint_NoFetch();
	void EventInitActivityRedPoint();
	void EventLobbyHideShop_NoFetch();
	void EventLobbyHideShop();
	void EventLobbyStartDownload_NoFetch();
	void EventLobbyStartDownload();
	void EventLobbyPauseDownload_NoFetch();
	void EventLobbyPauseDownload();
	void EventLobby_DownloadOnShow_NoFetch();
	void EventLobby_DownloadOnShow();
	void EventOpenEnchargePanel_NoFetch();
	void EventOpenEnchargePanel();
	void EventTestSpawnPlayer2_NoFetch();
	void EventTestSpawnPlayer2();
	void EventGetFriendProfile_NoFetch();
	void EventGetFriendProfile();
	void EventOpenGMMenu_NoFetch();
	void EventOpenGMMenu();
	void EventShowTeamupFriendLobbyRedPoint_NoFetch();
	void EventShowTeamupFriendLobbyRedPoint();
	void EventHideTeamupFriendLobbyRedPoint_NoFetch();
	void EventHideTeamupFriendLobbyRedPoint();
	void EventLeaveLobby_NoFetch();
	void EventLeaveLobby();
	void EventTestSpawnPlayer_NoFetch();
	void EventTestSpawnPlayer();
	void EventOpenLobbyCharacter_NoFetch();
	void EventOpenLobbyCharacter();
	void UserConstructionScript();
};


}

