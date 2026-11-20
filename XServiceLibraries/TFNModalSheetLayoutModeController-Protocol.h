//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModeController_Protocol_h
#define TFNModalSheetLayoutModeController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNModalSheetLayoutModeController <NSObject>

@required

@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long layoutModeForTransitioningToFullScreen;
@property (readonly, nonatomic) long long layoutModeForLeavingFullScreen;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } modalContentViewVisibleEdgeInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } calculateModalContentSafeAreaInsets;
@property (readonly, nonatomic) double initialCurrentHeight;
@property (readonly, nonatomic) double totalAnimationDuration;

/* required instance methods */
- (void)willTransitionInFromOldLayoutMode:(id)mode;
- (void)willTransitionOutToNewLayoutMode:(id)mode;
- (void)addModalContentViewControllerView:(id)view;
- (_Bool)requiresRedisplayToChangeToLayoutMode:(long long)mode;
- (_Bool)getNavigationBarFrameHeightAdjustment:(inout double *)adjustment yOffset:(inout double *)offset;
- (id)statusBarControllingViewController:(_Bool)controller;
- (struct CGSize { double x0; double x1; })modalContentSizeWithLayoutMode:(long long)mode availableSize:(struct CGSize { double x0; double x1; })size;
- (void)updateModalPresentationStyle;
- (void)updateModalContentFrames;

@optional

/* optional instance methods */
- (void)didUpdateDismissableWithGesture;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews:(_Bool)subviews;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewControllerDidDismissAnimated:(_Bool)animated;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size;
- (void)updateKeyboardHeight:(double)height;
- (void)didStartEditingAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)didEndEditingAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)willRedisplay;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;

@end

#endif /* TFNModalSheetLayoutModeController_Protocol_h */
