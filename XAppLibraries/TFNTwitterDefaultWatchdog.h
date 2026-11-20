//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterDefaultWatchdog_h
#define TFNTwitterDefaultWatchdog_h
@import Foundation;

#include "TFNTwitterWatchdog.h"
#include "TFNTwitterWatchdogCreatingAndStarting-Protocol.h"

@class NSString;

@interface TFNTwitterDefaultWatchdog : TFNTwitterWatchdog <TFNTwitterWatchdogCreatingAndStarting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setRunsWhenApplicationIsActive:(_Bool)active;
+ (id)createAndStartWatchdogWithIntervalSinceStartTime:(double)time;

/* instance methods */
- (void)crash;

@end

#endif /* TFNTwitterDefaultWatchdog_h */
