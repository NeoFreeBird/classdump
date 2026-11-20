//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdPerformanceMonitor_h
#define GADAdPerformanceMonitor_h
@import Foundation;

@class NSMutableData, NSObject;

@interface GADAdPerformanceMonitor : NSObject {
    /* instance variables */
    NSMutableData *_dataBuffer;
}

/* instance methods */
- (id)init;

@end

#endif /* GADAdPerformanceMonitor_h */
