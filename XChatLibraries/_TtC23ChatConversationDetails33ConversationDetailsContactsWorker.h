//
#ifndef _TtC23ChatConversationDetails33ConversationDetailsContactsWorker_h
#define _TtC23ChatConversationDetails33ConversationDetailsContactsWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsContactsStream, ChatModels.ChatContactsIntegrating, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversationDetails.ConversationDetailsContactsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsIntegrating contactsIntegration;
    ChatConversationDetails.ConversationDetailsContactsStream contactsStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC23ChatConversationDetails33ConversationDetailsContactsWorker_h */
