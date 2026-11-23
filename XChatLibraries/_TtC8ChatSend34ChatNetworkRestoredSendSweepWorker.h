//
#ifndef _TtC8ChatSend34ChatNetworkRestoredSendSweepWorker_h
#define _TtC8ChatSend34ChatNetworkRestoredSendSweepWorker_h
@import Foundation;

@class ChatSend.ChatOutboxQueueStream, ChatSend.ChatOutboxRestoreStream, ChatSync.ChatProjection, ChatSyncState.ChatNetworkReachabilityStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSend.ChatNetworkRestoredSendSweepWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatNetworkReachabilityStream networkReachabilityStream;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
    ChatSend.ChatOutboxRestoreStream outboxRestoreStream;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSend34ChatNetworkRestoredSendSweepWorker_h */
