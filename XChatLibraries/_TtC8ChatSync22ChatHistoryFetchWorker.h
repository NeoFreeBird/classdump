//
#ifndef _TtC8ChatSync22ChatHistoryFetchWorker_h
#define _TtC8ChatSync22ChatHistoryFetchWorker_h
@import Foundation;

@class ChatSync.ChatHistoryFetchStream, ChatSync.ChatHistoryFetcher, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatHistoryFetchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSync.ChatHistoryFetchStream historyFetchStream;
}

@end

#endif /* _TtC8ChatSync22ChatHistoryFetchWorker_h */
