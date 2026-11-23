//
#ifndef _TtC13GraphQLModels20AboutProfileFragment_h
#define _TtC13GraphQLModels20AboutProfileFragment_h
@import Foundation;

@class GraphQLModels.AboutProfileFragment.UsernameChanges ?, GraphQLScalars.NumericString ?, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.AboutProfileFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? accountBasedIn;
    Swift.String? affiliateUrl;
    Swift.String? affiliateUsername;
    Swift.String? createdCountry;
    Swift.Bool? createdCountryAccurate;
    Swift.String? learnMoreUrl;
    Swift.Bool? locationAccurate;
    Swift.String? reportProblemUrl;
    Swift.String? source;
    GraphQLModels.AboutProfileFragment.UsernameChanges ? usernameChanges;
    GraphQLScalars.NumericString ? verifiedSinceMsec;
}

@end

#endif /* _TtC13GraphQLModels20AboutProfileFragment_h */
