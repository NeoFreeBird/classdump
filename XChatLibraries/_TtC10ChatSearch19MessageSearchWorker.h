//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatSearch19MessageSearchWorker_h
#define _TtC10ChatSearch19MessageSearchWorker_h
@import Foundation;

@class ChatSearch.NativeMessageSearchResultsStream, ChatSearch.SearchQueryStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSearch.MessageSearchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSearch.NativeMessageSearchResultsStream messageSearchResultsStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch19MessageSearchWorker_h */
