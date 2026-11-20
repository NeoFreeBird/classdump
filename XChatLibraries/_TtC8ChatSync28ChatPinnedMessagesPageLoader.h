//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync28ChatPinnedMessagesPageLoader_h
#define _TtC8ChatSync28ChatPinnedMessagesPageLoader_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatPinEventProcessor, ChatSync.XChatProjection, ChatTransport.XChatGraphQLClient, ChatTransport.XChatThriftCodec, _$sSh -> ChatModelsCore.ConversationID, _TtCs12_SwiftObject;

@interface ChatSync.ChatPinnedMessagesPageLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSync.ChatPinEventProcessor pinEventProcessor;
    ChatSync.XChatProjection projection;
    ChatTransport.XChatThriftCodec codec;
    Swift.Set -> ChatModelsCore.ConversationID loadingConversationIDs;
}

@end

#endif /* _TtC8ChatSync28ChatPinnedMessagesPageLoader_h */
