//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCCCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame10PlayByPlay6Drives_h
#define _TtCCCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame10PlayByPlay6Drives_h
@import Foundation;

@class Swift.Bool, _$sSS, _$sSa -> XSportsGraphQL.NFLGamePlayFragment, _$ss5Int16VMn, _$ss5Int16VMn ?, _TtCs12_SwiftObject;

@interface XSportsGraphQL.NFLLiveGameOperationResponse.NflGame.PlayByPlay.Drives : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String defensiveTeam;
    nominal type descriptor for Swift.Int16 ? defensiveTeamPoints;
    Swift.String duration;
    Swift.String endClock;
    Swift.String endReason;
    nominal type descriptor for Swift.Int16 firstDowns;
    Swift.String id;
    nominal type descriptor for Swift.Int16 netYards;
    Swift.String offensiveTeam;
    nominal type descriptor for Swift.Int16 ? offensiveTeamPoints;
    nominal type descriptor for Swift.Int16 playCount;
    Swift.Array -> XSportsGraphQL.NFLGamePlayFragment plays;
    Swift.Bool scoringDrive;
    nominal type descriptor for Swift.Int16 sequence;
    Swift.String startClock;
    Swift.String startReason;
}

@end

#endif /* _TtCCCC14XSportsGraphQL28NFLLiveGameOperationResponse7NflGame10PlayByPlay6Drives_h */
