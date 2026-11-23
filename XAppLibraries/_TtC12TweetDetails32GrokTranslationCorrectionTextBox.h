//
#ifndef _TtC12TweetDetails32GrokTranslationCorrectionTextBox_h
#define _TtC12TweetDetails32GrokTranslationCorrectionTextBox_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class NSString, UIView, _$sSS, _$sSi, _$sSo10UITextViewC, _$sSo7UILabelC, _$sySScSg;

@interface TweetDetails.GrokTranslationCorrectionTextBox : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    Swift.String placeholder;
    ((Swift.String) -> ())? onTextChanged;
    Swift.Int maximumLength;
    __C.UITextView textView;
    __C.UILabel placeholderLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _Bool isFirstResponder;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;

/* instance methods */
- (void)textViewDidChange:(id)change;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12TweetDetails32GrokTranslationCorrectionTextBox_h */
