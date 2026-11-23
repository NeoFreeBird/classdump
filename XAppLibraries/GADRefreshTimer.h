//
#ifndef GADRefreshTimer_h
#define GADRefreshTimer_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADTimer.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADRefreshTimer : NSObject {
    /* instance variables */
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    GADTimer *_timer;
    double _refreshInterval;
    id /* block */ _handler;
}

/* instance methods */
- (id)initWithRefreshInterval:(double)interval messageSource:(id)source refreshHandler:(id /* block */)handler;
- (id)timer;
- (void)start;
- (void)resume;
- (void)pause;
- (void)restart;
- (void)forceExpire;

@end

#endif /* GADRefreshTimer_h */
