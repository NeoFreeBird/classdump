//
#ifndef _TtCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame_h
#define _TtCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame_h
@import Foundation;

@class XSportsGraphQL.NFLGameScoreUpdateFragment ?, XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.GameDetail ?, XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.Stats ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSa -> XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.PlayByPlay ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLLiveGameOperationResponse.NflGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.GameDetail ? gameDetail;
    Swift.String id;
    Swift.Array -> XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.PlayByPlay ? playByPlay;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NFLGameScoreUpdateFragment ? score;
    XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.Stats ? stats;
}

@end

#endif /* _TtCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame_h */
