//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL21MLBTeamLineupFragment_h
#define _TtC14XSportsGraphQL21MLBTeamLineupFragment_h
@import Foundation;

@class XSportsGraphQL.MLBTeamLineupFragment.Team, _$sSa -> XSportsGraphQL.MLBLineupSlotFragment, _$sSa -> XSportsGraphQL.MLBTeamLineupFragment.SeasonBatting, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBTeamLineupFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XSportsGraphQL.MLBLineupSlotFragment battingOrder;
    Swift.Array -> XSportsGraphQL.MLBLineupSlotFragment pitchers;
    Swift.Array -> XSportsGraphQL.MLBTeamLineupFragment.SeasonBatting seasonBatting;
    Swift.Array -> XSportsGraphQL.MLBLineupSlotFragment substitutions;
    XSportsGraphQL.MLBTeamLineupFragment.Team team;
}

@end

#endif /* _TtC14XSportsGraphQL21MLBTeamLineupFragment_h */
