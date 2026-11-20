//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCVCC13GraphQLModels30PostAboutTrayOperationResponse18UserResultByRestId6Result4User12AboutProfile_h
#define _TtCCVCC13GraphQLModels30PostAboutTrayOperationResponse18UserResultByRestId6Result4User12AboutProfile_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.AboutProfileSourcePlatform ?, GraphQLModels.PostAboutTrayOperationResponse.UserResultByRestId.Result.User.AboutProfile.UsernameChanges ?, GraphQLScalars.NumericString ?, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.PostAboutTrayOperationResponse.UserResultByRestId.Result.User.AboutProfile : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? accountBasedIn;
    Swift.String? accountBasedInCountryOrRegion;
    Swift.String? affiliateUrl;
    Swift.String? affiliateUsername;
    Swift.String? createdCountry;
    Swift.Bool? createdCountryAccurate;
    Swift.String? learnMoreUrl;
    Swift.Bool? locationAccurate;
    Swift.String? reportProblemUrl;
    Swift.String? source;
    GraphQLModels.Enumeration GraphQLScalars.AboutProfileSourcePlatform ? sourcePlatform;
    GraphQLModels.PostAboutTrayOperationResponse.UserResultByRestId.Result.User.AboutProfile.UsernameChanges ? usernameChanges;
    GraphQLScalars.NumericString ? verifiedSinceMsec;
}

@end

#endif /* _TtCCVCC13GraphQLModels30PostAboutTrayOperationResponse18UserResultByRestId6Result4User12AboutProfile_h */
