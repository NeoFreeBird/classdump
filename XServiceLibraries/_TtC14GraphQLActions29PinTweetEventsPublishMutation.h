//
#ifndef _TtC14GraphQLActions29PinTweetEventsPublishMutation_h
#define _TtC14GraphQLActions29PinTweetEventsPublishMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.PinTweetEventsPublishMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString userID;
    GraphQLScalars.NumericString tweetID;
}

@end

#endif /* _TtC14GraphQLActions29PinTweetEventsPublishMutation_h */
