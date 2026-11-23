//
#ifndef _TtC16ChatConversation24MessageInfoDetailsWorker_h
#define _TtC16ChatConversation24MessageInfoDetailsWorker_h
@import Foundation;

@class ChatConversation.MessageInfoDetailsStream, ChatModels.ChatMessageItem, ChatModels.ConversationMetadataStream, ChatSyncState.ChatConversationProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.MessageInfoDetailsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ChatMessageItem message;
    ChatConversation.MessageInfoDetailsStream messageInfoDetailsStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
}

@end

#endif /* _TtC16ChatConversation24MessageInfoDetailsWorker_h */
