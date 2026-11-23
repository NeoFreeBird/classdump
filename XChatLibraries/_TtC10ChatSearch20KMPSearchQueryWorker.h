//
#ifndef _TtC10ChatSearch20KMPSearchQueryWorker_h
#define _TtC10ChatSearch20KMPSearchQueryWorker_h
@import Foundation;

@class ChatSearch.SearchActiveSegmentStream, ChatSearch.SearchQueryStream, DispatchQueue, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B27Arm64_mainMessageSearchRepo_p, _$sSo014Subsystem_ios_B32Arm64_mainConversationSearchRepo_p;

@interface ChatSearch.KMPSearchQueryWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSearch.SearchActiveSegmentStream activeSegmentStream;
    __C.Subsystem_ios_iosArm64_mainConversationSearchRepo conversationSearchRepo;
    __C.Subsystem_ios_iosArm64_mainMessageSearchRepo messageSearchRepo;
    DispatchQueue queue;
    ChatSearch.SearchQueryStream searchQueryStream;
}

@end

#endif /* _TtC10ChatSearch20KMPSearchQueryWorker_h */
