//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift36TFNBottomSheetPresentationController_h
#define _TtC10TFNUISwift36TFNBottomSheetPresentationController_h
@import Foundation;

@class Swift.Bool, TFNUISwift.TFNBottomSheetStyle, UIPresentationController, _$sSo6UIViewCSg;

@interface TFNUISwift.TFNBottomSheetPresentationController : UIPresentationController { // (Swift)
    /* instance variables */
    TFNUISwift.TFNBottomSheetStyle style;
    __C.UIView? $__lazy_storage_$_dimmingView;
    Swift.Bool dismissOnTap;
    Swift.Bool hasCompletedInitialPresentation;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;

/* instance methods */
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)end;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)end;
- (void)containerViewWillLayoutSubviews;
- (void)handleDimmingViewTap;
- (id)initWithPresentedViewController:(id)controller presentingViewController:(id)controller;

@end

#endif /* _TtC10TFNUISwift36TFNBottomSheetPresentationController_h */
