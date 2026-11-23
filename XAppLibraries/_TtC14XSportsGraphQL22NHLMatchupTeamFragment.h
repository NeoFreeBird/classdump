//
#ifndef _TtC14XSportsGraphQL22NHLMatchupTeamFragment_h
#define _TtC14XSportsGraphQL22NHLMatchupTeamFragment_h
@import Foundation;

@class XSportsGraphQL.NHLMatchupTeamFragment.DepthChart ?, XSportsGraphQL.NHLMatchupTeamFragment.Schedule, XSportsGraphQL.NHLMatchupTeamFragment.Standing ?, XSportsGraphQL.NHLTeamSeasonStatsFragment ?, XSportsGraphQL.SportsDataTeamLeadersFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.NHLInjuryFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLMatchupTeamFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NHLMatchupTeamFragment.DepthChart ? depthChart;
    Swift.String id;
    Swift.Array -> XSportsGraphQL.NHLInjuryFragment injuries;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NHLMatchupTeamFragment.Schedule schedule;
    XSportsGraphQL.NHLTeamSeasonStatsFragment ? seasonStats;
    XSportsGraphQL.NHLMatchupTeamFragment.Standing ? standing;
    XSportsGraphQL.SportsDataTeamLeadersFragment ? teamLeaders;
}

@end

#endif /* _TtC14XSportsGraphQL22NHLMatchupTeamFragment_h */
