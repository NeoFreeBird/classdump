//
#ifndef _TtC10ChatSearch19MessageSearchWorker_h
#define _TtC10ChatSearch19MessageSearchWorker_h
@import Foundation;

@class ChatSearch.MessageSearchResultsStream, ChatSearch.SearchQueryStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSearch.MessageSearchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSearch.MessageSearchResultsStream messageSearchResultsStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch19MessageSearchWorker_h */
