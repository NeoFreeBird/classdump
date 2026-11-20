//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC14XSportsGraphQL31MLBGameHydrateOperationResponse7MlbGame_h
#define _TtCC14XSportsGraphQL31MLBGameHydrateOperationResponse7MlbGame_h
@import Foundation;

@class XSportsGraphQL.MLBDecisionsFragment ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.BatterArtwork ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Boxscore ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Lineups ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Park ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.ProbablePitchers ?, XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.SeriesSummary ?, XSportsGraphQL.MLBGameSummaryFragment ?, XSportsGraphQL.MLBLineScoreFragment ?, XSportsGraphQL.MLBLiveStateFragment ?, XSportsGraphQL.MLBPlayByPlayFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Odds, _$sSa -> XSportsGraphQL.SportsDataBroadcastFragment, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.BatterArtwork ? batterArtwork;
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Boxscore ? boxscore;
    Swift.Array -> XSportsGraphQL.SportsDataBroadcastFragment broadcasts;
    XSportsGraphQL.MLBDecisionsFragment ? decisions;
    Swift.String id;
    XSportsGraphQL.MLBLineScoreFragment ? lineScore;
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Lineups ? lineups;
    XSportsGraphQL.MLBLiveStateFragment ? live;
    Swift.Array -> XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Odds odds;
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.Park ? park;
    XSportsGraphQL.MLBPlayByPlayFragment ? plays;
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.ProbablePitchers ? probablePitchers;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.MLBGameHydrateOperationResponse.MlbGame.SeriesSummary ? seriesSummary;
    XSportsGraphQL.MLBGameSummaryFragment ? summary;
}

@end

#endif /* _TtCC14XSportsGraphQL31MLBGameHydrateOperationResponse7MlbGame_h */
