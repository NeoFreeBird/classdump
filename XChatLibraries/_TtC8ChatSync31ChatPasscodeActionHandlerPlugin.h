//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h
#define _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.XChatIdentityKeyService, ChatSync.ChatInboxDialogService, ChatSync.XChatLocalReset, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatSessionScribing, _TtCs12_SwiftObject;

@interface ChatSync.ChatPasscodeActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatKeys.XChatIdentityKeyService identityKeyService;
    ChatSync.ChatInboxDialogService inboxDialogService;
    ChatSync.XChatLocalReset localReset;
    ChatSyncState.ChatSessionScribing scriber;
}

@end

#endif /* _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h */
