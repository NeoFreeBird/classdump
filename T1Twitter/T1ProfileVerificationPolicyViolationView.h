//
#ifndef T1ProfileVerificationPolicyViolationView_h
#define T1ProfileVerificationPolicyViolationView_h
@import Foundation;

@class TFNAttributedTextView, TFNTappableHighlightView, UIView;

@interface T1ProfileVerificationPolicyViolationView : TFNTappableHighlightView

@property (retain, nonatomic) UIView *violationImageView;
@property (retain, nonatomic) UIView *violationTitleLabel;
@property (retain, nonatomic) TFNAttributedTextView *violationDescriptionView;

/* instance methods */
- (id)initWithViolation:(id)violation urlString:(id)string;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* T1ProfileVerificationPolicyViolationView_h */
