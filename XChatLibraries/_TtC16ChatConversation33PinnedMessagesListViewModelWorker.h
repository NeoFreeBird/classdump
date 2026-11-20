//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
