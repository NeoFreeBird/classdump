//
#ifndef _TtCCC14XSportsGraphQL21MLBPlayByPlayFragment7Innings6Halves_h
#define _TtCCC14XSportsGraphQL21MLBPlayByPlayFragment7Innings6Halves_h
@import Foundation;

@class XSportsGraphQL.MLBPlayByPlayFragment.Innings.Halves.BattingTeam ?, XSportsGraphQL.MLBPlayByPlayFragment.Innings.Halves.FieldingTeam ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars13MLBInningHalfOMn, _$sSa -> XSportsGraphQL.MLBAtBatFragment, _$sSa -> XSportsGraphQL.MLBPlayFragment, _$ss5Int32VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBPlayByPlayFragment.Innings.Halves : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XSportsGraphQL.MLBAtBatFragment atBats;
    XSportsGraphQL.MLBPlayByPlayFragment.Innings.Halves.BattingTeam ? battingTeam;
    Swift.Array -> XSportsGraphQL.MLBPlayFragment events;
    XSportsGraphQL.MLBPlayByPlayFragment.Innings.Halves.FieldingTeam ? fieldingTeam;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.MLBInningHalf half;
    nominal type descriptor for Swift.Int32 inning;
    nominal type descriptor for Swift.Int32 runs;
}

@end

#endif /* _TtCCC14XSportsGraphQL21MLBPlayByPlayFragment7Innings6Halves_h */
