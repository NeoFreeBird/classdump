//
#ifndef _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h
#define _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, Swift.Bool, _TtCs12_SwiftObject;

@interface ChatSend.ChatUserMetadataActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatSend.ChatRetryJobFactory jobFactory;
    Swift.Bool writesPartialUserMetadata;
}

@end

#endif /* _TtC8ChatSend35ChatUserMetadataActionHandlerPlugin_h */
