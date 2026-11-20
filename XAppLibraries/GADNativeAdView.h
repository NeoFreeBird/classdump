//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADNativeAdView_h
#define GADNativeAdView_h
@import Foundation;

#include "GADAdChoicesView.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"
#include "GADMediaView.h"
#include "GADNativeAd.h"
#include "GADNativeAdViewOverlayProtocol-Protocol.h"
#include "GADNativeAssetViewTracker.h"
#include "GADObserverCollection.h"
#include "GADOverlayView.h"

@class NSArray, NSDictionary, NSString, UIView;

@interface GADNativeAdView : UIView <GADNativeAdViewOverlayProtocol, GADEventContextSource> {
    /* instance variables */
    GADOverlayView *_overlayView;
    GADOverlayView *_nativeValidatorView;
    UIView *_watermarkView;
    GADNativeAssetViewTracker *_assetViewTracker;
    NSArray *_constraints;
    NSArray *_validatorConstraints;
    GADObserverCollection *_nativeAdViewObservers;
    NSDictionary *_nativeValidatorParameters;
    GADObserverCollection *_nativeValidatorObservers;
}

@property (retain, nonatomic) GADNativeAd *nativeAd;
@property (weak, nonatomic) UIView *headlineView;
@property (weak, nonatomic) UIView *callToActionView;
@property (weak, nonatomic) UIView *iconView;
@property (weak, nonatomic) UIView *bodyView;
@property (weak, nonatomic) UIView *storeView;
@property (weak, nonatomic) UIView *priceView;
@property (weak, nonatomic) UIView *imageView;
@property (weak, nonatomic) UIView *starRatingView;
@property (weak, nonatomic) UIView *advertiserView;
@property (weak, nonatomic) GADMediaView *mediaView;
@property (weak, nonatomic) GADAdChoicesView *adChoicesView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GADEventContext *context;

/* instance methods */
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)updateMediaView;
- (void)updateAdChoicesView;
- (void)orderViews;
- (void)setConstraints:(id)constraints;
- (id)nativeAdPolicyValidatorConstraintsForParameters:(id)parameters;
- (void)updateNativeValidatorConstraints;
- (void)handleLoadPolicyValidatorWithUserInfo:(id)info;
- (void)handleShowValidator;
- (void)handleHideValidator;
- (void)removeOverlayConstraints;
- (void)setOverlayViewFillConstraints;
- (void)updateWatermarkView;
- (void)setOverlayView:(id)view;

@end

#endif /* GADNativeAdView_h */
