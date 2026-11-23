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
