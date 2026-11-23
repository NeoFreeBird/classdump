//
#ifndef GADAdCloseMonitor_h
#define GADAdCloseMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADFullScreenAdViewController.h"
#include "GADObserverCollection.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface GADAdCloseMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADFullScreenAdViewController *_viewController;
    GADAdContent *_ad;
    long long _adShowTime;
    _Bool _hasHandledClose;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source viewController:(id)controller;
- (void)handleImpression;
- (void)handleAdClose:(id)close;

@end

#endif /* GADAdCloseMonitor_h */
