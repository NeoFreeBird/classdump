//
#ifndef PTVBannerView_h
#define PTVBannerView_h
@import Foundation;

#include "PTVBannerPresentableContentView.h"
#include "PTVBannerPresentableContentViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, NSTimer, UIPanGestureRecognizer, UIView;

@interface PTVBannerView : UIView <UIGestureRecognizerDelegate, PTVBannerPresentableContentViewDelegate>

@property (retain, nonatomic) PTVBannerPresentableContentView *contentView;
@property (retain, nonatomic) UIView *addedFill;
@property (retain, nonatomic) UIPanGestureRecognizer *dismissPan;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (nonatomic) _Bool isShowing;
@property (nonatomic) _Bool pendingDismiss;
@property (nonatomic) _Bool interacting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentView:(id)view frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)layoutContentView:(float)view;
- (void)safeAreaInsetsDidChange;
- (void)containerFrameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (void)handlePan:(id)pan;
- (void)animateContentViewToOriginalPosition;
- (void)presentContentViewWithDismissCompletion:(id /* block */)completion;
- (void)presentationAnimationDidComplete:(_Bool)complete presentationDuration:(double)duration;
- (void)dismissContentViewWithDelay:(double)delay completion:(id /* block */)completion;
- (void)dismissAnimationDidComplete:(_Bool)complete completion:(id /* block */)completion;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)contentViewDidRequestDismiss:(id)dismiss;
- (id)accessibilityContents;

@end

#endif /* PTVBannerView_h */
