//
#ifndef _TtC23ChatConversationDetails48ConversationParticipantRemoveAsAdminActionPlugin_h
#define _TtC23ChatConversationDetails48ConversationParticipantRemoveAsAdminActionPlugin_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsActionSending, ChatConversationDetails.ConversationParticipantActionPluginContext, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatConversationDetails.ConversationParticipantRemoveAsAdminActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationParticipantActionPluginContext context;
    ChatModelsCore.ConversationID conversationID;
    ChatConversationDetails.ConversationDetailsActionSending actionSender;
    ChatModelsCore.UserID owner;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

@end

#endif /* _TtC23ChatConversationDetails48ConversationParticipantRemoveAsAdminActionPlugin_h */
