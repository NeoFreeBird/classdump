//
#ifndef _TtC14XSportsGraphQL26NFLGameScoreUpdateFragment_h
#define _TtC14XSportsGraphQL26NFLGameScoreUpdateFragment_h
@import Foundation;

@class XSportsGraphQL.NFLGameScoreUpdateFragment.Situation ?, XSportsGraphQL.NFLGameScoreUpdateFragment.TeamScoreSummaries, XSportsGraphQL.NFLGameScoreUpdateFragment.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NFLGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGameScoreUpdateFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NFLGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NFLGameScoreUpdateFragment.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NFLGameScoreUpdateFragment.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NFLGameScoreUpdateFragment.Timeout ? timeout;
}

@end

#endif /* _TtC14XSportsGraphQL26NFLGameScoreUpdateFragment_h */
