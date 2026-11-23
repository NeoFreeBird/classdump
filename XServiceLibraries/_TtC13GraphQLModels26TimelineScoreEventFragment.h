//
#ifndef _TtC13GraphQLModels26TimelineScoreEventFragment_h
#define _TtC13GraphQLModels26TimelineScoreEventFragment_h
@import Foundation;

@class GraphQLModels.Enumeration GraphQLScalars.TimelineEventState ?, GraphQLModels.TimelineUrlFragment ?, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.TimelineScoreEventParticipantFragment ?, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineScoreEventFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? category;
    GraphQLModels.Enumeration GraphQLScalars.TimelineEventState ? eventState;
    Swift.String? gameClock;
    Swift.String? gameClockPeriod;
    Swift.String? gameState;
    Swift.String id;
    Swift.Array -> GraphQLModels.TimelineScoreEventParticipantFragment ? participants;
    GraphQLModels.TimelineUrlFragment ? scoreEventUrl;
    Swift.String? scoreFormat;
    nominal type descriptor for Swift.Int64 ? startTimeMillis;
    Swift.String? summary;
    Swift.String? winnerId;
}

@end

#endif /* _TtC13GraphQLModels26TimelineScoreEventFragment_h */
