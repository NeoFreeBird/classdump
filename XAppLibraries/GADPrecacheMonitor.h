//
#ifndef GADPrecacheMonitor_h
#define GADPrecacheMonitor_h
@import Foundation;

#include "GADJavascriptEvaluating-Protocol.h"
#include "GADObserverCollection.h"

@class NSMutableDictionary, NSObject;

@interface GADPrecacheMonitor : NSObject {
    /* instance variables */
    id <GADJavascriptEvaluating> _JScontext;
    GADObserverCollection *_observers;
    NSMutableDictionary *_precacheResourceMonitors;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithJSContext:(id)jscontext messageSource:(id)source;
- (void)handlePrecacheAction:(id)action;
- (id)resourceBufferForFileSource:(id)source;
- (void)removePrecacheResourceMonitor:(id)monitor;

@end

#endif /* GADPrecacheMonitor_h */
