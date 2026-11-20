//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPingsBufferManager_h
#define GADPingsBufferManager_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GADPingsBufferManager : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSMutableDictionary *_bufferedPings;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addPing:(id)ping status:(id)status;
- (void)removePing:(id)ping;
- (void)pingBufferedURLs;
- (void)removeExpiredPingsFromBufferedPings;

@end

#endif /* GADPingsBufferManager_h */
