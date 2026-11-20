//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession24ChatMemoryPressureWorker_h
#define _TtC11ChatSession24ChatMemoryPressureWorker_h
@import Foundation;

@class ChatCrypto.XChatKeyMaterialStore, ChatDatabase.XChatDatabase, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatMemoryPressureWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatDatabase.XChatDatabase database;
    ChatCrypto.XChatKeyMaterialStore keyMaterialStore;
}

@end

#endif /* _TtC11ChatSession24ChatMemoryPressureWorker_h */
