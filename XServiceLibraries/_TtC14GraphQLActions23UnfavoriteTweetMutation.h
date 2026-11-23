//
#ifndef _TtC14GraphQLActions23UnfavoriteTweetMutation_h
#define _TtC14GraphQLActions23UnfavoriteTweetMutation_h
@import Foundation;

@class GraphQLModels.EngagementRequestInput ?, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UnfavoriteTweetMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLModels.EngagementRequestInput ? engagementRequest;
    GraphQLScalars.NumericString tweetID;
}

@end

#endif /* _TtC14GraphQLActions23UnfavoriteTweetMutation_h */
