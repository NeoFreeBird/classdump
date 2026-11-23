//
#ifndef _TtC11ChatSession18ChatSessionRuntime_h
#define _TtC11ChatSession18ChatSessionRuntime_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatKeys.ChatKeysWorkerPluginPoint, ChatSend.ChatOutboxQueueStream, ChatSend.ChatOutgoingMessageBuilder, ChatSend.ChatSendWorkerPluginPoint, ChatSession.ChatSessionWorkerPluginPoint, ChatSync.ChatFetchedPostsStream, ChatSync.ChatHistoryFetcher, ChatSync.ChatInboxPull, ChatSync.ChatSyncWorkerPluginPoint, ChatSync.ChatWatermark, ChatSyncState.ChatAccountProviding, ChatSyncState.ChatActionStream, ChatSyncState.ChatComposerProviding, ChatSyncState.ChatContentProviding, ChatSyncState.ChatConversationProviderBuilding, ChatSyncState.ChatInboxProviding, ChatSyncState.ChatMediaDownloading, ChatSyncState.ChatPostStoring, ChatTransport.ChatSocketDesiredStateStream, Swift.Bool, _$s11XFoundation7WorkingMp, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ChatSession.ChatSessionRuntime : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatAccountProviding accountProvider;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatComposerProviding composerProvider;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
    ChatSync.ChatFetchedPostsStream fetchedPostsStream;
    ChatSyncState.ChatPostStoring postStore;
    ChatSyncState.ChatConversationProviderBuilding conversationProviderBuilder;
    ChatSession.ChatSessionWorkerPluginPoint workerPluginPoint;
    ChatKeys.ChatKeysWorkerPluginPoint keysWorkerPluginPoint;
    ChatSync.ChatSyncWorkerPluginPoint syncActionWorkerPluginPoint;
    ChatSync.ChatSyncWorkerPluginPoint syncWorkerPluginPoint;
    ChatTransport.ChatSocketDesiredStateStream socketDesiredStateStream;
    ChatSync.ChatInboxPull inboxPull;
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSync.ChatWatermark watermark;
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSend.ChatSendWorkerPluginPoint sendActionWorkerPluginPoint;
    ChatSend.ChatSendWorkerPluginPoint sendSessionWorkerPluginPoint;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
    ChatSend.ChatOutgoingMessageBuilder outboxMessageBuilder;
    protocol descriptor for XFoundation.Working actionDispatchWorker;
    __C.NSLock lifecycleLock;
    Swift.Bool isStarted;
    Swift.Bool isHandlingActions;
    Swift.Bool isShutDown;
}

@end

#endif /* _TtC11ChatSession18ChatSessionRuntime_h */
