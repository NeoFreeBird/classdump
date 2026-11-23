//
#ifndef _TtCC14XSportsGraphQL31NFLGameHydrateOperationResponse7NflGame_h
#define _TtCC14XSportsGraphQL31NFLGameHydrateOperationResponse7NflGame_h
@import Foundation;

@class XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.BasicData ?, XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.GameDetail ?, XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.Stats ?, XSportsGraphQL.NFLGameLineupFragment ?, XSportsGraphQL.NFLGamePlayFragment ?, XSportsGraphQL.NFLGameScoreInfoFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.PlayByPlay ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.BasicData ? basicData;
    XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.GameDetail ? gameDetail;
    Swift.String id;
    XSportsGraphQL.NFLGameLineupFragment ? lineups;
    Swift.Array -> XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.PlayByPlay ? playByPlay;
    XSportsGraphQL.NFLGamePlayFragment ? recentPlay;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NFLGameScoreInfoFragment ? score;
    XSportsGraphQL.NFLGameHydrateOperationResponse.NflGame.Stats ? stats;
}

@end

#endif /* _TtCC14XSportsGraphQL31NFLGameHydrateOperationResponse7NflGame_h */
