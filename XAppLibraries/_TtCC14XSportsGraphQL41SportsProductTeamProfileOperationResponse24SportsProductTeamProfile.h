//
#ifndef _TtCC14XSportsGraphQL41SportsProductTeamProfileOperationResponse24SportsProductTeamProfile_h
#define _TtCC14XSportsGraphQL41SportsProductTeamProfileOperationResponse24SportsProductTeamProfile_h
@import Foundation;

@class XSportsGraphQL.SportsProductCoachFragment ?, XSportsGraphQL.SportsProductVenueDetailFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SportsProductCoachFragment, _$ss5Int32VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.SportsProductTeamProfileOperationResponse.SportsProductTeamProfile : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? abbreviation;
    Swift.String? championshipSeasons;
    nominal type descriptor for Swift.Int32 ? championshipsWon;
    Swift.Array -> XSportsGraphQL.SportsProductCoachFragment coaches;
    Swift.String? conference;
    nominal type descriptor for Swift.Int32 ? conferenceTitles;
    Swift.String? division;
    nominal type descriptor for Swift.Int32 ? divisionTitles;
    nominal type descriptor for Swift.Int32 ? founded;
    Swift.String? generalManager;
    XSportsGraphQL.SportsProductCoachFragment ? headCoach;
    Swift.String league;
    Swift.String? market;
    Swift.String? mascot;
    Swift.String? name;
    Swift.String? owner;
    nominal type descriptor for Swift.Int32 ? playoffAppearances;
    Swift.String? president;
    nominal type descriptor for GraphQLScalars.NumericString teamId;
    XSportsGraphQL.SportsProductVenueDetailFragment ? venue;
}

@end

#endif /* _TtCC14XSportsGraphQL41SportsProductTeamProfileOperationResponse24SportsProductTeamProfile_h */
