//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageRequests31MessageRequestsPaginationWorker_h
#define _TtC19ChatMessageRequests31MessageRequestsPaginationWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatModelsCore.MessageRequestsTab, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatMessageRequests.MessageRequestsPaginationWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListStateStream listStateStream;
    ChatModelsCore.MessageRequestsTab messageRequestsTab;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC19ChatMessageRequests31MessageRequestsPaginationWorker_h */
