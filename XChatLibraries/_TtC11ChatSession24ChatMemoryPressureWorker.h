//
#ifndef _TtC11ChatSession24ChatMemoryPressureWorker_h
#define _TtC11ChatSession24ChatMemoryPressureWorker_h
@import Foundation;

@class ChatCrypto.ChatKeyMaterialStore, ChatDatabase.ChatSQLiteDatabase, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatMemoryPressureWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatDatabase.ChatSQLiteDatabase database;
    ChatCrypto.ChatKeyMaterialStore keyMaterialStore;
}

@end

#endif /* _TtC11ChatSession24ChatMemoryPressureWorker_h */
