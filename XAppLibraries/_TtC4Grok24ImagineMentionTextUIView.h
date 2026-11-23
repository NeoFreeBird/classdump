//
#ifndef _TtC4Grok24ImagineMentionTextUIView_h
#define _TtC4Grok24ImagineMentionTextUIView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class Grok.BottomGradientMaskView, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSo10UITextViewC, _$sSo7UIColorC, _$sySScSg, _$sySbcSg, _$sySo11UITextRangeCSgcSg;

@interface Grok.ImagineMentionTextUIView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onTextChange;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onFitHeightChange;
    ((__C.UITextRange?) -> ())? onSelectionChange;
    ((Swift.Bool) -> ())? onFocusChange;
    nominal type descriptor for CoreGraphics.CGFloat maxHeight;
    __C.UIColor mentionColor;
    Swift.Bool smoothTruncation;
    __C.UITextView textView;
    nominal type descriptor for CoreGraphics.CGFloat previousHeight;
    Grok.BottomGradientMaskView gradientMaskView;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (void)textViewDidEndEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC4Grok24ImagineMentionTextUIView_h */
