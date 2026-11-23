//
#ifndef GADMediationSizeChangeMonitor_h
#define GADMediationSizeChangeMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADSizedAdView.h"

@class NSObject;

@interface GADMediationSizeChangeMonitor : NSObject {
    /* instance variables */
    GADSizedAdView *_sizedView;
    id _delegate;
    GADObserverCollection *_observers;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad containerView:(id)view sizedView:(id)view delegate:(id)delegate;

/* instance methods */
- (id)initWithContainerView:(id)view sizedView:(id)view delegate:(id)delegate;

@end

#endif /* GADMediationSizeChangeMonitor_h */
