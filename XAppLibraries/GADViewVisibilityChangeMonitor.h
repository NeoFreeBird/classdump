//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
