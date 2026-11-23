//
#ifndef _TtC11ChatSession22ChatTypingExpiryWorker_h
#define _TtC11ChatSession22ChatTypingExpiryWorker_h
@import Foundation;

@class ChatSync.ChatProjection, ChatSyncState.ChatTypingStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatTypingExpiryWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatTypingStream typingStream;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC11ChatSession22ChatTypingExpiryWorker_h */
