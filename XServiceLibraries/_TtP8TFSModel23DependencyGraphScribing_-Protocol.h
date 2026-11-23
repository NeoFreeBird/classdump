//
#ifndef _TtP8TFSModel23DependencyGraphScribing__Protocol_h
#define _TtP8TFSModel23DependencyGraphScribing__Protocol_h
@import Foundation;

@protocol TFSModel.DependencyGraphScribing

@required

@property (nonatomic, readonly) long long slowUpdateScribeThresholdMs;
@property (nonatomic, readonly) _Bool isDetailedScribingEnabled;

/* required instance methods */
- (void)scribeSlowBulkUpdateWithDurationMs:(long long)ms modelDescription:(id)description;
- (void)scribeSlowSinkNotificationsWithDurationMs:(long long)ms;
- (void)scribeSlowModelFetchWithDurationMs:(long long)ms modelDescription:(id)description;
- (void)scribeSlowPendingStateApplicationWithDurationMs:(long long)ms description:(id)description;
- (void)scribeSlowCacheQueueDispatchWithDurationMs:(long long)ms;
- (void)scribeSlowGraphQueueDispatchWithDurationMs:(long long)ms;
- (void)scribeCacheQueueClosed;
- (void)scribeSlowCacheModelFetchWithDurationMs:(long long)ms modelDescription:(id)description;
- (void)scribeSlowDiskFetchWithDurationMs:(long long)ms description:(id)description;
- (void)scribeSlowSQLFetchWithDurationMs:(long long)ms description:(id)description;
- (void)scribeSlowDecodeWithDurationMs:(long long)ms description:(id)description;

@optional

@end

#endif /* _TtP8TFSModel23DependencyGraphScribing__Protocol_h */
