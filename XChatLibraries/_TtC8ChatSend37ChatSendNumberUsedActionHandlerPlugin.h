//
#ifndef _TtC8ChatSend37ChatSendNumberUsedActionHandlerPlugin_h
#define _TtC8ChatSend37ChatSendNumberUsedActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatMessageEnvelopeSender, ChatSend.ChatSendKeyResolver, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatSendNumberUsedActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatModelsCore.UserID owner;
    ChatSend.ChatSendKeyResolver keyResolver;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
}

@end

#endif /* _TtC8ChatSend37ChatSendNumberUsedActionHandlerPlugin_h */
