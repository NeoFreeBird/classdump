//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV217ChatSessionWorker_h
#define _TtC4DMV217ChatSessionWorker_h
@import Foundation;

@class _$s11ChatSession0aB6HandleMp, _$s11ChatSession0aB6StreamCMn, _$s11XFoundation11AsyncWorkerCN, _$s14ChatModelsCore6UserIDVMn;

@interface DMV2.ChatSessionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    protocol descriptor for ChatSession.ChatSessionHandle chatSession;
    nominal type descriptor for ChatSession.ChatSessionStream chatSessionStream;
    nominal type descriptor for ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC4DMV217ChatSessionWorker_h */
