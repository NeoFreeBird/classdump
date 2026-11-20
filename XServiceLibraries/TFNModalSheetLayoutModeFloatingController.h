//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModeFloatingController_h
#define TFNModalSheetLayoutModeFloatingController_h
@import Foundation;

#include "TFNModalSheetLayoutModeController-Protocol.h"
#include "TFNModalSheetViewController.h"

@class NSObject, NSString;

@interface TFNModalSheetLayoutModeFloatingController : NSObject <TFNModalSheetLayoutModeController> {
    /* instance variables */
    TFNModalSheetViewController *_modalViewController;
}

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

/* instance methods */
- (id)initWithModalViewController:(id)controller;
- (void)willTransitionInFromOldLayoutMode:(id)mode;
- (void)willTransitionOutToNewLayoutMode:(id)mode;
- (void)addModalContentViewControllerView:(id)view;
- (_Bool)requiresRedisplayToChangeToLayoutMode:(long long)mode;
- (id)statusBarControllingViewController:(_Bool)controller;
- (double)maximumHeight;
- (struct CGSize { double x0; double x1; })modalContentSizeWithLayoutMode:(long long)mode availableSize:(struct CGSize { double x0; double x1; })size;
- (_Bool)getNavigationBarFrameHeightAdjustment:(inout double *)adjustment yOffset:(inout double *)offset;
- (void)updateCurrentHeight:(double)height animated:(_Bool)animated completion:(id /* block */)completion;
- (void)updateModalContentFrames;
- (void)updateModalPresentationStyle;

@end

#endif /* TFNModalSheetLayoutModeFloatingController_h */
