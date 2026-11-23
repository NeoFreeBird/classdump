//
#ifndef _TtC8ChatSync32ChatUnprocessedEventsDrainWorker_h
#define _TtC8ChatSync32ChatUnprocessedEventsDrainWorker_h
@import Foundation;

@class ChatSync.ChatBatchProcessor, ChatSync.ChatUnprocessedEventsStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSync.ChatUnprocessedEventsDrainWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatUnprocessedEventsStream unprocessedEventsStream;
    ChatSync.ChatBatchProcessor batchProcessor;
}

@end

#endif /* _TtC8ChatSync32ChatUnprocessedEventsDrainWorker_h */
