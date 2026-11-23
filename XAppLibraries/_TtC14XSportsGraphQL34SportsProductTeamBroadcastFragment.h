//
#ifndef _TtC14XSportsGraphQL34SportsProductTeamBroadcastFragment_h
#define _TtC14XSportsGraphQL34SportsProductTeamBroadcastFragment_h
@import Foundation;

@class Swift.Bool, _$s13GraphQLModels11EnumerationOMn _$s14GraphQLScalars26SportsProductBroadcastTypeOMn, _$s13GraphQLModels20TweetResultsFragmentCMn, _$s13GraphQLModels5UnionOMn XSportsGraphQL.SportsProductTeamBroadcastFragment.Team, _$s14GraphQLScalars13NumericStringVMn, _$s14GraphQLScalars13NumericStringVMn ?, _$sSS, _TtCs12_SwiftObject;

@interface XSportsGraphQL.SportsProductTeamBroadcastFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String broadcastId;
    nominal type descriptor for GraphQLModels.Enumeration nominal type descriptor for GraphQLScalars.SportsProductBroadcastType broadcastType;
    nominal type descriptor for GraphQLScalars.NumericString ? endedAtMs;
    Swift.Bool favoriteTeam;
    nominal type descriptor for GraphQLModels.TweetResultsFragment post;
    Swift.Bool replayAvailable;
    nominal type descriptor for GraphQLScalars.NumericString startedAtMs;
    nominal type descriptor for GraphQLModels.Union XSportsGraphQL.SportsProductTeamBroadcastFragment.Team team;
}

@end

#endif /* _TtC14XSportsGraphQL34SportsProductTeamBroadcastFragment_h */
