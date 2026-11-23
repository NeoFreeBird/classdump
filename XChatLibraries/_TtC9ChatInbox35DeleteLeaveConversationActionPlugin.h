//
#ifndef _TtC9ChatInbox35DeleteLeaveConversationActionPlugin_h
#define _TtC9ChatInbox35DeleteLeaveConversationActionPlugin_h
@import Foundation;

@class ChatConversationList.ConversationActionContext, ChatModelsCore.UserID, _$sSo014Subsystem_ios_B28Arm64_mainParticipantUpdater_p, _$sSo014Subsystem_ios_B29Arm64_mainConversationManager_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p, _TtCs12_SwiftObject;

@interface ChatInbox.DeleteLeaveConversationActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationActionContext context;
    __C.Subsystem_ios_iosArm64_mainConversationManager conversationManager;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    ChatModelsCore.UserID owner;
    __C.Subsystem_ios_iosArm64_mainParticipantUpdater participantUpdater;
}

@end

#endif /* _TtC9ChatInbox35DeleteLeaveConversationActionPlugin_h */
