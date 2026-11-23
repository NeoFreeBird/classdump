//
#ifndef _TtC11ChatSession15NoOpChatSession_h
#define _TtC11ChatSession15NoOpChatSession_h
@import Foundation;

@class ChatSync.ChatFetchedPostsStream, ChatSyncState.ChatAccountProviding, ChatSyncState.ChatActionStream, ChatSyncState.ChatComposerProviding, ChatSyncState.ChatContentProviding, ChatSyncState.ChatInboxProviding, ChatSyncState.ChatMediaDownloading, ChatSyncState.ChatPostStoring, _TtCs12_SwiftObject;

@interface ChatSession.NoOpChatSession : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatAccountProviding accountProvider;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatComposerProviding composerProvider;
    ChatSyncState.ChatContentProviding contentProvider;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
    ChatSync.ChatFetchedPostsStream fetchedPostsStream;
    ChatSyncState.ChatPostStoring postStore;
}

@end

#endif /* _TtC11ChatSession15NoOpChatSession_h */
