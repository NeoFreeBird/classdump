//
#ifndef _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h
#define _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatMessageCreateSender, ChatSync.ChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSend.ChatEditMessageActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSyncState.ChatActionStream actionStream;
    ChatSync.ChatProjection projection;
    ChatSend.ChatMessageCreateSender messageCreateSender;
}

@end

#endif /* _TtC8ChatSend34ChatEditMessageActionHandlerPlugin_h */
