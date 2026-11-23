//
#ifndef _TtC11ChatSession30ChatDisappearingMessagesWorker_h
#define _TtC11ChatSession30ChatDisappearingMessagesWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatSync.ChatExpiredEntriesSweep, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatDisappearingMessagesWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatExpiredEntriesSweep expiredEntriesSweep;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession30ChatDisappearingMessagesWorker_h */
