//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor26PhotoEditorMorphTransition_h
#define _TtC12XPhotoEditor26PhotoEditorMorphTransition_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIViewControllerAnimatedTransitioning-Protocol.h"
#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, Swift.Bool, XPhotoEditor.MediaEditorZoomTransitionDestination _$s_So16UIViewControllerCXcSgXw, XPhotoEditor.MorphMaskAnimator, XPhotoEditor.PhotoEditorMorphTransition.DragSession ?, XPhotoEditor.PhotoEditorMorphTransition.PresentationPhase, XPhotoEditor.PhotoEditorMorphTransition.RevealGate ?, _$sSo22UIPanGestureRecognizerCSg, _$sSo22UIViewPropertyAnimatorCSg, _$sSo32XPhotoEditorZoomTransitionSource_p;

@interface XPhotoEditor.PhotoEditorMorphTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate> { // (Swift)
    /* instance variables */
    __C.XPhotoEditorZoomTransitionSource source;
    XPhotoEditor.MediaEditorZoomTransitionDestination _$s_So16UIViewControllerCXcSgXw editor;
    Swift.Bool dismissing;
    Swift.Bool didInteractivelyDismiss;
    Swift.Bool isSourceHidden;
    XPhotoEditor.PhotoEditorMorphTransition.PresentationPhase presentationPhase;
    XPhotoEditor.PhotoEditorMorphTransition.RevealGate ? revealGate;
    XPhotoEditor.MorphMaskAnimator maskAnimator;
    __C.UIPanGestureRecognizer? dismissPan;
    XPhotoEditor.PhotoEditorMorphTransition.DragSession ? drag;
    __C.UIViewPropertyAnimator? interactiveAnimator;
}

/* instance methods */
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (void)handleDismissPan:(id)pan;
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC12XPhotoEditor26PhotoEditorMorphTransition_h */
