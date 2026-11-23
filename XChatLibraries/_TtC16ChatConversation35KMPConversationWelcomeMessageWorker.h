//
#ifndef _TtC16ChatConversation35KMPConversationWelcomeMessageWorker_h
#define _TtC16ChatConversation35KMPConversationWelcomeMessageWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B31Arm64_mainWelcomeMessageFetcher_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p;

@interface ChatConversation.KMPConversationWelcomeMessageWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    __C.Subsystem_ios_iosArm64_mainWelcomeMessageFetcher welcomeMessageFetcher;
}

@end

#endif /* _TtC16ChatConversation35KMPConversationWelcomeMessageWorker_h */
