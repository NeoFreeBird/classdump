//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h
#define _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatRetryJobStream, ChatSend.XChatRetryJobFactory, ChatSync.XChatMessageRequestsService, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatTimelineStream, _TtCs12_SwiftObject;

@interface ChatSend.ChatMarkReadActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.XChatMessageRequestsService messageRequestsService;
    ChatModelsCore.UserID owner;
    ChatSync.XChatProjection projection;
    ChatSend.XChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSyncState.ChatTimelineStream timelineStream;
}

@end

#endif /* _TtC8ChatSend31ChatMarkReadActionHandlerPlugin_h */
