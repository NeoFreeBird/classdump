//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation32ConversationWelcomeMessageWorker_h
#define _TtC14DMConversation32ConversationWelcomeMessageWorker_h
@import Foundation;

@class _$s10ChatModels26ConversationMetadataStreamCMn, _$s11XFoundation11AsyncWorkerCN, _$s13ChatSyncState0A12ActionStreamCMn, _$s14ChatModelsCore14ConversationIDOMn;

@interface DMConversation.ConversationWelcomeMessageWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    nominal type descriptor for ChatModels.ConversationMetadataStream conversationMetadataStream;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC14DMConversation32ConversationWelcomeMessageWorker_h */
