//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation23MessageListActionWorker_h
#define _TtC16ChatConversation23MessageListActionWorker_h
@import Foundation;

@class ChatConversation.MessageListActionTriggerStream, ChatConversation.MessageListWorkerPluginContext, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.MessageListActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageListWorkerPluginContext context;
    ChatModelsCore.ConversationID conversationID;
    ChatConversation.MessageListActionTriggerStream messageListActionTriggerStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation23MessageListActionWorker_h */
