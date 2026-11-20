//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation22MessageListItemsWorker_h
#define _TtC16ChatConversation22MessageListItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageListItemBuilder, ChatConversation.MessageListWorkerPluginContext, ChatConversation.NativeMessageListItemBuilder, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, ChatModels.ConversationQuickReplyStream, ChatModelsCore.SequenceNumber ?, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatConversation.MessageListWorkerPluginContext context;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ConversationQuickReplyStream conversationQuickReplyStream;
    ChatModelsCore.SequenceNumber ? lastSeenSequenceNumber;
    ChatConversation.MessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.NativeMessageListItemBuilder nativeMessageListItemBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation22MessageListItemsWorker_h */
