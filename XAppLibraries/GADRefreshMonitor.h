//
#ifndef GADRefreshMonitor_h
#define GADRefreshMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"

@class NSObject, NSOperationQueue;

@interface GADRefreshMonitor : NSObject {
    /* instance variables */
    NSOperationQueue *_observationQueue;
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    _Bool _isEnabled;
    _Bool _isVisible;
    _Bool _isIntermissionOngoing;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source;
- (void)handleVisibilityNotification:(id)notification;
- (void)handleRefreshAction:(id)action;
- (void)handleIntermissionEvent:(_Bool)event;
- (void)updateRefreshActivity;

@end

#endif /* GADRefreshMonitor_h */
