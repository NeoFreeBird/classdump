//
#ifndef _TtC14XSportsGraphQL29NCAAFBGameScoreUpdateFragment_h
#define _TtC14XSportsGraphQL29NCAAFBGameScoreUpdateFragment_h
@import Foundation;

@class XSportsGraphQL.NCAAFBGameScoreUpdateFragment.Situation ?, XSportsGraphQL.NCAAFBGameScoreUpdateFragment.TeamScoreSummaries, XSportsGraphQL.NCAAFBGameScoreUpdateFragment.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NCAAFBGameScoreUpdateFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NCAAFBGameScoreUpdateFragment.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NCAAFBGameScoreUpdateFragment.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NCAAFBGameScoreUpdateFragment.Timeout ? timeout;
}

@end

#endif /* _TtC14XSportsGraphQL29NCAAFBGameScoreUpdateFragment_h */
