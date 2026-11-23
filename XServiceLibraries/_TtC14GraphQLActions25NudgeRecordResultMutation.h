//
#ifndef _TtC14GraphQLActions25NudgeRecordResultMutation_h
#define _TtC14GraphQLActions25NudgeRecordResultMutation_h
@import Foundation;

@class GraphQLScalars.NumericString, GraphQLScalars.NumericString ?, GraphQLScalars.ScribeNudgeResultTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.NudgeRecordResultMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString nudgeID;
    GraphQLScalars.ScribeNudgeResultTypeInput nudgeResultType;
    GraphQLScalars.NumericString ? createdTweetID;
}

@end

#endif /* _TtC14GraphQLActions25NudgeRecordResultMutation_h */
