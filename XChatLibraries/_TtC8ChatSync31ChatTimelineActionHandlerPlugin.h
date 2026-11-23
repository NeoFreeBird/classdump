//
#ifndef _TtC8ChatSync31ChatTimelineActionHandlerPlugin_h
#define _TtC8ChatSync31ChatTimelineActionHandlerPlugin_h
@import Foundation;

@class ChatSync.ChatHistoryFetcher, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, _TtCs12_SwiftObject;

@interface ChatSync.ChatTimelineActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSync.ChatHistoryFetcher historyFetcher;
    ChatSync.ChatProjection projection;
}

@end

#endif /* _TtC8ChatSync31ChatTimelineActionHandlerPlugin_h */
