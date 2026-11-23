//
#ifndef _TtC10ChatSearch31SearchConversationPreviewWorker_h
#define _TtC10ChatSearch31SearchConversationPreviewWorker_h
@import Foundation;

@class ChatSearch.MessageSearchResultsStream, ChatSearch.SearchConversationPreviewStream, ChatSyncState.ChatInboxProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatSearch.SearchConversationPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DispatchQueue queue;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSearch.MessageSearchResultsStream messageSearchResultsStream;
    ChatSearch.SearchConversationPreviewStream searchConversationPreviewStream;
}

@end

#endif /* _TtC10ChatSearch31SearchConversationPreviewWorker_h */
