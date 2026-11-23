//
#ifndef _TtCCC13GraphQLModels28NudgeCreateOperationResponse13CreateNudgeV25Nudge_h
#define _TtCCC13GraphQLModels28NudgeCreateOperationResponse13CreateNudgeV25Nudge_h
@import Foundation;

@class GraphQLModels.Union GraphQLModels.NudgeCreateOperationResponse.CreateNudgeV2.Nudge.NudgeType, GraphQLModels.Union GraphQLModels.NudgeCreateOperationResponse.CreateNudgeV2.Nudge.TweetNudge ?, GraphQLScalars.NumericString, _$sSSSg, _TtCs12_SwiftObject;

@interface GraphQLModels.NudgeCreateOperationResponse.CreateNudgeV2.Nudge : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLScalars.NumericString id;
    GraphQLModels.Union GraphQLModels.NudgeCreateOperationResponse.CreateNudgeV2.Nudge.NudgeType nudgeType;
    Swift.String? proposedTweetLanguage;
    GraphQLModels.Union GraphQLModels.NudgeCreateOperationResponse.CreateNudgeV2.Nudge.TweetNudge ? tweetNudge;
}

@end

#endif /* _TtCCC13GraphQLModels28NudgeCreateOperationResponse13CreateNudgeV25Nudge_h */
