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
