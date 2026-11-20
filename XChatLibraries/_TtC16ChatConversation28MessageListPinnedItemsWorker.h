//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation28MessageListPinnedItemsWorker_h
#define _TtC16ChatConversation28MessageListPinnedItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageBookingLinkSelectionStream, ChatConversation.MessageListItemBuilder, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, ChatModels.MessageDateInfoStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListPinnedItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatModels.MessageDateInfoStream messageDateInfoStream;
    ChatConversation.MessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation28MessageListPinnedItemsWorker_h */
