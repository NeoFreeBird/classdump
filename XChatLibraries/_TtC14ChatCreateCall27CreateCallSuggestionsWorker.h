//
#ifndef _TtC14ChatCreateCall27CreateCallSuggestionsWorker_h
#define _TtC14ChatCreateCall27CreateCallSuggestionsWorker_h
@import Foundation;

@class ChatCreateCall.CreateCallQueryStream, ChatCreateCall.CreateCallSuggestionsStream, ChatSyncState.ChatActionStream, ChatSyncState.ChatInboxProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatCreateCall.CreateCallSuggestionsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatCreateCall.CreateCallQueryStream queryStream;
    ChatCreateCall.CreateCallSuggestionsStream suggestionsStream;
    ChatSyncState.ChatActionStream actionStream;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC14ChatCreateCall27CreateCallSuggestionsWorker_h */
