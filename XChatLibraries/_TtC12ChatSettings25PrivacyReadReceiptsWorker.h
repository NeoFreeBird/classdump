//
#ifndef _TtC12ChatSettings25PrivacyReadReceiptsWorker_h
#define _TtC12ChatSettings25PrivacyReadReceiptsWorker_h
@import Foundation;

@class ChatSettings.PrivacyReadReceiptsStream, ChatUtilities.ChatDmSettingsProviding, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p;

@interface ChatSettings.PrivacyReadReceiptsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatUtilities.ChatDmSettingsProviding dmSettingsProvider;
    ChatSettings.PrivacyReadReceiptsStream readReceiptsStream;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

@end

#endif /* _TtC12ChatSettings25PrivacyReadReceiptsWorker_h */
