//
#ifndef _TtC12ChatSettings31PrivacyReadReceiptsActionWorker_h
#define _TtC12ChatSettings31PrivacyReadReceiptsActionWorker_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatSettings.PrivacyReadReceiptsStream, ChatSettings.PrivacySettingsActionTriggerStream, ChatUtilities.ChatDmSettingsProviding, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p;

@interface ChatSettings.PrivacyReadReceiptsActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.PrivacySettingsActionTriggerStream actionTriggerStream;
    ChatUtilities.ChatDmSettingsProviding dmSettingsProvider;
    ChatSettings.PrivacyReadReceiptsStream readReceiptsStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

@end

#endif /* _TtC12ChatSettings31PrivacyReadReceiptsActionWorker_h */
