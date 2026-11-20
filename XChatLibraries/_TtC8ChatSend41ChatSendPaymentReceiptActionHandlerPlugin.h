//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h
#define _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatPaymentReceiptLedger, ChatSend.XChatMessageEnvelopeSender, ChatSend.XChatSendKeyResolver, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatSessionScribing, _TtCs12_SwiftObject;

@interface ChatSend.ChatSendPaymentReceiptActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatPaymentReceiptLedger paymentReceiptLedger;
    ChatSend.XChatSendKeyResolver keyResolver;
    ChatSend.XChatMessageEnvelopeSender envelopeSender;
    ChatSyncState.ChatSessionScribing scriber;
}

@end

#endif /* _TtC8ChatSend41ChatSendPaymentReceiptActionHandlerPlugin_h */
