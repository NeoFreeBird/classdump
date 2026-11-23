//
#ifndef _TtC12ChatSettings38KMPMessageRequestsSettingsActionWorker_h
#define _TtC12ChatSettings38KMPMessageRequestsSettingsActionWorker_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatSettings.MessageRequestsAllowDmsFromStream, ChatSettings.MessageRequestsAlwaysAllowSubscribersStream, ChatSettings.MessageRequestsSettingsActionTriggerStream, ChatUtilities.ChatDmSettingsProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.KMPMessageRequestsSettingsActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.MessageRequestsSettingsActionTriggerStream actionTriggerStream;
    ChatSettings.MessageRequestsAllowDmsFromStream allowDmsFromStream;
    ChatSettings.MessageRequestsAlwaysAllowSubscribersStream alwaysAllowSubscribersStream;
    ChatUtilities.ChatDmSettingsProviding dmSettingsProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings38KMPMessageRequestsSettingsActionWorker_h */
