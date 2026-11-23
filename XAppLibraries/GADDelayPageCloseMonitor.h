//
#ifndef GADDelayPageCloseMonitor_h
#define GADDelayPageCloseMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADDelayPageCloseMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADAdContent *_strongAd;
    long long _timeoutIdentifier;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source;
- (void)handleDelayPageCloseTimeout:(long long)timeout;
- (void)endDelayPageClose;
- (void)handleDelayPageCloseNotification:(id)notification;

@end

#endif /* GADDelayPageCloseMonitor_h */
