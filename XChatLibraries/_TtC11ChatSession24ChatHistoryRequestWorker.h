//
#ifndef _TtC11ChatSession24ChatHistoryRequestWorker_h
#define _TtC11ChatSession24ChatHistoryRequestWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.ChatHistoryFetcher, ChatSync.ChatHistoryRequestStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatHistoryRequestWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatHistoryRequestStream historyRequestStream;
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession24ChatHistoryRequestWorker_h */
