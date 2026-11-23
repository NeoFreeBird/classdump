//
#ifndef _TtC16ChatConversation21MessageReactionSender_h
#define _TtC16ChatConversation21MessageReactionSender_h
@import Foundation;

@class ChatConversation.MessageReactionAnimationTriggerStream, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _TtCs12_SwiftObject;

@interface ChatConversation.MessageReactionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.MessageReactionAnimationTriggerStream messageReactionAnimationTriggerStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation21MessageReactionSender_h */
