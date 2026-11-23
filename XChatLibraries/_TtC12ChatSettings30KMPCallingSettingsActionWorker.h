//
#ifndef _TtC12ChatSettings30KMPCallingSettingsActionWorker_h
#define _TtC12ChatSettings30KMPCallingSettingsActionWorker_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatSettings.CallingSettingsActionTriggerStream, ChatSettings.CallingSettingsStream, ChatUtilities.ChatDmSettingsProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.KMPCallingSettingsActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSettings.CallingSettingsActionTriggerStream actionTriggerStream;
    ChatSettings.CallingSettingsStream callingSettingsStream;
    ChatUtilities.ChatDmSettingsProviding dmSettingsProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings30KMPCallingSettingsActionWorker_h */
