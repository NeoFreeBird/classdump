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
