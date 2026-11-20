//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADCustomCloseActionMonitor_h
#define GADCustomCloseActionMonitor_h
@import Foundation;

#include "GADCloseButton.h"
#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADCustomCloseActionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADCloseButton *_closeButton;
    _Bool _customCloseBlocked;
    id <GADEventContextSource> _messageSource;
}

/* instance methods */
- (id)initWithCloseButton:(id)button messageSource:(id)source customCloseBlocked:(_Bool)blocked;
- (void)handleUpdateCustomCloseAction:(id)action;

@end

#endif /* GADCustomCloseActionMonitor_h */
