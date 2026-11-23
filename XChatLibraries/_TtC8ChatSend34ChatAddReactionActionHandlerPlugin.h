//
#ifndef _TtC8ChatSend34ChatAddReactionActionHandlerPlugin_h
#define _TtC8ChatSend34ChatAddReactionActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatRetryJobFactory, ChatSend.ChatRetryJobStream, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatAddReactionActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatModelsCore.UserID owner;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobFactory retryJobFactory;
    ChatSend.ChatRetryJobStream retryJobStream;
}

@end

#endif /* _TtC8ChatSend34ChatAddReactionActionHandlerPlugin_h */
