//
#ifndef GADViewVisibilityChangeMonitor_h
#define GADViewVisibilityChangeMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADViewVisibilityChangeMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADWebAdView *_webAdView;
    _Bool _visible;
}

/* instance methods */
- (id)initWithWebAdView:(id)view visibilityMessageSource:(id)source presenter:(id)presenter;
- (void)updateVisibility;

@end

#endif /* GADViewVisibilityChangeMonitor_h */
