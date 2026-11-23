//
#ifndef _TtC16ChatConversation22MessageListItemsWorker_h
#define _TtC16ChatConversation22MessageListItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.KMPMessageListItemBuilder, ChatConversation.MessageListItemBuilder, ChatConversation.MessageListWorkerPluginContext, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, ChatModels.ConversationQuickReplyStream, ChatModelsCore.SequenceNumber ?, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatConversation.MessageListWorkerPluginContext context;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatModels.ConversationQuickReplyStream conversationQuickReplyStream;
    ChatModelsCore.SequenceNumber ? lastSeenSequenceNumber;
    ChatConversation.KMPMessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.MessageListItemBuilder nativeMessageListItemBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation22MessageListItemsWorker_h */
