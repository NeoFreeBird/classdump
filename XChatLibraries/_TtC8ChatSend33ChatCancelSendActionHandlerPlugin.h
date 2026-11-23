//
#ifndef _TtC8ChatSend33ChatCancelSendActionHandlerPlugin_h
#define _TtC8ChatSend33ChatCancelSendActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatOutboxQueueStream, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatCancelSendActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSend33ChatCancelSendActionHandlerPlugin_h */
