//
#ifndef _TtC13GraphQLModels41TweetCommunityRelationshipActionsFragment_h
#define _TtC13GraphQLModels41TweetCommunityRelationshipActionsFragment_h
@import Foundation;

@class GraphQLModels.Union GraphQLModels.CommunityTweetPinActionResultFragment, GraphQLModels.Union GraphQLModels.CommunityTweetUnpinActionResultFragment, GraphQLScalars.NumericString, _TtCs12_SwiftObject;

@interface GraphQLModels.TweetCommunityRelationshipActionsFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.Union GraphQLModels.CommunityTweetPinActionResultFragment pinActionResult;
    GraphQLScalars.NumericString restId;
    GraphQLModels.Union GraphQLModels.CommunityTweetUnpinActionResultFragment unpinActionResult;
}

@end

#endif /* _TtC13GraphQLModels41TweetCommunityRelationshipActionsFragment_h */
