//
#ifndef _TtC10ChatSearch32SearchPopularConversationsWorker_h
#define _TtC10ChatSearch32SearchPopularConversationsWorker_h
@import Foundation;

@class ChatSearch.SearchPopularConversationsStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSearch.SearchPopularConversationsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSearch.SearchPopularConversationsStream popularConversationsStream;
}

@end

#endif /* _TtC10ChatSearch32SearchPopularConversationsWorker_h */
