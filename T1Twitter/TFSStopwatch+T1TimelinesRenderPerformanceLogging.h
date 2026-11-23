//
#ifndef TFSStopwatch_T1TimelinesRenderPerformanceLogging_h
#define TFSStopwatch_T1TimelinesRenderPerformanceLogging_h
@import Foundation;

@interface TFSStopwatch (T1TimelinesRenderPerformanceLogging)

/* instance methods */
- (void)logRenderPerformanceEvent:(id)event metadataDict:(id)dict scribe:(id)scribe;

@end

#endif /* TFSStopwatch_T1TimelinesRenderPerformanceLogging_h */
