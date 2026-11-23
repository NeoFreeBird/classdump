//
#ifndef _TtC16ChatConversation27KMPMessageInfoDetailsWorker_h
#define _TtC16ChatConversation27KMPMessageInfoDetailsWorker_h
@import Foundation;

@class ChatConversation.MessageInfoDetailsStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$sSS, _$sSo014Subsystem_ios_B28Arm64_mainMessageDetailsRepo_p;

@interface ChatConversation.KMPMessageInfoDetailsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainMessageDetailsRepo messageDetailsRepo;
    Swift.String messageID;
    ChatConversation.MessageInfoDetailsStream messageInfoDetailsStream;
}

@end

#endif /* _TtC16ChatConversation27KMPMessageInfoDetailsWorker_h */
