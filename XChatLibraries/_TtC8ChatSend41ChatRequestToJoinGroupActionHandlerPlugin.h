//
#ifndef _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h
#define _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSend.ChatActionSigner, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatRequestToJoinGroupActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend41ChatRequestToJoinGroupActionHandlerPlugin_h */
