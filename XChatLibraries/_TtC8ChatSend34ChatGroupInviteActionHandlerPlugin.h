//
#ifndef _TtC8ChatSend34ChatGroupInviteActionHandlerPlugin_h
#define _TtC8ChatSend34ChatGroupInviteActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSend.ChatGroupAvatarUploader, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatGroupInviteActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSend.ChatGroupAvatarUploader groupAvatarUploader;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend34ChatGroupInviteActionHandlerPlugin_h */
