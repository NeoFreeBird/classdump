//
#ifndef _TtC16ChatConversation24PinnedMessagesLoadWorker_h
#define _TtC16ChatConversation24PinnedMessagesLoadWorker_h
@import Foundation;

@class ChatConversation.PinnedMessagesLoadStateStream, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.PinnedMessagesLoadWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.PinnedMessagesLoadStateStream pinnedMessagesLoadStateStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation24PinnedMessagesLoadWorker_h */
