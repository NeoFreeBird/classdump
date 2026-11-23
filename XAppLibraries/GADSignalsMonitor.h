//
#ifndef GADSignalsMonitor_h
#define GADSignalsMonitor_h
@import Foundation;

#include "GADJavascriptEvaluating-Protocol.h"
#include "GADObserverCollection.h"

@class NSObject, UIView;

@interface GADSignalsMonitor : NSObject {
    /* instance variables */
    UIView *_adView;
    id <GADJavascriptEvaluating> _JSContext;
    GADObserverCollection *_observers;
}

/* instance methods */
- (id)initWithJSContext:(id)jscontext adContent:(id)content adView:(id)view;
- (void)sendViewSignalsToJSContextWithEventID:(id)id;
- (void)sendClickSignalsToJSContextWithEventID:(id)id clickString:(id)string;

@end

#endif /* GADSignalsMonitor_h */
