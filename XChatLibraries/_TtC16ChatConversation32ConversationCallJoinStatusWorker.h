//
#ifndef _TtC16ChatConversation32ConversationCallJoinStatusWorker_h
#define _TtC16ChatConversation32ConversationCallJoinStatusWorker_h
@import Foundation;

@class ChatModels.CallStatusStream, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, DispatchQueue, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.ConversationCallJoinStatusWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.CallStatusStream callStatusStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    DispatchQueue queue;
}

@end

#endif /* _TtC16ChatConversation32ConversationCallJoinStatusWorker_h */
