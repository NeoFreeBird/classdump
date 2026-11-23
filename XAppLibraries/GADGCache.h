//
#ifndef GADGCache_h
#define GADGCache_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADGCache : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableDictionary *_filePathsToResourceBuffers;
    GADObserverCollection *_cacheMonitorObservers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)loadGCacheURL:(id)url queue:(id)queue gcacheContext:(id)context completionHandler:(id /* block */)handler;
- (void)loadGCacheURL:(id)url withSDKCoreContext:(id)context gcacheContext:(id)context completionHandler:(id /* block */)handler;
- (void)cacheMonitorDidStartCaching:(id)caching;
- (void)cacheMonitorDidCompleteCaching:(id)caching;

@end

#endif /* GADGCache_h */
