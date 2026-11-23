//
#ifndef _TtC11ChatSession21ChatSocketEventWorker_h
#define _TtC11ChatSession21ChatSocketEventWorker_h
@import Foundation;

@class ChatSync.ChatLiveEventStream, ChatSync.ChatSocketInstructionStream, ChatSync.ChatSocketSyncStream, ChatSyncState.ChatConnectionStream, ChatTransport.ChatSocketEventStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatSocketEventWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatTransport.ChatSocketEventStream socketEventStream;
    ChatSyncState.ChatConnectionStream connectionStream;
    ChatSync.ChatSocketSyncStream socketSyncStream;
    ChatSync.ChatLiveEventStream liveEventStream;
    ChatSync.ChatSocketInstructionStream socketInstructionStream;
}

@end

#endif /* _TtC11ChatSession21ChatSocketEventWorker_h */
