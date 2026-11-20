//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVDIBitrateTracker_h
#define TVDIBitrateTracker_h
@import Foundation;

#include "TAVPlaybackState.h"
#include "TVDIBitrateMetrics.h"

@class NSObject;

@interface TVDIBitrateTracker : NSObject

@property (nonatomic) double runningTotal;
@property (nonatomic) double totalTimeElapsed;
@property (retain, nonatomic) TAVPlaybackState *lastKnownState;
@property (nonatomic) double minimum;
@property (nonatomic) double maximum;
@property (readonly, copy, nonatomic) TVDIBitrateMetrics *metrics;

/* instance methods */
- (id)init;
- (void)updateWithPlaybackState:(id)state;

@end

#endif /* TVDIBitrateTracker_h */
