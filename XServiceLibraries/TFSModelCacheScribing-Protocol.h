//
#ifndef TFSModelCacheScribing_Protocol_h
#define TFSModelCacheScribing_Protocol_h
@import Foundation;

@protocol TFSModelCacheScribing

@required

/* required instance methods */
- (void)scribeCacheQueueClosedIfNeeded;
- (void)scribeSlowCacheFetchIfNeededWithStartTime:(double)time cacheKeys:(id)keys;
- (void)scribeSlowCacheFetchIfNeededWithStartTime:(double)time cacheKeys:(id)keys;
- (void)scribeSlowDiskFetchIfNeededWithStartTime:(double)time fetchKeys:(id)keys hitCount:(long long)count;
- (void)scribeSlowDiskFetchIfNeededWithStartTime:(double)time fetchKeys:(id)keys hitCount:(long long)count;
- (void)scribeSlowSQLFetchIfNeededWithStartTime:(double)time endTime:(double)time key:(id)key;
- (void)scribeSlowSQLFetchIfNeededWithStartTime:(double)time endTime:(double)time key:(id)key;
- (void)scribeSlowDecodeIfNeededWithStartTime:(double)time key:(id)key;
- (void)scribeSlowDecodeIfNeededWithStartTime:(double)time key:(id)key;

@optional

@end

#endif /* TFSModelCacheScribing_Protocol_h */
