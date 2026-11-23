//
#ifndef _TtC16ChatConversation31KMPConversationCallStatusWorker_h
#define _TtC16ChatConversation31KMPConversationCallStatusWorker_h
@import Foundation;

@class ChatModels.CallStatusStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B33Arm64_mainOngoingGroupCallManager_p;

@interface ChatConversation.KMPConversationCallStatusWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModels.CallStatusStream callStatusStream;
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainOngoingGroupCallManager ongoingGroupCallManager;
}

@end

#endif /* _TtC16ChatConversation31KMPConversationCallStatusWorker_h */
