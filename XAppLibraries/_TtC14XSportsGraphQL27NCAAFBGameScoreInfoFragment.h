//
#ifndef _TtC14XSportsGraphQL27NCAAFBGameScoreInfoFragment_h
#define _TtC14XSportsGraphQL27NCAAFBGameScoreInfoFragment_h
@import Foundation;

@class XSportsGraphQL.NCAAFBGameScoreInfoFragment.Situation ?, XSportsGraphQL.NCAAFBGameScoreInfoFragment.TeamScoreSummaries, XSportsGraphQL.NCAAFBGameScoreInfoFragment.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NCAAFBGameScoreInfoFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NCAAFBGameScoreInfoFragment.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NCAAFBGameScoreInfoFragment.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NCAAFBGameScoreInfoFragment.Timeout ? timeout;
}

@end

#endif /* _TtC14XSportsGraphQL27NCAAFBGameScoreInfoFragment_h */
