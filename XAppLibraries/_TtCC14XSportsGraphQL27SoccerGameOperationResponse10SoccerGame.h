//
#ifndef _TtCC14XSportsGraphQL27SoccerGameOperationResponse10SoccerGame_h
#define _TtCC14XSportsGraphQL27SoccerGameOperationResponse10SoccerGame_h
@import Foundation;

@class XSportsGraphQL.SoccerGameLiveFragment ?, XSportsGraphQL.SoccerGameOperationResponse.SoccerGame.Lineups ?, XSportsGraphQL.SoccerGameOperationResponse.SoccerGame.MatchStatistics ?, XSportsGraphQL.SoccerGameSummaryFragment ?, _$s14GraphQLScalars13NumericStringVMn, _$sSS, _$sSSSg, _$sSa -> XSportsGraphQL.SoccerTimelineEventFragment ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.SoccerGameOperationResponse.SoccerGame : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String id;
    XSportsGraphQL.SoccerGameOperationResponse.SoccerGame.Lineups ? lineups;
    XSportsGraphQL.SoccerGameLiveFragment ? live;
    XSportsGraphQL.SoccerGameOperationResponse.SoccerGame.MatchStatistics ? matchStatistics;
    nominal type descriptor for GraphQLScalars.NumericString restId;
    Swift.String? sidePitch;
    XSportsGraphQL.SoccerGameSummaryFragment ? summary;
    Swift.Array -> XSportsGraphQL.SoccerTimelineEventFragment ? timeline;
    Swift.String? topPitch;
}

@end

#endif /* _TtCC14XSportsGraphQL27SoccerGameOperationResponse10SoccerGame_h */
