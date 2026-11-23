//
#ifndef _TtC16ChatConversation39ConversationPinnedMessagesContentWorker_h
#define _TtC16ChatConversation39ConversationPinnedMessagesContentWorker_h
@import Foundation;

@class ChatSyncState.ChatActionStream, ChatSyncState.ChatConversationProviding, ChatSyncState.ChatMediaDownloading, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationPinnedMessagesContentWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatConversationProviding conversationProvider;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
}

@end

#endif /* _TtC16ChatConversation39ConversationPinnedMessagesContentWorker_h */
