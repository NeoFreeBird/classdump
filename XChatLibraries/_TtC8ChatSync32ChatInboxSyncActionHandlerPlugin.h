//
#ifndef _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h
#define _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h
@import Foundation;

@class ChatSync.ChatInboxFetcher, ChatSync.ChatInboxPull, ChatSyncState.ChatActionTrigger, ChatTransport.ChatSocketDesiredStateStream, _TtCs12_SwiftObject;

@interface ChatSync.ChatInboxSyncActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatInboxPull inboxPull;
    ChatTransport.ChatSocketDesiredStateStream socketDesiredStateStream;
    ChatSync.ChatInboxFetcher inboxFetcher;
}

@end

#endif /* _TtC8ChatSync32ChatInboxSyncActionHandlerPlugin_h */
