//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModalSheetPresentationController_h
#define PTVModalSheetPresentationController_h
@import Foundation;

@class UIPanGestureRecognizer, UIPresentationController, UITapGestureRecognizer, UIView;

@interface PTVModalSheetPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double currentHeight;
@property (nonatomic) double preferredWidth;
@property (nonatomic) double animationDuration;
@property (nonatomic) double safeArea;
@property (readonly, nonatomic) _Bool shouldBeFullHeight;
@property (nonatomic) _Bool wasFullHeightInPortrait;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) long long presentationState;
@property (nonatomic) _Bool isSheetExpandable;
@property (nonatomic) _Bool isSheetDismissableWithGesture;

/* instance methods */
- (id)initWithPresentedViewController:(id)controller presentingViewController:(id)controller;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)end;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)end;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)traitCollectionDidChange:(id)change;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (double)calculatePreferredHeightForSize:(struct CGSize { double x0; double x1; })size;
- (void)setPreferredHeight:(double)height animated:(_Bool)animated;
- (void)setCurrentHeight:(double)height animated:(_Bool)animated shouldLayoutSubviews:(_Bool)subviews completion:(id /* block */)completion;
- (void)didTapDimmingView:(id)view;
- (void)panGestureAction:(id)action;
- (double)maximumVisibleHeightForSize:(struct CGSize { double x0; double x1; })size;
- (double)defaultPreferredHeightForSize:(struct CGSize { double x0; double x1; })size;
- (double)snapHeightForCurrentHeight:(double)height velocityY:(double)y;

@end

#endif /* PTVModalSheetPresentationController_h */
