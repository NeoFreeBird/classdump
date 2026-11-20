//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation22KMPMessageActionSender_h
#define _TtC16ChatConversation22KMPMessageActionSender_h
@import Foundation;

@class ChatModelsCore.ConversationID, _$sSo014Subsystem_ios_B28Arm64_mainMessageSendHandler_p, _$sSo014Subsystem_ios_B30Arm64_mainDeleteMessageHandler_p, _$sSo014Subsystem_ios_B30Arm64_mainReportMessageHandler_p, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p, _TtCs12_SwiftObject;

@interface ChatConversation.KMPMessageActionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainDeleteMessageHandler deleteMessageHandler;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    __C.Subsystem_ios_iosArm64_mainMessageSendHandler messageSendHandler;
    __C.Subsystem_ios_iosArm64_mainReportMessageHandler reportMessageHandler;
}

@end

#endif /* _TtC16ChatConversation22KMPMessageActionSender_h */
