//
#ifndef _TtC10ChatSearch34KMPSearchConversationPreviewWorker_h
#define _TtC10ChatSearch34KMPSearchConversationPreviewWorker_h
@import Foundation;

@class ChatSearch.SearchConversationPreviewStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B27Arm64_mainMessageSearchRepo_p, _$sSo014Subsystem_ios_B32Arm64_mainConversationSearchRepo_p, _$sSo014Subsystem_ios_B34Arm64_mainConversationMetadataRepo_p;

@interface ChatSearch.KMPSearchConversationPreviewWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainConversationMetadataRepo conversationMetadataRepo;
    __C.Subsystem_ios_iosArm64_mainConversationSearchRepo conversationSearchRepo;
    __C.Subsystem_ios_iosArm64_mainMessageSearchRepo messageSearchRepo;
    ChatSearch.SearchConversationPreviewStream searchConversationPreviewStream;
}

@end

#endif /* _TtC10ChatSearch34KMPSearchConversationPreviewWorker_h */
