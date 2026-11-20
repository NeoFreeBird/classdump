//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession19ChatSendRetryWorker_h
#define _TtC11ChatSession19ChatSendRetryWorker_h
@import Foundation;

@class ChatSend.ChatSendRetryStream, ChatSend.XChatOutboxDriver, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatSendRetryWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSend.ChatSendRetryStream sendRetryStream;
    ChatSend.XChatOutboxDriver outboxDriver;
}

@end

#endif /* _TtC11ChatSession19ChatSendRetryWorker_h */
