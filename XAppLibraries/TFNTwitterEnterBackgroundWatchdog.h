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
