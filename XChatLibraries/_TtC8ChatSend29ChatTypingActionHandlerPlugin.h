//
#ifndef _TtC8ChatSend29ChatTypingActionHandlerPlugin_h
#define _TtC8ChatSend29ChatTypingActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatMessageEnvelopeSender, ChatSend.ChatTypingThrottle, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatTypingActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
    ChatSend.ChatTypingThrottle typingThrottle;
}

@end

#endif /* _TtC8ChatSend29ChatTypingActionHandlerPlugin_h */
