//
#ifndef _TtC16ChatConversation35KMPMessageListTypingIndicatorWorker_h
#define _TtC16ChatConversation35KMPMessageListTypingIndicatorWorker_h
@import Foundation;

@class ChatConversation.MessageListTypingIndicatorStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B29Arm64_mainTypingIndicatorRepo_p;

@interface ChatConversation.KMPMessageListTypingIndicatorWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainTypingIndicatorRepo typingIndicatorRepo;
    ChatConversation.MessageListTypingIndicatorStream messageListTypingIndicatorStream;
}

@end

#endif /* _TtC16ChatConversation35KMPMessageListTypingIndicatorWorker_h */
