//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation26ConversationMetadataWorker_h
#define _TtC16ChatConversation26ConversationMetadataWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatSyncState.ChatAccountProviding, ChatSyncState.ChatConversationProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationMetadataWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatAccountProviding accountProvider;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ConversationMetadataStream pendingConversationMetadataStream;
}

@end

#endif /* _TtC16ChatConversation26ConversationMetadataWorker_h */
