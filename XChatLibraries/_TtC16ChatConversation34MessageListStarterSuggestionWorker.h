//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation34MessageListStarterSuggestionWorker_h
#define _TtC16ChatConversation34MessageListStarterSuggestionWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatModels.ConversationMetadataStream, ChatModels.ConversationQuickReplyStream, ChatModels.ConversationSendInitiatedStream, ChatSyncState.ChatConversationProviding, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.MessageListStarterSuggestionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ConversationQuickReplyStream conversationQuickReplyStream;
    ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC16ChatConversation34MessageListStarterSuggestionWorker_h */
