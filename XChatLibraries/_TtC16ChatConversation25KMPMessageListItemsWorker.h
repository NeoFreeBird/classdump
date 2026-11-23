//
#ifndef _TtC16ChatConversation25KMPMessageListItemsWorker_h
#define _TtC16ChatConversation25KMPMessageListItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.KMPMessageListItemBuilder, ChatConversation.MessageBookingLinkSelectionStream, ChatConversation.MessageListWorkerPluginContext, ChatModels.ConversationChatItemsStream, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.KMPMessageListItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    ChatConversation.MessageListWorkerPluginContext context;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatConversation.KMPMessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation25KMPMessageListItemsWorker_h */
