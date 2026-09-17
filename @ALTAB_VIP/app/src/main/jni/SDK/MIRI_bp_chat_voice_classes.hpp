#pragma once

// PlayerUnknown's Battle Ground Mobile Lite (0.27.0) SDK Generate by  @MIRI_OWNER
// Telegram Channel:- @MIRI_CHEAT
// Generate on Sun Feb 25 13:48:32 2024
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C
// 0x00E0 (0x04D8 - 0x03F8)
class Abp_chat_voice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_GlobalChatvoiceCurrentPlayFile;                        // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalChatvoiceDownloadData      BP_STRUCT_GlobalChatvoiceDownloadData;                    // 0x0410(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_GlobalChatvoiceUploadMsgId;                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentRole;                            // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceMicOpened;                              // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceRecordSuccess;                          // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceIsTeamup;                               // 0x0472(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0473(0x0005) MISSED OFFSET
	TArray<struct FBP_STRUCT_GlobalChatvoiceDownloadData> BP_ARRAY_GlobalChatvoiceDownloadList;                     // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalChatvoiceCurrentStage;                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalChatvoiceCurrentMode;                            // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceToTextContent;                          // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_GlobalChatvoiceDefaultOpenTeam;                        // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalChatvoiceSpeakerOpened;                          // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x04B2(0x0002) MISSED OFFSET
	int                                                BP_GlobalChatvoiceTotalLimit;                             // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalChatvoiceUploadTime;                             // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	struct FString                                     BP_GlobalChatvoiceCurrentRoom;                            // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_voice.bp_chat_voice_C");
		return pStaticClass;
	}


	void EventCancelGVoiceRecord_NoFetch();
	void EventCancelGVoiceRecord();
	void EventChangeGVoiceMode_NoFetch();
	void EventChangeGVoiceMode();
	void EventStartPlayGVoiceRecord_NoFetch();
	void EventStartPlayGVoiceRecord();
	void EventStartGVoiceRecord_NoFetch();
	void EventStartGVoiceRecord();
	void EventUploadGVoiceRecord_NoFetch();
	void EventUploadGVoiceRecord();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventNotifySystemMicOpen_NoFetch();
	void EventNotifySystemMicOpen();
	void EventNotifyDownloadFailed_NoFetch();
	void EventNotifyDownloadFailed();
	void EventChatRequestPrivacy_NoFetch();
	void EventChatRequestPrivacy();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventStopGVoiceRecord_NoFetch();
	void EventStopGVoiceRecord();
	void EventNotifySystemVoiceOpen_NoFetch();
	void EventNotifySystemVoiceOpen();
	void EventNotifyRecordTooShort_NoFetch();
	void EventNotifyRecordTooShort();
	void EventStopPlayGVoiceRecord_NoFetch();
	void EventStopPlayGVoiceRecord();
	void EventNotifySystemSpeakerOpen_NoFetch();
	void EventNotifySystemSpeakerOpen();
	void EventClearGVoiceProcedure_NoFetch();
	void EventClearGVoiceProcedure();
	void EventNotifyVoiceProcedureFailed_NoFetch();
	void EventNotifyVoiceProcedureFailed();
	void EventChangeSpeakerState_NoFetch();
	void EventChangeSpeakerState();
	void EventTickVoiceRoom_NoFetch();
	void EventTickVoiceRoom();
	void EventNotifyVoiceOpenSpeaker_NoFetch();
	void EventNotifyVoiceOpenSpeaker();
	void EventChangeMicState_NoFetch();
	void EventChangeMicState();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventOnTryOpenMic_NoFetch();
	void EventOnTryOpenMic();
	void UserConstructionScript();
};


}

