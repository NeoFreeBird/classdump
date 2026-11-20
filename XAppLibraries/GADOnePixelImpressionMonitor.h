//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
