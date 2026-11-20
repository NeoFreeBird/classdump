//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterLaunchWatchdog_h
#define TFNTwitterLaunchWatchdog_h
@import Foundation;

#include "TFNTwitterWatchdog.h"
#include "TFNTwitterWatchdogCreatingAndStarting-Protocol.h"

@class NSString;

@interface TFNTwitterLaunchWatchdog : TFNTwitterWatchdog <TFNTwitterWatchdogCreatingAndStarting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createAndStartWatchdogWithIntervalSinceStartTime:(double)time;
+ (void)setWillCrashBlock:(id /* block */)block;
+ (id /* block */)willCrashBlock;

/* instance methods */
- (void)crash;

@end

#endif /* TFNTwitterLaunchWatchdog_h */
