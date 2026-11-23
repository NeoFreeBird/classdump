//
#ifndef T1ProfileVerificationPolicyErrorView_h
#define T1ProfileVerificationPolicyErrorView_h
@import Foundation;

#include "T1ProfileVerificationPolicyErrorViewDelegate-Protocol.h"

@class TFNAttributedTextView, UIView;

@interface T1ProfileVerificationPolicyErrorView : UIView

@property (retain, nonatomic) TFNAttributedTextView *errorTitleLabel;
@property (retain, nonatomic) TFNAttributedTextView *errorDescriptionLabel;
@property (retain, nonatomic) UIView *retryButton;
@property (weak, nonatomic) id <T1ProfileVerificationPolicyErrorViewDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_t1_didTapRetryButton:(id)button;

@end

#endif /* T1ProfileVerificationPolicyErrorView_h */
