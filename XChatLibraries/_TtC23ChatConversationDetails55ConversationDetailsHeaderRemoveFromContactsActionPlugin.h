//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails55ConversationDetailsHeaderRemoveFromContactsActionPlugin_h
#define _TtC23ChatConversationDetails55ConversationDetailsHeaderRemoveFromContactsActionPlugin_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsContactsStream, ChatConversationDetails.ConversationDetailsHeaderActionSection, ChatModels.ChatContactsIntegrating, ChatModels.ChatToastActionTriggerStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatConversationDetails.ConversationDetailsHeaderRemoveFromContactsActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ChatContactsIntegrating contactsIntegration;
    ChatConversationDetails.ConversationDetailsContactsStream contactsStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModelsCore.UserID owner;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatConversationDetails.ConversationDetailsHeaderActionSection section;
}

@end

#endif /* _TtC23ChatConversationDetails55ConversationDetailsHeaderRemoveFromContactsActionPlugin_h */
