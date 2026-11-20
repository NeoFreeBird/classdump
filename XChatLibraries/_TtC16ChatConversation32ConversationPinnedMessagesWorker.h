//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation32ConversationPinnedMessagesWorker_h
#define _TtC16ChatConversation32ConversationPinnedMessagesWorker_h
@import Foundation;

@class ChatConversation.NativePinnedMessageItemBuilder, ChatModels.ConversationPinnedMessagesStream, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.ConversationPinnedMessagesWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatContentProviding contentProvider;
    ChatModels.ConversationPinnedMessagesStream conversationPinnedMessagesStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatConversation.NativePinnedMessageItemBuilder pinnedMessageItemBuilder;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation32ConversationPinnedMessagesWorker_h */
