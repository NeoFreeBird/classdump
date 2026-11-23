//
#ifndef _TtC16ChatConversation27KMPReactionTrayActionWorker_h
#define _TtC16ChatConversation27KMPReactionTrayActionWorker_h
@import Foundation;

@class ChatConversation.MessageReactionSending, ChatConversation.ReactionTrayActionTriggerStream, ChatKotlin.ObjectGraphProvider, ChatModels.ChatMessageItem, _$s11XFoundation11AsyncWorkerCN;

@interface ChatConversation.KMPReactionTrayActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversation.ReactionTrayActionTriggerStream actionTriggerStream;
    ChatModels.ChatMessageItem message;
    ChatConversation.MessageReactionSending messageReactionSender;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
}

@end

#endif /* _TtC16ChatConversation27KMPReactionTrayActionWorker_h */
