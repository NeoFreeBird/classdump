//
#ifndef _TtC8ChatSend40ChatCreatorRosterSyncActionHandlerPlugin_h
#define _TtC8ChatSend40ChatCreatorRosterSyncActionHandlerPlugin_h
@import Foundation;

@class ChatModelsCore.UserID, ChatSync.ChatProjection, ChatSyncState.ChatActionStream, ChatSyncState.ChatActionTrigger, ChatTransport.ChatGraphQLClient, _$sSi, _TtCs12_SwiftObject;

@interface ChatSend.ChatCreatorRosterSyncActionHandlerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatSyncState.ChatActionTrigger trigger;
    ChatSyncState.ChatActionStream actionStream;
    ChatTransport.ChatGraphQLClient graphQLClient;
    Swift.Int maxGroupSize;
    ChatSync.ChatProjection projection;
    ChatModelsCore.UserID owner;
}

@end

#endif /* _TtC8ChatSend40ChatCreatorRosterSyncActionHandlerPlugin_h */
