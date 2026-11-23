//
#ifndef _TtC8ChatSend27ChatSendActionHandlerPlugin_h
#define _TtC8ChatSend27ChatSendActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatForwardedContentResolver, ChatSend.ChatOutboxQueueStream, ChatSend.ChatOutgoingMessageBuilder, ChatSend.ChatSendInitiatedStream, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatSessionScribing, _TtCs12_SwiftObject;

@interface ChatSend.ChatSendActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatForwardedContentResolver forwardedContentResolver;
    ChatSend.ChatOutgoingMessageBuilder messageBuilder;
    ChatSend.ChatOutboxQueueStream outboxQueueStream;
    ChatSync.ChatProjection projection;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSend.ChatSendInitiatedStream sendInitiatedStream;
}

@end

#endif /* _TtC8ChatSend27ChatSendActionHandlerPlugin_h */
