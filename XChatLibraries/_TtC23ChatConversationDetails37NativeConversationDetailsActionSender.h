//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails37NativeConversationDetailsActionSender_h
#define _TtC23ChatConversationDetails37NativeConversationDetailsActionSender_h
@import Foundation;

@class ChatConversationDetails.NativeGroupJoinRequestsSource, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.UserID, ChatSyncState.ChatActionStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, _TtCs12_SwiftObject;

@interface ChatConversationDetails.NativeConversationDetailsActionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationDetails.NativeGroupJoinRequestsSource joinRequestsSource;
    ChatModelsCore.UserID owner;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC23ChatConversationDetails37NativeConversationDetailsActionSender_h */
