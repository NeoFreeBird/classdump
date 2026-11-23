//
#ifndef _TtC14GraphQLActions31CommunityAnalysisRatingMutation_h
#define _TtC14GraphQLActions31CommunityAnalysisRatingMutation_h
@import Foundation;

@class GraphQLModels.BirdwatchNoteRatingDataV2Input, GraphQLScalars.BirdwatchRatingSourceInput, GraphQLScalars.NumericString, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSSSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CommunityAnalysisRatingMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    GraphQLScalars.NumericString noteID;
    GraphQLScalars.NumericString tweetID;
    GraphQLModels.BirdwatchNoteRatingDataV2Input dataV2;
    Swift.String? suggestion;
    GraphQLScalars.BirdwatchRatingSourceInput ratingSource;
}

@end

#endif /* _TtC14GraphQLActions31CommunityAnalysisRatingMutation_h */
