//
#ifndef _TtC16ChatConversation26KMPMessageListActionWorker_h
#define _TtC16ChatConversation26KMPMessageListActionWorker_h
@import Foundation;

@class ChatConversation.MessageListActionTriggerStream, ChatConversation.MessageListWorkerPluginContext, ChatModelsCore.ConversationID, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B22Arm64_mainChatItemRepo_p, _$sSo014Subsystem_ios_B36Arm64_mainConversationPaginationRepo_p;

@interface ChatConversation.KMPMessageListActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainChatItemRepo chatItemRepo;
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainConversationPaginationRepo conversationPaginationRepo;
    ChatConversation.MessageListWorkerPluginContext context;
    ChatConversation.MessageListActionTriggerStream messageListActionTriggerStream;
}

@end

#endif /* _TtC16ChatConversation26KMPMessageListActionWorker_h */
