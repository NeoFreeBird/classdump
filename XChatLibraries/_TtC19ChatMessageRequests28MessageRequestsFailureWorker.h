//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageRequests28MessageRequestsFailureWorker_h
#define _TtC19ChatMessageRequests28MessageRequestsFailureWorker_h
@import Foundation;

@class ChatMessageRequests.MessageRequestsFailureStream, ChatModelsCore.MessageRequestsTab, ChatSyncState.ChatInboxProviding, _$s11XFoundation13CombineWorkerCN;

@interface ChatMessageRequests.MessageRequestsFailureWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatInboxProviding inboxProvider;
    ChatMessageRequests.MessageRequestsFailureStream messageRequestsFailureStream;
    ChatModelsCore.MessageRequestsTab messageRequestsTab;
}

@end

#endif /* _TtC19ChatMessageRequests28MessageRequestsFailureWorker_h */
