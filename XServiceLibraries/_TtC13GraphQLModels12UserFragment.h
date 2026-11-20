//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13GraphQLModels12UserFragment_h
#define _TtC13GraphQLModels12UserFragment_h
@import Foundation;

@class GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.Enumeration GraphQLScalars.PCFLabel ?, GraphQLModels.Enumeration GraphQLScalars.ProfileImageShape ?, GraphQLModels.HighlightedLabelFragment ?, GraphQLModels.ProfessionalFragment ?, GraphQLModels.UserActionCountsFragment ?, GraphQLModels.UserAvatarFragment ?, GraphQLModels.UserBannerFragment ?, GraphQLModels.UserBioFragment ?, GraphQLModels.UserCoreFragment ?, GraphQLModels.UserFragment.MediaPermissions ?, GraphQLModels.UserFragment.SuperfollowPlatformAvailability ?, GraphQLModels.UserLocationFragment ?, GraphQLModels.UserNotificationSettingsFragment ?, GraphQLModels.UserPinnedInfoFragment ?, GraphQLModels.UserPrivacyFragment ?, GraphQLModels.UserProfileMetadataFragment ?, GraphQLModels.UserProfileTranslationFragment ?, GraphQLModels.UserPropertiesFragment ?, GraphQLModels.UserRelationshipCountsFragment ?, GraphQLModels.UserRelationshipPerspectivesFragment ?, GraphQLModels.UserTweetCountsFragment ?, GraphQLModels.UserVerificationFragment ?, GraphQLModels.UserVerificationInfoFragment ?, GraphQLModels.UserWebsiteFragment ?, GraphQLScalars.NumericString, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.UserFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.UserActionCountsFragment ? actionCounts;
    GraphQLModels.UserAvatarFragment ? avatar;
    GraphQLModels.UserBannerFragment ? banner;
    Swift.Bool? canPay;
    GraphQLModels.UserCoreFragment ? core;
    Swift.Bool? dmMuting;
    Swift.Bool? exclusiveTweetFollowing;
    Swift.Bool? followRequestSent;
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedBioWithAvailability;
    Swift.Bool? hasParodyProfileLabel;
    GraphQLModels.HighlightedLabelFragment ? identityProfileLabelsHighlightedLabel;
    GraphQLModels.UserLocationFragment ? location;
    GraphQLModels.UserFragment.MediaPermissions ? mediaPermissions;
    GraphQLModels.UserNotificationSettingsFragment ? notificationsSettings;
    GraphQLModels.Enumeration GraphQLScalars.PCFLabel ? parodyCommentaryFanLabel;
    GraphQLModels.UserPinnedInfoFragment ? pinnedItems;
    GraphQLModels.UserPrivacyFragment ? privacy;
    Swift.Bool? privateSuperFollowing;
    GraphQLModels.ProfessionalFragment ? professional;
    GraphQLModels.UserBioFragment ? profileBio;
    Swift.String? profileDescriptionLanguage;
    GraphQLModels.Enumeration GraphQLScalars.ProfileImageShape ? profileImageShape;
    GraphQLModels.UserProfileMetadataFragment ? profileMetadata;
    GraphQLModels.UserProfileTranslationFragment ? profileTranslation;
    GraphQLModels.UserPropertiesFragment ? properties;
    GraphQLModels.UserRelationshipCountsFragment ? relationshipCounts;
    GraphQLModels.UserRelationshipPerspectivesFragment ? relationshipPerspectives;
    Swift.Bool? replyDeviceFollowing;
    GraphQLScalars.NumericString restId;
    Swift.Bool? superFollowEligible;
    Swift.Bool? superFollowedBy;
    Swift.Bool? superFollowing;
    GraphQLModels.UserFragment.SuperfollowPlatformAvailability ? superfollowPlatformAvailability;
    GraphQLModels.UserTweetCountsFragment ? tweetCounts;
    GraphQLModels.UserVerificationFragment ? verification;
    GraphQLModels.UserVerificationInfoFragment ? verificationInfo;
    GraphQLModels.UserWebsiteFragment ? website;
}

@end

#endif /* _TtC13GraphQLModels12UserFragment_h */
