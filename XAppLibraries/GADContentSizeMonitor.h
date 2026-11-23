//
#ifndef GADContentSizeMonitor_h
#define GADContentSizeMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"
#include "GADWebViewController.h"

@class NSObject;

@interface GADContentSizeMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADWebViewController *_webViewController;
    double _lastObservedContentHeight;
}

/* instance methods */
- (id)initWithWebAdView:(id)view ad:(id)ad;
- (void)updateContentHeightWithCompletionHandler:(id /* block */)handler;
- (void)updateContentHeight:(double)height;

@end

#endif /* GADContentSizeMonitor_h */
