//
#ifndef _TtC11ChatSession19ChatColdStartWorker_h
#define _TtC11ChatSession19ChatColdStartWorker_h
@import Foundation;

@class ChatDatabase.ChatSQLiteDatabase, ChatSession.ChatStorageStream, ChatSync.ChatProjection, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatColdStartWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatDatabase.ChatSQLiteDatabase database;
    ChatSync.ChatProjection projection;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession19ChatColdStartWorker_h */
