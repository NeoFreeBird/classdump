//
#ifndef _TtC14XSportsGraphQL24NFLGameScoreInfoFragment_h
#define _TtC14XSportsGraphQL24NFLGameScoreInfoFragment_h
@import Foundation;

@class XSportsGraphQL.NFLGameScoreInfoFragment.Situation ?, XSportsGraphQL.NFLGameScoreInfoFragment.TeamScoreSummaries, XSportsGraphQL.NFLGameScoreInfoFragment.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NFLGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGameScoreInfoFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NFLGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NFLGameScoreInfoFragment.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NFLGameScoreInfoFragment.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NFLGameScoreInfoFragment.Timeout ? timeout;
}

@end

#endif /* _TtC14XSportsGraphQL24NFLGameScoreInfoFragment_h */
