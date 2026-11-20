//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FrameRateReporter_h
#define T1FrameRateReporter_h
@import Foundation;

#include "T1FrameDropEventReporter.h"
#include "TDTVariableFrameRateMonitorObserver-Protocol.h"

@class NSObject, NSString;

@interface T1FrameRateReporter : NSObject <TDTVariableFrameRateMonitorObserver> {
    /* instance variables */
    _Bool _stallDetected;
}

@property (retain) T1FrameDropEventReporter *frameDropEventReporter;
@property (readonly, nonatomic) _Bool stallTrackingEnabled;
@property (readonly, nonatomic) unsigned long long stallCountSinceActive;
@property (readonly, nonatomic) unsigned long long stallThreshold;
@property (readonly, nonatomic) double cumulativeFrameRefreshDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedReporter;

/* instance methods */
- (id)init;
- (void)enableStallTracking:(_Bool)tracking withThreshold:(unsigned long long)threshold;
- (void)enableCallStackReportingWithFrameDropEventReporter:(id)reporter;
- (void)startMonitoring;
- (void)resume;
- (void)pause;
- (void)setDefaultFrameRateAndTolerance;
- (void)setMinimumFrameRate:(long long)rate maximumFrameRate:(long long)rate preferredFrameRate:(long long)rate frameDropTolerance:(long long)tolerance;
- (void)_t1_reportStackTraceWithDeltaFPS:(double)fps;
- (void)_t1_reportFrameDropEventWithCallStackReturnAddresses:(id)addresses;
- (void)frameRateMonitor:(id)monitor frameDropEventDetectedWithCallStackReturnAddresses:(id)addresses;
- (void)frameRateMonitor:(id)monitor refreshRateChangedFrom:(long long)from to:(long long)to;
- (_Bool)isStallTrackingEnabled;

@end

#endif /* T1FrameRateReporter_h */
