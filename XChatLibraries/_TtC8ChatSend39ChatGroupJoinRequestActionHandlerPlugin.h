//
#ifndef _TtC8ChatSend39ChatGroupJoinRequestActionHandlerPlugin_h
#define _TtC8ChatSend39ChatGroupJoinRequestActionHandlerPlugin_h
@import Foundation;

@class ChatSend.ChatActionSigner, ChatSend.ChatGroupJoinRequestsFetchLedger, ChatSync.ChatGroupJoinRequestsStream, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _TtCs12_SwiftObject;

@interface ChatSend.ChatGroupJoinRequestActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSend.ChatActionSigner actionSigner;
    ChatSend.ChatGroupJoinRequestsFetchLedger fetchLedger;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatGroupJoinRequestsStream joinRequestsStream;
}

@end

#endif /* _TtC8ChatSend39ChatGroupJoinRequestActionHandlerPlugin_h */
