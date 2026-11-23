//
#ifndef _TtCC14XSportsGraphQL23NFLScheduleGameFragment9BasicData_h
#define _TtCC14XSportsGraphQL23NFLScheduleGameFragment9BasicData_h
@import Foundation;

@class _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13NflSeasonTypeOMn ?, _$sSSSg, _$sSa -> XSportsGraphQL.NFLTeamFragment, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLScheduleGameFragment.BasicData : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.NflSeasonType ? seasonType;
    nominal type descriptor for Swift.Int16 ? seasonWeek;
    Swift.String? startTime;
    Swift.Array -> XSportsGraphQL.NFLTeamFragment teams;
    Swift.String? venue;
}

@end

#endif /* _TtCC14XSportsGraphQL23NFLScheduleGameFragment9BasicData_h */
