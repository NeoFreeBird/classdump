//
#ifndef _TtC10ShareSheet21ShareTrayComposerView_h
#define _TtC10ShareSheet21ShareTrayComposerView_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem4BlurCMn, _$s13XDesignSystem6ButtonCMn, _$sSo10UITextViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$sySScSg, _$syycSg;

@interface ShareSheet.ShareTrayComposerView : UIView <UITextViewDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? didTapSend;
    ((Swift.String) -> ())? didChangeText;
    Swift.Bool hasOpaqueBackground;
    __C.UIView inputPillView;
    nominal type descriptor for XDesignSystem.Blur inputBlurView;
    __C.UITextView textView;
    __C.UILabel placeholderLabel;
    nominal type descriptor for XDesignSystem.Button sendButton;
    __C.NSLayoutConstraint? topConstraint;
    __C.NSLayoutConstraint? sendButtonGapConstraint;
    __C.NSLayoutConstraint? bottomConstraint;
    __C.NSLayoutConstraint? textViewHeightConstraint;
    nominal type descriptor for CoreGraphics.CGFloat lastTextLayoutWidth;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)handlePillTap;
- (void)handleSendTap;

@end

#endif /* _TtC10ShareSheet21ShareTrayComposerView_h */
