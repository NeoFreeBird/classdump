//
#ifndef HomeControllerPerformanceMonitor_h
#define HomeControllerPerformanceMonitor_h
@import Foundation;

@class NSObject;

@interface HomeControllerPerformanceMonitor : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 monitor;
}

/* instance methods */
- (id)init;
- (id)startMeasuringEvent:(long long)event;
- (void)endMeasuringForToken:(id)token;

@end

#endif /* HomeControllerPerformanceMonitor_h */
