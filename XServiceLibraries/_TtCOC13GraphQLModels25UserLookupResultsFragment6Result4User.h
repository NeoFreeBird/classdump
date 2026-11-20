//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCOC13GraphQLModels25UserLookupResultsFragment6Result4User_h
#define _TtCOC13GraphQLModels25UserLookupResultsFragment6Result4User_h
@import Foundation;

@class GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.BusinessAccountFragment ?, GraphQLModels.Enumeration GraphQLScalars.PCFLabel ?, GraphQLModels.Enumeration GraphQLScalars.ProfileImageShape ?, GraphQLModels.HighlightedLabelFragment ?, GraphQLModels.ProfessionalFragment ?, GraphQLModels.UserActionCountsFragment ?, GraphQLModels.UserAvatarFragment ?, GraphQLModels.UserBannerFragment ?, GraphQLModels.UserBioFragment ?, GraphQLModels.UserCoreFragment ?, GraphQLModels.UserHighlightsInfoFragment ?, GraphQLModels.UserLocationFragment ?, GraphQLModels.UserLookupResultsFragment.Result.User.MediaPermissions ?, GraphQLModels.UserLookupResultsFragment.Result.User.SuperfollowPlatformAvailability ?, GraphQLModels.UserLookupResultsFragment.Result.User.VerifiedProgramCreatorFeatures ?, GraphQLModels.UserNotificationSettingsFragment ?, GraphQLModels.UserPinnedInfoFragment ?, GraphQLModels.UserPrivacyFragment ?, GraphQLModels.UserProfileMetadataFragment ?, GraphQLModels.UserProfileTranslationFragment ?, GraphQLModels.UserPropertiesFragment ?, GraphQLModels.UserRelationshipCountsFragment ?, GraphQLModels.UserRelationshipPerspectivesFragment ?, GraphQLModels.UserTweetCountsFragment ?, GraphQLModels.UserVerificationFragment ?, GraphQLModels.UserVerificationInfoFragment ?, GraphQLModels.UserWebsiteFragment ?, GraphQLScalars.NumericString, _$sSSSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.UserLookupResultsFragment.Result.User : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.UserActionCountsFragment ? actionCounts;
    GraphQLModels.UserAvatarFragment ? avatar;
    GraphQLModels.UserBannerFragment ? banner;
    GraphQLModels.BusinessAccountFragment ? businessAccount;
    Swift.Bool? canPay;
    Swift.Bool? canReceiveGift;
    GraphQLModels.UserCoreFragment ? core;
    nominal type descriptor for Swift.Int64 ? creatorSubscriptionsCount;
    Swift.Bool? dmMuting;
    Swift.Bool? exclusiveTweetFollowing;
    Swift.Bool? followRequestSent;
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedBioWithAvailability;
    Swift.Bool? hasGraduatedAccess;
    Swift.Bool? hasHiddenLikesOnProfile;
    Swift.Bool? hasHiddenSubscriptionsOnProfile;
    Swift.Bool? hasParodyProfileLabel;
    GraphQLModels.UserHighlightsInfoFragment ? highlightsInfo;
    GraphQLModels.HighlightedLabelFragment ? identityProfileLabelsHighlightedLabel;
    Swift.Bool? isProfileTranslatable;
    GraphQLModels.UserLocationFragment ? location;
    GraphQLModels.UserLookupResultsFragment.Result.User.MediaPermissions ? mediaPermissions;
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
    GraphQLModels.UserLookupResultsFragment.Result.User.SuperfollowPlatformAvailability ? superfollowPlatformAvailability;
    GraphQLModels.UserTweetCountsFragment ? tweetCounts;
    nominal type descriptor for Swift.Int64 ? userSeedTweetCount;
    GraphQLModels.UserVerificationFragment ? verification;
    GraphQLModels.UserVerificationInfoFragment ? verificationInfo;
    GraphQLModels.UserLookupResultsFragment.Result.User.VerifiedProgramCreatorFeatures ? verifiedProgramCreatorFeatures;
    GraphQLModels.UserWebsiteFragment ? website;
}

@end

#endif /* _TtCOC13GraphQLModels25UserLookupResultsFragment6Result4User_h */
