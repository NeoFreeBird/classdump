//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels19QuotedTweetFragment_h
#define _TtC13GraphQLModels19QuotedTweetFragment_h
@import Foundation;

@class GraphQLModels.ApiGrokAnnotationsFragment ?, GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.ArticleEntityDataFragment ?, GraphQLModels.BirdwatchPivotFragment ?, GraphQLModels.CardFragment ?, GraphQLModels.CommunityAnalysisContentFragment ?, GraphQLModels.CommunityMembershipFragment ?, GraphQLModels.ContentDisclosureFragment ?, GraphQLModels.DownvotePerspectiveFragment ?, GraphQLModels.EditPerspectiveFragment ?, GraphQLModels.JetfuelDataFragment ?, GraphQLModels.LegacyTweetFragment ?, GraphQLModels.LiveEventPostContextFragment ?, GraphQLModels.NoteTweetDataFragment ?, GraphQLModels.PostCtaResponseFragment ?, GraphQLModels.PreviousCountsFragment ?, GraphQLModels.QuotedTweetFragment.ConversationControlDetails ?, GraphQLModels.QuotedTweetFragment.Core ?, GraphQLModels.QuotedTweetFragment.ExclusiveTweetInfo ?, GraphQLModels.QuotedTweetFragment.NestedQuotedTweetResults ?, GraphQLModels.QuotedTweetFragment.QuotedTweetResults ?, GraphQLModels.QuotedTweetFragment.TrendResults ?, GraphQLModels.ReactionContextFragment ?, GraphQLModels.SportsPostContextFragment ?, GraphQLModels.StatusPerspectiveFragment ?, GraphQLModels.SuperFollowsUserResultsFragment ?, GraphQLModels.TimelineForwardPivotFragment ?, GraphQLModels.TweetCommunityRelationshipFragment ?, GraphQLModels.TweetConversationContextFragment ?, GraphQLModels.TweetQuickPromoteEligibilityResponseFragment ?, GraphQLModels.Union GraphQLModels.EditControlFragment ?, GraphQLModels.UnmentionDataFragment ?, GraphQLModels.UnmentionInfoFragment ?, GraphQLModels.UserCommunityRelationshipRoleFragment ?, GraphQLModels.ViewCountInfoFragment ?, GraphQLModels.VoiceInfoFragment ?, GraphQLScalars.NumericString, _$sSaySSGSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.QuotedTweetFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.ArticleEntityDataFragment ? article;
    GraphQLModels.UserCommunityRelationshipRoleFragment ? authorCommunityRelationship;
    GraphQLModels.BirdwatchPivotFragment ? birdwatchPivot;
    GraphQLModels.CardFragment ? card;
    GraphQLModels.CommunityAnalysisContentFragment ? communityAnalysis;
    GraphQLModels.CommunityMembershipFragment ? communityMembership;
    GraphQLModels.TweetCommunityRelationshipFragment ? communityRelationship;
    GraphQLModels.ContentDisclosureFragment ? contentDisclosure;
    GraphQLModels.TweetConversationContextFragment ? conversationContext;
    GraphQLModels.QuotedTweetFragment.ConversationControlDetails ? conversationControlDetails;
    GraphQLModels.QuotedTweetFragment.Core ? core;
    GraphQLModels.PostCtaResponseFragment ? cta;
    GraphQLModels.DownvotePerspectiveFragment ? downvotePerspective;
    GraphQLModels.Union GraphQLModels.EditControlFragment ? editControl;
    GraphQLModels.EditPerspectiveFragment ? editPerspective;
    GraphQLModels.QuotedTweetFragment.ExclusiveTweetInfo ? exclusiveTweetInfo;
    Swift.Bool? grokAnalysisButton;
    [Swift.String]? grokAnalysisFollowups;
    GraphQLModels.ApiGrokAnnotationsFragment ? grokAnnotations;
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedPostWithAvailability;
    Swift.Bool? hasBirdwatchNotes;
    Swift.Bool? isTranslatable;
    GraphQLModels.JetfuelDataFragment ? jetfuelAttachment;
    GraphQLModels.LegacyTweetFragment ? legacy;
    GraphQLModels.LiveEventPostContextFragment ? liveEventPostContext;
    GraphQLModels.QuotedTweetFragment.NestedQuotedTweetResults ? nestedQuotedTweetResults;
    GraphQLModels.NoteTweetDataFragment ? noteTweet;
    GraphQLModels.StatusPerspectiveFragment ? perspective;
    GraphQLModels.PreviousCountsFragment ? previousCounts;
    GraphQLModels.TweetQuickPromoteEligibilityResponseFragment ? quickPromoteEligibility;
    GraphQLModels.QuotedTweetFragment.QuotedTweetResults ? quotedTweetResults;
    GraphQLModels.ReactionContextFragment ? reactionContext;
    GraphQLScalars.NumericString restId;
    GraphQLModels.TimelineForwardPivotFragment ? softInterventionPivot;
    GraphQLModels.SportsPostContextFragment ? sportsPostContext;
    GraphQLModels.SuperFollowsUserResultsFragment ? superFollowsConversationUserResults;
    GraphQLModels.QuotedTweetFragment.TrendResults ? trendResults;
    GraphQLModels.UnmentionDataFragment ? unmentionData;
    GraphQLModels.UnmentionInfoFragment ? unmentionInfo;
    GraphQLModels.ViewCountInfoFragment ? viewCountInfo;
    GraphQLModels.VoiceInfoFragment ? voiceInfo;
}

@end

#endif /* _TtC13GraphQLModels19QuotedTweetFragment_h */
