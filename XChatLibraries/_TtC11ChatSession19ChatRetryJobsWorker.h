//
#ifndef _TtC11ChatSession19ChatRetryJobsWorker_h
#define _TtC11ChatSession19ChatRetryJobsWorker_h
@import Foundation;

@class ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSend.ChatSQLiteRetryJobStore, ChatSession.ChatStorageStream, ChatSync.ChatPendingMutationsStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatRetryJobsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSend.ChatSQLiteRetryJobStore store;
    ChatSend.ChatRetryJobFactory factory;
    ChatSync.ChatPendingMutationsStream pendingMutationsStream;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession19ChatRetryJobsWorker_h */
