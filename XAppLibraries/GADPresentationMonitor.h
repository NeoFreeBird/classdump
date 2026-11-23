//
#ifndef GADPresentationMonitor_h
#define GADPresentationMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADPresentationMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
}

/* instance methods */
- (id)initWithAdView:(id)view messageSource:(id)source;
- (void)handlePresenterDidPresentNotification;
- (void)handlePresenterWillDismissNotification;

@end

#endif /* GADPresentationMonitor_h */
