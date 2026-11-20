//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend29ChatTypingActionHandlerPlugin_h
#define _TtC8ChatSend29ChatTypingActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatTypingThrottle, ChatSend.XChatMessageEnvelopeSender, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatTypingActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.XChatMessageEnvelopeSender envelopeSender;
    ChatSend.ChatTypingThrottle typingThrottle;
}

@end

#endif /* _TtC8ChatSend29ChatTypingActionHandlerPlugin_h */
