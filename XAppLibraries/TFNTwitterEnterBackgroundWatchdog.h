//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterEnterBackgroundWatchdog_h
#define TFNTwitterEnterBackgroundWatchdog_h
@import Foundation;

#include "TFNTwitterWatchdog.h"
#include "TFNTwitterWatchdogCreatingAndStarting-Protocol.h"

@class NSString;

@interface TFNTwitterEnterBackgroundWatchdog : TFNTwitterWatchdog <TFNTwitterWatchdogCreatingAndStarting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createAndStartWatchdogWithIntervalSinceStartTime:(double)time;

/* instance methods */
- (void)crash;

@end

#endif /* TFNTwitterEnterBackgroundWatchdog_h */
