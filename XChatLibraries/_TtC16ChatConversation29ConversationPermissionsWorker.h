//
#ifndef _TtC16ChatConversation29ConversationPermissionsWorker_h
#define _TtC16ChatConversation29ConversationPermissionsWorker_h
@import Foundation;

@class ChatModelsCore.ConversationID, ChatModelsCore.UserID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationPermissionsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatModelsCore.UserID owner;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation29ConversationPermissionsWorker_h */
