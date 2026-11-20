//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation27NativeMessageReactionSender_h
#define _TtC16ChatConversation27NativeMessageReactionSender_h
@import Foundation;

@class ChatConversation.MessageReactionAnimationTriggerStream, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _TtCs12_SwiftObject;

@interface ChatConversation.NativeMessageReactionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.MessageReactionAnimationTriggerStream messageReactionAnimationTriggerStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation27NativeMessageReactionSender_h */
