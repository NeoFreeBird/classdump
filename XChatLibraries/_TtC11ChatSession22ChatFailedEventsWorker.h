//
#ifndef _TtC11ChatSession22ChatFailedEventsWorker_h
#define _TtC11ChatSession22ChatFailedEventsWorker_h
@import Foundation;

@class ChatKeys.ChatConversationKeyIndex, ChatKeys.ChatIdentityKeyService, ChatKeys.ChatKeypairVersionIndex, ChatSession.ChatStorageStream, ChatSync.ChatBatchProcessor, ChatSync.ChatUnprocessedEventsStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatFailedEventsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatKeys.ChatKeypairVersionIndex keypairVersionIndex;
    ChatKeys.ChatConversationKeyIndex conversationKeyIndex;
    ChatSync.ChatBatchProcessor batchProcessor;
    ChatSync.ChatUnprocessedEventsStream unprocessedEventsStream;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession22ChatFailedEventsWorker_h */
