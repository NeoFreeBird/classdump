//
#ifndef _TtC8ChatSend18ChatRetryJobStream_h
#define _TtC8ChatSend18ChatRetryJobStream_h
@import Foundation;

@class ChatSync.ChatPendingMutationsStream, _$sScS -> ChatSend.ChatRetryJob, _$sScS12ContinuationVMn ChatSend.ChatRetryJob _$s_ ->, _TtCs12_SwiftObject;

@interface ChatSend.ChatRetryJobStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.AsyncStream -> ChatSend.ChatRetryJob submittedJobs;
    nominal type descriptor for Swift.AsyncStream.Continuation ChatSend.ChatRetryJob  first-element-marker  -> continuation;
    ChatSync.ChatPendingMutationsStream pendingMutationsStream;
}

@end

#endif /* _TtC8ChatSend18ChatRetryJobStream_h */
