//
#ifndef _TtCC14XSportsGraphQL31NHLGameHydrateOperationResponse7NhlGame_h
#define _TtCC14XSportsGraphQL31NHLGameHydrateOperationResponse7NhlGame_h
@import Foundation;

@class XSportsGraphQL.NHLGameHydrateOperationResponse.NhlGame.Boxscore ?, XSportsGraphQL.NHLGameHydrateOperationResponse.NhlGame.Lineups ?, XSportsGraphQL.NHLGameSummaryFragment ?, XSportsGraphQL.NHLLineScoreFragment ?, XSportsGraphQL.NHLLiveStateFragment ?, XSportsGraphQL.NHLPlayByPlayFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SportsDataBroadcastFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NHLGameHydrateOperationResponse.NhlGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NHLGameHydrateOperationResponse.NhlGame.Boxscore ? boxscore;
    Swift.Array -> XSportsGraphQL.SportsDataBroadcastFragment broadcasts;
    Swift.String id;
    XSportsGraphQL.NHLLineScoreFragment ? lineScore;
    XSportsGraphQL.NHLGameHydrateOperationResponse.NhlGame.Lineups ? lineups;
    XSportsGraphQL.NHLLiveStateFragment ? live;
    XSportsGraphQL.NHLPlayByPlayFragment ? plays;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    Swift.String? sideRink;
    XSportsGraphQL.NHLGameSummaryFragment ? summary;
    Swift.String? topRink;
}

@end

#endif /* _TtCC14XSportsGraphQL31NHLGameHydrateOperationResponse7NhlGame_h */
