//
#ifndef _TtC12ChatSettings28KMPArchivedChatsActionWorker_h
#define _TtC12ChatSettings28KMPArchivedChatsActionWorker_h
@import Foundation;

@class ChatModels.ChatToastActionTriggerStream, ChatSettings.ArchivedChatsActionTriggerStream, ChatSettings.ArchivedChatsUnarchiving, _$s11XFoundation13CombineWorkerCN, _$sSh -> ChatModelsCore.ConversationID, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p;

@interface ChatSettings.KMPArchivedChatsActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSettings.ArchivedChatsActionTriggerStream actionTriggerStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatSettings.ArchivedChatsUnarchiving unarchiver;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
    Swift.Set -> ChatModelsCore.ConversationID unarchivingConversationIDs;
}

@end

#endif /* _TtC12ChatSettings28KMPArchivedChatsActionWorker_h */
