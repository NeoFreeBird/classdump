//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession23ChatOutboxRestoreWorker_h
#define _TtC11ChatSession23ChatOutboxRestoreWorker_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSession.ChatOrphanRecoveryLedger, ChatSession.ChatOutboxRestoreStream, ChatSession.ChatStorageStream, ChatSync.XChatProjection, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatOutboxRestoreWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.UserID owner;
    ChatSession.ChatOrphanRecoveryLedger orphanRecoveryLedger;
    ChatSync.XChatProjection projection;
    ChatSession.ChatStorageStream storageStream;
    ChatSession.ChatOutboxRestoreStream outboxRestoreStream;
}

@end

#endif /* _TtC11ChatSession23ChatOutboxRestoreWorker_h */
