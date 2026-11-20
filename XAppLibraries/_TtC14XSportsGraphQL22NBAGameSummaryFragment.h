//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL22NBAGameSummaryFragment_h
#define _TtC14XSportsGraphQL22NBAGameSummaryFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.NBAGameTeamFragment, XSportsGraphQL.SportsDataVenueFragment ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NBAGameStatusOMn, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NBAPeriodTypeOMn ?, _$s14GraphQLScalars13NumericStringVMn, _$sSSSg, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAGameSummaryFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NBAGameTeamFragment away;
    Swift.String? clock;
    XSportsGraphQL.NBAGameTeamFragment home;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NBAPeriodType ? periodType;
    nominal type descriptor for Swift.Int32 ? quarter;
    nominal type descriptor for GraphQLScalars.NumericString scheduledMs;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NBAGameStatus status;
    XSportsGraphQL.SportsDataVenueFragment ? venue;
    Swift.Bool wentToOvertime;
}

@end

#endif /* _TtC14XSportsGraphQL22NBAGameSummaryFragment_h */
