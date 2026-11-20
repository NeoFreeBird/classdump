//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
