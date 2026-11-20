//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL24NBAStandingEntryFragment_h
#define _TtC14XSportsGraphQL24NBAStandingEntryFragment_h
@import Foundation;

@class XSportsGraphQL.NBALeagueRefFragment ?, XSportsGraphQL.NBARecordFragment ?, XSportsGraphQL.NBATeamFragment, _$sSS, _$sSSSg, _$sSdSg, _$ss5Int32VMn, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAStandingEntryFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? abbreviation;
    XSportsGraphQL.NBALeagueRefFragment ? conference;
    nominal type descriptor for Swift.Int32 ? conferenceRank;
    XSportsGraphQL.NBALeagueRefFragment ? division;
    nominal type descriptor for Swift.Int32 ? divisionRank;
    Swift.Double? gamesBehindConference;
    Swift.Double? gamesBehindDivision;
    XSportsGraphQL.NBARecordFragment ? home;
    XSportsGraphQL.NBARecordFragment ? last10;
    nominal type descriptor for Swift.Int32 losses;
    Swift.String name;
    Swift.Double? pointDiff;
    Swift.Double? pointsAgainst;
    Swift.Double? pointsFor;
    XSportsGraphQL.NBARecordFragment ? road;
    Swift.String? streak;
    XSportsGraphQL.NBATeamFragment team;
    XSportsGraphQL.NBARecordFragment ? vsConference;
    XSportsGraphQL.NBARecordFragment ? vsDivision;
    nominal type descriptor for Swift.Int32 wins;
}

@end

#endif /* _TtC14XSportsGraphQL24NBAStandingEntryFragment_h */
