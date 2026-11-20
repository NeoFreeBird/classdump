//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation29KMPConversationMetadataWorker_h
#define _TtC16ChatConversation29KMPConversationMetadataWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B34Arm64_mainConversationMetadataRepo_p;

@interface ChatConversation.KMPConversationMetadataWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainConversationMetadataRepo conversationMetadataRepo;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
}

@end

#endif /* _TtC16ChatConversation29KMPConversationMetadataWorker_h */
