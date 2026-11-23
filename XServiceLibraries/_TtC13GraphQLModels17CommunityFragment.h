//
#ifndef _TtC13GraphQLModels17CommunityFragment_h
#define _TtC13GraphQLModels17CommunityFragment_h
@import Foundation;

@class GraphQLModels.CommunityActionsFragment, GraphQLModels.CommunityAutomoderationSettingsFragment ?, GraphQLModels.CommunityBannerMediaFragment, GraphQLModels.CommunityBannerMediaFragment ?, GraphQLModels.CommunityFragment.Moderation ?, GraphQLModels.CommunityTopicPairFragment ?, GraphQLModels.CommunityViewerRelationshipFragment ?, GraphQLModels.Enumeration GraphQLScalars.CommunityInvitesPolicy, GraphQLModels.Enumeration GraphQLScalars.CommunityJoinPolicy, GraphQLModels.Enumeration GraphQLScalars.CommunitySpamFilterSetting ?, GraphQLModels.Union GraphQLModels.CommunityInvitesResultFragment, GraphQLModels.Union GraphQLModels.CommunityJoinRequestsResultFragment, GraphQLModels.UserResultsFragment, GraphQLScalars.NumericString, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.CommunityNotificationTypeToSettingsFragment ?, _$sSa -> GraphQLModels.CommunityRuleFragment, _$sSa -> GraphQLModels.UserResultsFragment, _$sSbSg, _$ss5Int32VMn, _$ss5Int64VMn, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.CommunityFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.CommunityActionsFragment actions;
    GraphQLModels.UserResultsFragment adminResults;
    GraphQLModels.CommunityAutomoderationSettingsFragment ? automoderationSettings;
    GraphQLModels.CommunityTopicPairFragment ? communityTopic;
    nominal type descriptor for Swift.Int64 createdAt;
    GraphQLModels.UserResultsFragment creatorResults;
    GraphQLModels.CommunityBannerMediaFragment ? customBannerMedia;
    GraphQLModels.CommunityBannerMediaFragment defaultBannerMedia;
    Swift.String? description;
    GraphQLModels.Enumeration GraphQLScalars.CommunityInvitesPolicy invitesPolicy;
    GraphQLModels.Union GraphQLModels.CommunityInvitesResultFragment invitesResult;
    Swift.Bool? isNsfw;
    Swift.Bool? isPinned;
    GraphQLModels.Enumeration GraphQLScalars.CommunityJoinPolicy joinPolicy;
    GraphQLModels.Union GraphQLModels.CommunityJoinRequestsResultFragment joinRequestsResult;
    nominal type descriptor for Swift.Int64 ? lastActiveAt;
    nominal type descriptor for Swift.Int64 ? lastViewedAt;
    nominal type descriptor for Swift.Int32 memberCount;
    Swift.Array -> GraphQLModels.UserResultsFragment membersFacepileResults;
    GraphQLModels.CommunityFragment.Moderation ? moderation;
    nominal type descriptor for Swift.Int32 moderatorCount;
    Swift.String name;
    nominal type descriptor for Swift.Int32 newTweetCountSinceLastViewed;
    Swift.Array -> GraphQLModels.CommunityNotificationTypeToSettingsFragment ? notificationSettings;
    Swift.String? question;
    GraphQLScalars.NumericString restId;
    Swift.Array -> GraphQLModels.CommunityRuleFragment rules;
    GraphQLModels.Enumeration GraphQLScalars.CommunitySpamFilterSetting ? spamFilterSetting;
    GraphQLModels.CommunityViewerRelationshipFragment ? viewerRelationship;
}

@end

#endif /* _TtC13GraphQLModels17CommunityFragment_h */
