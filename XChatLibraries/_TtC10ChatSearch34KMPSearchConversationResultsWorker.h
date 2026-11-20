//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatSearch34KMPSearchConversationResultsWorker_h
#define _TtC10ChatSearch34KMPSearchConversationResultsWorker_h
@import Foundation;

@class ChatConversationList.ConversationActionPluginPointing, ChatSearch.SearchConversationResultsStream, ChatSearch.SearchResultsListWorkerPluginContext, Swift.Bool, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B32Arm64_mainConversationSearchRepo_p, _$sSo014Subsystem_ios_B34Arm64_mainConversationMetadataRepo_p;

@interface ChatSearch.KMPSearchConversationResultsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationActionPluginPointing actionPluginPoint;
    ChatSearch.SearchResultsListWorkerPluginContext context;
    __C.Subsystem_ios_iosArm64_mainConversationMetadataRepo conversationMetadataRepo;
    __C.Subsystem_ios_iosArm64_mainConversationSearchRepo conversationSearchRepo;
    Swift.Bool isArchiveChatsEnabled;
    ChatSearch.SearchConversationResultsStream searchConversationResultsStream;
}

@end

#endif /* _TtC10ChatSearch34KMPSearchConversationResultsWorker_h */
