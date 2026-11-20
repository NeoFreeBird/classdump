//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h
#define _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h
@import Foundation;

@class ChatSend.XChatMessageCreateSender, ChatSync.XChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatEditMessageActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSyncState.ChatActionStream actionStream;
    ChatSync.XChatProjection projection;
    ChatSend.XChatMessageCreateSender messageCreateSender;
}

@end

#endif /* _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h */
