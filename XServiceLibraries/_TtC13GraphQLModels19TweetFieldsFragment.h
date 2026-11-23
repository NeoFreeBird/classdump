//
#ifndef _TtC13GraphQLModels19TweetFieldsFragment_h
#define _TtC13GraphQLModels19TweetFieldsFragment_h
@import Foundation;

@class GraphQLModels.ApiGrokAnnotationsFragment ?, GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.ArticleEntityDataFragment ?, GraphQLModels.BirdwatchPivotFragment ?, GraphQLModels.CardFragment ?, GraphQLModels.CommunityAnalysisContentFragment ?, GraphQLModels.CommunityMembershipFragment ?, GraphQLModels.ContentDisclosureFragment ?, GraphQLModels.DownvotePerspectiveFragment ?, GraphQLModels.EditPerspectiveFragment ?, GraphQLModels.JetfuelDataFragment ?, GraphQLModels.LegacyTweetFragment ?, GraphQLModels.LiveEventPostContextFragment ?, GraphQLModels.NoteTweetDataFragment ?, GraphQLModels.PostCtaResponseFragment ?, GraphQLModels.PreviousCountsFragment ?, GraphQLModels.ReactionContextFragment ?, GraphQLModels.SportsPostContextFragment ?, GraphQLModels.StatusPerspectiveFragment ?, GraphQLModels.SuperFollowsUserResultsFragment ?, GraphQLModels.TimelineForwardPivotFragment ?, GraphQLModels.TweetCommunityRelationshipFragment ?, GraphQLModels.TweetConversationContextFragment ?, GraphQLModels.TweetFieldsFragment.ConversationControlDetails ?, GraphQLModels.TweetFieldsFragment.Core ?, GraphQLModels.TweetFieldsFragment.ExclusiveTweetInfo ?, GraphQLModels.TweetFieldsFragment.TrendResults ?, GraphQLModels.TweetQuickPromoteEligibilityResponseFragment ?, GraphQLModels.Union GraphQLModels.EditControlFragment ?, GraphQLModels.UnmentionDataFragment ?, GraphQLModels.UnmentionInfoFragment ?, GraphQLModels.UserCommunityRelationshipRoleFragment ?, GraphQLModels.ViewCountInfoFragment ?, GraphQLModels.VoiceInfoFragment ?, GraphQLScalars.NumericString, _$sSaySSGSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.TweetFieldsFragment : Swift._SwiftObject { // (Swift)
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
    GraphQLModels.TweetFieldsFragment.ConversationControlDetails ? conversationControlDetails;
    GraphQLModels.TweetFieldsFragment.Core ? core;
    GraphQLModels.PostCtaResponseFragment ? cta;
    GraphQLModels.DownvotePerspectiveFragment ? downvotePerspective;
    GraphQLModels.Union GraphQLModels.EditControlFragment ? editControl;
    GraphQLModels.EditPerspectiveFragment ? editPerspective;
    GraphQLModels.TweetFieldsFragment.ExclusiveTweetInfo ? exclusiveTweetInfo;
    Swift.Bool? grokAnalysisButton;
    [Swift.String]? grokAnalysisFollowups;
    GraphQLModels.ApiGrokAnnotationsFragment ? grokAnnotations;
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedPostWithAvailability;
    Swift.Bool? hasBirdwatchNotes;
    Swift.Bool? isTranslatable;
    GraphQLModels.JetfuelDataFragment ? jetfuelAttachment;
    GraphQLModels.LegacyTweetFragment ? legacy;
    GraphQLModels.LiveEventPostContextFragment ? liveEventPostContext;
    GraphQLModels.NoteTweetDataFragment ? noteTweet;
    GraphQLModels.StatusPerspectiveFragment ? perspective;
    GraphQLModels.PreviousCountsFragment ? previousCounts;
    GraphQLModels.TweetQuickPromoteEligibilityResponseFragment ? quickPromoteEligibility;
    GraphQLModels.ReactionContextFragment ? reactionContext;
    GraphQLScalars.NumericString restId;
    GraphQLModels.TimelineForwardPivotFragment ? softInterventionPivot;
    GraphQLModels.SportsPostContextFragment ? sportsPostContext;
    GraphQLModels.SuperFollowsUserResultsFragment ? superFollowsConversationUserResults;
    GraphQLModels.TweetFieldsFragment.TrendResults ? trendResults;
    GraphQLModels.UnmentionDataFragment ? unmentionData;
    GraphQLModels.UnmentionInfoFragment ? unmentionInfo;
    GraphQLModels.ViewCountInfoFragment ? viewCountInfo;
    GraphQLModels.VoiceInfoFragment ? voiceInfo;
}

@end

#endif /* _TtC13GraphQLModels19TweetFieldsFragment_h */
