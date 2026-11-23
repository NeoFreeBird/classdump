//
#ifndef _TtC8ChatSync26ChatInboxPullTriggerWorker_h
#define _TtC8ChatSync26ChatInboxPullTriggerWorker_h
@import Foundation;

@class ChatSync.ChatInboxPull, ChatSync.ChatSocketSyncStream, ChatTransport.ChatSocketDesiredStateStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatInboxPullTriggerWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatInboxPull inboxPull;
    ChatTransport.ChatSocketDesiredStateStream desiredStateStream;
    ChatSync.ChatSocketSyncStream socketSyncStream;
}

@end

#endif /* _TtC8ChatSync26ChatInboxPullTriggerWorker_h */
