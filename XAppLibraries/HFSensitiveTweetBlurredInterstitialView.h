//
#ifndef HFSensitiveTweetBlurredInterstitialView_h
#define HFSensitiveTweetBlurredInterstitialView_h
@import Foundation;

#include "HFSensitiveTweetBlurredInterstitialDelegate-Protocol.h"
#include "HFSensitiveTweetBlurredInterstitialViewModel.h"
#include "TFNPreviewSuppressing-Protocol.h"

@class UIView;

@interface HFSensitiveTweetBlurredInterstitialView : UIView <TFNPreviewSuppressing> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 hidesWhenNotSensitive;
    @40@0:8:16@24@32 blurOverlay;
    @40@0:8:16@24@32 $__lazy_storage_$_sensitiveMediaIcon;
    @40@0:8:16@24@32 $__lazy_storage_$_titleLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_explanationLabel;
    @40@0:8:16@24@32 $__lazy_storage_$_showOrHideMediaButton;
    @40@0:8:16@24@32 $__lazy_storage_$_contentContainer;
    @40@0:8:16@24@32 sensitiveMediaIconTopAnchorConstraint;
    @40@0:8:16@24@32 sensitiveMediaIconCenterYConstraint;
    @40@0:8:16@24@32 contentTopConstraint;
    @40@0:8:16@24@32 iconTopConstraint;
    @40@0:8:16@24@32 contentLeadingConstraint;
    @40@0:8:16@24@32 contentTrailingConstraint;
}

@property (nonatomic, retain) HFSensitiveTweetBlurredInterstitialViewModel *viewModel;
@property (nonatomic) long long displayMode;
@property (nonatomic) _Bool blurViewIsHidden;
@property (nonatomic, weak) id <HFSensitiveTweetBlurredInterstitialDelegate> delegate;

/* class methods */
+ (double)preferredHeightForWidth:(double)width viewModel:(id)model;

/* instance methods */
- (_Bool)suppressesPreviewingAtLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithViewModel:(id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleAgeVerificationLongPress:(id)press;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)showOrHideMediaButtonPressed:(id)pressed;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)configureForCompactLayout;

@end

#endif /* HFSensitiveTweetBlurredInterstitialView_h */
