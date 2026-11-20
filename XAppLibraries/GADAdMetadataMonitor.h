//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdMetadataMonitor_h
#define GADAdMetadataMonitor_h
@import Foundation;

#include "GADFullScreenAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADAdMetadataMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADFullScreenAdContent *_ad;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source;
- (void)handleAdMetadataNotification:(id)notification;

@end

#endif /* GADAdMetadataMonitor_h */
