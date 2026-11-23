//
#ifndef _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h
#define _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.ChatEventSigner, ChatKeys.ChatIdentityKeyService, ChatSend.ChatRetryJobStream, ChatSync.ChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatDeleteMessagesActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSync.ChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatKeys.ChatEventSigner signer;
}

@end

#endif /* _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h */
