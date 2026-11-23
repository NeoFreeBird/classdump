//
#ifndef _TtCC14XSportsGraphQL31NBAGameHydrateOperationResponse7NbaGame_h
#define _TtCC14XSportsGraphQL31NBAGameHydrateOperationResponse7NbaGame_h
@import Foundation;

@class XSportsGraphQL.NBABettingOddsFragment ?, XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.Boxscore ?, XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.Lineups ?, XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.WatchLink ?, XSportsGraphQL.NBAGameSummaryFragment ?, XSportsGraphQL.NBALineScoreFragment ?, XSportsGraphQL.NBALiveStateFragment ?, XSportsGraphQL.NBAPlayByPlayFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SportsDataBroadcastFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NBABettingOddsFragment ? bettingOddsV2;
    XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.Boxscore ? boxscore;
    Swift.Array -> XSportsGraphQL.SportsDataBroadcastFragment broadcasts;
    Swift.String id;
    XSportsGraphQL.NBALineScoreFragment ? lineScore;
    XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.Lineups ? lineups;
    XSportsGraphQL.NBALiveStateFragment ? live;
    XSportsGraphQL.NBAPlayByPlayFragment ? plays;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    Swift.String? sideCourtDark;
    Swift.String? sideCourtLight;
    XSportsGraphQL.NBAGameSummaryFragment ? summary;
    Swift.String? topCourt;
    XSportsGraphQL.NBAGameHydrateOperationResponse.NbaGame.WatchLink ? watchLink;
}

@end

#endif /* _TtCC14XSportsGraphQL31NBAGameHydrateOperationResponse7NbaGame_h */
