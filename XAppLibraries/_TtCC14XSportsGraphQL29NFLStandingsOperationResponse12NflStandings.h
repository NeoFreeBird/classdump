//
#ifndef _TtCC14XSportsGraphQL29NFLStandingsOperationResponse12NflStandings_h
#define _TtCC14XSportsGraphQL29NFLStandingsOperationResponse12NflStandings_h
@import Foundation;

@class XSportsGraphQL.NFLStandingsOperationResponse.NflStandings.Rank, XSportsGraphQL.NFLStandingsOperationResponse.NflStandings.Streak, XSportsGraphQL.NFLTeamFragment, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars16FootballDivisionOMn, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballConferenceOMn, _$sSS, _$sSd, _$ss5Int16VMn, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLStandingsOperationResponse.NflStandings : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballConference conferenceAlias;
    Swift.String conferenceName;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballDivision divisionAlias;
    Swift.String divisionName;
    nominal type descriptor for Swift.Int16 losses;
    nominal type descriptor for Swift.Int16 pointsAgainst;
    nominal type descriptor for Swift.Int16 pointsFor;
    XSportsGraphQL.NFLStandingsOperationResponse.NflStandings.Rank rank;
    XSportsGraphQL.NFLStandingsOperationResponse.NflStandings.Streak streak;
    XSportsGraphQL.NFLTeamFragment teamId;
    nominal type descriptor for Swift.Int16 ties;
    Swift.Double winPct;
    nominal type descriptor for Swift.Int16 wins;
}

@end

#endif /* _TtCC14XSportsGraphQL29NFLStandingsOperationResponse12NflStandings_h */
