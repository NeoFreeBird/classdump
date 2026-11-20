//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL29MLBStandingsOperationResponse12MlbStandings_h
#define _TtCC14XSportsGraphQL29MLBStandingsOperationResponse12MlbStandings_h
@import Foundation;

@class XSportsGraphQL.MLBStandingsOperationResponse.MlbStandings.Season ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBSeasonTypeOMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSa -> XSportsGraphQL.MLBStandingsOperationResponse.MlbStandings.Leagues, _$sSa -> XSportsGraphQL.MLBTeamStandingFragment, _$ss5Int32VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBStandingsOperationResponse.MlbStandings : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLScalars.NumericString ? asOfMs;
    Swift.Array -> XSportsGraphQL.MLBStandingsOperationResponse.MlbStandings.Leagues leagues;
    Swift.Array -> XSportsGraphQL.MLBTeamStandingFragment overall;
    XSportsGraphQL.MLBStandingsOperationResponse.MlbStandings.Season ? season;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBSeasonType seasonType;
    nominal type descriptor for Swift.Int32 seasonYear;
}

@end

#endif /* _TtCC14XSportsGraphQL29MLBStandingsOperationResponse12MlbStandings_h */
