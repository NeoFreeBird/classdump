//
#ifndef _TtC14DMConversation35KMPConversationWelcomeMessageWorker_h
#define _TtC14DMConversation35KMPConversationWelcomeMessageWorker_h
@import Foundation;

@class _$s10ChatModels26ConversationMetadataStreamCMn, _$s11XFoundation11AsyncWorkerCN, _$s14ChatModelsCore14ConversationIDOMn, _$sSo014Subsystem_ios_B31Arm64_mainWelcomeMessageFetcher_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p;

@interface DMConversation.KMPConversationWelcomeMessageWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    nominal type descriptor for ChatModels.ConversationMetadataStream conversationMetadataStream;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    __C.Subsystem_ios_iosArm64_mainWelcomeMessageFetcher welcomeMessageFetcher;
}

@end

#endif /* _TtC14DMConversation35KMPConversationWelcomeMessageWorker_h */
