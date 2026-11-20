//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADPAWSignalCollector_h
#define GADPAWSignalCollector_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADSignal.h"

@class NSError, NSMutableArray, NSObject;

@interface GADPAWSignalCollector : NSObject {
    /* instance variables */
    _Bool _refreshScheduled;
    GADObserverCollection *_observers;
    GADSignal *_cachedSignals;
    NSError *_cachedError;
    NSMutableArray *_pendingCompletionHandlers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)updateRefreshSettings;
- (void)collectPAWSignalsWithCompletionHandlerNoCache:(id /* block */)cache;
- (void)updateCachedSignals;
- (void)maybeUpdateCachedSignals;
- (void)collectPAWSignalsWithCompletionHandler:(id /* block */)handler;

@end

#endif /* GADPAWSignalCollector_h */
