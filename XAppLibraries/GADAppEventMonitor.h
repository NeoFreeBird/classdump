//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAppEventMonitor_h
#define GADAppEventMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADAppEventMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdContent *_ad;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source;
- (void)handleAppEventNotification:(id)notification;

@end

#endif /* GADAppEventMonitor_h */
