//
#ifndef _TtCC14XSportsGraphQL26NCAAFBScheduleGameFragment5Score_h
#define _TtCC14XSportsGraphQL26NCAAFBScheduleGameFragment5Score_h
@import Foundation;

@class XSportsGraphQL.NCAAFBScheduleGameFragment.Score.Situation ?, XSportsGraphQL.NCAAFBScheduleGameFragment.Score.TeamScoreSummaries, XSportsGraphQL.NCAAFBScheduleGameFragment.Score.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NCAAFBScheduleGameFragment.Score : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NCAAFBGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NCAAFBScheduleGameFragment.Score.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NCAAFBScheduleGameFragment.Score.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NCAAFBScheduleGameFragment.Score.Timeout ? timeout;
}

@end

#endif /* _TtCC14XSportsGraphQL26NCAAFBScheduleGameFragment5Score_h */
