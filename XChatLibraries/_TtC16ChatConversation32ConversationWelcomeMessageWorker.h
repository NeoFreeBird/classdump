//
#ifndef _TtC16ChatConversation32ConversationWelcomeMessageWorker_h
#define _TtC16ChatConversation32ConversationWelcomeMessageWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.ConversationWelcomeMessageWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation32ConversationWelcomeMessageWorker_h */
