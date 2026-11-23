//
#ifndef _TtC9ChatInbox24OpenInboxPromptViewModel_h
#define _TtC9ChatInbox24OpenInboxPromptViewModel_h
@import Foundation;

@class ChatInbox.OpenInboxPromptViewModel.Phase, ChatModels.AllowDmsFromOption, ChatModels.ChatToastActionTriggerStream, ChatModels.InboxDialog.OpenInbox.CopyVariant, ChatUtilities.ChatDmSettingsProviding, ChatUtilities.ChatInboxDialogProviding, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatInbox.OpenInboxPromptViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.AllowDmsFromOption selectedOption;
    ChatModels.InboxDialog.OpenInbox.CopyVariant copyVariant;
    ChatUtilities.ChatDmSettingsProviding dmSettingsProvider;
    ChatUtilities.ChatInboxDialogProviding inboxDialogProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatInbox.OpenInboxPromptViewModel.Phase phase;
}

@end

#endif /* _TtC9ChatInbox24OpenInboxPromptViewModel_h */
