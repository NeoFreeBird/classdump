//
#ifndef _TtC29TwitterOnboardingFeatureSwiftP33_EA7842B41D3ECA9598AD5B8FDEF7646020OCFTrayRichTextBlock_h
#define _TtC29TwitterOnboardingFeatureSwiftP33_EA7842B41D3ECA9598AD5B8FDEF7646020OCFTrayRichTextBlock_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class UIView, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface TwitterOnboardingFeatureSwift.(OCFTrayRichTextBlock in _EA7842B41D3ECA9598AD5B8FDEF76460) : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 textView;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 onNavigationLink;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 hasText;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC29TwitterOnboardingFeatureSwiftP33_EA7842B41D3ECA9598AD5B8FDEF7646020OCFTrayRichTextBlock_h */
