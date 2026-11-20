//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation29ConversationDataFetcherWorker_h
#define _TtC16ChatConversation29ConversationDataFetcherWorker_h
@import Foundation;

@class ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationDataFetcherWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation29ConversationDataFetcherWorker_h */
