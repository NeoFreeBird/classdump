//
#ifndef _TtC16ChatConversation28MessageListPinnedItemsWorker_h
#define _TtC16ChatConversation28MessageListPinnedItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.KMPMessageListItemBuilder, ChatConversation.MessageBookingLinkSelectionStream, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, ChatModels.MessageDateInfoStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListPinnedItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatModels.MessageDateInfoStream messageDateInfoStream;
    ChatConversation.KMPMessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation28MessageListPinnedItemsWorker_h */
