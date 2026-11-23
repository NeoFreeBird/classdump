//
#ifndef _TtCC14XSportsGraphQL28NBALiveGameOperationResponse7NbaGame_h
#define _TtCC14XSportsGraphQL28NBALiveGameOperationResponse7NbaGame_h
@import Foundation;

@class XSportsGraphQL.NBALineScoreFragment ?, XSportsGraphQL.NBALiveGameOperationResponse.NbaGame.Boxscore ?, XSportsGraphQL.NBALiveGameOperationResponse.NbaGame.Summary ?, XSportsGraphQL.NBALiveStateFragment ?, XSportsGraphQL.NBAPlayByPlayFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NBALiveGameOperationResponse.NbaGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSportsGraphQL.NBALiveGameOperationResponse.NbaGame.Boxscore ? boxscore;
    Swift.String id;
    XSportsGraphQL.NBALineScoreFragment ? lineScore;
    XSportsGraphQL.NBALiveStateFragment ? live;
    XSportsGraphQL.NBAPlayByPlayFragment ? plays;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    XSportsGraphQL.NBALiveGameOperationResponse.NbaGame.Summary ? summary;
}

@end

#endif /* _TtCC14XSportsGraphQL28NBALiveGameOperationResponse7NbaGame_h */
