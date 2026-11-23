//
#ifndef _TtCC13GraphQLModels32UserPreferencesOperationResponse15UserPreferences_h
#define _TtCC13GraphQLModels32UserPreferencesOperationResponse15UserPreferences_h
@import Foundation;

@class GraphQLModels.AboutThisAccountUserPreferencesFragment ?, GraphQLModels.Enumeration GraphQLScalars.InferredLocationResolution ?, GraphQLModels.Enumeration GraphQLScalars.PCFLabel ?, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.UserPreferencesOperationResponse.UserPreferences : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.AboutThisAccountUserPreferencesFragment ? aboutThisAccountUserPreferences;
    Swift.Bool? allowForYouRecommendations;
    Swift.Bool? allowGrokMemory;
    Swift.Bool? allowVideoDownloads;
    Swift.Bool? allowXaiDataSharing;
    Swift.Bool? allowXaiPersonalization;
    Swift.Bool? enableParodyAccountProfileLabel;
    Swift.Bool? enablePasskeyAuthentication;
    Swift.Bool? enableShareAttribution;
    Swift.Bool? hideSubscriptionsOnProfile;
    GraphQLModels.Enumeration GraphQLScalars.InferredLocationResolution ? inferredLocationResolutionPreference;
    GraphQLModels.Enumeration GraphQLScalars.PCFLabel ? parodyCommentaryFanLabel;
}

@end

#endif /* _TtCC13GraphQLModels32UserPreferencesOperationResponse15UserPreferences_h */
