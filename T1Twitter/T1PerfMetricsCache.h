//
#ifndef T1PerfMetricsCache_h
#define T1PerfMetricsCache_h
@import Foundation;

@class NSMapTable, NSObject, NSString;

@interface T1PerfMetricsCache : NSObject

@property (copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSMapTable *scrollPerformanceMetrics;

/* instance methods */
- (id)init;

@end

#endif /* T1PerfMetricsCache_h */
