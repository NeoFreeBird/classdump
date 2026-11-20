//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h
#define _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h
@import Foundation;

@class ChatKeys.XChatEventSigner, ChatKeys.XChatIdentityKeyService, ChatSend.ChatRetryJobStream, ChatSync.XChatProjection, ChatSyncState.ChatActionTrigger, ChatTransport.XChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatDeleteMessagesActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatKeys.XChatIdentityKeyService identityKeyService;
    ChatSync.XChatProjection projection;
    ChatSend.ChatRetryJobStream retryJobStream;
    ChatKeys.XChatEventSigner signer;
}

@end

#endif /* _TtC8ChatSend37ChatDeleteMessagesActionHandlerPlugin_h */
