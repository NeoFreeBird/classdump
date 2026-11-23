//
#ifndef _TtC11ChatSession23ChatOutboxRestoreWorker_h
#define _TtC11ChatSession23ChatOutboxRestoreWorker_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatOutboxRestoreStream, ChatSession.ChatOrphanRecoveryLedger, ChatSession.ChatStorageStream, ChatSync.ChatProjection, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatOutboxRestoreWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.UserID owner;
    ChatSession.ChatOrphanRecoveryLedger orphanRecoveryLedger;
    ChatSync.ChatProjection projection;
    ChatSession.ChatStorageStream storageStream;
    ChatSend.ChatOutboxRestoreStream outboxRestoreStream;
}

@end

#endif /* _TtC11ChatSession23ChatOutboxRestoreWorker_h */
