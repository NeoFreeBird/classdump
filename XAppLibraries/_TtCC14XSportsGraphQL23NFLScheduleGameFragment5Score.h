//
#ifndef _TtCC14XSportsGraphQL23NFLScheduleGameFragment5Score_h
#define _TtCC14XSportsGraphQL23NFLScheduleGameFragment5Score_h
@import Foundation;

@class XSportsGraphQL.NFLScheduleGameFragment.Score.Situation ?, XSportsGraphQL.NFLScheduleGameFragment.Score.TeamScoreSummaries, XSportsGraphQL.NFLScheduleGameFragment.Score.Timeout ?, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars18FootballGameStatusOMn, _$sSSSg, _$sSa -> XSportsGraphQL.NFLGamePeriodScoreFragment, _$sSbSg, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLScheduleGameFragment.Score : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? clock;
    Swift.Bool? isHalftime;
    Swift.Array -> XSportsGraphQL.NFLGamePeriodScoreFragment periodScoreSummaries;
    nominal type descriptor for Swift.Int16 ? quarter;
    XSportsGraphQL.NFLScheduleGameFragment.Score.Situation ? situation;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.FootballGameStatus status;
    XSportsGraphQL.NFLScheduleGameFragment.Score.TeamScoreSummaries teamScoreSummaries;
    XSportsGraphQL.NFLScheduleGameFragment.Score.Timeout ? timeout;
}

@end

#endif /* _TtCC14XSportsGraphQL23NFLScheduleGameFragment5Score_h */
