//
#ifndef _TtC11ChatSession23ChatRecoveredKeysWorker_h
#define _TtC11ChatSession23ChatRecoveredKeysWorker_h
@import Foundation;

@class ChatKeys.ChatIdentityKeyService, ChatSession.ChatStorageStream, ChatSync.ChatBatchProcessor, ChatSync.ChatPinChangedDetector, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatRecoveredKeysWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatBatchProcessor batchProcessor;
    ChatSync.ChatPinChangedDetector pinChangedDetector;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession23ChatRecoveredKeysWorker_h */
