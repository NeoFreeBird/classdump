//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14GraphQLActions26UserPreferencesPutMutation_h
#define _TtC14GraphQLActions26UserPreferencesPutMutation_h
@import Foundation;

@class GraphQLModels.AboutThisAccountUserPreferencesInput ?, GraphQLScalars.InferredLocationResolutionInput ?, GraphQLScalars.PCFLabelInput ?, Swift.Bool, TFSModel.PendingStateNode ?, _$sSDyS2SGSg, _$sSbSg, _TtCs12_SwiftObject, __C.TNLHTTPMethod;

@interface GraphQLActions.UserPreferencesPutMutation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TFSModel.PendingStateNode ? pendingStateNode;
    [Swift.String : Swift.String]? additionalHeaderFields;
    Swift.Bool attestRequestPayload;
    __C.TNLHTTPMethod graphQLHTTPMethod;
    Swift.Bool? allowVideoDownloads;
    Swift.Bool? enableParodyAccountProfileLabel;
    Swift.Bool? enablePasskeyAuthentication;
    Swift.Bool? hideSubscriptionsOnProfile;
    Swift.Bool? allowXaiDataSharing;
    Swift.Bool? allowXaiPersonalization;
    Swift.Bool? allowGrokMemory;
    Swift.Bool? allowForYouRecommendations;
    Swift.Bool? enableShareAttribution;
    GraphQLScalars.PCFLabelInput ? parodyCommentaryFanLabel;
    GraphQLScalars.InferredLocationResolutionInput ? inferredLocationResolutionPreference;
    GraphQLModels.AboutThisAccountUserPreferencesInput ? aboutThisAccountUserPreferences;
}

@end

#endif /* _TtC14GraphQLActions26UserPreferencesPutMutation_h */
