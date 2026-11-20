//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox29KMPInboxPromptPresenterWorker_h
#define _TtC9ChatInbox29KMPInboxPromptPresenterWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotsInboxPromptBuilder, ChatGrokBot.GrokBotsInboxPromptShownStore, ChatInbox.ExternalAppIntegrationsPromptBuilder, ChatInbox.InboxNavigation, ChatInbox.InboxPresenterContext, ChatInbox.InboxPromptTriggerStream, ChatInbox.KMPInboxPromptPresenterWorker.PresentationState, ChatInbox.OpenInboxPromptBuilder, ChatNumber.ChatNumberBuilder, ChatPasscode.ChatPasscodeBuilder, ChatUtilities.ChatInboxDialogProviding, ChatUtilities.ChatNumberProviding, _$s10Foundation4UUIDVMn ?, _$s11XFoundation13CombineWorkerCN, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSa -> ChatInbox.InboxPrompt, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _$sSo25UIImpactFeedbackGeneratorC;

@interface ChatInbox.KMPInboxPromptPresenterWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatNumber.ChatNumberBuilder chatNumberBuilder;
    ChatPasscode.ChatPasscodeBuilder chatPasscodeBuilder;
    ChatInbox.InboxPresenterContext context;
    ChatInbox.ExternalAppIntegrationsPromptBuilder externalAppIntegrationsPromptBuilder;
    ChatGrokBot.GrokBotsInboxPromptBuilder grokBotsInboxPromptBuilder;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
    __C.UIImpactFeedbackGenerator homeDialogFeedbackGenerator;
    ChatUtilities.ChatInboxDialogProviding inboxDialogProvider;
    ChatInbox.InboxNavigation inboxNavigation;
    ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
    ChatUtilities.ChatNumberProviding numberProvider;
    ChatInbox.OpenInboxPromptBuilder openInboxPromptBuilder;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    ChatInbox.KMPInboxPromptPresenterWorker.PresentationState presentationState;
    nominal type descriptor for Foundation.UUID ? presentedHomeDialogID;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? presentedHomeDialogTray;
    Swift.Array -> ChatInbox.InboxPrompt queue;
}

@end

#endif /* _TtC9ChatInbox29KMPInboxPromptPresenterWorker_h */
