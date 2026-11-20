//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVHydraMainBroadcaster_h
#define TAVHydraMainBroadcaster_h
@import Foundation;

#include "TAVHydraParticipant-Protocol.h"

@class NSMutableDictionary, NSNumber, NSObject;

@interface TAVHydraMainBroadcaster : NSObject <TAVHydraParticipant>

@property (copy, nonatomic) NSNumber *audioLevel;
@property (readonly, nonatomic) _Bool isLive;
@property (readonly, nonatomic) _Bool isActive;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

/* instance methods */
- (id)initWithIsLive:(_Bool)live;
- (id)description;

@end

#endif /* TAVHydraMainBroadcaster_h */
