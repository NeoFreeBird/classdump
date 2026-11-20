//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation25KMPMessageReactionsWorker_h
#define _TtC16ChatConversation25KMPMessageReactionsWorker_h
@import Foundation;

@class ChatConversation.MessageReactionsStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$s11XFoundation11AsyncWorkerCN, _$sSS, _$sSo014Subsystem_ios_B28Arm64_mainMessageDetailsRepo_p;

@interface ChatConversation.KMPMessageReactionsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainMessageDetailsRepo messageDetailsRepo;
    Swift.String messageID;
    ChatConversation.MessageReactionsStream messageReactionsStream;
    ChatModelsCore.UserID ownerID;
}

@end

#endif /* _TtC16ChatConversation25KMPMessageReactionsWorker_h */
