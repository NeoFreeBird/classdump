//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL22NBAMatchupTeamFragment_h
#define _TtC14XSportsGraphQL22NBAMatchupTeamFragment_h
@import Foundation;

@class XSportsGraphQL.NBAMatchupTeamFragment.DepthChart ?, XSportsGraphQL.NBAMatchupTeamFragment.ScheduleV2, XSportsGraphQL.NBATeamSeasonStatsFragment ?, XSportsGraphQL.SportsDataTeamLeadersFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.NBAInjuryFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAMatchupTeamFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NBAMatchupTeamFragment.DepthChart ? depthChart;
    Swift.String id;
    Swift.Array -> XSportsGraphQL.NBAInjuryFragment injuries;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NBAMatchupTeamFragment.ScheduleV2 scheduleV2;
    XSportsGraphQL.NBATeamSeasonStatsFragment ? seasonStats;
    XSportsGraphQL.SportsDataTeamLeadersFragment ? teamLeaders;
}

@end

#endif /* _TtC14XSportsGraphQL22NBAMatchupTeamFragment_h */
