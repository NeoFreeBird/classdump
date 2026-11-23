//
#ifndef _TtC13GraphQLModels37TimelineScoreEventParticipantFragment_h
#define _TtC13GraphQLModels37TimelineScoreEventParticipantFragment_h
@import Foundation;

@class GraphQLModels.TimelineColorFragment ?, GraphQLModels.TimelineImageVariantFragment ?, GraphQLScalars.NumericString ?, _$sSS, _$sSSSg, _$sSa -> GraphQLModels.TimelineScoreEventParticipantFragment.PeriodScores ?, _TtCs12_SwiftObject;

@interface GraphQLModels.TimelineScoreEventParticipantFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String? affiliation;
    GraphQLModels.TimelineColorFragment ? color;
    Swift.String? fullName;
    Swift.String id;
    GraphQLModels.TimelineImageVariantFragment ? logo;
    Swift.String? participantType;
    Swift.Array -> GraphQLModels.TimelineScoreEventParticipantFragment.PeriodScores ? periodScores;
    Swift.String? score;
    Swift.String? secondaryScore;
    Swift.String? shortName;
    GraphQLScalars.NumericString ? twitterUserId;
}

@end

#endif /* _TtC13GraphQLModels37TimelineScoreEventParticipantFragment_h */
