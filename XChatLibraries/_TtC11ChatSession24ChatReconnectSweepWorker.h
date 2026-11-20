//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession24ChatReconnectSweepWorker_h
#define _TtC11ChatSession24ChatReconnectSweepWorker_h
@import Foundation;

@class ChatSend.XChatPendingMessagesRetrySweep, ChatSession.ChatOutboxRestoreStream, ChatSyncState.ChatConnectionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatReconnectSweepWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatConnectionStream connectionStream;
    ChatSend.XChatPendingMessagesRetrySweep pendingMessagesRetrySweep;
    ChatSession.ChatOutboxRestoreStream outboxRestoreStream;
}

@end

#endif /* _TtC11ChatSession24ChatReconnectSweepWorker_h */
