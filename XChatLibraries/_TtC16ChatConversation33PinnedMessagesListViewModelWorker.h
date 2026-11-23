//
#ifndef _TtC16ChatConversation33PinnedMessagesListViewModelWorker_h
#define _TtC16ChatConversation33PinnedMessagesListViewModelWorker_h
@import Foundation;

@class ChatConversation.PinnedMessagesListViewModelStream, ChatConversation.PinnedMessagesLoadStateStream, ChatModels.ConversationMetadataStream, ChatModels.ConversationPinnedMessagesStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.PinnedMessagesListViewModelWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatConversation.PinnedMessagesListViewModelStream pinnedMessagesListViewModelStream;
    ChatConversation.PinnedMessagesLoadStateStream pinnedMessagesLoadStateStream;
}

@end

#endif /* _TtC16ChatConversation33PinnedMessagesListViewModelWorker_h */
