//
#ifndef T1SecurityTemporaryPasswordView_h
#define T1SecurityTemporaryPasswordView_h
@import Foundation;

#include "T1SecurityTemporaryPasswordViewDelegate-Protocol.h"

@class NSString, TFNButton, UILabel, UIScrollView, UIView;

@interface T1SecurityTemporaryPasswordView : UIScrollView

@property (retain, nonatomic) UILabel *primaryExplanationTextLabel;
@property (retain, nonatomic) UILabel *temporaryPasswordLabel;
@property (retain, nonatomic) UILabel *secondaryExplanationTextLabel;
@property (retain, nonatomic) TFNButton *generateTemporaryPasswordButton;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id <T1SecurityTemporaryPasswordViewDelegate> viewDelegate;
@property (copy, nonatomic) NSString *password;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_temporaryPasswordLabelTapped:(id)tapped;
- (void)_generateButtonTapped:(id)tapped;
- (id)_textLabelWithString:(id)string;

@end

#endif /* T1SecurityTemporaryPasswordView_h */
