//
#ifndef PTVGuestCancelView_h
#define PTVGuestCancelView_h
@import Foundation;

#include "PTVAddGuestCountdownButton.h"
#include "PTVGuestCallerSession.h"

@class NSLayoutConstraint, UIActivityIndicatorView, UILabel, UIView;

@interface PTVGuestCancelView : UIView

@property (retain, nonatomic) UIView *backgroundOverlayView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *cancelLabel;
@property (retain, nonatomic) NSLayoutConstraint *cancelLabelTrailingConstraint;
@property (retain, nonatomic) PTVAddGuestCountdownButton *countdownButton;
@property (retain, nonatomic) PTVGuestCallerSession *guestCallerSession;

/* class methods */
+ (id)TapToCancelFont;
+ (id)TapToCancelString;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didUpdateGuestCallerSession:(id)session;
- (void)executeStateAnimated:(_Bool)animated;
- (void)executeState;
- (void)executeDefaultState;

@end

#endif /* PTVGuestCancelView_h */
