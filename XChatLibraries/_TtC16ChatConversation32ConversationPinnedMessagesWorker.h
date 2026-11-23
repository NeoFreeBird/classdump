//
#ifndef _TtC16ChatConversation32ConversationPinnedMessagesWorker_h
#define _TtC16ChatConversation32ConversationPinnedMessagesWorker_h
@import Foundation;

@class ChatConversation.PinnedMessageItemBuilder, ChatModels.ConversationPinnedMessagesStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.ConversationPinnedMessagesWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatConversation.PinnedMessageItemBuilder pinnedMessageItemBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation32ConversationPinnedMessagesWorker_h */
