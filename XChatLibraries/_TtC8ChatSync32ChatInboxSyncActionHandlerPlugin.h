//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h
#define _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h
@import Foundation;

@class ChatSync.XChatInboxFetcher, ChatSync.XChatPullCoordinator, ChatSyncState.ChatActionTrigger, ChatTransport.XChatWebSocket, _TtCs12_SwiftObject;

@interface ChatSync.ChatInboxSyncActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.XChatPullCoordinator pullCoordinator;
    ChatTransport.XChatWebSocket webSocket;
    ChatSync.XChatInboxFetcher inboxFetcher;
}

@end

#endif /* _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h */
