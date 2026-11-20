//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession22ChatFailedEventsWorker_h
#define _TtC11ChatSession22ChatFailedEventsWorker_h
@import Foundation;

@class ChatKeys.XChatConversationKeyIndex, ChatKeys.XChatIdentityKeyService, ChatKeys.XChatKeypairVersionIndex, ChatSession.ChatStorageStream, ChatSync.XChatBatchProcessor, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatFailedEventsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatKeys.XChatKeypairVersionIndex keypairVersionIndex;
    ChatKeys.XChatConversationKeyIndex conversationKeyIndex;
    ChatSync.XChatBatchProcessor batchProcessor;
    ChatKeys.XChatIdentityKeyService identityKeyService;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession22ChatFailedEventsWorker_h */
