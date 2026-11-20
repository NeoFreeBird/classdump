//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatSearch28SearchMessageListStateWorker_h
#define _TtC10ChatSearch28SearchMessageListStateWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatSearch.ConversationExhaustiveFetchStream, ChatSearch.SearchConversationPreviewStream, ChatSearch.SearchQueryStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatSearch.SearchMessageListStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSearch.ConversationExhaustiveFetchStream conversationExhaustiveFetchStream;
    ChatConversationList.ConversationListStateStream listStateStream;
    DispatchQueue queue;
    ChatSearch.SearchConversationPreviewStream searchConversationPreviewStream;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch28SearchMessageListStateWorker_h */
