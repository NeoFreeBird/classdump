//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SecurityTOTPCodeGeneratorView_h
#define T1SecurityTOTPCodeGeneratorView_h
@import Foundation;

#include "T1SecuritySpinnerProgressBarView.h"
#include "T1SecurityTOTPCodeGeneratorViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class NSString, TFNAttributedTextView, UILabel, UIScrollView, UIStackView, UIView;

@interface T1SecurityTOTPCodeGeneratorView : UIScrollView <TFNAttributedTextViewDelegate>

@property (retain, nonatomic) UILabel *primaryExplanationTextLabel;
@property (retain, nonatomic) UILabel *secondaryExplanationTextLabel;
@property (retain, nonatomic) TFNAttributedTextView *thirdPartyAuthenticatorHintTextLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIStackView *totpContainer;
@property (weak, nonatomic) id <T1SecurityTOTPCodeGeneratorViewDelegate> viewDelegate;
@property (readonly, nonatomic) UILabel *totpCodeLabel;
@property (readonly, nonatomic) T1SecuritySpinnerProgressBarView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_t1_buildPrimaryExplanationTextLabel;
- (id)_t1_buildSecondaryExplanationTextLabel;
- (id)_t1_buildThirdPartyAuthenticatorHintTextLable;
- (id)_t1_buildTotpCodeLabel;
- (id)_t1_buildSpinner;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1SecurityTOTPCodeGeneratorView_h */
