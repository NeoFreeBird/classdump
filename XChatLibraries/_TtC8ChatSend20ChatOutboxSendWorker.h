//
#ifndef _TtC8ChatSend20ChatOutboxSendWorker_h
#define _TtC8ChatSend20ChatOutboxSendWorker_h
@import Foundation;

@class ChatSend.ChatOutboxQueueStream, ChatSend.ChatOutboxSendAttempt, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSend.ChatOutboxSendWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
    ChatSend.ChatOutboxSendAttempt sendAttempt;
}

@end

#endif /* _TtC8ChatSend20ChatOutboxSendWorker_h */
