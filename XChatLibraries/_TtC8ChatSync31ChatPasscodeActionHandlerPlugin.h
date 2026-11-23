//
#ifndef _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h
#define _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatIdentityKeyService, ChatSync.ChatLocalReset, ChatSync.ChatTemporaryPasscodeTokenStore, ChatSyncState.ChatActionTrigger, ChatSyncState.ChatSessionScribing, _TtCs12_SwiftObject;

@interface ChatSync.ChatPasscodeActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatTemporaryPasscodeTokenStore temporaryPasscodeTokenStore;
    ChatSync.ChatLocalReset localReset;
    ChatSyncState.ChatSessionScribing scriber;
}

@end

#endif /* _TtC8ChatSync31ChatPasscodeActionHandlerPlugin_h */
