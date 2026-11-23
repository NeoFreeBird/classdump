//
#ifndef _TtC19ChatMessageComposer33KMPMessageComposerSendCoordinator_h
#define _TtC19ChatMessageComposer33KMPMessageComposerSendCoordinator_h
@import Foundation;

@class ChatGrokUpsell.PremiumUpsellNavigation, ChatMessageComposer.MessageSendParamsBuilder, ChatModels.ChatToastActionTriggerStream, ChatModels.ComplatPlanNameProviding, ChatModels.ConversationMetadataStream, ChatModels.ConversationSendInitiatedStream, ChatModelsCore.ConversationID, ChatUI.ChatImageLoading, _$sSo014Subsystem_ios_B28Arm64_mainEditMessageHandler_p, _$sSo014Subsystem_ios_B28Arm64_mainMessageSendHandler_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p, _TtCs12_SwiftObject;

@interface ChatMessageComposer.KMPMessageComposerSendCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    __C.Subsystem_ios_iosArm64_mainEditMessageHandler editMessageHandler;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    ChatUI.ChatImageLoading imageLoader;
    __C.Subsystem_ios_iosArm64_mainMessageSendHandler messageSendHandler;
    ChatMessageComposer.MessageSendParamsBuilder messageSendParamsBuilder;
    ChatGrokUpsell.PremiumUpsellNavigation premiumUpsellNavigation;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC19ChatMessageComposer33KMPMessageComposerSendCoordinator_h */
