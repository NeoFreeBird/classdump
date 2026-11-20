//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModePopoverController_h
#define TFNModalSheetLayoutModePopoverController_h
@import Foundation;

#include "TFNModalSheetLayoutModeController-Protocol.h"
#include "TFNModalSheetLayoutModeMutableHeightController-Protocol.h"
#include "TFNModalSheetLayoutModePopoverConfiguration.h"
#include "TFNModalSheetViewController.h"

@class NSObject, NSString, UIColor;

@interface TFNModalSheetLayoutModePopoverController : NSObject <TFNModalSheetLayoutModeController, TFNModalSheetLayoutModeMutableHeightController> {
    /* instance variables */
    TFNModalSheetViewController *_modalViewController;
    double _currentPresentingAreaWidth;
    _Bool _needsRedisplay;
}

@property (retain, nonatomic) UIColor *cachedContainerBackgroundColor;
@property (retain, nonatomic) TFNModalSheetLayoutModePopoverConfiguration *configuration;
@property (readonly, nonatomic) double maximumHeight;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long layoutModeForTransitioningToFullScreen;
@property (readonly, nonatomic) long long layoutModeForLeavingFullScreen;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } modalContentViewVisibleEdgeInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } calculateModalContentSafeAreaInsets;
@property (readonly, nonatomic) double initialCurrentHeight;
@property (readonly, nonatomic) double totalAnimationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _Bool supportsCustomPreferredHeight;
@property (readonly, nonatomic) double defaultPreferredHeight;

/* class methods */
+ (double)widthForPopoverWidth:(long long)width;

/* instance methods */
- (id)initWithModalViewController:(id)controller;
- (void)willTransitionInFromOldLayoutMode:(id)mode;
- (void)willTransitionOutToNewLayoutMode:(id)mode;
- (void)addModalContentViewControllerView:(id)view;
- (_Bool)requiresRedisplayToChangeToLayoutMode:(long long)mode;
- (id)statusBarControllingViewController:(_Bool)controller;
- (void)updateModalContentFrames;
- (_Bool)getNavigationBarFrameHeightAdjustment:(inout double *)adjustment yOffset:(inout double *)offset;
- (struct CGSize { double x0; double x1; })_tfn_modalContentSizeForPopover;
- (struct CGSize { double x0; double x1; })modalContentSizeWithLayoutMode:(long long)mode availableSize:(struct CGSize { double x0; double x1; })size;
- (void)updateModalPresentationStyle;
- (void)_tfn_updatePresentationControllerSettings;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)_tfn_changePopoverBackgroundColorForIsPresenting:(_Bool)presenting animated:(_Bool)animated duration:(double)duration;
- (void)updateKeyboardHeight:(double)height;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size;
- (void)willRedisplay;
- (void)updateCurrentHeight:(double)height animated:(_Bool)animated completion:(id /* block */)completion;

@end

#endif /* TFNModalSheetLayoutModePopoverController_h */
