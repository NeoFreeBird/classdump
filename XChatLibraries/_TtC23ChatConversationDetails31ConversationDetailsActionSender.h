//
#ifndef _TtC23ChatConversationDetails31ConversationDetailsActionSender_h
#define _TtC23ChatConversationDetails31ConversationDetailsActionSender_h
@import Foundation;

@class ChatConversationDetails.GroupJoinRequestsSource, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.UserID, ChatSyncState.ChatActionStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, _TtCs12_SwiftObject;

@interface ChatConversationDetails.ConversationDetailsActionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationDetails.GroupJoinRequestsSource joinRequestsSource;
    ChatModelsCore.UserID owner;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC23ChatConversationDetails31ConversationDetailsActionSender_h */
