//
#ifndef _TtC8ChatSync20ChatPullScribeWorker_h
#define _TtC8ChatSync20ChatPullScribeWorker_h
@import Foundation;

@class ChatSync.ChatPullEventStream, ChatSyncState.ChatSessionScribing, _$s11XFoundation13CombineWorkerCN;

@interface ChatSync.ChatPullScribeWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatPullEventStream pullEventStream;
    ChatSyncState.ChatSessionScribing scriber;
}

@end

#endif /* _TtC8ChatSync20ChatPullScribeWorker_h */
