//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LaunchMetricsReporter_h
#define T1LaunchMetricsReporter_h
@import Foundation;

#include "TFNViewControllerEventObserver-Protocol.h"

@class NSObject;

@interface T1LaunchMetricsReporter : NSObject <TFNViewControllerEventObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *metricsReporters;
    NSNumber"16@0:8 *appLaunchState;
    NSNumber"16@0:8 *destinationState;
    NSNumber"16@0:8 *uiInspector;
}

/* class methods */
+ (void)configureWithAppLaunchContext:(id)context wasAppRecentlyUpgraded:(_Bool)upgraded scribeProvider:(id /* block */)provider;
+ (void)abortReportingWithReason:(id)reason;
+ (void)timelineInitializedForPanel:(long long)panel;
+ (void)notifyLaunchContentDisplayed;

/* instance methods */
- (void)applicationLaunchDidBegin:(id)begin;
- (void)applicationLaunchDidComplete:(id)complete;
- (void)applicationLaunchPrepareForWarmLaunch:(id)launch;
- (void)viewControllerViewWillFullyDisappear:(id)disappear;
- (id)init;

@end

#endif /* T1LaunchMetricsReporter_h */
