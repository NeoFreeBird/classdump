//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings32KMPCallingContactsProviderWorker_h
#define _TtC12ChatSettings32KMPCallingContactsProviderWorker_h
@import Foundation;

@class ChatModels.ChatContactsIntegrating, ChatModels.ChatToastActionTriggerStream, ChatSettings.CallingContactsProviderStream, ChatSettings.CallingSettingsActionTriggerStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.KMPCallingContactsProviderWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.CallingSettingsActionTriggerStream actionTriggerStream;
    ChatModels.ChatContactsIntegrating contactsIntegration;
    ChatSettings.CallingContactsProviderStream contactsProviderStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings32KMPCallingContactsProviderWorker_h */
