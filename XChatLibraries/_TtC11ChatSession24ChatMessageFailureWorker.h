//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatSession24ChatMessageFailureWorker_h
#define _TtC11ChatSession24ChatMessageFailureWorker_h
@import Foundation;

@class ChatSend.XChatOutboxDriver, ChatSession.ChatOutboxRestoreStream, ChatSync.ChatMessageFailureStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatMessageFailureWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatMessageFailureStream messageFailureStream;
    ChatSend.XChatOutboxDriver outboxDriver;
    ChatSession.ChatOutboxRestoreStream outboxRestoreStream;
}

@end

#endif /* _TtC11ChatSession24ChatMessageFailureWorker_h */
