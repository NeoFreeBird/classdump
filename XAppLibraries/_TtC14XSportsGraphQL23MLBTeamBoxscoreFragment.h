//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL23MLBTeamBoxscoreFragment_h
#define _TtC14XSportsGraphQL23MLBTeamBoxscoreFragment_h
@import Foundation;

@class XSportsGraphQL.MLBBattingStatsFragment ?, XSportsGraphQL.MLBFieldingStatsFragment ?, XSportsGraphQL.MLBPitchingStatsFragment ?, XSportsGraphQL.MLBTeamBoxscoreFragment.Team, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.MLBBattingLineFragment, _$sSa -> XSportsGraphQL.MLBPitchingLineFragment, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBTeamBoxscoreFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? abbreviation;
    Swift.Array -> XSportsGraphQL.MLBBattingLineFragment batting;
    nominal type descriptor for Swift.Int32 ? errors;
    nominal type descriptor for Swift.Int32 ? hits;
    nominal type descriptor for Swift.Int32 ? leftOnBase;
    Swift.String name;
    Swift.Array -> XSportsGraphQL.MLBPitchingLineFragment pitching;
    nominal type descriptor for Swift.Int32 ? runs;
    XSportsGraphQL.MLBTeamBoxscoreFragment.Team team;
    XSportsGraphQL.MLBBattingStatsFragment ? teamBatting;
    XSportsGraphQL.MLBFieldingStatsFragment ? teamFielding;
    XSportsGraphQL.MLBPitchingStatsFragment ? teamPitching;
}

@end

#endif /* _TtC14XSportsGraphQL23MLBTeamBoxscoreFragment_h */
