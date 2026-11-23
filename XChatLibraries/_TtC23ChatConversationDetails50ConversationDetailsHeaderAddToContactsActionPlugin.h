//
#ifndef _TtC23ChatConversationDetails50ConversationDetailsHeaderAddToContactsActionPlugin_h
#define _TtC23ChatConversationDetails50ConversationDetailsHeaderAddToContactsActionPlugin_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsContactsStream, ChatConversationDetails.ConversationDetailsHeaderActionSection, ChatModels.ChatContactsIntegrating, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatConversationDetails.ConversationDetailsHeaderAddToContactsActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsIntegrating contactsIntegration;
    ChatConversationDetails.ConversationDetailsContactsStream contactsStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModelsCore.UserID owner;
    weak __C.UIViewController? presenter;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatConversationDetails.ConversationDetailsHeaderActionSection section;
}

@end

#endif /* _TtC23ChatConversationDetails50ConversationDetailsHeaderAddToContactsActionPlugin_h */
