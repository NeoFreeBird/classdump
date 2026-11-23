//
#ifndef TFNModalSheetLayoutModeFullHeightController_h
#define TFNModalSheetLayoutModeFullHeightController_h
@import Foundation;

#include "TFNModalSheetLayoutModeCustomController.h"

@interface TFNModalSheetLayoutModeFullHeightController : TFNModalSheetLayoutModeCustomController

/* instance methods */
- (long long)layoutMode;
- (long long)layoutModeForLeavingFullScreen;
- (void)willTransitionInFromOldLayoutMode:(id)mode;
- (double)maximumHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })modalContentViewVisibleEdgeInsets;
- (struct CGSize { double x0; double x1; })modalContentSizeWithLayoutMode:(long long)mode availableSize:(struct CGSize { double x0; double x1; })size;
- (id)statusBarControllingViewController:(_Bool)controller;
- (void)updateModalContentFrames;
- (void)didEndEditingAnimated:(_Bool)animated completion:(id /* block */)completion;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (struct CGPath *)_tfn_modalContentMaskPath;
- (void)_tfn_updateModalContentHostViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_modalContentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_modalContentViewControllerViewFrame;

@end

#endif /* TFNModalSheetLayoutModeFullHeightController_h */
