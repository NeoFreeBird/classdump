//
#ifndef _TtC13GraphQLModels17BroadcastFragment_h
#define _TtC13GraphQLModels17BroadcastFragment_h
@import Foundation;

@class GraphQLModels.BroadcastFragment.CopyrightViolation ?, GraphQLModels.BroadcastFragment.EditedReplay ?, GraphQLModels.BroadcastFragment.Location ?, GraphQLModels.BroadcastFragment.PeriscopeUser ?, GraphQLModels.Enumeration GraphQLScalars.BroadcastSource ?, GraphQLModels.Enumeration GraphQLScalars.BroadcastState ?, GraphQLModels.TweetResultsFragment ?, GraphQLModels.UserResultsFragment ?, _$sSS, _$sSSSg, _$sSaySSGSg, _$sSbSg, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface GraphQLModels.BroadcastFragment : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool? acceptGifts;
    Swift.Bool? acceptGuests;
    Swift.Bool? availableForReplay;
    Swift.String? broadcastId;
    Swift.Bool? callInDisabled;
    nominal type descriptor for Swift.Int64 ? cameraRotation;
    nominal type descriptor for Swift.Int64 ? chatOption;
    GraphQLModels.BroadcastFragment.CopyrightViolation ? copyrightViolation;
    GraphQLModels.BroadcastFragment.EditedReplay ? editedReplay;
    nominal type descriptor for Swift.Int64 ? endTime;
    [Swift.String]? heartTheme;
    nominal type descriptor for Swift.Int64 ? height;
    Swift.String? imageUrl;
    Swift.String? imageUrlSmall;
    Swift.Bool? isHighLatency;
    GraphQLModels.BroadcastFragment.Location ? location;
    Swift.String? mediaKey;
    Swift.String? moderatorChannel;
    GraphQLModels.BroadcastFragment.PeriscopeUser ? periscopeUser;
    nominal type descriptor for Swift.Int64 ? pingTime;
    Swift.String? preLiveSlateUrl;
    Swift.Bool? privateChat;
    Swift.Bool? requiresFineGrainGeoblocking;
    Swift.String restId;
    nominal type descriptor for Swift.Int64 ? scheduledStartTime;
    GraphQLModels.Enumeration GraphQLScalars.BroadcastSource ? source;
    nominal type descriptor for Swift.Int64 ? startTime;
    GraphQLModels.Enumeration GraphQLScalars.BroadcastState ? state;
    Swift.String? status;
    nominal type descriptor for Swift.Int64 ? timedoutTime;
    nominal type descriptor for Swift.Int64 ? totalWatched;
    nominal type descriptor for Swift.Int64 ? totalWatching;
    GraphQLModels.TweetResultsFragment ? tweetResults;
    Swift.Bool? unavailableInPeriscope;
    GraphQLModels.UserResultsFragment ? userResults;
    nominal type descriptor for Swift.Int64 ? version;
    nominal type descriptor for Swift.Int64 ? width;
}

@end

#endif /* _TtC13GraphQLModels17BroadcastFragment_h */
