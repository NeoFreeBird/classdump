//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalSheetLayoutModeCustomDraggableController_h
#define TFNModalSheetLayoutModeCustomDraggableController_h
@import Foundation;

#include "TFNModalSheetLayoutModeCustomController.h"
#include "TFNModalSheetLayoutModeMutableHeightController-Protocol.h"

@class NSString, UIPanGestureRecognizer;

@interface TFNModalSheetLayoutModeCustomDraggableController : TFNModalSheetLayoutModeCustomController <TFNModalSheetLayoutModeMutableHeightController> {
    /* instance variables */
    UIPanGestureRecognizer *_panGestureRecognizer;
}

@property (readonly, nonatomic) _Bool supportsCustomPreferredHeight;
@property (readonly, nonatomic) double defaultPreferredHeight;
@property (readonly, nonatomic) double maximumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (double)adjustedBottomInsetForSafeArea;
- (void)viewDidLoad;
- (void)willTransitionOutToNewLayoutMode:(id)mode;
- (void)willTransitionInFromOldLayoutMode:(id)mode;
- (void)setupCustomGestureRecognizersIfNeeded;
- (void)updateCurrentHeight:(double)height animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_tfn_panGestureAction:(id)action;
- (double)_tfn_snapHeightForCurrentHeight:(double)height velocityY:(double)y;
- (void)_tfn_animateSnapToHeight:(double)height withPanGestureReleaseVelocityY:(double)y;
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)recognizer;
- (_Bool)_tfn_shouldScrollScrollView:(id)view isSwipeUp:(_Bool)up;

@end

#endif /* TFNModalSheetLayoutModeCustomDraggableController_h */
