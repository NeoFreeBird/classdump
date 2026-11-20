//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession30ChatDisappearingMessagesWorker_h
#define _TtC11ChatSession30ChatDisappearingMessagesWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.XChatExpiredEntriesSweep, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatDisappearingMessagesWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.XChatExpiredEntriesSweep expiredEntriesSweep;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession30ChatDisappearingMessagesWorker_h */
