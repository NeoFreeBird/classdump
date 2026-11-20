//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADImpressionMonitor_h
#define GADImpressionMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSObject;

@interface GADImpressionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration;

/* instance methods */
- (id)initWithAd:(id)ad impressionDefinition:(long long)definition;

@end

#endif /* GADImpressionMonitor_h */
