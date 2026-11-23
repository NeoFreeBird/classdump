//
#ifndef _TtC8ChatSend19ChatSendRetryWorker_h
#define _TtC8ChatSend19ChatSendRetryWorker_h
@import Foundation;

@class ChatSend.ChatOutboxQueueStream, ChatSend.ChatSendFailurePolicy, ChatSend.ChatSendRetryStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSend.ChatSendRetryWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSend.ChatSendRetryStream sendRetryStream;
    ChatSend.ChatSendFailurePolicy failurePolicy;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
}

@end

#endif /* _TtC8ChatSend19ChatSendRetryWorker_h */
