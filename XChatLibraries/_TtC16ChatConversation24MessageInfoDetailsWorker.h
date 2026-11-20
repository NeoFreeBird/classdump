//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
