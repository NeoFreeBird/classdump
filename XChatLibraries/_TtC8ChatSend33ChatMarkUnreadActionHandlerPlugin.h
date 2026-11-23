//
#ifndef _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h
#define _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSync.ChatMessageRequestsService, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatMarkUnreadActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatMessageRequestsService messageRequestsService;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
}

@end

#endif /* _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h */
