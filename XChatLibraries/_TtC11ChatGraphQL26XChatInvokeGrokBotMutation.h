//
#ifndef _TtC11ChatGraphQL26XChatInvokeGrokBotMutation_h
#define _TtC11ChatGraphQL26XChatInvokeGrokBotMutation_h
@import Foundation;

@class Swift.Bool, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$sSS, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface ChatGraphQL.XChatInvokeGrokBotMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String? conversationID;
    Swift.String agentID;
    Swift.String messagesJson;
    Swift.String? replyToSequenceID;
    Swift.String? replyToMessageID;
}

@end

#endif /* _TtC11ChatGraphQL26XChatInvokeGrokBotMutation_h */
