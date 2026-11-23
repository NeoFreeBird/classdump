//
#ifndef T1StandardStatusPromoteButtonView_h
#define T1StandardStatusPromoteButtonView_h
@import Foundation;

#include "T1StandardStatusPromoteButtonViewDelegate-Protocol.h"

@class TFNButton, UIView;

@interface T1StandardStatusPromoteButtonView : UIView

@property (retain, nonatomic) TFNButton *promoteButton;
@property (weak, nonatomic) id <T1StandardStatusPromoteButtonViewDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeForPromoteButtonWithTitle:(id)title;

/* instance methods */
- (id)initWithPromoteButtonStyle:(long long)style;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (void)didTapPromoteButton:(id)button;
- (void)setPromoteButtonTitle:(id)title;

@end

#endif /* T1StandardStatusPromoteButtonView_h */
