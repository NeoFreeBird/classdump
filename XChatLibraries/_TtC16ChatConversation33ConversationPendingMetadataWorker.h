//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation33ConversationPendingMetadataWorker_h
#define _TtC16ChatConversation33ConversationPendingMetadataWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatModelsCore.UserID, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationPendingMetadataWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModelsCore.UserID owner;
    ChatModels.ConversationMetadataStream pendingConversationMetadataStream;
}

@end

#endif /* _TtC16ChatConversation33ConversationPendingMetadataWorker_h */
