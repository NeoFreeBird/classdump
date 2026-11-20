//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatSearch31SearchConversationPreviewWorker_h
#define _TtC10ChatSearch31SearchConversationPreviewWorker_h
@import Foundation;

@class ChatSearch.NativeMessageSearchResultsStream, ChatSearch.SearchConversationPreviewStream, ChatSyncState.ChatInboxProviding, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatSearch.SearchConversationPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DispatchQueue queue;
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatSearch.NativeMessageSearchResultsStream messageSearchResultsStream;
    ChatSearch.SearchConversationPreviewStream searchConversationPreviewStream;
}

@end

#endif /* _TtC10ChatSearch31SearchConversationPreviewWorker_h */
