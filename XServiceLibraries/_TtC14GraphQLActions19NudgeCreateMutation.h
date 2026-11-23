//
#ifndef _TtC14GraphQLActions19NudgeCreateMutation_h
#define _TtC14GraphQLActions19NudgeCreateMutation_h
@import Foundation;

@class GraphQLModels.CreateNudgeOptionsInput ?, GraphQLScalars.NumericString ?, GraphQLScalars.TweetTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.NudgeCreateMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String tweetText;
    GraphQLScalars.TweetTypeInput tweetType;
    GraphQLScalars.NumericString ? inReplyToTweetID;
    GraphQLScalars.NumericString ? conversationID;
    GraphQLModels.CreateNudgeOptionsInput ? createNudgeOptions;
}

@end

#endif /* _TtC14GraphQLActions19NudgeCreateMutation_h */
