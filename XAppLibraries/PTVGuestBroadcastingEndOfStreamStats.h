//
#ifndef PTVGuestBroadcastingEndOfStreamStats_h
#define PTVGuestBroadcastingEndOfStreamStats_h
@import Foundation;

#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface PTVGuestBroadcastingEndOfStreamStats : NSObject

@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSNumber *timeToFirstFrameInSeconds;
@property (readonly, nonatomic) NSNumber *publishReadyTimeSeconds;
@property (readonly, nonatomic) long long lastIceConnectionState;
@property (readonly, nonatomic) _Bool isPublisherTheMainBroadcaster;
@property (readonly, nonatomic) NSString *broadcastId;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) _Bool isAudioOnly;
@property (readonly, nonatomic) NSString *publisherGuestSessionUUID;
@property (readonly, nonatomic) NSString *janusRoomId;
@property (readonly, nonatomic) long long slowLinkCount;
@property (readonly, nonatomic) unsigned long long handlerId;
@property (readonly, nonatomic) _Bool wasPublishing;

/* class methods */
+ (id)endOfStreamStatsFromStatsCollector:(id)collector;

/* instance methods */
- (id)initWithStatsCollector:(id)collector;
- (id)dictionaryRepresentation;
- (id)durationInSeconds;

@end

#endif /* PTVGuestBroadcastingEndOfStreamStats_h */
