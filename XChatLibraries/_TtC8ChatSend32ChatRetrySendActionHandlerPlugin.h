//
#ifndef _TtC8ChatSend32ChatRetrySendActionHandlerPlugin_h
#define _TtC8ChatSend32ChatRetrySendActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatOutboxQueueStream, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatRetrySendActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
}

@end

#endif /* _TtC8ChatSend32ChatRetrySendActionHandlerPlugin_h */
