//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAnalyticsEventMonitor_h
#define GADAnalyticsEventMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSDictionary, NSObject;

@interface GADAnalyticsEventMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    NSDictionary *_eventNameToParametersMap;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source eventNameToParametersMap:(id)map;
- (void)logEventWithName:(id)name adEventID:(id)id;

@end

#endif /* GADAnalyticsEventMonitor_h */
