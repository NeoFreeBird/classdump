//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h
#define _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobStream, ChatSend.XChatRetryJobFactory, ChatSync.XChatMessageRequestsService, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatMarkUnreadActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.XChatMessageRequestsService messageRequestsService;
    ChatSync.XChatProjection projection;
    ChatSend.XChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
}

@end

#endif /* _TtC8ChatSend33ChatMarkUnreadActionHandlerPlugin_h */
