//
#ifndef _TtC8ChatSync23ChatSocketCatchUpWorker_h
#define _TtC8ChatSync23ChatSocketCatchUpWorker_h
@import Foundation;

@class ChatSync.ChatInboxPull, ChatSync.ChatInboxPullRequestStream, ChatSync.ChatSocketSyncStream, ChatSyncState.ChatPullStatusStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatSocketCatchUpWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatInboxPull inboxPull;
    ChatSync.ChatInboxPullRequestStream pullRequestStream;
    ChatSyncState.ChatPullStatusStream pullStatusStream;
    ChatSync.ChatSocketSyncStream socketSyncStream;
}

@end

#endif /* _TtC8ChatSync23ChatSocketCatchUpWorker_h */
