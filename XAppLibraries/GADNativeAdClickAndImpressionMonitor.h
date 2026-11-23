//
#ifndef GADNativeAdClickAndImpressionMonitor_h
#define GADNativeAdClickAndImpressionMonitor_h
@import Foundation;

#include "GADInternalNativeAd.h"
#include "GADNativeAdContext.h"
#include "GADObserverCollection.h"

@class NSDictionary, NSObject;

@interface GADNativeAdClickAndImpressionMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADInternalNativeAd *_nativeAd;
    GADNativeAdContext *_nativeAdContext;
    NSDictionary *_adConfiguration;
}

/* instance methods */
- (id)initWithAd:(id)ad nativeAdContext:(id)context adConfiguration:(id)configuration;
- (void)handleClick:(id)click;
- (void)handleImpression:(id)impression;
- (void)handleClickRecordedAction:(id)action;
- (void)handleImpressionRecordedAction;
- (void)handleUnconfirmedClickAction:(id)action;
- (void)handleConfirmationClick:(double)click;

@end

#endif /* GADNativeAdClickAndImpressionMonitor_h */
