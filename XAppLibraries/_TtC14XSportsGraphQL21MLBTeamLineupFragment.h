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
