//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h
#define _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSyncState.ChatActionTrigger, ChatTransport.XChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatRequestToJoinGroupActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h */
