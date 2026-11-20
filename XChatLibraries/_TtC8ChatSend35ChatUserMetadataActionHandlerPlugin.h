//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h
#define _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobStream, ChatSend.XChatRetryJobFactory, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatSend.ChatUserMetadataActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.XChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSend.XChatRetryJobFactory jobFactory;
    Swift.Bool writesPartialUserMetadata;
}

@end

#endif /* _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h */
