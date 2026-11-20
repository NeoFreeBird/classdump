//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADClosePresenterActionMonitor_h
#define GADClosePresenterActionMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADPresenting-Protocol.h"

@class NSObject;

@interface GADClosePresenterActionMonitor : NSObject {
    /* instance variables */
    id <GADPresenting> _presenter;
    GADObserverCollection *_observers;
}

/* instance methods */
- (id)initWithPresenter:(id)presenter messageSource:(id)source;
- (void)handleCloseNotification;

@end

#endif /* GADClosePresenterActionMonitor_h */
