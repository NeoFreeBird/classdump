//
#ifndef PTVGuestBroadcastingPeriodicPublishingStats_h
#define PTVGuestBroadcastingPeriodicPublishingStats_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVGuestBroadcastingPeriodicStreamStats.h"
#include "PTVLoggedInUserProtocol-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface PTVGuestBroadcastingPeriodicPublishingStats : NSObject

@property (readonly, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) NSObject<PTVLoggedInUserProtocol> *loggedInUser;
@property (readonly, nonatomic) NSString *janusRoomId;
@property (readonly, nonatomic) unsigned long long handlerId;
@property (readonly, nonatomic) PTVGuestBroadcastingPeriodicStreamStats *streamStats;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast loggedInUser:(id)user janusRoomId:(id)id handlerId:(unsigned long long)id;
- (void)didCollectStreamStats:(id)stats;

@end

#endif /* PTVGuestBroadcastingPeriodicPublishingStats_h */
