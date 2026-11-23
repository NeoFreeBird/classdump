//
#ifndef _TtC8ChatSend36ChatSendCallEventActionHandlerPlugin_h
#define _TtC8ChatSend36ChatSendCallEventActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatMessageEnvelopeSender, ChatSend.ChatSendKeyResolver, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatSendCallEventActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatProjection projection;
    ChatSend.ChatSendKeyResolver keyResolver;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
}

@end

#endif /* _TtC8ChatSend36ChatSendCallEventActionHandlerPlugin_h */
