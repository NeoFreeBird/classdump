//
#ifndef TimelineFactoryPerformanceMonitor_h
#define TimelineFactoryPerformanceMonitor_h
@import Foundation;

@class NSObject;

@interface TimelineFactoryPerformanceMonitor : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 monitor;
    @40@0:8:16@24@32 monitorCategory;
}

/* instance methods */
- (id)init;
- (id)startMeasuringEvent:(long long)event;
- (void)endMeasuringForToken:(id)token;

@end

#endif /* TimelineFactoryPerformanceMonitor_h */
