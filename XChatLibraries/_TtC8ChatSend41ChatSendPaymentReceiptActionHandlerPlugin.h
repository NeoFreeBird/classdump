//
#ifndef _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h
#define _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatMessageEnvelopeSender, ChatSend.ChatPaymentReceiptLedger, ChatSend.ChatSendKeyResolver, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatSessionScribing, _TtCs12_SwiftObject;

@interface ChatSend.ChatSendPaymentReceiptActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatPaymentReceiptLedger paymentReceiptLedger;
    ChatSend.ChatSendKeyResolver keyResolver;
    ChatSend.ChatMessageEnvelopeSender envelopeSender;
    ChatSyncState.ChatSessionScribing scriber;
}

@end

#endif /* _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h */
