//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation29ConversationPermissionsWorker_h
#define _TtC14DMConversation29ConversationPermissionsWorker_h
@import Foundation;

@class _$s11XFoundation11AsyncWorkerCN, _$s13ChatSyncState0A12ActionStreamCMn, _$s14ChatModelsCore14ConversationIDOMn, _$s14ChatModelsCore6UserIDVMn;

@interface DMConversation.ConversationPermissionsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    nominal type descriptor for ChatModelsCore.UserID owner;
    nominal type descriptor for ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC14DMConversation29ConversationPermissionsWorker_h */
