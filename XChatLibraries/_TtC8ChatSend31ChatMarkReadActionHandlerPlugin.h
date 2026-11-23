//
#ifndef _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h
#define _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSync.ChatMessageRequestsService, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatTimelineStream, _TtCs12_SwiftObject;

@interface ChatSend.ChatMarkReadActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatMessageRequestsService messageRequestsService;
    ChatModelsCore.UserID owner;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSyncState.ChatTimelineStream timelineStream;
}

@end

#endif /* _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h */
