//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
