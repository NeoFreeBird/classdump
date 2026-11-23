//
#ifndef GADInAppStoreMonitor_h
#define GADInAppStoreMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADClickProtection.h"
#include "GADNativeAdView.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"
#include "SKOverlayDelegate-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, SKAdImpression, SKOverlay, UIWindowScene;

@interface GADInAppStoreMonitor : NSObject <SKOverlayDelegate> {
    /* instance variables */
    GADWebAdView *_webAdView;
    GADAdContent *_ad;
    GADClickProtection *_clickProtection;
    GADObserverCollection *_observers;
    NSMutableDictionary *_cachedStoreProductViewController;
    NSMutableDictionary *_storeKitParameters;
    long long _SKAdImpressionRetriesRemaining;
    _Bool _viewVisible;
    SKAdImpression *_skImpression;
    _Bool _adIntermissionWillEndObserved;
    _Bool _shouldCallNativeClickDelegate;
    GADNativeAdView *_nativeAdView;
    SKOverlay *_weakSKOverlay;
    UIWindowScene *_SKOverlayWindowScene;
    NSString *_SKOverlayAppID;
    _Bool _SKOverlayWindowActive;
    _Bool _didSendSKOverlayBackgroundEvent;
    _Bool _didCallSKOverlayProgrammaticDismiss;
    double _lastSKOverlayInteractionTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAd:(id)ad webAdView:(id)view messageSource:(id)source clickProtection:(id)protection storeKitParameters:(id)parameters shouldCallNativeClickDelegate:(_Bool)delegate;
- (void)dealloc;
- (void)handleWindowDidBecomeKey:(id)key;
- (void)handleDidEnterBackground:(id)background;
- (id)actionParametersWithNotification:(id)notification;
- (void)handleOpenInAppStoreAction:(id)action;
- (void)openInAppStoreWithProductID:(id)id fallbackURL:(id)url shouldWaitForFetch:(_Bool)fetch creativeAppStoreParameters:(id)parameters parameters:(id)parameters;
- (void)handleFetchInAppStoreAction:(id)action;
- (void)handleShowSKOverlayAction:(id)action;
- (void)handleCloseSKOverlay;
- (void)logSKAdImpressionEvent:(id)event parameters:(id)parameters;
- (void)maybeRetrySKAdImpression;
- (void)startSKAdNetworkImpression:(id)impression;
- (void)endSKAdNetworkImpression;
- (void)postOverlayEventWithType:(id)type appID:(id)id error:(id)error;
- (void)postSKAdImpressionEventWithType:(id)type error:(id)error;
- (void)resetSKOverlayState;
- (void)storeOverlay:(id)overlay didFailToLoadWithError:(id)error;
- (void)storeOverlay:(id)overlay didFinishPresentation:(id)presentation;
- (void)handleSKOverlayDismiss;
- (void)storeOverlay:(id)overlay didFinishDismissal:(id)dismissal;

@end

#endif /* GADInAppStoreMonitor_h */
