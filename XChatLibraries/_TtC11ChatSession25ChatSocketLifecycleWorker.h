//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession25ChatSocketLifecycleWorker_h
#define _TtC11ChatSession25ChatSocketLifecycleWorker_h
@import Foundation;

@class ChatSession.ChatStorageStream, ChatTransport.XChatWebSocket, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatSocketLifecycleWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatTransport.XChatWebSocket webSocket;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession25ChatSocketLifecycleWorker_h */
