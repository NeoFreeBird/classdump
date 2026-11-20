//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings35KMPNotificationSettingsActionWorker_h
#define _TtC12ChatSettings35KMPNotificationSettingsActionWorker_h
@import Foundation;

@class ChatModels.ChatNotificationSettingStore, ChatModels.ChatToastActionTriggerStream, ChatSettings.NotificationSettingsActionTriggerStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.KMPNotificationSettingsActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.NotificationSettingsActionTriggerStream actionTriggerStream;
    ChatModels.ChatNotificationSettingStore notificationSettingStore;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings35KMPNotificationSettingsActionWorker_h */
