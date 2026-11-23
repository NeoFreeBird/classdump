//
#ifndef _TtC13GraphQLModels18ViewerUserFragment_h
#define _TtC13GraphQLModels18ViewerUserFragment_h
@import Foundation;

@class GraphQLModels.AdvertiserInfoFragment ?, GraphQLModels.ApiGrokTranslateResponseFragment ?, GraphQLModels.BusinessAccountFragment ?, GraphQLModels.Enumeration GraphQLScalars.PCFLabel ?, GraphQLModels.UserHighlightsInfoFragment ?, GraphQLModels.UserPrivacyFragment ?, GraphQLModels.UserTweetCountsFragment ?, GraphQLModels.ViewerUserFragment.LegacyExtendedProfile ?, GraphQLModels.ViewerUserFragment.VerifiedProgramCreatorFeatures ?, GraphQLScalars.NumericString, _$sSSSg, _$sSa -> GraphQLModels.ClaimFragment ?, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.ViewerUserFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.AdvertiserInfoFragment ? advertiserInfo;
    GraphQLModels.BusinessAccountFragment ? businessAccount;
    Swift.Array -> GraphQLModels.ClaimFragment ? claims;
    nominal type descriptor for Swift.Int64 ? creatorSubscriptionsCount;
    GraphQLModels.ApiGrokTranslateResponseFragment ? grokTranslatedBioWithAvailability;
    Swift.Bool? hasGraduatedAccess;
    Swift.Bool? hasHiddenLikesOnProfile;
    Swift.Bool? hasHiddenSubscriptionsOnProfile;
    Swift.Bool? hasParodyProfileLabel;
    GraphQLModels.UserHighlightsInfoFragment ? highlightsInfo;
    Swift.Bool? isProfileTranslatable;
    GraphQLModels.ViewerUserFragment.LegacyExtendedProfile ? legacyExtendedProfile;
    GraphQLModels.Enumeration GraphQLScalars.PCFLabel ? parodyCommentaryFanLabel;
    GraphQLModels.UserPrivacyFragment ? privacy;
    Swift.String? profileDescriptionLanguage;
    GraphQLScalars.NumericString restId;
    GraphQLModels.UserTweetCountsFragment ? tweetCounts;
    nominal type descriptor for Swift.Int64 ? userSeedTweetCount;
    GraphQLModels.ViewerUserFragment.VerifiedProgramCreatorFeatures ? verifiedProgramCreatorFeatures;
}

@end

#endif /* _TtC13GraphQLModels18ViewerUserFragment_h */
