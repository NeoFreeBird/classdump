//
#ifndef _TtC8ChatSync28ChatPinnedMessagesPageLoader_h
#define _TtC8ChatSync28ChatPinnedMessagesPageLoader_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatPinEventProcessor, ChatSync.ChatProjection, ChatTransport.ChatGraphQLClient, ChatTransport.ChatThriftCodec, _$sSh -> ChatModelsCore.ConversationID, _TtCs12_SwiftObject;

@interface ChatSync.ChatPinnedMessagesPageLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSync.ChatPinEventProcessor pinEventProcessor;
    ChatSync.ChatProjection projection;
    ChatTransport.ChatThriftCodec codec;
    Swift.Set -> ChatModelsCore.ConversationID loadingConversationIDs;
}

@end

#endif /* _TtC8ChatSync28ChatPinnedMessagesPageLoader_h */
