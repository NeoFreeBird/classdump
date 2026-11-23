//
#ifndef TFSTwitterUserPresenceInfo_h
#define TFSTwitterUserPresenceInfo_h
@import Foundation;

#include "TFSTwitterSportsEvent.h"

@class NSObject, NSString;

@interface TFSTwitterUserPresenceInfo : NSObject

@property (readonly, nonatomic) NSString *spaceID;
@property (readonly, nonatomic) _Bool isExclusiveSpace;
@property (readonly, nonatomic) NSString *fleetThreadID;
@property (readonly, nonatomic) _Bool fullyRead;
@property (readonly, nonatomic) NSString *liveVideoBroadcastID;
@property (readonly, nonatomic) TFSTwitterSportsEvent *sportsEvent;

/* instance methods */
- (id)initWithFleetThreadID:(id)id fullyRead:(_Bool)read spaceID:(id)id isExclusiveSpace:(_Bool)space liveVideoBroadcastID:(id)id sportsEvent:(id)event;
- (id)description;
- (_Bool)isEmpty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;

@end

#endif /* TFSTwitterUserPresenceInfo_h */
