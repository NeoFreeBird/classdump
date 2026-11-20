//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL23NHLTeamStandingFragment_h
#define _TtC14XSportsGraphQL23NHLTeamStandingFragment_h
@import Foundation;

@class XSportsGraphQL.NHLLeagueRefFragment ?, XSportsGraphQL.NHLRecordFragment ?, XSportsGraphQL.NHLTeamFragment, _$sSS, _$sSSSg, _$sSdSg, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLTeamStandingFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? abbreviation;
    Swift.String? clinched;
    XSportsGraphQL.NHLLeagueRefFragment ? conference;
    nominal type descriptor for Swift.Int32 ? conferenceRank;
    XSportsGraphQL.NHLLeagueRefFragment ? division;
    nominal type descriptor for Swift.Int32 ? divisionRank;
    nominal type descriptor for Swift.Int32 ? gamesPlayed;
    nominal type descriptor for Swift.Int32 ? goalDiff;
    nominal type descriptor for Swift.Int32 ? goalsAgainst;
    nominal type descriptor for Swift.Int32 ? goalsFor;
    XSportsGraphQL.NHLRecordFragment ? home;
    XSportsGraphQL.NHLRecordFragment ? last10;
    nominal type descriptor for Swift.Int32 ? leagueRank;
    nominal type descriptor for Swift.Int32 losses;
    Swift.String name;
    nominal type descriptor for Swift.Int32 ? overtimeLosses;
    nominal type descriptor for Swift.Int32 ? points;
    Swift.Double? pointsPct;
    nominal type descriptor for Swift.Int32 ? regulationOvertimeWins;
    nominal type descriptor for Swift.Int32 ? regulationWins;
    XSportsGraphQL.NHLRecordFragment ? road;
    nominal type descriptor for Swift.Int32 ? shootoutLosses;
    nominal type descriptor for Swift.Int32 ? shootoutWins;
    Swift.String? streak;
    XSportsGraphQL.NHLTeamFragment team;
    nominal type descriptor for Swift.Int32 ? wildcardRank;
    nominal type descriptor for Swift.Int32 wins;
}

@end

#endif /* _TtC14XSportsGraphQL23NHLTeamStandingFragment_h */
