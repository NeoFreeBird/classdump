//
#ifndef _TtC16ChatConversation25MessageListAllItemsWorker_h
#define _TtC16ChatConversation25MessageListAllItemsWorker_h
@import Foundation;

@class ChatConversation.ConversationMessageListItemStream, ChatConversation.KMPMessageListItemBuilder, ChatConversation.MessageListTypingIndicatorStream, ChatModels.MessageDateInfoStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.MessageListAllItemsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.MessageDateInfoStream messageDateInfoStream;
    ChatConversation.KMPMessageListItemBuilder messageListItemBuilder;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.MessageListTypingIndicatorStream messageListTypingIndicatorStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation25MessageListAllItemsWorker_h */
