//
#ifndef TPSMetrics_h
#define TPSMetrics_h
@import Foundation;

@class NSObject;

@interface TPSMetrics : NSObject

/* class methods */
+ (void)startWithScribeDelegate:(id)delegate;
+ (void)logDownloadRequest;
+ (void)logDownload;
+ (void)indicateForcedRestartWithIsV1:(_Bool)v1;
+ (void)_logExit;
+ (void)_heartbeat;
+ (void)_delayedLogPerformanceEvent:(id)event duration:(double)duration;

@end

#endif /* TPSMetrics_h */
