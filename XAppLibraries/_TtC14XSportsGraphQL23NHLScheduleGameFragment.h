//
#ifndef _TtC14XSportsGraphQL23NHLScheduleGameFragment_h
#define _TtC14XSportsGraphQL23NHLScheduleGameFragment_h
@import Foundation;

@class XSportsGraphQL.NHLBettingOddsFragment ?, XSportsGraphQL.NHLGameSummaryFragment ?, XSportsGraphQL.NHLLiveScoreUpdateFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLScheduleGameFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NHLBettingOddsFragment ? bettingOddsV2;
    Swift.String id;
    XSportsGraphQL.NHLLiveScoreUpdateFragment ? live;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    Swift.String? sideRink;
    XSportsGraphQL.NHLGameSummaryFragment ? summary;
}

@end

#endif /* _TtC14XSportsGraphQL23NHLScheduleGameFragment_h */
