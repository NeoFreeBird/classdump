//
#ifndef T1VideoPlayerCacheBackgroundCleaner_h
#define T1VideoPlayerCacheBackgroundCleaner_h
@import Foundation;

@class NSObject, TFSBackgroundTaskHandle;

@interface T1VideoPlayerCacheBackgroundCleaner : NSObject

@property (nonatomic) double backgroundKeepAlive;
@property (nonatomic) long long backgroundCounter;
@property (retain, nonatomic) TFSBackgroundTaskHandle *backgroundTaskHandle;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)scheduleCacheCleaningWithAccount:(id)account;
- (void)_t1_removePlayers;
- (void)_t1_applicationDidEnterBackground:(id)background;
- (void)_t1_applicationWillEnterForeground:(id)foreground;

@end

#endif /* T1VideoPlayerCacheBackgroundCleaner_h */
