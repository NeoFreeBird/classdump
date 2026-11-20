//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdVerificationMonitoredView_h
#define GADAdVerificationMonitoredView_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, UIView;

@interface GADAdVerificationMonitoredView : NSObject {
    /* instance variables */
    GADObserverCollection *_presenterDismissalObserverCollection;
}

@property (weak, nonatomic) UIView *monitoredView;

/* instance methods */
- (id)initWithMonitoredView:(id)view;
- (void)addObserverForMonitoredViewDismissal:(id)dismissal dismissalBlock:(id /* block */)block;

@end

#endif /* GADAdVerificationMonitoredView_h */
