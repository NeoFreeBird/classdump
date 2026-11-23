//
#ifndef _TtC11ChatSession24ChatActionDispatchWorker_h
#define _TtC11ChatSession24ChatActionDispatchWorker_h
@import Foundation;

@class ChatSend.ChatActionHandlerPluginPoint, ChatSync.ChatSyncActionHandlerPluginPoint, ChatSyncState.ChatActionStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatActionDispatchWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionStream actionStream;
    ChatSend.ChatActionHandlerPluginPoint actionHandlerPluginPoint;
    ChatSync.ChatSyncActionHandlerPluginPoint syncActionHandlerPluginPoint;
}

@end

#endif /* _TtC11ChatSession24ChatActionDispatchWorker_h */
