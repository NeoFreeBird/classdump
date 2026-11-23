//
#ifndef PTVInteractiveModalPresentationController_h
#define PTVInteractiveModalPresentationController_h
@import Foundation;

@class UIPresentationController, UIView;

@interface PTVInteractiveModalPresentationController : UIPresentationController {
    /* instance variables */
    UIView *_dimmingView;
}

/* instance methods */
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (id)interactiveModal;
- (id)dimmingView;
- (void)didTapDimmingView:(id)view;
- (_Bool)shouldTapToDismiss;
- (void)tapToDismiss;

@end

#endif /* PTVInteractiveModalPresentationController_h */
