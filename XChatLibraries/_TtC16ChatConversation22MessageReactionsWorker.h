//
#ifndef _TtC16ChatConversation22MessageReactionsWorker_h
#define _TtC16ChatConversation22MessageReactionsWorker_h
@import Foundation;

@class ChatConversation.MessageReactionsStream, ChatModels.ConversationMetadataStream, ChatModelsCore.UserID, ChatSyncState.ChatConversationProviding, _$s11XFoundation13CombineWorkerCN, _$sSS;

@interface ChatConversation.MessageReactionsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    Swift.String messageID;
    ChatConversation.MessageReactionsStream messageReactionsStream;
    ChatModelsCore.UserID ownerID;
    ChatSyncState.ChatConversationProviding conversationProvider;
}

@end

#endif /* _TtC16ChatConversation22MessageReactionsWorker_h */
