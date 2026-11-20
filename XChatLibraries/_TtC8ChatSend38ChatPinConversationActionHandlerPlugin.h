//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h
#define _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobStream, ChatSend.XChatRetryJobFactory, ChatSend.XChatUserMetadataSyncType, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatPinConversationActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.XChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSend.XChatRetryJobFactory jobFactory;
    ChatSend.XChatUserMetadataSyncType syncType;
}

@end

#endif /* _TtC8ChatSend38ChatPinConversationActionHandlerPlugin_h */
