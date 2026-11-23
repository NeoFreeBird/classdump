//
#ifndef GADAdLoadMonitor_h
#define GADAdLoadMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADAdLoadMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    id /* block */ _completionHandler;
    unsigned long long _unmatchedStartDelayCount;
    _Bool _assetsDidFinishLoad;
}

/* instance methods */
- (id)initWithMessageSource:(id)source completionHandler:(id /* block */)handler;
- (void)handleDelayLoadWithParameters:(id)parameters;
- (void)assetsDidFinishLoadWithError:(id)error;
- (void)updateLoadStatusWithError:(id)error;
- (void)loadingAndRenderingCompletedWithError:(id)error;

@end

#endif /* GADAdLoadMonitor_h */
