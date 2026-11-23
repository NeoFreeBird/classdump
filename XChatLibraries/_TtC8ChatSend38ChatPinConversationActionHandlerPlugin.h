//
#ifndef _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h
#define _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSend.ChatUserMetadataSyncType, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatPinConversationActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSend.ChatRetryJobFactory jobFactory;
    ChatSend.ChatUserMetadataSyncType syncType;
}

@end

#endif /* _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h */
