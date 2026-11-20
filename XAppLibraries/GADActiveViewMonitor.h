//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADActiveViewMonitor_h
#define GADActiveViewMonitor_h
@import Foundation;

#include "GADActiveViewReporter.h"
#include "GADObserverCollection.h"
#include "GADScheduler.h"

@class NSObject;

@interface GADActiveViewMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADScheduler *_updateActiveViewStatusScheduler;
    GADActiveViewReporter *_activeViewReporter;
    float _lastVolume;
    _Bool _enableActiveViewUpdatesWithNoChanges;
}

/* instance methods */
- (id)initWithAd:(id)ad viewMessageSource:(id)source webAdView:(id)view adFormat:(id)format analyticsLoggingEnabled:(_Bool)enabled activeViewConfiguration:(id)configuration;
- (void)dealloc;

@end

#endif /* GADActiveViewMonitor_h */
