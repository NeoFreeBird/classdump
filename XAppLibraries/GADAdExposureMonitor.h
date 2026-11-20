//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdExposureMonitor_h
#define GADAdExposureMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject, NSString;

@interface GADAdExposureMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    _Bool _adExposureBegan;
    NSString *_adUnitID;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration useVisibilityNotification:(_Bool)notification;

/* instance methods */
- (id)initWithAd:(id)ad adUnitID:(id)id useVisibilityNotification:(_Bool)notification;
- (void)startExposure;
- (void)endExposure;
- (void)dealloc;

@end

#endif /* GADAdExposureMonitor_h */
