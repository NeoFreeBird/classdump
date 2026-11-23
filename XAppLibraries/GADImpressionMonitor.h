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
