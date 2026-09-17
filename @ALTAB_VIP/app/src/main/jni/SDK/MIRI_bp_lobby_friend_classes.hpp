#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:27 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C
// 0x0BA8 (0x0FA0 - 0x03F8)
class Abp_lobby_friend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Friend_Search_PreServer;                               // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FString                                     BP_NearBy_Empty_Tips;                                     // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_XY_API_URL;                                            // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_SearchName;                                     // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Friend_Intimacy_Delete_NickName;                       // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Inner_Friend_Lite_Profile;                       // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Language;                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Search_Friend_Scroll_End;                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Relation;                              // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelecterDeleteFriendCount;                             // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_FriendProfile                    BP_STRUCT_FriendProfile;                                  // 0x0468(0x0230) (Edit, BlueprintVisible)
	int                                                BP_Verify_MaxWordCount;                                   // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Add_Friend_Gender;                                     // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Inner_Friend_Scroll_End;                               // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	struct FString                                     BP_NearBy_Empty_Tips_Location_Close;                      // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RSPAdd_OP;                                             // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Recent_Teammate_Lite_Profile;                    // 0x06C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FriendLiteProfile                BP_STRUCT_FriendLiteProfile;                              // 0x06D8(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_Delete_Friend_ID;                                      // 0x06E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Detail_Profile;                     // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_LobbyFriendDeleteFriendIDList;                   // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_NearBy_SelfUID;                                        // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_WATCH_ID;                                       // 0x0728(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_CHAT_ID;                                        // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_PlayTime;                                // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MaxDeleteFriendCount;                                  // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Apply_Friend_Scroll_End;                               // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Inner_Friend_Scroll_Start;                             // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Detail_Profile;                 // 0x0758(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Search_Data>              BP_Array_Search_Data;                                     // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Lobby_Friend_Search_Data> BP_ARRAY_Search_Friend_Detail_Profile;                    // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_BlackList_Friend_Scroll_Start;                         // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x078C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Intimacy_Data                    BP_STRUCT_Intimacy_Data;                                  // 0x0790(0x00B8) (Edit, BlueprintVisible)
	int                                                BP_Friend_Send_Item_Expire;                               // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	struct FString                                     BP_Friend_Intimacy_Delete_Gid;                            // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Search_Friend_Lite_Profile;                      // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_UpdatePlatIndex;                                // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInBatchDelete;                                       // 0x0874(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	int                                                BP_Recent_Teammate_ScrollEnd;                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	struct FString                                     BP_FriendSystem_SelectedFriendNickNameAddQQFriend;        // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Panel_Tab_Index;                                // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0894(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Detail_Profile;                  // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Lobby_Friend_Apply_Data>  BP_ARRAY_Apply_Friend_Detail_Profile;                     // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Platform;                                       // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FString                                     BP_Friend_Intimacy_Gid;                                   // 0x08C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Search_Is_Same_City;                            // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x08D1(0x0003) MISSED OFFSET
	int                                                BP_Friend_UpdateInnerIndex;                               // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Friend_Intimacy_NickName;                              // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_PlayDate;                                // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Platform_Friend_Scroll_End;                            // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Add_Friend_Verify;                                     // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Near_By_Gender_Filter_Profile;                   // 0x0900(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Search_Gender;                                  // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Process_Add_Friend;                             // 0x0914(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0915(0x0003) MISSED OFFSET
	int                                                BP_Friend_Intimacy_Delete_State;                          // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BlackList_Friend_Scroll_End;                           // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Search_Segment;                                 // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Build_Relation;                        // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_DELETE_FRIEND_BLACK_ID;                                // 0x0928(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Intimacy_Relation_Available;                    // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0939(0x0003) MISSED OFFSET
	int                                                BP_NearBy_Gender_Filter;                                  // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Friend_Search_Nation;                                  // 0x0940(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Add_Index;                                      // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Friend_Intimacy_Op;                                    // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Like_Profile;                             // 0x0958(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Intimacy_Data>            BP_ARRAY_Intimacy_Data;                                   // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Profile;                             // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Apply_Friend_Lite_Profile;                       // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_FRIEND_IS_WATCHING_OPEN;                               // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	struct FString                                     BP_Friend_Intimacy_Build_Gid;                             // 0x09A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Recent_Teammate_ScrollStart;                           // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Search_Friend_Profile;                           // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Plat_Friend_Lite_Profile;                        // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Apply_Friend_Profile;                            // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Near_By_Profile;                                 // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Delete_Friend_Name;                                    // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_FRIEND_PROFILE_ID;                                     // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Send_Item;                                      // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_NearBy_Location_Open;                                  // 0x0A19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x6];                                       // 0x0A1A(0x0006) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_ALL_Friend_SendItem_Profile;                     // 0x0A20(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_SendItem_Friend_Lite_Profile;                    // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Intimacy_DetailData>      BP_Array_Intimacy_DetailData;                             // 0x0A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SendItem_Friend_Scroll_Start;                          // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SendItem_Friend_Scroll_End;                            // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Lobby_Friend_Search_Data         BP_STRUCT_Lobby_Friend_Search_Data;                       // 0x0A58(0x0158) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Recent_Teammate_Profile;                         // 0x0BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EnumRecentLikeOp                 BP_STRUCT_EnumRecentLikeOp;                               // 0x0BC0(0x000C) (Edit, BlueprintVisible)
	int                                                BP_Friend_Send_Item_ResID;                                // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Search_Friend_Scroll_Start;                            // 0x0BD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x0BD4(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Plat_Friend_Detail_Profile;                      // 0x0BD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Intimacy_DetailData              BP_STRUCT_Intimacy_DetailData;                            // 0x0BE8(0x0020) (Edit, BlueprintVisible)
	int                                                BP_Friend_Search_Tendency;                                // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0C0C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Lobby_Friend_Apply_Data          BP_STRUCT_Lobby_Friend_Apply_Data;                        // 0x0C10(0x0168) (Edit, BlueprintVisible)
	int                                                BP_Friend_Intimacy_Delete_Relation;                       // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendLiteProfile>        BP_ARRAY_Blacklist_Friend_Lite_Profile;                   // 0x0D80(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Inner_Friend_Profile;                            // 0x0D90(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Add_Friend_ID;                                         // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_DELETE_FRIEND_BLACK_NAME;                              // 0x0DB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Friend_Is_Show;                                        // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Friend_Intimacy_Apply_Has_New;                         // 0x0DC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x6];                                       // 0x0DC2(0x0006) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_Blacklist_Friend_Profile;                        // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Friend_Send_Item_Count;                                // 0x0DD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0DDC(0x0004) MISSED OFFSET
	struct FString                                     BP_RSPAdd_Friend_ID;                                      // 0x0DE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Platform_Friend_Scroll_Start;                          // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0DF4(0x0004) MISSED OFFSET
	struct FString                                     BP_Friend_Send_Item_Friend_ID;                            // 0x0DF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Lobby_Friend_Common_Data         BP_STRUCT_Lobby_Friend_Common_Data;                       // 0x0E08(0x0140) (Edit, BlueprintVisible)
	int                                                BP_Apply_Friend_Scroll_Start;                             // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0F4C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_Search_Data                      BP_STRUCT_Search_Data;                                    // 0x0F50(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_FriendSystem_Present_Coin_Friend_ID;                   // 0x0F70(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LobbyFriend_Master_RedPoint;                           // 0x0F80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0F81(0x0007) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile>            BP_ARRAY_SendItem_Friend_Detail_Profile;                  // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby_friend.bp_lobby_friend_C");
		return pStaticClass;
	}


	void EventLobbyFriendAddQQFriend_NoFetch();
	void EventLobbyFriendAddQQFriend();
	void EventLobbyFriendAddFriendReqList_NoFetch();
	void EventLobbyFriendAddFriendReqList();
	void EventLobbyFriendLabelSearchReq_NoFetch();
	void EventLobbyFriendLabelSearchReq();
	void EventLobbyFriendSearchReq_NoFetch();
	void EventLobbyFriendSearchReq();
	void EventLobbyFriendScrollApplyList_NoFetch();
	void EventLobbyFriendScrollApplyList();
	void EventLobbyFriendScrollSearchList_NoFetch();
	void EventLobbyFriendScrollSearchList();
	void EventFriendOnTapChange_NoFetch();
	void EventFriendOnTapChange();
	void EventGetRecentTeammateList_NoFetch();
	void EventGetRecentTeammateList();
	void EventLobbyFriendScrollInnerList_NoFetch();
	void EventLobbyFriendScrollInnerList();
	void EventLobbyFriendRespondApply_NoFetch();
	void EventLobbyFriendRespondApply();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventNearByCloseLocation_NoFetch();
	void EventNearByCloseLocation();
	void EventUnselectBatchDeleteInnerFriend_NoFetch();
	void EventUnselectBatchDeleteInnerFriend();
	void EventLobbyFriendDeleteBlackReq_NoFetch();
	void EventLobbyFriendDeleteBlackReq();
	void EventLobbyFriendProfileReq_NoFetch();
	void EventLobbyFriendProfileReq();
	void EventLobbyFriendDeleteReq_NoFetch();
	void EventLobbyFriendDeleteReq();
	void EventLobbyFriendScrollPlatList_NoFetch();
	void EventLobbyFriendScrollPlatList();
	void EventSetXYAPIShowRedPoint_NoFetch();
	void EventSetXYAPIShowRedPoint();
	void EventLobbyFriendReplyRelationReq_NoFetch();
	void EventLobbyFriendReplyRelationReq();
	void EventLobbyFriendIntimacyReq_NoFetch();
	void EventLobbyFriendIntimacyReq();
	void EventConfirmBatchDeleteInnerFriend_NoFetch();
	void EventConfirmBatchDeleteInnerFriend();
	void EventLobbyFriendDeleteRelationReq_NoFetch();
	void EventLobbyFriendDeleteRelationReq();
	void EventLobbyFriendBlackListScroll_NoFetch();
	void EventLobbyFriendBlackListScroll();
	void EventOpenFriendRuleDescriptionPanel_NoFetch();
	void EventOpenFriendRuleDescriptionPanel();
	void EventOpenMyCardPanelInFriendPanel_NoFetch();
	void EventOpenMyCardPanelInFriendPanel();
	void EventShowSendAddFriendRequestTips_NoFetch();
	void EventShowSendAddFriendRequestTips();
	void EventLobbyFriendBuildRelationReq_NoFetch();
	void EventLobbyFriendBuildRelationReq();
	void EventLobbySendFriendFinish_NoFetch();
	void EventLobbySendFriendFinish();
	void EventLobbySendItemReq_NoFetch();
	void EventLobbySendItemReq();
	void EventLeaveBatchDeleteInnerFriend_NoFetch();
	void EventLeaveBatchDeleteInnerFriend();
	void EventEnterBatchDeleteInnerFriend_NoFetch();
	void EventEnterBatchDeleteInnerFriend();
	void EventCheckWatchingSwitch_NoFetch();
	void EventCheckWatchingSwitch();
	void EventOpenNearByPanel_NoFetch();
	void EventOpenNearByPanel();
	void EventFetchNewNearByPersonInfoList_NoFetch();
	void EventFetchNewNearByPersonInfoList();
	void EventNearByUpdateFilterArray_NoFetch();
	void EventNearByUpdateFilterArray();
	void EventOpenMasterPanel_NoFetch();
	void EventOpenMasterPanel();
	void EventLobbyFriendFetchFriendList_NoFetch();
	void EventLobbyFriendFetchFriendList();
	void EventHideMasterPanel_NoFetch();
	void EventHideMasterPanel();
	void EventLobbyFriendMasterNotOpen_NoFetch();
	void EventLobbyFriendMasterNotOpen();
	void EventLobbyFriendSendItemList_NoFetch();
	void EventLobbyFriendSendItemList();
	void EventLobbyFriendGetBlackListReq_NoFetch();
	void EventLobbyFriendGetBlackListReq();
	void EventNearByOpenLocation_NoFetch();
	void EventNearByOpenLocation();
	void EventOpenIntimacyDescriptionPanel_NoFetch();
	void EventOpenIntimacyDescriptionPanel();
	void EventLobbyShowRecentLikePanel_NoFetch();
	void EventLobbyShowRecentLikePanel();
	void EventLobbyFriendChat_NoFetch();
	void EventLobbyFriendChat();
	void EventSetXYAPIHideRedPoint_NoFetch();
	void EventSetXYAPIHideRedPoint();
	void EventLobbyFriendRelationClick_NoFetch();
	void EventLobbyFriendRelationClick();
	void EventRecentTeammateScrollApplyList_NoFetch();
	void EventRecentTeammateScrollApplyList();
	void EventSelectBatchDeleteInnerFriend_NoFetch();
	void EventSelectBatchDeleteInnerFriend();
	void EventLobbyFriendWatch_NoFetch();
	void EventLobbyFriendWatch();
	void EventLobbyPresentCoinReq_NoFetch();
	void EventLobbyPresentCoinReq();
	void EventLobbyFriendApplyReq_NoFetch();
	void EventLobbyFriendApplyReq();
	void EventHideLobbyFriendUI_NoFetch();
	void EventHideLobbyFriendUI();
	void EventXYAPISetUrl_NoFetch();
	void EventXYAPISetUrl();
	void UserConstructionScript();
};


}

