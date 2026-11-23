//
#ifndef GADActiveViewContext_h
#define GADActiveViewContext_h
@import Foundation;

#include "GADAnalyticsEventMonitor.h"
#include "GADJSContext.h"

@class NSObject;

@interface GADActiveViewContext : NSObject {
    /* instance variables */
    GADJSContext *_context;
    GADAnalyticsEventMonitor *_analyticsEventMonitor;
}

/* class methods */
+ (void)loadWithEventContext:(id)context completionHandler:(id /* block */)handler;

/* instance methods */
- (void)setJSContext:(id)jscontext;
- (void)updateActiveViewWithSignals:(id)signals completionHandler:(id /* block */)handler;

@end

#endif /* GADActiveViewContext_h */
