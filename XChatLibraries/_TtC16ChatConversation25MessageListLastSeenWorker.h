//
#ifndef _TtC16ChatConversation25MessageListLastSeenWorker_h
#define _TtC16ChatConversation25MessageListLastSeenWorker_h
@import Foundation;

@class ChatConversation.MessageListSequenceNumberStream, ChatConversation.MessageListVisibilityStream, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.MessageListLastSeenWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.MessageListSequenceNumberStream messageListSequenceNumberStream;
    ChatConversation.MessageListVisibilityStream messageListVisibilityStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation25MessageListLastSeenWorker_h */
