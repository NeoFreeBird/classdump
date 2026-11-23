//
#ifndef _TtC11ChatSession25ChatHistoryDownloadWorker_h
#define _TtC11ChatSession25ChatHistoryDownloadWorker_h
@import Foundation;

@class ChatSync.ChatHistoryFetcher, ChatSyncState.ChatConversationMetadataStream, ChatSyncState.ChatHistoryDownloadSettingsStream, ChatSyncState.ChatHistoryStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatHistoryDownloadWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatHistoryDownloadSettingsStream historyDownloadSettingsStream;
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSyncState.ChatHistoryStream historyStream;
}

@end

#endif /* _TtC11ChatSession25ChatHistoryDownloadWorker_h */
