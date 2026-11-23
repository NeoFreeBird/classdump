//
#ifndef _TtC14XDraftsGraphQL26EditScheduledTweetMutation_h
#define _TtC14XDraftsGraphQL26EditScheduledTweetMutation_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels21PostTweetRequestInputVMn, _$s14GraphQLScalars13NumericStringVMn, _$s8TFSModel16PendingStateNodeMp ?, _$sSDyS2SGSg, _$ss5Int64VMn, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface XDraftsGraphQL.EditScheduledTweetMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    protocol descriptor for TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    nominal type descriptor for GraphQLScalars.NumericString scheduledTweetID;
    nominal type descriptor for GraphQLModels.PostTweetRequestInput postTweetRequest;
    nominal type descriptor for Swift.Int64 executeAt;
}

@end

#endif /* _TtC14XDraftsGraphQL26EditScheduledTweetMutation_h */
