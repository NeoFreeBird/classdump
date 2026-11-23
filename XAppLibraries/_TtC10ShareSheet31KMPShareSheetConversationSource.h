//
#ifndef _TtC10ShareSheet31KMPShareSheetConversationSource_h
#define _TtC10ShareSheet31KMPShareSheetConversationSource_h
@import Foundation;

@class ShareSheet.ShareSheetConnectionStateStream, _$s11ChatGrokBot0B22BotsInboxEntriesStreamCMn, _$s14ChatModelsCore6UserIDVMn, _$sSo014Subsystem_ios_B24Arm64_mainKeypairManager_p, _$sSo014Subsystem_ios_B25Arm64_mainUserInviteStore_p, _$sSo014Subsystem_ios_B28Arm64_mainMessageSendHandler_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatConnectionManager_p, _$sSo014Subsystem_ios_B33Arm64_mainXChatNumberMatchLabeler_p, _$sSo014Subsystem_ios_B34Arm64_mainConversationMetadataRepo_p, _$sSo014Subsystem_ios_B34Arm64_mainShareSheetSuggestionRepo_p, _TtCs12_SwiftObject;

@interface ShareSheet.KMPShareSheetConversationSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainXChatConnectionManager connectionManager;
    ShareSheet.ShareSheetConnectionStateStream connectionStateStream;
    __C.Subsystem_ios_iosArm64_mainConversationMetadataRepo conversationMetadataRepo;
    nominal type descriptor for ChatGrokBot.GrokBotsInboxEntriesStream grokBotsInboxEntriesStream;
    __C.Subsystem_ios_iosArm64_mainKeypairManager keypairManager;
    __C.Subsystem_ios_iosArm64_mainMessageSendHandler messageSendHandler;
    __C.Subsystem_ios_iosArm64_mainXChatNumberMatchLabeler numberMatchLabeler;
    nominal type descriptor for ChatModelsCore.UserID owner;
    __C.Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo shareSheetSuggestionRepo;
    __C.Subsystem_ios_iosArm64_mainUserInviteStore userInviteStore;
}

@end

#endif /* _TtC10ShareSheet31KMPShareSheetConversationSource_h */
