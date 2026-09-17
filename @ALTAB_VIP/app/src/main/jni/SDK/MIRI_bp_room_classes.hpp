#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:27 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_room.bp_room_C
// 0x01C0 (0x05B8 - 0x03F8)
class Abp_room_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Zone_Id_In_Room;                                       // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_CardInfo_NormalIsTime;                            // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_GroupType>                BP_ARRAY_GroupTypeList;                                   // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsCurListNormalRoom;                              // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	struct FString                                     BP_Room_CardInfo_Match;                                   // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsCompetitionRoom;                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                BP_Room_Map_Select;                                       // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Room_RefreshLeftTime;                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FBP_STRUCT_GroupType                        BP_STRUCT_GroupType;                                      // 0x0440(0x0018) (Edit, BlueprintVisible)
	int                                                LastRequestJoinRoomTime;                                  // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x045C(0x0004) MISSED OFFSET
	struct FString                                     BP_Room_CardInfo_Normal;                                  // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomInfo                         BP_STRUCT_RoomInfo;                                       // 0x0470(0x00A0) (Edit, BlueprintVisible)
	struct FString                                     BP_Room_CardInfo_Highlevel;                               // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectRoomID;                                          // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CreateRoom_Adv_Hot_Point_IsShow;                       // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_ZoneListInRoom;                                  // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_ClientVersion;                                    // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_CardInfo_HighlevelIsTime;                         // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0549(0x0007) MISSED OFFSET
	struct FString                                     BP_EnterRoom_ID;                                          // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsAnchor;                                         // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CreateRoom_Hot_Point_IsShow;                           // 0x0561(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x6];                                       // 0x0562(0x0006) MISSED OFFSET
	struct FString                                     BP_EnterRoom_Passwd;                                      // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomInfo>                 BP_ARRAY_RoomList;                                        // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_CardInfo;                                         // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsHighLevelRoom;                                  // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	int                                                BP_EnterRoom_Type;                                        // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Room_SelfName;                                         // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room.bp_room_C");
		return pStaticClass;
	}


	void EventEnterGamingRoomNotice_NoFetch();
	void EventEnterGamingRoomNotice();
	void EventGetMoreRoom_NoFetch();
	void EventGetMoreRoom();
	void EventOpenRoomChatUI_NoFetch();
	void EventOpenRoomChatUI();
	void EventRequestRoomList_NoFetch();
	void EventRequestRoomList();
	void EventRequestJoinRoom_NoFetch();
	void EventRequestJoinRoom();
	void EventShowRoomCreateUI_NoFetch();
	void EventShowRoomCreateUI();
	void EventEnterRoom_NoFetch();
	void EventEnterRoom();
	void EventNotAnchor_NoFetch();
	void EventNotAnchor();
	void EventCheckInputRoomID_NoFetch();
	void EventCheckInputRoomID();
	void EventAfterEnterRoomList_NoFetch();
	void EventAfterEnterRoomList();
	void EventCloseRoomChatUI_NoFetch();
	void EventCloseRoomChatUI();
	void EventRefreshRoomCardInfo_NoFetch();
	void EventRefreshRoomCardInfo();
	void EventCompareClickRefreshTime_NoFetch();
	void EventCompareClickRefreshTime();
	void EventGetZoneListInRoom_NoFetch();
	void EventGetZoneListInRoom();
	void EventSelectZoneInRoomList_Push_NoFetch();
	void EventSelectZoneInRoomList_Push();
	void EventRoomRelease_NoFetch();
	void EventRoomRelease();
	void EventVersionNotMatched_NoFetch();
	void EventVersionNotMatched();
	void EventAfterLeaveRoomList_NoFetch();
	void EventAfterLeaveRoomList();
	void EventRoomListChangeMap_NoFetch();
	void EventRoomListChangeMap();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

