//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14XSportsGraphQL23NBAScheduleGameFragment_h
#define _TtC14XSportsGraphQL23NBAScheduleGameFragment_h
@import Foundation;

@class XSportsGraphQL.NBABettingOddsFragment ?, XSportsGraphQL.NBAGameSummaryFragment ?, XSportsGraphQL.NBALiveStateFragment ?, XSportsGraphQL.NBAScheduleGameFragment.WatchLink ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAScheduleGameFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NBABettingOddsFragment ? bettingOddsV2;
    Swift.String id;
    XSportsGraphQL.NBALiveStateFragment ? live;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    Swift.String? sideCourtDark;
    Swift.String? sideCourtLight;
    XSportsGraphQL.NBAGameSummaryFragment ? summary;
    XSportsGraphQL.NBAScheduleGameFragment.WatchLink ? watchLink;
}

@end

#endif /* _TtC14XSportsGraphQL23NBAScheduleGameFragment_h */
