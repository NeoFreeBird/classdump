//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CacheManager_h
#define T1CacheManager_h
@import Foundation;

@class NSObject;

@interface T1CacheManager : NSObject

@property (nonatomic) _Bool started;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)initPrivate;
- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)_t1_applicationDidReceiveMemoryWarning;
- (void)_t1_applicationDidEnterBackground;
- (void)_t1_wrapInBackgroundTask:(id /* block */)task;
- (void)_t1_runOrphanedLeafCleanupIfNeededWithCompletion:(id /* block */)completion;
- (_Bool)_t1_shouldRunCleanupForAccountID:(id)id intervalSeconds:(double)seconds;
- (void)_t1_runModelCacheCleanupForAccountID:(id)id modelCache:(id)cache allowedTypeNames:(id)names completion:(id /* block */)completion;
- (void)_t1_runModelCacheCleanupPass:(long long)pass forAccountID:(id)id modelCache:(id)cache allowedTypeNames:(id)names previouslyRemovedCount:(long long)count startTime:(double)time completion:(id /* block */)completion;
- (void)_t1_finishModelCacheCleanupForAccountID:(id)id removedCount:(long long)count startTime:(double)time errorMessage:(id)message completion:(id /* block */)completion;
- (void)_t1_scribeLeafCleanupWithRemovedCount:(long long)count durationMs:(double)ms errorMessage:(id)message;
- (void)_t1_performModelCacheDiskMaintenanceWithCompletion:(id /* block */)completion;
- (void)_t1_purgeCachesAndReportMetricsWithReason:(unsigned long long)reason completion:(id /* block */)completion;
- (void)_t1_reportPurgeWithReason:(unsigned long long)reason cacheMetrics:(id)metrics;
- (_Bool)isStarted;

@end

#endif /* T1CacheManager_h */
