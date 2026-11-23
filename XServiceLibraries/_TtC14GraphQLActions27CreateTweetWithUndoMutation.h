//
#ifndef _TtC14GraphQLActions27CreateTweetWithUndoMutation_h
#define _TtC14GraphQLActions27CreateTweetWithUndoMutation_h
@import Foundation;

@class GraphQLScalars.NumericString ?, GraphQLScalars.TweetTypeInput, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSS, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.CreateTweetWithUndoMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.String proposedTweetText;
    GraphQLScalars.TweetTypeInput tweetType;
    Swift.String proposedTweetUuid;
    GraphQLScalars.NumericString ? inReplyToTweetID;
    GraphQLScalars.NumericString ? conversationID;
}

@end

#endif /* _TtC14GraphQLActions27CreateTweetWithUndoMutation_h */
