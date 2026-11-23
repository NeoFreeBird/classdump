//
#ifndef _TtC14XSportsGraphQL29NFLGamePlayerStatLineFragment_h
#define _TtC14XSportsGraphQL29NFLGamePlayerStatLineFragment_h
@import Foundation;

@class XSportsGraphQL.NFLDefenseStatsFragment ?, XSportsGraphQL.NFLFieldGoalStatsFragment ?, XSportsGraphQL.NFLFumbleStatsFragment ?, XSportsGraphQL.NFLGamePlayerStatLineFragment.ExtraPoints ?, XSportsGraphQL.NFLPassingStatsFragment ?, XSportsGraphQL.NFLPlayerFragment, XSportsGraphQL.NFLPuntStatsFragment ?, XSportsGraphQL.NFLReceivingStatsFragment ?, XSportsGraphQL.NFLReturnStatsFragment ?, XSportsGraphQL.NFLRushingStatsFragment ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGamePlayerStatLineFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NFLDefenseStatsFragment ? defense;
    XSportsGraphQL.NFLGamePlayerStatLineFragment.ExtraPoints ? extraPoints;
    XSportsGraphQL.NFLFieldGoalStatsFragment ? fieldGoals;
    XSportsGraphQL.NFLFumbleStatsFragment ? fumbles;
    XSportsGraphQL.NFLReturnStatsFragment ? kickReturns;
    XSportsGraphQL.NFLPassingStatsFragment ? passing;
    XSportsGraphQL.NFLPlayerFragment player;
    XSportsGraphQL.NFLPuntStatsFragment ? punts;
    XSportsGraphQL.NFLReceivingStatsFragment ? receiving;
    XSportsGraphQL.NFLRushingStatsFragment ? rushing;
}

@end

#endif /* _TtC14XSportsGraphQL29NFLGamePlayerStatLineFragment_h */
