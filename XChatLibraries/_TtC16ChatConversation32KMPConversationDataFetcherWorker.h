//
#ifndef _TtC16ChatConversation32KMPConversationDataFetcherWorker_h
#define _TtC16ChatConversation32KMPConversationDataFetcherWorker_h
@import Foundation;

@class ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B35Arm64_mainDmConversationDataFetcher_p;

@interface ChatConversation.KMPConversationDataFetcherWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainDmConversationDataFetcher conversationDataFetcher;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
}

@end

#endif /* _TtC16ChatConversation32KMPConversationDataFetcherWorker_h */
