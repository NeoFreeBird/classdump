//
#ifndef _TtC10ChatSearch33SearchConversationListStateWorker_h
#define _TtC10ChatSearch33SearchConversationListStateWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatSearch.SearchConversationResultsStream, ChatSearch.SearchLeadingResultsStream, ChatSearch.SearchQueryStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatSearch.SearchConversationListStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListStateStream listStateStream;
    ChatSearch.SearchConversationResultsStream searchConversationResultsStream;
    ChatSearch.SearchLeadingResultsStream searchLeadingResultsStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch33SearchConversationListStateWorker_h */
