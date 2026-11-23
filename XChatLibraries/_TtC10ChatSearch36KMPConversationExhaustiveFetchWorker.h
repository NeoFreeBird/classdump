//
#ifndef _TtC10ChatSearch36KMPConversationExhaustiveFetchWorker_h
#define _TtC10ChatSearch36KMPConversationExhaustiveFetchWorker_h
@import Foundation;

@class ChatSearch.ConversationExhaustiveFetchStream, DispatchQueue, _$s11XFoundation11AsyncWorkerCN, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSo014Subsystem_ios_B41Arm64_mainConversationExhaustiveFetchRepo_p;

@interface ChatSearch.KMPConversationExhaustiveFetchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSearch.ConversationExhaustiveFetchStream conversationExhaustiveFetchStream;
    __C.Subsystem_ios_iosArm64_mainConversationExhaustiveFetchRepo conversationExhaustiveFetchRepo;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isExhaustiveFetchDoneSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isFetchingSubject;
    DispatchQueue queue;
}

@end

#endif /* _TtC10ChatSearch36KMPConversationExhaustiveFetchWorker_h */
