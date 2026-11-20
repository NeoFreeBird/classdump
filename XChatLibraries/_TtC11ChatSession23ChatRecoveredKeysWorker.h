//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession23ChatRecoveredKeysWorker_h
#define _TtC11ChatSession23ChatRecoveredKeysWorker_h
@import Foundation;

@class ChatKeys.XChatIdentityKeyService, ChatSession.ChatStorageStream, ChatSync.XChatBatchProcessor, ChatSync.XChatPinChangedDetector, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatRecoveredKeysWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatKeys.XChatIdentityKeyService identityKeyService;
    ChatSync.XChatBatchProcessor batchProcessor;
    ChatSync.XChatPinChangedDetector pinChangedDetector;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession23ChatRecoveredKeysWorker_h */
