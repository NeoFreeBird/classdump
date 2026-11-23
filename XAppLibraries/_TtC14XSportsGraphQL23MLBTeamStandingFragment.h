//
#ifndef _TtC14XSportsGraphQL23MLBTeamStandingFragment_h
#define _TtC14XSportsGraphQL23MLBTeamStandingFragment_h
@import Foundation;

@class XSportsGraphQL.MLBLeagueRefFragment ?, XSportsGraphQL.MLBTeamFragment, XSportsGraphQL.MLBTeamStandingFragment.Away ?, XSportsGraphQL.MLBTeamStandingFragment.Home ?, XSportsGraphQL.MLBTeamStandingFragment.Last10 ?, _$sSS, _$sSSSg, _$sSdSg, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBTeamStandingFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? abbreviation;
    XSportsGraphQL.MLBTeamStandingFragment.Away ? away;
    Swift.String? clinched;
    XSportsGraphQL.MLBLeagueRefFragment ? division;
    nominal type descriptor for Swift.Int32 ? divisionEliminationNumber;
    nominal type descriptor for Swift.Int32 ? divisionRank;
    nominal type descriptor for Swift.Int32 ? eliminationNumber;
    Swift.Double? gamesBack;
    XSportsGraphQL.MLBTeamStandingFragment.Home ? home;
    XSportsGraphQL.MLBTeamStandingFragment.Last10 ? last10;
    XSportsGraphQL.MLBLeagueRefFragment ? league;
    nominal type descriptor for Swift.Int32 ? leagueRank;
    nominal type descriptor for Swift.Int32 losses;
    Swift.String name;
    nominal type descriptor for Swift.Int32 ? overallRank;
    Swift.String? streak;
    XSportsGraphQL.MLBTeamFragment team;
    Swift.String? wildcardGamesBack;
    nominal type descriptor for Swift.Int32 ? wildcardRank;
    Swift.Double? winPct;
    nominal type descriptor for Swift.Int32 wins;
}

@end

#endif /* _TtC14XSportsGraphQL23MLBTeamStandingFragment_h */
