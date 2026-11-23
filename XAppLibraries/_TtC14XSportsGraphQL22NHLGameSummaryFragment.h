//
#ifndef _TtC14XSportsGraphQL22NHLGameSummaryFragment_h
#define _TtC14XSportsGraphQL22NHLGameSummaryFragment_h
@import Foundation;

@class Swift.Bool, XSportsGraphQL.NHLGameTeamFragment, XSportsGraphQL.SportsDataVenueFragment ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NHLGameStatusOMn, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NHLPeriodTypeOMn ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NHLSeasonTypeOMn ?, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _$sSSSg, _$ss5Int32VMn ?, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLGameSummaryFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLScalars.NumericString ? actualEndMs;
    nominal type descriptor for GraphQLScalars.NumericString ? actualStartMs;
    XSportsGraphQL.NHLGameTeamFragment away;
    Swift.String? clock;
    XSportsGraphQL.NHLGameTeamFragment home;
    nominal type descriptor for Swift.Int32 ? period;
    Swift.String? periodLabel;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NHLPeriodType ? periodType;
    nominal type descriptor for GraphQLScalars.NumericString scheduledMs;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NHLSeasonType ? seasonType;
    nominal type descriptor for Swift.Int32 ? seasonYear;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NHLGameStatus status;
    Swift.String? statusDetail;
    Swift.String title;
    nominal type descriptor for GraphQLScalars.NumericString ? updatedMs;
    XSportsGraphQL.SportsDataVenueFragment ? venue;
    nominal type descriptor for Swift.Int64 version;
    Swift.Bool wentToOvertime;
    Swift.Bool wentToShootout;
}

@end

#endif /* _TtC14XSportsGraphQL22NHLGameSummaryFragment_h */
