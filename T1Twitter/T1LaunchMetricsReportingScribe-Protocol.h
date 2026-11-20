//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LaunchMetricsReportingScribe_Protocol_h
#define T1LaunchMetricsReportingScribe_Protocol_h
@import Foundation;

@protocol T1LaunchMetricsReportingScribe

@required

/* required instance methods */
- (void)logPerformanceEvent:(id)event duration:(double)duration impressionID:(id)id metadata:(id)metadata;

@optional

@end

#endif /* T1LaunchMetricsReportingScribe_Protocol_h */
