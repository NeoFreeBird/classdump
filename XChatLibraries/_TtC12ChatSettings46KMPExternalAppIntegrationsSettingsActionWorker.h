//
#ifndef _TtC12ChatSettings46KMPExternalAppIntegrationsSettingsActionWorker_h
#define _TtC12ChatSettings46KMPExternalAppIntegrationsSettingsActionWorker_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatSettings.ExternalAppIntegrationsSettingsActionTriggerStream, ChatUtilities.ChatExternalAppIntegrationsProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.KMPExternalAppIntegrationsSettingsActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.ExternalAppIntegrationsSettingsActionTriggerStream actionTriggerStream;
    ChatUtilities.ChatExternalAppIntegrationsProviding externalAppIntegrationsProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings46KMPExternalAppIntegrationsSettingsActionWorker_h */
