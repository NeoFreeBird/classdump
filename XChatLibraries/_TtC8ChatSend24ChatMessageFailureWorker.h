//
#ifndef _TtC8ChatSend24ChatMessageFailureWorker_h
#define _TtC8ChatSend24ChatMessageFailureWorker_h
@import Foundation;

@class ChatSend.ChatOutboxRestoreStream, ChatSend.ChatSendFailurePolicy, ChatSync.ChatMessageFailureStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSend.ChatMessageFailureWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatMessageFailureStream messageFailureStream;
    ChatSend.ChatSendFailurePolicy failurePolicy;
    ChatSend.ChatOutboxRestoreStream outboxRestoreStream;
}

@end

#endif /* _TtC8ChatSend24ChatMessageFailureWorker_h */
