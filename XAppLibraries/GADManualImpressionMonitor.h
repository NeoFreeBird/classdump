//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADManualImpressionMonitor_h
#define GADManualImpressionMonitor_h
@import Foundation;

#include "GADObserverCollection.h"

@class NSArray, NSObject, NSOperationQueue;

@interface GADManualImpressionMonitor : NSObject {
    /* instance variables */
    NSArray *_manualImpressionURLStrings;
    NSOperationQueue *_observationQueue;
    GADObserverCollection *_observers;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration;

/* instance methods */
- (id)initWithAd:(id)ad manualImpressionURLStrings:(id)urlstrings;
- (void)handleManualImpressionInContext:(id)context;

@end

#endif /* GADManualImpressionMonitor_h */
