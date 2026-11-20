//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
