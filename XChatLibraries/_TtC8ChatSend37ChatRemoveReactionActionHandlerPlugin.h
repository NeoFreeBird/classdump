//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend37ChatRemoveReactionActionHandlerPlugin_h
#define _TtC8ChatSend37ChatRemoveReactionActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatRetryJobStream, ChatSend.XChatRetryJobFactory, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatRemoveReactionActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatModelsCore.UserID owner;
    ChatSync.XChatProjection projection;
    ChatSend.XChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
}

@end

#endif /* _TtC8ChatSend37ChatRemoveReactionActionHandlerPlugin_h */
