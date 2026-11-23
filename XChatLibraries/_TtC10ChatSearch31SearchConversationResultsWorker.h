//
#ifndef _TtC10ChatSearch31SearchConversationResultsWorker_h
#define _TtC10ChatSearch31SearchConversationResultsWorker_h
@import Foundation;

@class ChatConversationList.ConversationActionPluginPointing, ChatSearch.SearchConversationResultsStream, ChatSearch.SearchPopularConversationsStream, ChatSearch.SearchQueryStream, ChatSearch.SearchResultsListWorkerPluginContext, ChatSyncState.ChatInboxProviding, Swift.Bool, _$s11XFoundation13CombineWorkerCN;

@interface ChatSearch.SearchConversationResultsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationActionPluginPointing actionPluginPoint;
    ChatSearch.SearchResultsListWorkerPluginContext context;
    ChatSyncState.ChatInboxProviding inboxProvider;
    Swift.Bool isArchiveChatsEnabled;
    ChatSearch.SearchPopularConversationsStream popularConversationsStream;
    ChatSearch.SearchConversationResultsStream searchConversationResultsStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch31SearchConversationResultsWorker_h */
