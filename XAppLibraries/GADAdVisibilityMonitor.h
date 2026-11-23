//
#ifndef GADAdVisibilityMonitor_h
#define GADAdVisibilityMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADAdVisibilityMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdContent *_ad;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source;

@end

#endif /* GADAdVisibilityMonitor_h */
