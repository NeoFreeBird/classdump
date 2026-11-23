//
#ifndef _TtC14GraphQLActions29CreateConversationPinMutation_h
#define _TtC14GraphQLActions29CreateConversationPinMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateConversationPinMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString conversationID;
    GraphQLScalars.NumericString tweetID;
}

@end

#endif /* _TtC14GraphQLActions29CreateConversationPinMutation_h */
