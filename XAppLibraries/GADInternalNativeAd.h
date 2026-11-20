//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADInternalNativeAd_h
#define GADInternalNativeAd_h
@import Foundation;

#include "GADAdContent.h"
#include "GADNativeAdAssetsDataSource-Protocol.h"
#include "GADNativeAdContext.h"
#include "GADNativeAdFeatures.h"
#include "GADNativeAdImage.h"
#include "GADNativeAssetViewTracker.h"
#include "GADObserverCollection.h"
#include "GADOverlayView.h"

@class NSObject, NSString, UIView;
@protocol OS_dispatch_queue;

@interface GADInternalNativeAd : GADAdContent {
    /* instance variables */
    GADObserverCollection *_clickConfirmingViewObservers;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (readonly, nonatomic) NSString *adConfigurationAdType;
@property (readonly, nonatomic) GADNativeAdFeatures *nativeAdFeatures;
@property (readonly, nonatomic) Class publicAdClass;
@property (retain, nonatomic) GADOverlayView *overlayView;
@property (retain, nonatomic) GADNativeAssetViewTracker *assetViewTracker;
@property (retain, nonatomic) GADNativeAdContext *nativeAdContext;
@property (retain, nonatomic) GADNativeAdImage *adChoicesIcon;
@property (readonly, weak, nonatomic) UIView *clickConfirmingView;
@property (nonatomic) _Bool viewAwareAPIUsed;
@property (nonatomic) _Bool customOnePointFiveClickImplementedByPublisher;
@property (readonly, nonatomic) _Bool customOnePointFiveClickEnabled;
@property (readonly, nonatomic) _Bool customMuteThisAdAvailable;
@property (nonatomic) _Bool customClickGestureEnabledByPublisher;
@property (readonly, nonatomic) _Bool customClickGestureEnabled;
@property (nonatomic) _Bool clickConfirmationRequired;
@property (nonatomic) double unconfirmedClickTimestamp;
@property (copy, nonatomic) NSString *unconfirmedClickIdentifier;
@property (retain, nonatomic) UIView *watermarkView;
@property (retain, nonatomic) id <GADNativeAdAssetsDataSource> assets;

/* class methods */
+ (id)adTypeFromSingleNativeAdConfiguration:(id)configuration;

/* instance methods */
- (void)commonInitWithAdType:(id)type nativeAdFeatures:(id)features;
- (id)initWithContext:(id)context adType:(id)type nativeAdFeatures:(id)features;
- (id)initWithContext:(id)context adType:(id)type nativeAdFeatures:(id)features rootViewControllerProvider:(id)provider;
- (id)initWithContext:(id)context;
- (id)initWithContext:(id)context rootViewControllerProvider:(id)provider;
- (long long)adFormat;
- (_Bool)isCustomOnePointFiveClickEnabled;
- (_Bool)isCustomClickGestureEnabled;
- (void)registerClickConfirmingView:(id)view;
- (void)unregisterClickConfirmingView;
- (void)handleAssociatedNativeAd:(id)ad;
- (void)resetUnconfirmedClick;
- (double)confirmationClickTimeInterval;

@end

#endif /* GADInternalNativeAd_h */
