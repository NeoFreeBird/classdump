//
#ifndef GADNativeAdSignalMonitor_h
#define GADNativeAdSignalMonitor_h
@import Foundation;

#include "GADInternalNativeAd.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADNativeAdSignalMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADInternalNativeAd *_internalNativeAd;
    GADWebAdView *_webAdView;
}

/* instance methods */
- (id)initWithInternalNativeAd:(id)ad webAdView:(id)view;
- (void)handleGetNativeSignalsAction;
- (void)handleGetClickMetadataAction;

@end

#endif /* GADNativeAdSignalMonitor_h */
