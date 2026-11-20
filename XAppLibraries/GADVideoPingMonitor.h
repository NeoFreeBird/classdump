//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoPingMonitor_h
#define GADVideoPingMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSArray, NSObject;

@interface GADVideoPingMonitor : NSObject {
    /* instance variables */
    struct atomic_flag { _Atomic _Bool _Value; } _hasHandledVideoEvent;
    NSArray *_URLStrings;
    GADObserverCollection *_observers;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration;

/* instance methods */
- (id)initWithAd:(id)ad notificationName:(id)name URLStrings:(id)urlstrings;
- (void)handleVideoEvents:(id)events;

@end

#endif /* GADVideoPingMonitor_h */
