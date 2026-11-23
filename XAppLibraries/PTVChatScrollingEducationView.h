//
#ifndef PTVChatScrollingEducationView_h
#define PTVChatScrollingEducationView_h
@import Foundation;

#include "PTVSwipeIconImageView.h"

@class UIStackView;

@interface PTVChatScrollingEducationView : UIStackView

@property (retain, nonatomic) PTVSwipeIconImageView *swipeIcon;
@property (readonly, nonatomic) _Bool animating;

/* class methods */
+ (id)TitleFont;
+ (id)TitleColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)startAnimating;
- (void)stopAnimating;
- (void)showEducationAfterDelay:(double)delay;
- (void)fadeInAnimated:(_Bool)animated withDelay:(double)delay duration:(double)duration completion:(id /* block */)completion;
- (void)fadeOutAnimated:(_Bool)animated withDelay:(double)delay duration:(double)duration completion:(id /* block */)completion;

@end

#endif /* PTVChatScrollingEducationView_h */
