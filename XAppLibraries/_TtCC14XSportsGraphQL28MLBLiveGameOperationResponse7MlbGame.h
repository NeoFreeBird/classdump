//
#ifndef _TtCC14XSportsGraphQL28MLBLiveGameOperationResponse7MlbGame_h
#define _TtCC14XSportsGraphQL28MLBLiveGameOperationResponse7MlbGame_h
@import Foundation;

@class XSportsGraphQL.MLBDecisionsFragment ?, XSportsGraphQL.MLBLineScoreFragment ?, XSportsGraphQL.MLBLiveGameOperationResponse.MlbGame.Summary ?, XSportsGraphQL.MLBLiveStateFragment ?, XSportsGraphQL.MLBPlayByPlayFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _TtCs12_SwiftObject;

@interface XSportsGraphQL.MLBLiveGameOperationResponse.MlbGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.MLBDecisionsFragment ? decisions;
    Swift.String id;
    XSportsGraphQL.MLBLineScoreFragment ? lineScore;
    XSportsGraphQL.MLBLiveStateFragment ? live;
    XSportsGraphQL.MLBPlayByPlayFragment ? plays;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.MLBLiveGameOperationResponse.MlbGame.Summary ? summary;
}

@end

#endif /* _TtCC14XSportsGraphQL28MLBLiveGameOperationResponse7MlbGame_h */
