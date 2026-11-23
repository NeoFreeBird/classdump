//
#ifndef _TtC13GraphQLModels16ApiMediaFragment_h
#define _TtC13GraphQLModels16ApiMediaFragment_h
@import Foundation;

@class GraphQLModels.ApiMediaFragment.Cta ?, GraphQLModels.ApiMediaFragment.MediaAvailability ?, GraphQLModels.SensitiveMediaWarningFragment ?, GraphQLModels.Union GraphQLModels.ApiMediaInfoFragment ?, GraphQLScalars.NumericString ?, _$sSS, _$sSSSg, _$sSbSg, _TtCs12_SwiftObject;

@interface GraphQLModels.ApiMediaFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GraphQLModels.ApiMediaFragment.Cta ? cta;
    Swift.String id;
    Swift.Bool? is360;
    GraphQLModels.ApiMediaFragment.MediaAvailability ? mediaAvailability;
    GraphQLScalars.NumericString ? mediaId;
    GraphQLModels.Union GraphQLModels.ApiMediaInfoFragment ? mediaInfo;
    Swift.String? mediaKey;
    GraphQLModels.SensitiveMediaWarningFragment ? sensitiveMediaWarning;
}

@end

#endif /* _TtC13GraphQLModels16ApiMediaFragment_h */
