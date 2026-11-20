//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation27KMPForwardSheetSearchWorker_h
#define _TtC16ChatConversation27KMPForwardSheetSearchWorker_h
@import Foundation;

@class ChatConversation.MessageForwardSheetEligibilityStream, ChatConversationList.ConversationListStateStream, ChatModelsCore.ConversationID, ChatSearch.SearchQueryStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B27Arm64_mainBaseDmObjectGraph_p, _$sSo014Subsystem_ios_B34Arm64_mainShareSheetSuggestionRepo_p;

@interface ChatConversation.KMPForwardSheetSearchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatConversation.MessageForwardSheetEligibilityStream eligibilityStream;
    __C.Subsystem_ios_iosArm64_mainShareSheetSuggestionRepo forwardSheetSuggestionRepo;
    ChatConversationList.ConversationListStateStream listStateStream;
    __C.Subsystem_ios_iosArm64_mainBaseDmObjectGraph objectGraph;
    ChatSearch.SearchQueryStream searchQueryStream;
    ChatModelsCore.ConversationID sourceConversationId;
}

@end

#endif /* _TtC16ChatConversation27KMPForwardSheetSearchWorker_h */
