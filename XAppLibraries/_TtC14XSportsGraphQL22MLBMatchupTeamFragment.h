//
#ifndef _TtC14XSportsGraphQL22MLBMatchupTeamFragment_h
#define _TtC14XSportsGraphQL22MLBMatchupTeamFragment_h
@import Foundation;

@class XSportsGraphQL.MLBMatchupTeamFragment.Schedule, XSportsGraphQL.SportsDataTeamLeadersFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.MLBInjuryFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBMatchupTeamFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    Swift.Array -> XSportsGraphQL.MLBInjuryFragment injuries;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.MLBMatchupTeamFragment.Schedule schedule;
    XSportsGraphQL.SportsDataTeamLeadersFragment ? teamLeaders;
}

@end

#endif /* _TtC14XSportsGraphQL22MLBMatchupTeamFragment_h */
