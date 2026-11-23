//
#ifndef GADOnePixelImpressionMonitor_h
#define GADOnePixelImpressionMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADOnePixelImpressionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    struct atomic_flag { _Atomic _Bool _Value; } _didPostImpression;
}

/* instance methods */
- (id)initWithAd:(id)ad;
- (void)postImpressionNotificationForAd:(id)ad;

@end

#endif /* GADOnePixelImpressionMonitor_h */
