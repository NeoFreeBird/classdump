//
#ifndef _TtCC14XSportsGraphQL19NFLGamePlayFragment7Details_h
#define _TtCC14XSportsGraphQL19NFLGamePlayFragment7Details_h
@import Foundation;

@class XSportsGraphQL.NFLGamePlayFragment.Details.EndYardline ?, XSportsGraphQL.NFLGamePlayFragment.Details.Penalty ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars22FootballDetailCategoryOMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.NFLGamePlayFragment.Details.Players, _$sSbSg, _$ss5Int16VMn, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGamePlayFragment.Details : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballDetailCategory category;
    Swift.String description;
    nominal type descriptor for Swift.Int16 endLocation;
    XSportsGraphQL.NFLGamePlayFragment.Details.EndYardline ? endYardline;
    Swift.Bool? nullified;
    XSportsGraphQL.NFLGamePlayFragment.Details.Penalty ? penalty;
    Swift.Array -> XSportsGraphQL.NFLGamePlayFragment.Details.Players players;
    Swift.String? result;
    nominal type descriptor for Swift.Int16 sequence;
    nominal type descriptor for Swift.Int16 startLocation;
    Swift.String? teamSide;
    nominal type descriptor for Swift.Int16 ? yards;
}

@end

#endif /* _TtCC14XSportsGraphQL19NFLGamePlayFragment7Details_h */
